/**
 * The MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @copyright  2009-2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */
#include <pelet/ParserTypeClass.h>
#include <wx/tokenzr.h>
#include <algorithm>

wxString pelet::ReturnTypeFromPhpDocComment(const wxString& phpDocComment, bool varAnnotation, 
												 const pelet::ScopeClass& scope, 
												 const pelet::QualifiedNameClass& currentNamespace) {
	wxString returnType;
	wxStringTokenizer tokenizer(phpDocComment, wxT(" \t\r\n"));
	wxString annotation = varAnnotation ? wxT("@var") : wxT("@return");
	while (tokenizer.HasMoreTokens()) {
		wxString next = tokenizer.GetNextToken();
		next.MakeLower();
		if (next.compare(annotation) == 0) {
			returnType = tokenizer.GetNextToken();
			break;
		}
	}
	return PhpDocTypeToAbsoluteClassname(returnType, scope, currentNamespace);
}

wxString pelet::PhpDocTypeToAbsoluteClassname(wxString phpDocType, 
												   const pelet::ScopeClass& scope, 
												   const pelet::QualifiedNameClass& currentNamespace) {

	// any of the "basic" types will never use the current namespace
	// these were taken from http://www.phpdoc.org/docs/latest/for-users/types.html
	wxString lowerPhpDocType(phpDocType);
	lowerPhpDocType.MakeLower();
	if (lowerPhpDocType.compare(wxT("string")) == 0 ||
	        lowerPhpDocType.compare(wxT("integer")) == 0 ||
	        lowerPhpDocType.compare(wxT("int")) == 0 ||
	        lowerPhpDocType.compare(wxT("boolean")) == 0 ||
	        lowerPhpDocType.compare(wxT("bool")) == 0 ||
	        lowerPhpDocType.compare(wxT("float")) == 0 ||
	        lowerPhpDocType.compare(wxT("double")) == 0 ||
	        lowerPhpDocType.compare(wxT("object")) == 0 ||
	        lowerPhpDocType.compare(wxT("mixed")) == 0 ||
	        lowerPhpDocType.compare(wxT("array")) == 0 ||
	        lowerPhpDocType.compare(wxT("resource")) == 0 ||
	        lowerPhpDocType.compare(wxT("void")) == 0 ||
	        lowerPhpDocType.compare(wxT("null")) == 0 ||
	        lowerPhpDocType.compare(wxT("callback")) == 0 ||
	        lowerPhpDocType.compare(wxT("false")) == 0 ||
	        lowerPhpDocType.compare(wxT("true")) == 0 ||
	        lowerPhpDocType.compare(wxT("self")) == 0) {
		return phpDocType;
	}
	if (!phpDocType.empty()) {
		pelet::QualifiedNameClass name;
		pelet::SemanticValueClass value;
		value.Lexeme = phpDocType;
		name.AppendName(&value);
		return scope.FullyQualify(name, currentNamespace);
	}
	return phpDocType;
}

void pelet::FillNameOrType(const wxString& text, wxString& varName, wxString& varType) {
	if (!text.empty() && wxT('$') == text[0]) {
		varName.replace(0, varName.length(), text);
	} else if (!text.empty()) {
		varType.replace(0, varType.length(), text);
	}
}

static wxString PropertyFromPhpDoc(const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace,
		wxStringTokenizer& tokenizer, pelet::ClassMemberSymbolClass* member) {

	// example line: 
	//
	// @property string $nameString a string version of a name
	//
	// the 
	// will be lenient and allow the reverse var then type
	// @property $nameString string
	
	wxString next = tokenizer.GetNextToken();
	if (next.empty()) {
		return next;
	}
	pelet::SemanticValueClass nameValue;
	pelet::FillNameOrType(next, nameValue.Lexeme, nameValue.Comment);
	next = tokenizer.GetNextToken();
	if (next.empty()) {
		return next;
	}
	pelet::FillNameOrType(next, nameValue.Lexeme, nameValue.Comment);
	
	// handles namespaces in the magic properties
	nameValue.Comment = pelet::PhpDocTypeToAbsoluteClassname(nameValue.Comment, scope, declaredNamespace);
	nameValue.Comment = wxT("/** @var ") + nameValue.Comment + wxT(" */");
	bool isConstant = false;
	int endingPosition = 0;
	member->MakeVariable(&nameValue, &nameValue, isConstant, endingPosition, scope, declaredNamespace);
	return next;
}

static wxString ParametersFromSignature(const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace,
		wxStringTokenizer& tokenizer, pelet::ParametersListClass& parameters) {
	
	// example line: getAge(int $int1, int $int2) returns the person's age
	wxString next = tokenizer.GetNextToken(); // method name, could bring along the first param if there are no spaces
	
	// keep reading next tokens for the signature; stop when we encounter a closing parenthesis
	wxString paramsString;
	bool inParams = false;
	do {
		if (next.EndsWith(wxT(")"))) {
			paramsString.append(wxT(" "));
			paramsString.append(next.substr(0, next.length() - 1));
			break;
		}
		size_t pos = next.find(wxT("("));
		if (pos != std::string::npos && next.length() > 1) {
			paramsString.append(next.substr(pos + 1));
			inParams = true;
		}
		else if (pos == std::string::npos && inParams) {
			paramsString.append(wxT(" "));
			paramsString.append(next);
		}
		next = tokenizer.GetNextToken();
	} while (!next.empty());
	
	// paramsString contains the parameters, parse those out
	// need to split by commas
	wxStringTokenizer paramsTokenizer(paramsString, wxT(", "), wxTOKEN_STRTOK);
	pelet::SemanticValueClass parameterName;
	pelet::QualifiedNameClass parameterType;
	while (paramsTokenizer.HasMoreTokens()) {
		wxString paramsNext = paramsTokenizer.GetNextToken();
		if (paramsNext.StartsWith(wxT("$"))) {
			
			// parameter name
			parameterName.Lexeme = paramsNext;
			bool isReference = false;
			parameters.Append(&parameterType, &parameterName, isReference, scope, declaredNamespace);
			parameterName.Lexeme.clear();
			parameterType.Clear();
		}
		else {
			parameterType.Init(paramsNext);
		}
	}
	return next;
}


static wxString MethodFromPhpDoc(const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace,
							wxStringTokenizer& tokenizer, pelet::ClassMemberSymbolClass* memberMethod) {
	pelet::SemanticValueClass nameValue;
	pelet::SemanticValueClass commentValue;
	pelet::ParametersListClass parameters;
	pelet::ClassMemberSymbolClass modifiers;
	modifiers.SetAsPublic();
	pelet::ClassMemberSymbolClass methodBody;
	methodBody.EndingPosition = 0;

	
	// example line:  @method Integer getAge() getAge(int $int1, int $int2) returns the person's age
	wxString next = tokenizer.GetNextToken(); // method return type
	if (next.empty()) {
		return next;
	}
	commentValue.Comment = next;
	
	// handles namespaces in the magic properties
	commentValue.Comment = pelet::PhpDocTypeToAbsoluteClassname(commentValue.Comment, scope, declaredNamespace);
	commentValue.Comment = wxT("/** @return ") + commentValue.Comment + wxT(" */");
	
	next = tokenizer.GetNextToken(); // method name, could have parenthesis
	if (next.empty()) {
		return next;
	}
	nameValue.Lexeme = next;
	if (nameValue.Lexeme.EndsWith(wxT("()"))) {
		nameValue.Lexeme = nameValue.Lexeme.substr(0, nameValue.Lexeme.length() - 2);
	}
	
	next = ParametersFromSignature(scope, declaredNamespace, tokenizer, parameters);
	bool isReference = false;
	memberMethod->MakeMethod(&nameValue, &modifiers, isReference, &commentValue, &parameters, &methodBody, scope, declaredNamespace);
	return next;
}


void pelet::CreateMagicMethodsAndProperties(std::vector<pelet::AstItemClass*>& allAstItems,
										    pelet::StatementListClass* statements, 
											const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace,
											const wxString& phpDocComment, const int lineNumber) {
	if (phpDocComment.empty()) {
		return;
	}
	wxStringTokenizer tokenizer(phpDocComment, wxT(" \t\n\v\f"));
	while (tokenizer.HasMoreTokens()) {
		wxString next = tokenizer.GetNextToken();
		next.MakeLower();
		if (next.compare(wxT("@property")) == 0 ||
		        next.compare(wxT("@property-read")) == 0 ||
		        next.compare(wxT("@property-write")) == 0) {

			pelet::ClassMemberSymbolClass* propertyMember = new pelet::ClassMemberSymbolClass;
			next = PropertyFromPhpDoc(scope, currentNamespace, tokenizer, propertyMember);
			allAstItems.push_back(propertyMember);
			statements->Push(propertyMember);
		} else if (next.compare(wxT("@method")) == 0) {

			// example line:  @method Integer getAge() getAge(int $int1, int $int2) returns the person's age
			pelet::ClassMemberSymbolClass* methodMember = new pelet::ClassMemberSymbolClass;
			next = MethodFromPhpDoc(scope, currentNamespace, tokenizer, methodMember);
			allAstItems.push_back(methodMember);
			statements->Push(methodMember);
		}
	}
}

pelet::StatementClass::StatementClass(pelet::StatementClass::Types type)
	: AstItemClass()
	, Type(type) {

}

pelet::StatementClass::~StatementClass() {

}

pelet::AstItemClass::AstItemClass() {

}

pelet::AstItemClass::~AstItemClass() {

}

pelet::ConstantStatementClass::ConstantStatementClass()
	: StatementClass(pelet::StatementClass::DEFINE_DECLARATION)
	, Name()
	, NamespaceName()
	, Comment()
	, Value()
	, LineNumber(0) {

}

void pelet::ConstantStatementClass::Init(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* params, int lineNumber) {
	if (functionName) {
		Comment = functionName->Comment;
	}

	// right now will only scalars are captured; so we may have only 1 param
	if (params && params->Size() >= 1 && params->TypeAt(0) == pelet::StatementClass::SCALAR) {
		Name = ((pelet::ScalarStatementClass*)params->At(0))->Scalar;
	}
	if (params && params->Size() >= 2 && params->TypeAt(1) == pelet::StatementClass::SCALAR) {
		Value = ((pelet::ScalarStatementClass*)params->At(1))->Scalar;
	}
	LineNumber = lineNumber;
	NamespaceName = wxT("\\");
}

void pelet::ConstantStatementClass::Init(pelet::SemanticValueClass* value, int lineNumber, const pelet::QualifiedNameClass& currentNamespace) {
	if (value) {
		Name = value->Lexeme;
		Comment = value->Comment;
	}
	LineNumber = lineNumber;
	NamespaceName = currentNamespace.ToSignature();
}

pelet::StatementListClass::StatementListClass()
	: Statements() {

}

void pelet::StatementListClass::Init(pelet::StatementClass* statement) {
	Push(statement);
}

void pelet::StatementListClass::Init(pelet::StatementListClass* statementList) {
	PushAll(statementList);
}

size_t pelet::StatementListClass::Size() const {
	return Statements.size();
}

pelet::StatementClass::Types pelet::StatementListClass::TypeAt(size_t index) const {
	if (index < Statements.size() && Statements[index] != NULL) {
		return Statements[index]->Type;
	}
	return pelet::StatementClass::NIL;
}

pelet::StatementClass* pelet::StatementListClass::At(size_t index) const {
	if (index < Statements.size()) {
		return Statements[index];
	}
	return NULL;
}

pelet::StatementListClass* pelet::StatementListClass::Push(pelet::StatementClass* statement) {
	if (statement) {
		Statements.push_back(statement);
	}
	return this;
}

pelet::StatementListClass* pelet::StatementListClass::PushAll(pelet::StatementListClass* statements) {
	if (statements) {
		for (size_t i = 0; i < statements->Statements.size(); ++i) {
			Statements.push_back(statements->Statements[i]);
		}
	}
	return this;
}

pelet::StatementListClass* pelet::StatementListClass::PushFront(pelet::StatementClass* stmt) {
	if (stmt) {
		Statements.insert(Statements.begin(), stmt);
	}
	return this;
}

void pelet::StatementListClass::Clear() {
	Statements.clear();
}

pelet::NamespaceDeclarationClass::NamespaceDeclarationClass()
	: StatementClass(pelet::StatementClass::NAMESPACE_DECLARATION)
	, NamespaceName() 
	, StartingPosition(0) {
}

void pelet::NamespaceDeclarationClass::Init(pelet::QualifiedNameClass* namespaceName, const pelet::TokenPositionClass& startingPosition) {
	
	// declared namespace is always fully qualified according to PHP rules
	namespaceName->MakeAbsolute();
	NamespaceName = namespaceName->ToSignature();
	StartingPosition = startingPosition.Pos;
}

void pelet::NamespaceDeclarationClass::Init(const pelet::TokenPositionClass& startingPosition) {
	NamespaceName = wxT("\\");
	StartingPosition = startingPosition.Pos;
}

pelet::NamespaceUseClass::NamespaceUseClass()
	: StatementClass(pelet::StatementClass::NAMESPACE_USE)
	, NamespaceName()
	, Alias()
	, StartingPos(0) {

}

void pelet::NamespaceUseClass::Init(pelet::QualifiedNameClass* qualifiedName, pelet::SemanticValueClass* aliasValue) {
	qualifiedName->MakeAbsolute();
	wxString alias;
	if (aliasValue) {
		alias = aliasValue->Lexeme;
	}
	Set(qualifiedName, alias);
}

wxString pelet::NamespaceUseClass::Set(pelet::QualifiedNameClass* qualifiedName, wxString alias) {
	wxString fullyQualifiedNamespace = qualifiedName->ToSignature();
	if (alias.empty()) {
		size_t index = fullyQualifiedNamespace.rfind(wxT("\\"));

		//by default alias is the last part of the namespace name
		if (index != std::string::npos) {
			alias = fullyQualifiedNamespace.substr(index + 1);
		}
	}
	NamespaceName = fullyQualifiedNamespace;
	Alias = alias;
	return Alias;
}

pelet::StatementListClass* pelet::NamespaceUseClass::SetStartingPos(pelet::StatementListClass* namespaceStatements, const pelet::TokenPositionClass& useToken) {
	for (size_t i = 0; i < namespaceStatements->Size(); ++i) {
		pelet::StatementClass::Types type = namespaceStatements->TypeAt(i);
		if (pelet::StatementClass::NAMESPACE_USE == type) {
			pelet::NamespaceUseClass* useStmt = (pelet::NamespaceUseClass*) namespaceStatements->At(i);
			useStmt->StartingPos = useToken.Pos;
		}
	}
	return namespaceStatements;
}


pelet::TraitUseClass::TraitUseClass()
	: StatementClass(pelet::StatementClass::TRAIT_USE_DECLARATION)
	, NamespaceName()
	, ClassName()
	, UsedTraits() {
}

void pelet::TraitUseClass::Init(pelet::QualifiedNameClass* usedTrait,
								const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	if (usedTrait) {
		UsedTraits.push_back(scope.FullyQualify(*usedTrait, currentNamespace));
	}
	NamespaceName = currentNamespace.ToSignature();
	ClassName = scope.ClassName;
}

pelet::TraitUseClass* pelet::TraitUseClass::AppendUse(pelet::QualifiedNameClass* usedTrait,
									 const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	if (usedTrait) {
		UsedTraits.push_back(scope.FullyQualify(*usedTrait, currentNamespace));
	}
	return this;
}

pelet::TraitInsteadOfClass::TraitInsteadOfClass()
	: StatementClass(pelet::StatementClass::TRAIT_INSTEADOF_DECLARATION)
	, NamespaceName()
	, ClassName()
	, TraitUsedClassName()
	, TraitMethodReferenceName()
	, InsteadOfList() {
		
}

void pelet::TraitInsteadOfClass::Init(pelet::QualifiedNameClass* insteadOfClass, 
		  const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	AppendInsteadOf(insteadOfClass, scope, currentNamespace);
	ClassName = scope.ClassName;
	NamespaceName = currentNamespace.ToSignature();
}

pelet::TraitInsteadOfClass* pelet::TraitInsteadOfClass::AppendInsteadOf(pelet::QualifiedNameClass *insteadOfClass, 
																		const pelet::ScopeClass& scope, 
																		const pelet::QualifiedNameClass& currentNamespace) {
	if (insteadOfClass) {
		InsteadOfList.push_back(scope.FullyQualify(*insteadOfClass, currentNamespace));
	}
	return this;
}

pelet::TraitInsteadOfClass* pelet::TraitInsteadOfClass::SetMethodReference(pelet::TraitAliasClass* traitAlias) {
	if (traitAlias) {
		TraitUsedClassName = traitAlias->TraitUsedClassName;
		TraitMethodReferenceName = traitAlias->TraitMethodReferenceName;
	}
	return this;
}

pelet::TraitAliasClass::TraitAliasClass()
	: StatementClass(pelet::StatementClass::TRAIT_ALIAS_DECLARATION)
	, NamespaceName()
	, ClassName()
	, TraitUsedClassName()
	, TraitMethodReferenceName()
	, Alias()
	, Visibility(pelet::TokenClass::PUBLIC) {
}

void pelet::TraitAliasClass::SetMethodReference(pelet::SemanticValueClass* methodName,
												pelet::QualifiedNameClass* className,
												const pelet::ScopeClass& scope, 
												const pelet::QualifiedNameClass& currentNamespace) {
	if (methodName) {
		TraitMethodReferenceName = methodName->Lexeme;
	}
	if (className) {
		TraitUsedClassName = scope.FullyQualify(*className,  currentNamespace);
	}
}

pelet::TraitAliasClass* pelet::TraitAliasClass::SetModifiers(pelet::SemanticValueClass* modifier) {
	if (modifier && pelet::T_PUBLIC == modifier->Token) {
		Visibility = pelet::TokenClass::PUBLIC;
	}
	else if (modifier && pelet::T_PROTECTED == modifier->Token) {
		Visibility = pelet::TokenClass::PROTECTED;
	}
	else if (modifier && pelet::T_PRIVATE == modifier->Token) {
		Visibility = pelet::TokenClass::PRIVATE;
	}
	return this;
}

pelet::TraitAliasClass* pelet::TraitAliasClass::SetAlias(pelet::SemanticValueClass* aliasLexeme) {
	if (aliasLexeme) {
		Alias = aliasLexeme->Lexeme;
	}
	return this;
}

pelet::TraitAliasClass* pelet::TraitAliasClass::SetScope(const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	ClassName = scope.ClassName;
	NamespaceName = currentNamespace.ToSignature();
	return this;
}

pelet::ClassSymbolClass::ClassSymbolClass()
	: StatementClass(pelet::StatementClass::CLASS_DECLARATION)
	, ClassName()
	, NamespaceName()
	, Comment()
	, ExtendsFrom()
	, ImplementsList()
	, StartingLineNumber(0)
	, EndingLineNumber(0)
	, IsAbstract(false)
	, IsFinal(false)
	, IsInterface(false) {

}

void pelet::ClassSymbolClass::GrabClassName(pelet::SemanticValueClass* value) {
	ClassName = value->Lexeme;
}

void pelet::ClassSymbolClass::AppendToComment(pelet::SemanticValueClass* value) {
	Comment.append(value->Comment);
}

void pelet::ClassSymbolClass::Clear() {
	ClassName.clear();
	NamespaceName.clear();
	Comment.clear();
	ExtendsFrom.clear();
	ImplementsList.clear();
	StartingLineNumber = 0;
	EndingLineNumber = 0;
	IsAbstract = false;
	IsFinal = false;
	IsInterface = false;
}

wxString pelet::ClassSymbolClass::ToSignature() const {
	wxString sig;
	if (!IsInterface && !IsAbstract) {
		sig.append(wxT("class "));
	} else if (!IsInterface && IsAbstract) {
		sig.append(wxT("abstract class "));
	} else {
		sig.append(wxT("interface "));
	}

	sig.append(ClassName);
	wxString extends = ExtendsFrom;
	if (!extends.empty()) {
		sig.append(wxT(" extends "));
		sig.append(extends);
	}
	if (!ImplementsList.empty()) {
		if (IsInterface) {
			sig.append(wxT(" extends "));
		} else {
			sig.append(wxT(" implements "));
		}
		for (size_t i = 0; i < ImplementsList.size(); ++i) {
			sig.append(ImplementsList[i]);
			if (i < (ImplementsList.size() - 1)) {
				sig.append(wxT(", "));
			}
		}
	}
	return sig;
}

pelet::ClassSymbolClass* pelet::ClassSymbolClass::AddToImplements(pelet::QualifiedNameClass* implementsClassName, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	ImplementsList.push_back(scope.FullyQualify(*implementsClassName, currentNamespace));
	return this;
}

pelet::ClassSymbolClass* pelet::ClassSymbolClass::SetExtends(pelet::QualifiedNameClass* extendsClassName, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	ExtendsFrom = scope.FullyQualify(*extendsClassName, currentNamespace);
	return this;
}

pelet::ClassSymbolClass* pelet::ClassSymbolClass::SetAll(pelet::SemanticValueClass* nameValue, 
														   pelet::ClassSymbolClass* classTypeSymbol, 
														   pelet::ClassSymbolClass* extendsSymbol, 
														   pelet::ClassSymbolClass* implementsSymbol, 
														   const pelet::TokenPositionClass& endToken,
														   const pelet::QualifiedNameClass& currentNamespace) {
	if (nameValue) {
		GrabClassName(nameValue);
		StartingLineNumber = nameValue->LineNumber;
	}
	NamespaceName = currentNamespace.ToSignature();
	if (NamespaceName.empty()) {
		NamespaceName = wxT("\\");
	}
	if (classTypeSymbol) {
		Comment = classTypeSymbol->Comment;
		IsAbstract = classTypeSymbol->IsAbstract;
		IsFinal = classTypeSymbol->IsFinal;
		IsInterface = classTypeSymbol->IsInterface;
		IsTrait = classTypeSymbol->IsTrait;
	}
	if (extendsSymbol) {
		ExtendsFrom = extendsSymbol->ExtendsFrom;
	}
	if (implementsSymbol) {
		ImplementsList = implementsSymbol->ImplementsList;
	}	
	EndingLineNumber = endToken.LineNumber;
	return this;
}

pelet::ClassSymbolClass* pelet::ClassSymbolClass::SetFlags(pelet::SemanticValueClass* commentValue, 
																   bool isAbstract, bool isFinal, bool isInterface, bool isTrait) {
	if (commentValue) {
		AppendToComment(commentValue);
	}
	IsAbstract = isAbstract;
	IsFinal = isFinal;
	IsInterface = isInterface;
	IsTrait = isTrait;
	return this;
}

pelet::ClassMemberSymbolClass::ClassMemberSymbolClass()
	: StatementClass(pelet::StatementClass::METHOD_DECLARATION)
	, MemberName()
	, NamespaceName()
	, ClassName()
	, ParametersList()
	, MethodStatements()
	, Comment()
	, ReturnType()
	, StartingLineNumber(0)
	, EndingPosition(0)

	// PHP default access mode is TRUE
	, IsPublicMember(true)
	, IsProtectedMember(false)
	, IsPrivateMember(false)
	, IsStaticMember(false)
	, IsConstMember(false)
	, IsAbstractMember(false)
	, IsFinalMember(false)
	, IsReturnReference(false) {

}

void pelet::ClassMemberSymbolClass::SetNameAndReturnReference(pelet::SemanticValueClass* nameValue, bool isReturnReference, 
		pelet::SemanticValueClass* functionValue, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	MemberName = nameValue->Lexeme;
	IsReturnReference = isReturnReference;

	// a comment may be attached to the function keyword.
	// see NextSemanticValue() function
	AppendToComment(functionValue, scope, declaredNamespace);
}

void pelet::ClassMemberSymbolClass::SetAsConst(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	IsPublicMember = true;
	IsProtectedMember = false;
	IsPrivateMember = false;
	IsStaticMember = true;
	IsConstMember = true;
	IsAbstractMember = false;
	IsFinalMember = false;
	IsReturnReference = false;
	MemberName = nameValue->Lexeme;

	// a comment may be attached to the const keyword.
	// see NextSemanticValue() function
	AppendToComment(commentValue, scope, declaredNamespace);
}

void pelet::ClassMemberSymbolClass::AppendToComment(SemanticValueClass* value, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	Comment.append(value->Comment);
	if (ReturnType.empty()) {
		ReturnType = ReturnTypeFromPhpDocComment(Comment, false, scope, declaredNamespace);
	}
	if (ReturnType.empty()) {
		ReturnType = ReturnTypeFromPhpDocComment(Comment, true, scope, declaredNamespace);
	}
}

void pelet::ClassMemberSymbolClass::SetAsPublic() {
	IsPublicMember = true;
	IsProtectedMember = false;
	IsPrivateMember = false;
}

void pelet::ClassMemberSymbolClass::SetAsProtected() {
	IsPublicMember = false;
	IsProtectedMember = true;
	IsPrivateMember = false;
}
void pelet::ClassMemberSymbolClass::SetAsPrivate() {
	IsPublicMember = false;
	IsProtectedMember = false;
	IsPrivateMember = true;
}

void pelet::ClassMemberSymbolClass::Clear() {
	MemberName.clear();
	Comment.clear();
	NamespaceName.clear();
	ClassName.clear();
	ParametersList.Clear();
	MethodStatements.Clear();
	ReturnType.clear();
	StartingLineNumber = 0;
	EndingPosition = 0;

	// PHP default access mode is TRUE
	IsPublicMember = true;
	IsProtectedMember = false;
	IsPrivateMember = false;
	IsStaticMember = false;
	IsConstMember = false;
	IsAbstractMember = false;
	IsFinalMember = false;
	IsReturnReference = false;
}

wxString pelet::ClassMemberSymbolClass::ToMethodSignature(wxString variablesSignature) const {
	wxString sig;

	// methods cannot be const
	if (IsPublicMember) {
		sig.append(wxT("public "));
	}
	if (IsProtectedMember) {
		sig.append(wxT("protected "));
	}
	if (IsPrivateMember) {
		sig.append(wxT("private "));
	}
	if (IsStaticMember) {
		sig.append(wxT("static "));
	}
	if (IsAbstractMember) {
		sig.append(wxT("abstract "));
	}
	if (IsFinalMember) {
		sig.append(wxT("final "));
	}
	if (IsReturnReference) {
		sig.append(wxT("function& "));
	} else {
		sig.append(wxT("function "));
	}
	sig.append(MemberName);
	sig.append(variablesSignature);
	return sig;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeBody(pelet::StatementListClass* bodyStatements, 
	const pelet::TokenPositionClass& startingPositionTokenValue, const pelet::TokenPositionClass& endingPositionTokenValue) {
	if (bodyStatements) {
		MethodStatements = *bodyStatements;
	}
	StartingPosition = startingPositionTokenValue.Pos;
	EndingPosition = endingPositionTokenValue.Pos;
	return this;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::Make(pelet::SemanticValueClass* varValue, 
				const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	Type = pelet::StatementClass::METHOD_DECLARATION;
	if (varValue) {
		AppendToComment(varValue, scope, declaredNamespace);
		StartingLineNumber = varValue->LineNumber;
		IsAbstractMember = varValue && pelet::T_ABSTRACT == varValue->Token;
		IsFinalMember = varValue && pelet::T_FINAL == varValue->Token;
		IsConstMember = varValue && pelet::T_CONST == varValue->Token;
		IsStaticMember = varValue && pelet::T_STATIC == varValue->Token;
		if (pelet::T_PUBLIC == varValue->Token) {
			SetAsPublic();
		} 
		else if (pelet::T_PROTECTED == varValue->Token) {
			SetAsProtected();
		} 
		else if (pelet::T_PRIVATE == varValue->Token) {
			SetAsPrivate();
		}
	}
	return this;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeAsPublicVariable(pelet::SemanticValueClass* varValue,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	Type = pelet::StatementClass::PROPERTY_DECLARATION;
	SetNameAndReturnReference(varValue, false, varValue, scope, declaredNamespace);
	SetAsPublic();
	if (varValue) {
		StartingLineNumber = varValue->LineNumber;
	}
	return this;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeFunction(pelet::SemanticValueClass* nameValue, bool isReference,
        pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters, 
		const pelet::TokenPositionClass& startingBodyTokenValue, const pelet::TokenPositionClass& endingBodyTokenValue,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	Type = pelet::StatementClass::FUNCTION_DECLARATION;
	SetNameAndReturnReference(nameValue, isReference, functionValue, scope, currentNamespace);
	NamespaceName = currentNamespace.ToSignature();
	ClassName = scope.ClassName;
	if (parameters) {
		ParametersList = *parameters;
	}
	if (nameValue) {
		StartingLineNumber = nameValue->LineNumber;
	}
	StartingPosition = startingBodyTokenValue.Pos;
	EndingPosition = endingBodyTokenValue.Pos;
	return this;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeMethod(pelet::SemanticValueClass* nameValue, pelet::ClassMemberSymbolClass* modifiers,
        bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters,
		pelet::ClassMemberSymbolClass* methodBody,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	Type = pelet::StatementClass::METHOD_DECLARATION;
	SetNameAndReturnReference(nameValue, isReference, functionValue, scope, currentNamespace);
	NamespaceName = currentNamespace.ToSignature();
	if (NamespaceName.empty()) {
		NamespaceName = wxT("\\");
	}
	ClassName = scope.ClassName;
	if (parameters) {
		ParametersList = *parameters;
	}
	if (modifiers) {
		IsAbstractMember = modifiers->IsAbstractMember;
		IsFinalMember = modifiers->IsFinalMember;
		IsConstMember = modifiers->IsConstMember;
		IsStaticMember = modifiers->IsStaticMember;

		// comment can only be attached to the modifiers or the function keyword
		// the method may not have any modifiers
		if (Comment.empty() && !modifiers->Comment.empty()) {
			Comment.append(modifiers->Comment);
		}
		if (ReturnType.empty() && !modifiers->ReturnType.empty()) {
			ReturnType = modifiers->ReturnType;
		}
		if (modifiers->IsPublicMember) {
			SetAsPublic();
		}
		if (modifiers->IsProtectedMember) {
			SetAsProtected();
		}
		if (modifiers->IsPrivateMember) {
			SetAsPrivate();
		}
	}
	StartingLineNumber = nameValue->LineNumber;
	StartingPosition = methodBody->StartingPosition;
	EndingPosition = methodBody->EndingPosition;
	return this;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeVariable(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue,
        bool isConstant, const int startingLineNumber,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	Type = pelet::StatementClass::PROPERTY_DECLARATION;
	if (isConstant) {
		SetAsConst(nameValue, commentValue, scope, currentNamespace);
	} else {
		SetNameAndReturnReference(nameValue, false, commentValue, scope, currentNamespace);
		if (nameValue && !nameValue->Lexeme.empty() 
			&& !nameValue->Lexeme.StartsWith((wxT("$")))) {
			MemberName = wxT("$") + MemberName;
		}
	}
	NamespaceName = currentNamespace.ToSignature();
	if (NamespaceName.empty()) {
		NamespaceName = wxT("\\");
	}
	ClassName = scope.ClassName;
	SetAsPublic();
	StartingLineNumber = startingLineNumber;
	if (nameValue) {
		EndingPosition = nameValue->Pos + nameValue->Lexeme.length();
	}
	return this;
}

pelet::StatementListClass* pelet::ClassMemberSymbolClass::MakeVariables(pelet::StatementListClass* variableStatements, 
	pelet::ClassMemberSymbolClass* modifiers, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {

	// set the modifiers on all of the given property declarations
	for (size_t i = 0; i < variableStatements->Size(); ++i) {
		pelet::StatementClass::Types type = variableStatements->TypeAt(i);
		if (pelet::StatementClass::PROPERTY_DECLARATION == type) {
			pelet::ClassMemberSymbolClass* member = (pelet::ClassMemberSymbolClass*)variableStatements->At(i);
			member->IsAbstractMember = modifiers->IsAbstractMember;
			member->IsFinalMember = modifiers->IsFinalMember;
			member->IsConstMember = modifiers->IsConstMember;
			member->IsStaticMember = modifiers->IsStaticMember;
			member->Comment.append(modifiers->Comment);
			if (member->ReturnType.empty() && !modifiers->ReturnType.empty()) {
				member->ReturnType = modifiers->ReturnType;
			}
			if (modifiers->IsPublicMember) {
				member->SetAsPublic();
			}
			if (modifiers->IsProtectedMember) {
				member->SetAsProtected();
			}
			if (modifiers->IsPrivateMember) {
				member->SetAsPrivate();
			}
		}
	}
	return variableStatements;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::SetModifier(pelet::SemanticValueClass* modifierValue) {
	if (modifierValue) {
		IsAbstractMember = pelet::T_ABSTRACT == modifierValue->Token;
		IsFinalMember = pelet::T_FINAL == modifierValue->Token;
		IsConstMember = pelet::T_CONST == modifierValue->Token;
		IsStaticMember = pelet::T_STATIC == modifierValue->Token;
		if (pelet::T_PUBLIC == modifierValue->Token) {
			SetAsPublic();
		} else if (pelet::T_PROTECTED == modifierValue->Token) {
			SetAsProtected();
		} else if (pelet::T_PRIVATE == modifierValue->Token) {
			SetAsPrivate();
		}
	}
	return this;
}

wxString pelet::ClassMemberSymbolClass::GetComment() const {
	return Comment;
}

wxString pelet::ClassMemberSymbolClass::GetReturnType() const {
	return ReturnType;
}

pelet::QualifiedNameClass::QualifiedNameClass()
	: Comment()
	, IsAbsolute(false)
	, Namespaces() {

}

void pelet::QualifiedNameClass::Init(SemanticValueClass* value) {
	if (value) {
		Comment = value->Comment;
		AppendName(value);
	}
}

void pelet::QualifiedNameClass::Clear() {
	Namespaces.clear();
	IsAbsolute = false;
}

pelet::QualifiedNameClass* pelet::QualifiedNameClass::AppendName(SemanticValueClass* value) {
	if (value) {
		wxString name = value->Lexeme;
		if (Namespaces.empty() && value) {
			IsAbsolute = value->Lexeme.find(wxT("\\")) == 0;
			if (IsAbsolute) {
				name.clear();
				
				// remove the first slash, we will add it later on
				name = value->Lexeme.AfterFirst(wxT('\\'));
			}
		}
		Namespaces.push_back(name);
	}
	return this;
}

pelet::QualifiedNameClass* pelet::QualifiedNameClass::MakeAbsolute() {
	IsAbsolute = true;
	return this;
}

void pelet::QualifiedNameClass::PrependNamespace(const QualifiedNameClass& name) {
	Namespaces.insert(Namespaces.begin(), name.Namespaces.begin(), name.Namespaces.end());
	
	// if we prepend an absolute namespace then this namespace becomes absolute
	IsAbsolute = name.IsAbsolute;
}

wxString pelet::QualifiedNameClass::ToSignature() const {
	wxString ret;
	if (IsAbsolute) {
		ret.append(wxT("\\"));
	}
	
	std::vector<wxString>::const_iterator nm;
	for (nm = Namespaces.begin(); nm != Namespaces.end(); ++nm) {
		if (Namespaces.begin() != nm) {
			ret.append(wxT("\\"));
		}
		ret.append(*nm);
	}
	return ret;
}

void pelet::QualifiedNameClass::Init(const wxString& name) {
	Namespaces.push_back(name);
}

pelet::QualifiedNameClass* pelet::QualifiedNameClass::MakeFromDeclaredNamespace(const pelet::QualifiedNameClass* currentNamespace) {
	if (currentNamespace) {
		IsAbsolute = currentNamespace->IsAbsolute;
		Namespaces = currentNamespace->Namespaces;
	}
	return this;
}

bool pelet::QualifiedNameClass::IsDefine() const {
	bool ret = false;
	if  (Namespaces.size() == 1) {
		wxString s = Namespaces[0].Lower();
		ret = s.compare(wxT("define")) == 0;
	}
	return ret;
}

pelet::ParametersListClass::ParametersListClass()
	: Params()
	, OptionalTypes() {

}

void pelet::ParametersListClass::Create() {
	Params.push_back(wxT(""));
	OptionalTypes.push_back(wxT(""));
}

void pelet::ParametersListClass::CreateWithOptionalType(pelet::SemanticValueClass* typeValue) {
	Params.push_back(wxT(""));
	if (typeValue) {
		OptionalTypes.push_back(typeValue->Lexeme);
	} else {
		OptionalTypes.push_back(wxT(""));
	}
}

void pelet::ParametersListClass::CreateWithOptionalType(const wxString& className) {
	Params.push_back(wxT(""));
	if (!className.empty()) {
		OptionalTypes.push_back(className);
	} else {
		OptionalTypes.push_back(wxT(""));
	}
}

void pelet::ParametersListClass::Clear() {
	Params.clear();
	OptionalTypes.clear();
}

void pelet::ParametersListClass::SetName(SemanticValueClass* value, bool isReference) {
	if (value) {
		Params.back() = value->Lexeme;
		if (isReference) {
			Params.back().insert(0, wxT("&"));
		}
	}
}

wxString pelet::ParametersListClass::ToSignature() const {
	wxString signature = wxT("(");
	size_t i = 0;
	for (; i < Params.size(); ++i) {
		if (!OptionalTypes[i].empty()) {
			signature.append(OptionalTypes[i]);
			signature.append(wxT(" "));
		}
		signature.append(Params[i]);
		if (i < (Params.size() - 1)) {
			signature.append(wxT(", "));
		}
	}
	signature.append(wxT(")"));
	return signature;
}

size_t pelet::ParametersListClass::GetCount() const {
	return Params.size();
}

void pelet::ParametersListClass::Param(size_t index, wxString& param, wxString& optionalType) const {
	if (index < Params.size()) {
		param = Params[index];
	}
	if (index < OptionalTypes.size()) {
		optionalType = OptionalTypes[index];
	}
}

pelet::ParametersListClass* pelet::ParametersListClass::Append(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference,
															   const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	wxString typeString;
	if (type) {
		typeString = type->ToSignature();
		
		// array, callable type hints are keywords, do not qualify them
		if (typeString == wxT("\\")) {
			typeString = wxT("");
		}
		else if (typeString == wxT("array")) {
			typeString = wxT("array");
		}
		else if (typeString == wxT("callable")) {
			typeString = wxT("callable");
		}
		else {
			typeString = scope.FullyQualify(*type, currentNamespace);
		}
	}
	CreateWithOptionalType(typeString);
	SetName(parameterName, isReference);
	return this;
}

void pelet::ParametersListClass::Init(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference,
															   const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	wxString typeString;
	if (type) {
		typeString = type->ToSignature();
		
		// array, callable type hints are keywords, do not qualify them
		if (typeString == wxT("\\")) {
			typeString = wxT("");
		}
		else if (typeString == wxT("array")) {
			typeString = wxT("array");
		}
		else if (typeString == wxT("callable")) {
			typeString = wxT("callable");
		}
		else {
			typeString = scope.FullyQualify(*type, currentNamespace);
		}
	}
	CreateWithOptionalType(typeString);
	SetName(parameterName, isReference);
}

pelet::ExpressionClass::ExpressionClass(const pelet::ScopeClass& scope)
	: StatementClass(pelet::StatementClass::EXPRESSION)
	, Comment()
	, Scope(scope)
	, ChainList()
	, ArrayKeys()
	, ExpressionType(SCALAR)
	, LineNumber(0) {
}

void pelet::ExpressionClass::Clear() {
	Comment.clear();
	Scope.Clear();
	ChainList.clear();
	ArrayKeys.clear();
	ExpressionType = pelet::ExpressionClass::SCALAR;
	LineNumber = 0;
}

void pelet::ExpressionClass::Copy(const pelet::ExpressionClass& src) {
	Comment = src.Comment;
	Scope = src.Scope;
	ChainList = src.ChainList;
	ArrayKeys = src.ArrayKeys;
	ExpressionType = src.ExpressionType;
	Type = src.Type;
	LineNumber = src.LineNumber;
}

void pelet::ExpressionClass::Copy(const pelet::VariableClass& variable) {
	Comment = variable.Comment;
	Scope = variable.Scope;
	ChainList = variable.ChainList;
	ArrayKeys.clear();
	if (!variable.ArrayKey.empty()) {
		ArrayKeys.push_back(variable.ArrayKey);
	}
	ExpressionType = pelet::ExpressionClass::VARIABLE;
	LineNumber = variable.LineNumber;	
}

wxString pelet::ExpressionClass::FirstValue() const {
	wxString str;
	if (!ChainList.empty()) {
		str = ChainList.front().Name;
	}
	return str;
}

void pelet::ExpressionClass::AppendToChain(pelet::SemanticValueClass* propertyValue,
		std::vector<pelet::ExpressionClass> callArguments, bool isMethod, pelet::SemanticValueClass* operatorValue) {
	if (propertyValue && operatorValue) {
		bool isStatic = T_PAAMAYIM_NEKUDOTAYIM == operatorValue->Token;
		AppendToChain(propertyValue->Lexeme, callArguments, isMethod, isStatic);
	}
}

void pelet::ExpressionClass::AppendToChain(const wxString& propertyName,
		std::vector<pelet::ExpressionClass> callArguments, bool isMethod, bool isStatic) {
	pelet::VariablePropertyClass objectCall;
	objectCall.IsStatic = isStatic;
	objectCall.Name = propertyName;
	objectCall.IsFunction = isMethod;
	objectCall.CallArguments = callArguments;
	ChainList.push_back(objectCall);
}

void pelet::ExpressionClass::ToNewCall(const wxString& className) {
	Clear();
	ExpressionType = NEW_CALL;
	pelet::VariablePropertyClass objectCall;
	objectCall.Name = className;
	ChainList.push_back(objectCall);
}

void pelet::ExpressionClass::ToStaticFunctionCall(const wxString& className, const wxString& propertyName, bool isMethod) {
	Clear();
	ExpressionType = FUNCTION_CALL;
	if (!className.empty()) {
		pelet::VariablePropertyClass objectCall;
		objectCall.Name = className;
		ChainList.push_back(objectCall);
	}
	if (!propertyName.empty()) {
		pelet::VariablePropertyClass objectCall;
		objectCall.Name = propertyName;
		objectCall.IsFunction = isMethod;
		objectCall.IsStatic = true;
		ChainList.push_back(objectCall);
	}
}

void pelet::ExpressionClass::ToVariable(const wxString& variableName) {
	Clear();
	ExpressionType = VARIABLE;
	pelet::VariablePropertyClass objectCall;
	objectCall.Name = variableName;
	objectCall.IsFunction = false;
	objectCall.IsStatic = false;
	ChainList.push_back(objectCall);
}

void pelet::ExpressionClass::ToScalar(const wxString& scalarValue) {
	Clear();
	ExpressionType = SCALAR;
	pelet::VariablePropertyClass objectCall;
	objectCall.Name = scalarValue;
	objectCall.IsFunction = false;
	objectCall.IsStatic = false;
	ChainList.push_back(objectCall);
}

void pelet::ExpressionClass::ToConstant(const wxString& className, const wxString& constantName) {
	Clear();
	ExpressionType = FUNCTION_CALL;
	if (!className.empty()) {
		pelet::VariablePropertyClass classCall;
		classCall.Name = className;
		ChainList.push_back(classCall);
		
		pelet::VariablePropertyClass objectCall;
		objectCall.Name = constantName;
		objectCall.IsFunction = false;
		objectCall.IsStatic = true;
		ChainList.push_back(objectCall);
	}
	else {
		pelet::VariablePropertyClass objectCall;
		objectCall.Name = constantName;
		objectCall.IsFunction = false;
		objectCall.IsStatic = false;
		ChainList.push_back(objectCall);
	}
}


pelet::VariableClass::VariableClass(const pelet::ScopeClass& scope)
	: StatementClass(pelet::StatementClass::VARIABLE)
	, Comment()
	, PhpDocType()
	, ChainList()
	, ArrayKey()
	, Scope(scope)
	, LineNumber(0) {
}

void pelet::VariableClass::Copy(const pelet::VariableClass& src) {
	Comment = src.Comment;
	PhpDocType = src.PhpDocType;
	ChainList = src.ChainList;
	Type = src.Type;
	ArrayKey = src.ArrayKey;
	Scope = src.Scope;
	LineNumber = src.LineNumber;
}

void pelet::VariableClass::AppendToComment(pelet::SemanticValueClass* value) {
	if (value) {
		Comment.append(value->Comment);
	}
}

void pelet::VariableClass::Clear() {
	Comment.clear();
	PhpDocType.clear();
	ChainList.clear();
	ArrayKey.clear();
	Scope.Clear();
	LineNumber = 0;
}

void pelet::VariableClass::AppendToChain(const wxString& propertyValue) {
	pelet::VariablePropertyClass prop;
	prop.Name = propertyValue;
	prop.IsFunction = false;
	prop.IsStatic = false;
	ChainList.push_back(prop);	
}

void pelet::VariableClass::AppendToChain(const wxString& propertyValue,
		std::vector<pelet::ExpressionClass> callArguments, bool isMethod, bool isStatic) {
	pelet::VariablePropertyClass prop;
	prop.Name = propertyValue;
	prop.CallArguments = callArguments;
	prop.IsFunction = isMethod;
	prop.IsStatic = isStatic;
	ChainList.push_back(prop);	
}

pelet::SemanticValueClass::SemanticValueClass() 
	: AstItemClass()
	, Lexeme()
	, Comment()
	, Token(0)
	, Pos(0)
	, LineNumber(0) {
		
}

pelet::AssignmentExpressionClass::AssignmentExpressionClass(const pelet::ScopeClass& scope)
	: ExpressionClass(scope)
	, Destination(scope) {
	Type = pelet::StatementClass::ASSIGNMENT;
}

void pelet::AssignmentExpressionClass::Set(pelet::ExpressionClass& src) {
	Copy(src);
	
	// copy method will ovewrite the type property put it back to normal
	Type = pelet::StatementClass::ASSIGNMENT;
}

pelet::AssignmentListExpressionClass::AssignmentListExpressionClass(const pelet::ScopeClass& scope)
	: ExpressionClass(scope)
	, Destinations() {
	Type = pelet::StatementClass::ASSIGNMENT_LIST;
}

void pelet::AssignmentListExpressionClass::Set(pelet::ExpressionClass& src) {
	Copy(src);
	
	// copy method will ovewrite the type property put it back to normal
	Type = pelet::StatementClass::ASSIGNMENT_LIST;
}

pelet::ScopeClass::ScopeClass()
	: NamespaceName()
	, ClassName()
	, MethodName()
	, NamespaceAliases(NULL)
{
}

pelet::ScopeClass::~ScopeClass() {
	if (NamespaceAliases) {
		delete NamespaceAliases;
	}
}


pelet::ScopeClass::ScopeClass(const pelet::ScopeClass& src)
	: NamespaceName()
	, ClassName()
	, MethodName()
	, NamespaceAliases(NULL)
{
	Copy(src);
}

void pelet::ScopeClass::Clear() {
	NamespaceName.clear();
	ClassName.clear();
	MethodName.clear();
	if (NamespaceAliases) {
		NamespaceAliases->clear();
	}
}

void pelet::ScopeClass::ClearAliases() {
	if (NamespaceAliases) {
		NamespaceAliases->clear();
	}
}

void pelet::ScopeClass::Copy(const pelet::ScopeClass& src) {
	NamespaceName = src.NamespaceName;
	ClassName = src.ClassName;
	MethodName = src.MethodName;
	if (!NamespaceAliases && src.NamespaceAliases) {
		NamespaceAliases = new std::map<wxString, wxString, wxStringComparatorClass>(*src.NamespaceAliases);
	}
	else if (NamespaceAliases && !src.NamespaceAliases) {
		NamespaceAliases->clear();
	}
	else if (NamespaceAliases && src.NamespaceAliases) {
		*NamespaceAliases = *src.NamespaceAliases;
	}
}

void pelet::ScopeClass::operator =(const pelet::ScopeClass& scope) {
	Copy(scope);
}

bool pelet::ScopeClass::IsGlobalScope() const {
	return ClassName.empty() && MethodName.empty();
}

bool pelet::ScopeClass::IsGlobalNamespace() const {
	return NamespaceName.compare(wxT("\\")) == 0 || NamespaceName.empty();
}

void pelet::ScopeClass::AddNamespaceAlias(const wxString& namespaceName, const wxString& namespaceAlias) {
	if (!NamespaceAliases) {
		NamespaceAliases = new std::map<wxString, wxString, wxStringComparatorClass>();
	}
	
	// a namespace alias is always fully qualified
	// add the beginning slash if not there
	wxString fullyQualified;
	if (namespaceName.find(wxT("\\")) != 0) {
		fullyQualified.append(wxT("\\"));		
	}
	fullyQualified.append(namespaceName);
	(*NamespaceAliases)[namespaceAlias] = fullyQualified;
}

wxString pelet::ScopeClass::ResolveAlias(const wxString& alias) const {
	wxString fullName;
	if (NamespaceAliases) {
		std::map<wxString, wxString, wxStringComparatorClass>::const_iterator it = NamespaceAliases->find(alias);
		if (it != NamespaceAliases->end()) {
			fullName = it->second;
		}
	}
	return fullName;
}

std::map<wxString, wxString, pelet::wxStringComparatorClass> pelet::ScopeClass::GetNamespaceAliases() const {
	std::map<wxString, wxString, pelet::wxStringComparatorClass> map;
	if (NamespaceAliases) {
		map.insert(NamespaceAliases->begin(), NamespaceAliases->end());
	}
	return map;
}

wxString pelet::ScopeClass::FullyQualify(const pelet::QualifiedNameClass& name,
											const pelet::QualifiedNameClass& namespaceName) const {
	wxString fullyQualified;

	// does name use an alias?
	wxString alias;
	wxString qualified = name.ToSignature();
	size_t index = qualified.find(wxT("\\"));
	if (index > 0) {
		alias = qualified.substr(0, index);
	}
	wxString fullNamespace = ResolveAlias(alias);
	if (!fullNamespace.empty()) {

		// substitute alias with namespace
		fullyQualified = qualified.substr(index + 1);
		fullyQualified = fullNamespace + wxT("\\") + fullyQualified;
	} else  if (name.IsAbsolute) {
		
		// no alias but the name is already fully qualified
		fullyQualified = name.ToSignature();
	}
	else {

		// no alias, prepend the curent namespace
		pelet::QualifiedNameClass fullName;
		fullName.PrependNamespace(name);
		fullName.PrependNamespace(namespaceName);
		fullyQualified = fullName.ToSignature();
	}
	return fullyQualified;
}

pelet::VariablePropertyClass::VariablePropertyClass()
	: Name()
	, CallArguments()
	, IsFunction(false)
	, IsStatic(false) {
}

pelet::ScalarStatementClass::ScalarStatementClass()
	: StatementClass(pelet::StatementClass::SCALAR) 
	, Scalar() {

}

void pelet::ScalarStatementClass::Init(pelet::SemanticValueClass* value) {
	if (value) {
		Scalar = value->Lexeme;
	}
}

pelet::IncludeStatementClass::IncludeStatementClass() 
	: StatementClass(pelet::StatementClass::INCLUDE_STATEMENT)
	, File() 
	, LineNumber(0) {

}

void pelet::IncludeStatementClass::Init(pelet::StatementClass* scalar, int lineNumber) {
	LineNumber = lineNumber;
	if (scalar && pelet::StatementClass::SCALAR == scalar->Type) {
		File = ((pelet::ScalarStatementClass*)scalar)->Scalar;
	}
}