/**
 * This software is released under the terms of the MIT License
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
#include <pelet/ParserObserverClass.h>
#include <unicode/ustdio.h>
#include <unicode/uchar.h>
#include <unicode/ustring.h>

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

pelet::StatementListClass::StatementListClass()
	: Statements() {
		
}

pelet::ConstantStatementClass::ConstantStatementClass() 
	: StatementClass(pelet::StatementClass::DEFINE_DECLARATION) 
	, Name() 
	, NamespaceName()
	, Comment()
	, Value()
	, LineNumber(0) {
		
}

size_t pelet::StatementListClass::Size() const {
	return Statements.size();
}
	
pelet::StatementClass::Types pelet::StatementListClass::TypeAt(size_t index) const {
	if (index < Statements.size()) {
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

void pelet::StatementListClass::Push(pelet::StatementClass* statement) {
	Statements.push_back(statement);
}

void pelet::StatementListClass::PushAll(pelet::StatementListClass* statements) {
	for (size_t i = 0; i < statements->Statements.size(); ++i) {
		Statements.push_back(statements->Statements[i]);
	}
}

pelet::NamespaceDeclarationClass::NamespaceDeclarationClass()
	: StatementClass(pelet::StatementClass::NAMESPACE_DECLARATION)
	, NamespaceName() {
		
}

pelet::NamespaceUseClass::NamespaceUseClass() 
	: StatementClass(pelet::StatementClass::NAMESPACE_USE)
	, NamespaceName()
	, Alias() {
		
}

UnicodeString pelet::NamespaceUseClass::Set(pelet::QualifiedNameClass* qualifiedName, UnicodeString alias) {
	UnicodeString fullyQualifiedNamespace = qualifiedName->ToAbsoluteSignature();
	if (alias.isEmpty()) {
		int32_t index = fullyQualifiedNamespace.lastIndexOf(UNICODE_STRING_SIMPLE("\\"));

		//by default alias is the last part of the namespace name
		if (index >= 0) {
			alias.setTo(fullyQualifiedNamespace, index + 1);
		}
	}
	NamespaceName = fullyQualifiedNamespace;
	Alias = alias;
	
	return Alias;
}

pelet::ClassSymbolClass::ClassSymbolClass()
	: StatementClass(pelet::StatementClass::CLASS_DECLARATION)
	, ClassName()
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
	if (value->Lexeme) {
		ClassName = *value->Lexeme;
	}
}

void pelet::ClassSymbolClass::AppendToComment(pelet::SemanticValueClass* value) {
	if (value->Comment) {
		Comment.append(*value->Comment);
	}
}

void pelet::ClassSymbolClass::Clear() {
	ClassName.remove();
	Comment.remove();
	ExtendsFrom.remove();
	ImplementsList.clear();
	StartingLineNumber = 0;
	EndingLineNumber = 0;
	IsAbstract = false;
	IsFinal = false;
	IsInterface = false;
}

UnicodeString pelet::ClassSymbolClass::ToSignature() const {
	UnicodeString sig;
	if (!IsInterface && !IsAbstract) {
		sig.append(UNICODE_STRING_SIMPLE("class "));
	} else if (!IsInterface && IsAbstract) {
		sig.append(UNICODE_STRING_SIMPLE("abstract class "));
	} else {
		sig.append(UNICODE_STRING_SIMPLE("interface "));
	}

	sig.append(ClassName);
	UnicodeString extends = ExtendsFrom;
	if (!extends.isEmpty()) {
		sig.append(UNICODE_STRING_SIMPLE(" extends "));
		sig.append(extends);
	}
	if (!ImplementsList.empty()) {
		if (IsInterface) {
			sig.append(UNICODE_STRING_SIMPLE(" extends "));
		} else {
			sig.append(UNICODE_STRING_SIMPLE(" implements "));
		}
		for (size_t i = 0; i < ImplementsList.size(); ++i) {
			sig.append(ImplementsList[i]);
			if (i < (ImplementsList.size() - 1)) {
				sig.append(UNICODE_STRING_SIMPLE(", "));
			}
		}
	}
	return sig;
}

pelet::ClassMemberSymbolClass::ClassMemberSymbolClass()
	: StatementClass(pelet::StatementClass::METHOD_DECLARATION)
	, MemberName()
	, Comment()
	, NamespaceName()
	, ClassName()
	, ParametersList()
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

void pelet::ClassMemberSymbolClass::SetNameAndReturnReference(pelet::SemanticValueClass* nameValue, bool isReturnReference, pelet::SemanticValueClass* functionValue) {
	if (nameValue->Lexeme) {
		MemberName = *nameValue->Lexeme;
	}
	IsReturnReference = isReturnReference;

	// a comment may be attached to the function keyword.
	// see php53lex() function
	if (functionValue->Comment) {
		Comment.append(*functionValue->Comment);
	}
}

void pelet::ClassMemberSymbolClass::SetAsConst(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue) {
	IsPublicMember = true;
	IsProtectedMember = false;
	IsPrivateMember = false;
	IsStaticMember = true;
	IsConstMember = true;
	IsAbstractMember = false;
	IsFinalMember = false;
	IsReturnReference = false;
	if (nameValue->Lexeme) {
		MemberName = *nameValue->Lexeme;
	}

	// a comment may be attached to the const keyword.
	// see php53lex() function
	if (commentValue->Comment) {
		Comment.append(*commentValue->Comment);
	}
}

void pelet::ClassMemberSymbolClass::AppendToComment(SemanticValueClass* value) {
	if (value->Comment) {
		Comment.append(*value->Comment);
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
	MemberName.remove();
	Comment.remove();
	NamespaceName.remove();
	ClassName.remove();
	ParametersList.Clear();
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

UnicodeString pelet::ClassMemberSymbolClass::ToMethodSignature(UnicodeString variablesSignature) const {
	UnicodeString sig;

	// methods cannot be const
	if (IsPublicMember) {
		sig.append(UNICODE_STRING_SIMPLE("public "));
	}
	if (IsProtectedMember) {
		sig.append(UNICODE_STRING_SIMPLE("protected "));
	}
	if (IsPrivateMember) {
		sig.append(UNICODE_STRING_SIMPLE("private "));
	}
	if (IsStaticMember) {
		sig.append(UNICODE_STRING_SIMPLE("static "));
	}
	if (IsAbstractMember) {
		sig.append(UNICODE_STRING_SIMPLE("abstract "));
	}
	if (IsFinalMember) {
		sig.append(UNICODE_STRING_SIMPLE("final "));
	}
	if (IsReturnReference) {
		sig.append(UNICODE_STRING_SIMPLE("function& "));
	} else {
		sig.append(UNICODE_STRING_SIMPLE("function "));
	}
	sig.append(MemberName);
	sig.append(variablesSignature);
	return sig;
}

pelet::TraitAdaptationSymbolClass::TraitAdaptationSymbolClass()
	: TraitMethodReference()
	, TraitMethod()
	, InsteadOfList()
	, TraitAlias()
	, MethodVisibility(pelet::TokenClass::PUBLIC) {
}

void pelet::TraitAdaptationSymbolClass::Clear() {
	TraitMethodReference.remove();
	TraitMethod.remove();
	InsteadOfList.clear();
	TraitAlias.remove();
	MethodVisibility = pelet::TokenClass::PUBLIC;
}

pelet::QualifiedNameClass::QualifiedNameClass()
	: Comment()
	, IsAbsolute(false)
	, Namespaces() {

}

void pelet::QualifiedNameClass::GrabNameAndComment(SemanticValueClass* value) {
	if (value->Comment) {
		Comment.setTo(*value->Comment);
	}
	AddName(value);
}

void pelet::QualifiedNameClass::Clear() {
	while (!Namespaces.empty()) {
		Namespaces.pop_back();
	}
	IsAbsolute = false;
}

void pelet::QualifiedNameClass::AddName(SemanticValueClass* value) {
	if (value->Lexeme) {
		Namespaces.insert(Namespaces.begin(), *value->Lexeme);
	}
}

void pelet::QualifiedNameClass::MakeAbsolute() {
	IsAbsolute = true;
}

void pelet::QualifiedNameClass::Prepend(const QualifiedNameClass& name) {
	std::vector<UnicodeString> newNamespaces;
	newNamespaces.resize(name.Namespaces.size() + Namespaces.size());
	std::copy(name.Namespaces.begin(), name.Namespaces.end(), newNamespaces.begin());
	std::copy(Namespaces.begin(), Namespaces.end(), newNamespaces.begin() + name.Namespaces.size());
}

UnicodeString pelet::QualifiedNameClass::Prepend(const pelet::QualifiedNameClass& name) const {
	UnicodeString fullyQualified;
	if (IsAbsolute) {
		fullyQualified = ToAbsoluteSignature();
	} else {
		if (name.Namespaces.empty()) {

			// this branch of  logic is needed when the code does not have any namespaces, do not
			// add the namespace separator
			fullyQualified = ToSignature();
		} else {
			fullyQualified = name.ToAbsoluteSignature() + UNICODE_STRING_SIMPLE("\\") + ToSignature();
		}
	}
	return fullyQualified;
}

UnicodeString pelet::QualifiedNameClass::ToSignature() const {
	UnicodeString ret;

	// create a local copy so that we can pop() from it
	std::vector<UnicodeString> namespaces = Namespaces;
	while (!namespaces.empty()) {
		ret.append(namespaces.back());
		namespaces.pop_back();
		if (!namespaces.empty()) {
			ret.append(UNICODE_STRING_SIMPLE("\\"));
		}
	}
	return ret;
}

UnicodeString pelet::QualifiedNameClass::ToAbsoluteSignature() const {
	UnicodeString sig = UNICODE_STRING_SIMPLE("\\") + ToSignature();
	return sig;
}

pelet::ParametersListClass::ParametersListClass()
	: Params()
	, OptionalTypes() {

}

void pelet::ParametersListClass::Create() {
	Params.push_back(UNICODE_STRING_SIMPLE(""));
	OptionalTypes.push_back(UNICODE_STRING_SIMPLE(""));
}

void pelet::ParametersListClass::CreateWithOptionalType(pelet::SemanticValueClass* typeValue) {
	Params.push_back(UNICODE_STRING_SIMPLE(""));
	if (typeValue->Lexeme) {
		OptionalTypes.push_back(*typeValue->Lexeme);
	} else {
		OptionalTypes.push_back(UNICODE_STRING_SIMPLE(""));
	}
}

void pelet::ParametersListClass::CreateWithOptionalType(const UnicodeString& className) {
	Params.push_back(UNICODE_STRING_SIMPLE(""));
	if (!className.isEmpty()) {
		OptionalTypes.push_back(className);
	} else {
		OptionalTypes.push_back(UNICODE_STRING_SIMPLE(""));
	}
}


void pelet::ParametersListClass::Clear() {
	Params.clear();
	OptionalTypes.clear();
}

void pelet::ParametersListClass::SetName(SemanticValueClass* value, bool isReference) {
	if (value->Lexeme) {
		Params.back().setTo(*value->Lexeme);
		if (isReference) {
			Params.back().insert(0, UNICODE_STRING_SIMPLE("&"));
		}
	}
}

UnicodeString pelet::ParametersListClass::ToSignature() const {
	UnicodeString signature = UNICODE_STRING_SIMPLE("(");
	size_t i = 0;
	for (; i < Params.size(); ++i) {
		if (!OptionalTypes[i].isEmpty()) {
			signature.append(OptionalTypes[i]);
			signature.append(UNICODE_STRING_SIMPLE(" "));
		}
		signature.append(Params[i]);
		if (i < (Params.size() - 1)) {
			signature.append(UNICODE_STRING_SIMPLE(", "));
		}
	}
	signature.append(UNICODE_STRING_SIMPLE(")"));
	return signature;
}

size_t pelet::ParametersListClass::GetCount() const {
	return Params.size();
}

void pelet::ParametersListClass::Param(size_t index, UnicodeString& param, UnicodeString& optionalType) const {
	if (index < Params.size()) {
		param.setTo(Params[index]);
	}
	if (index < OptionalTypes.size()) {
		optionalType.setTo(OptionalTypes[index]);
	}
}

pelet::ExpressionClass::ExpressionClass()
	: StatementClass(pelet::StatementClass::EXPRESSION)
	, Name()
	, Lexeme()
	, Comment()
	, NamespaceScope()
	, ClassScope()
	, MethodScope()
	, CallArguments()
	, ChainList()
	, VariablesList()
	, ExpressionType(SCALAR) 
	, LineNumber(0) {
}

void pelet::ExpressionClass::Clear() {
	Name.Clear();
	Lexeme.remove();
	Comment.remove();
	NamespaceScope.remove();
	ClassScope.remove();
	MethodScope.remove();
	CallArguments.clear();
	ChainList.clear();
	VariablesList.clear();
	ExpressionType = pelet::ExpressionClass::SCALAR;
	LineNumber = 0;
}

void pelet::ExpressionClass::Copy(const pelet::ExpressionClass& src) {
	Name = src.Name;
	Lexeme = src.Lexeme;
	Comment = src.Comment;
	NamespaceScope = src.NamespaceScope;
	ClassScope = src.ClassScope;
	MethodScope = src.MethodScope;
	CallArguments = src.CallArguments;
	ChainList = src.ChainList;
	VariablesList = src.VariablesList;
	ExpressionType = src.ExpressionType;
	Type = src.Type;
	LineNumber = src.LineNumber;
}


void pelet::ExpressionClass::AppendToChain(pelet::SemanticValueClass* operatorValue, pelet::SemanticValueClass* propertyValue, bool isMethod) {
	UnicodeString objectCall;
	if (operatorValue->Lexeme) {
		objectCall.append(*operatorValue->Lexeme);
	}
	if (propertyValue->Lexeme) {
		objectCall.append(*propertyValue->Lexeme);
	}
	if (isMethod) {
		objectCall.append(UNICODE_STRING_SIMPLE("()"));
	}
	ChainList.push_back(objectCall);
}

pelet::SymbolClass::SymbolClass()
	: StatementClass(pelet::StatementClass::ASSIGNMENT)
	, Lexeme()
	, Comment()
	, PhpDocType()
	, ChainList()
	, VariablesList()
	, NamespaceScope()
	, ClassScope()
	, MethodScope()
	, SourceType(PRIMITIVE) {
}

void pelet::SymbolClass::Copy(const pelet::SymbolClass& src) {
	Lexeme = src.Lexeme;
	Comment = src.Comment;
	PhpDocType = src.PhpDocType;
	ChainList = src.ChainList;
	Type = src.Type;
	SourceType = src.SourceType;
	VariablesList = src.VariablesList;
	NamespaceScope = src.NamespaceScope;
	ClassScope = src.ClassScope;
	MethodScope = src.MethodScope;
}

void pelet::SymbolClass::AppendToComment(pelet::SemanticValueClass* value) {
	if (value->Comment) {
		Comment.append(*value->Comment);
	}
}

void pelet::SymbolClass::SetToPrimitive() {
	SourceType = pelet::SymbolClass::PRIMITIVE;
}

void pelet::SymbolClass::SetToObject() {
	SourceType = pelet::SymbolClass::OBJECT;
}

void pelet::SymbolClass::SetToArray() {
	SourceType = pelet::SymbolClass::ARRAY;
}

void pelet::SymbolClass::SetToUnknown() {
	SourceType = pelet::SymbolClass::UNKNOWN;
}

void pelet::SymbolClass::Clear() {
	Lexeme.remove();
	Comment.remove();
	PhpDocType.remove();
	ChainList.clear();
	VariablesList.clear();
	NamespaceScope.remove();
	ClassScope.remove();
	MethodScope.remove();
	SourceType = pelet::SymbolClass::PRIMITIVE;
}

void pelet::SymbolClass::FromExpression(const pelet::ExpressionClass& expression) {
	if (pelet::ExpressionClass::ARRAY == expression.ExpressionType) {
		SetToArray();
	} else if (pelet::ExpressionClass::FUNCTION_CALL == expression.ExpressionType) {
		SetToObject();
	} else if (pelet::ExpressionClass::NEW_CALL == expression.ExpressionType) {
		SetToObject();
	} else if (pelet::ExpressionClass::SCALAR == expression.ExpressionType) {
		SetToPrimitive();
	} else if (pelet::ExpressionClass::UNKNOWN == expression.ExpressionType) {
		SetToUnknown();
	} else if (pelet::ExpressionClass::VARIABLE == expression.ExpressionType) {
		SetToObject();
	}
	Comment = expression.Comment;
	Lexeme = expression.Lexeme;
	ChainList = expression.ChainList;
	VariablesList = expression.VariablesList;
	NamespaceScope = expression.NamespaceScope;
	ClassScope = expression.ClassScope;
	MethodScope = expression.MethodScope;
	if (expression.Lexeme.isEmpty() && expression.ChainList.empty()) {

		// when a static property; the "namespace_name" parser rule
		// is triggered
		Lexeme = expression.Name.ToSignature();
		ChainList.insert(ChainList.begin(), Lexeme);
	}
}

pelet::ObserverQuadClass::ObserverQuadClass(ClassObserverClass* classObserver, ClassMemberObserverClass* memberObserver,
        FunctionObserverClass* functionObserver, VariableObserverClass* variableObserver,
        ExpressionObserverClass* expressionObserver)
	: CurrentClassName()
	, CurrentMemberName()
	, CurrentTraitAdaptation()
	, CurrentNamespace()
	, NamespaceAliases()
	, Class(classObserver)
	, Member(memberObserver)
	, Function(functionObserver)
	, Variable(variableObserver)
	, ExpressionObserver(expressionObserver)
	, AllValues() 
	, AllAstItems() {

	DoCollectExpressions = classObserver || memberObserver || functionObserver || variableObserver || expressionObserver;
}

pelet::ObserverQuadClass::~ObserverQuadClass() {
	SemanticValueFree();
}

void pelet::ObserverQuadClass::TraitUseFound() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	UnicodeString qualifiedNamespace = CurrentNamespace.ToAbsoluteSignature();
	UnicodeString trait = AbsoluteNamespaceClass(CurrentQualifiedName);
	if (Member) {
		Member->TraitUseFound(qualifiedNamespace, CurrentClassName, trait);
	}
}

void pelet::ObserverQuadClass::TraitClearAdaptation() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentTraitAdaptation.Clear();
}

void pelet::ObserverQuadClass::TraitAliasMethod(SemanticValueClass* traitMethod) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentTraitAdaptation.TraitMethodReference.remove();
	if (traitMethod->Lexeme) {
		CurrentTraitAdaptation.TraitMethod = *traitMethod->Lexeme;
	}
}

void pelet::ObserverQuadClass::TraitAliasMethodFromQualifiedName(SemanticValueClass* traitMethod) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentTraitAdaptation.TraitMethodReference.remove();
	CurrentTraitAdaptation.TraitMethodReference = AbsoluteNamespaceClass(CurrentQualifiedName);
	if (traitMethod->Lexeme) {
		CurrentTraitAdaptation.TraitMethod = *traitMethod->Lexeme;
	}
}

void pelet::ObserverQuadClass::TraitAliasFound(SemanticValueClass* traitAlias) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	/***
	if (traitAlias && traitAlias->Lexeme) {
		CurrentTraitAdaptation.TraitAlias = *traitAlias->Lexeme;
	}
	if (CurrentMember.IsPrivateMember) {
		CurrentTraitAdaptation.MethodVisibility = pelet::TokenClass::PRIVATE;
	} else if (CurrentMember.IsProtectedMember) {
		CurrentTraitAdaptation.MethodVisibility = pelet::TokenClass::PROTECTED;
	} else {
		CurrentTraitAdaptation.MethodVisibility = pelet::TokenClass::PUBLIC;
	}
	if (Member) {
		Member->TraitAliasFound(CurrentNamespace.ToAbsoluteSignature(), CurrentClassName,
		                        CurrentTraitAdaptation.TraitMethodReference,
		                        CurrentTraitAdaptation.TraitMethod,
		                        CurrentTraitAdaptation.TraitAlias,
		                        CurrentTraitAdaptation.MethodVisibility);
	}
	*/
}

void pelet::ObserverQuadClass::TraitAddInsteadOf() {
	CurrentTraitAdaptation.InsteadOfList.push_back(AbsoluteNamespaceClass(CurrentQualifiedName));
}

void pelet::ObserverQuadClass::TraitInsteadOfFound() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Member) {
		Member->TraitInsteadOfFound(CurrentNamespace.ToAbsoluteSignature(), CurrentClassName,
		                            CurrentTraitAdaptation.TraitMethodReference,
		                            CurrentTraitAdaptation.TraitMethod,
		                            CurrentTraitAdaptation.InsteadOfList);
	}
}

UnicodeString pelet::ObserverQuadClass::AbsoluteNamespaceClass(const QualifiedNameClass& name) {
	UnicodeString fullyQualified;

	// does name use an alias?
	UnicodeString alias;
	UnicodeString qualified = name.ToSignature();
	int32_t index = qualified.indexOf(UNICODE_STRING_SIMPLE("\\"));
	if (index > 0) {
		alias.setTo(qualified, 0, index);
	}
	const std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>::const_iterator it = NamespaceAliases.find(alias);
	if (it != NamespaceAliases.end()) {

		// substitute alias with namespace
		fullyQualified.setTo(qualified, index + 1);
		fullyQualified = it->second + UNICODE_STRING_SIMPLE("\\") + fullyQualified;
	} else {

		// no alias, prepend the curent namespace
		fullyQualified = name.Prepend(CurrentNamespace);
	}
	return fullyQualified;
}

void pelet::ObserverQuadClass::NamespaceAliasClear() {
	NamespaceAliases.clear();
}

void pelet::ObserverQuadClass::NotifyVariablesFromParameterList(pelet::ParametersListClass& parameters, UnicodeString currentNamespaceName, UnicodeString currentClassName, UnicodeString currentMethodName) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	size_t paramCount = parameters.GetCount();
	if (paramCount > 0 && Variable) {
		UnicodeString paramName,
		              paramType;
		UnicodeString comment; // no comment it is lost in the variables
		for (size_t i = 0; i < paramCount; ++i) {
			pelet::SymbolClass symbol;
			parameters.Param(i, paramName, paramType);
			if (!paramType.isEmpty()) {
				symbol.ChainList.push_back(paramType);
				symbol.SourceType = pelet::SymbolClass::OBJECT;
			}
			symbol.Lexeme = paramName;
			Variable->VariableFound(currentNamespaceName, currentClassName, currentMethodName, symbol, comment);
		}
	}

	// remove any expressions that were created by the static scalar rules
	// ie default argument values
	/*** ClearExpressions(); */
}

void pelet::ObserverQuadClass::NotifyLocalVariableTypeHint(const UnicodeString& comment) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	NotifyLocalVariableFromPhpDoc(comment);
}

UnicodeString pelet::ObserverQuadClass::ReturnTypeFromPhpDocComment(const UnicodeString& phpDocComment, bool varAnnotation) {
	UnicodeString returnType;
	UnicodeString annotation = varAnnotation ? UNICODE_STRING_SIMPLE("@var") : UNICODE_STRING_SIMPLE("@return");
	int32_t pos = phpDocComment.indexOf(annotation);
	if (pos >= 0) {
		pos += annotation.length();

		// rudimentary tokenizer, skip all whitespace after annotation and get the word
		while (u_isWhitespace(phpDocComment[pos])) {
			++pos;
		}
		while (!u_isWhitespace(phpDocComment[pos]) && pos < phpDocComment.length()) {
			returnType += phpDocComment[pos];
			++pos;
		}
	}
	returnType = returnType.trim();
	return PhpDocTypeToAbsoluteClassname(returnType);

}

UnicodeString pelet::ObserverQuadClass::PhpDocTypeToAbsoluteClassname(UnicodeString phpDocType) {

	// any of the "basic" types will never use the current namespace
	// these were taken from http://www.phpdoc.org/docs/latest/for-users/types.html
	if (UNICODE_STRING_SIMPLE("string").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("integer").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("int").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("boolean").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("bool").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("float").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("double").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("object").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("mixed").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("array").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("resource").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("void").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("null").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("callback").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("false").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("true").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("self").caseCompare(phpDocType, 0) == 0) {
		return phpDocType;
	}
	if (!phpDocType.isEmpty()) {
		pelet::QualifiedNameClass name;
		pelet::SemanticValueClass value;

		// this is OK because SemanticValueClass does not own the pointer
		value.Lexeme = &phpDocType;
		name.AddName(&value);
		return AbsoluteNamespaceClass(name);
	}
	return phpDocType;
}

/**
 * sets either varName or varType depending on whether text contents are a variable name or not.
 */
static void FillNameOrType(UChar* text, UnicodeString& varName, UnicodeString& varType) {
	if (text && '$' == text[0]) {
		varName.setTo(text);
	} else if (text) {
		varType.setTo(text);
	}
}

void pelet::ObserverQuadClass::NotifyLocalVariableFromPhpDoc(const UnicodeString& phpDocComment) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (!Variable) {
		return;
	}
	if (phpDocComment.isEmpty()) {
		return;
	}

	// assuming that PHPDoc for local variables look like this
	// /* @var $dog Dog */
	// people got used to doing it this way
	// http://stackoverflow.com/questions/4329288/code-hinting-completion-for-array-of-objects-in-zend-studio-or-any-other-ecli
	// there could be multiple hints in a single comment

	// not using getTerminatedBuffer() because that method triggers valgrind warnings
	UChar* buf = new UChar[phpDocComment.length() + 1];
	u_memmove(buf, phpDocComment.getBuffer(), phpDocComment.length());
	buf[phpDocComment.length()] = '\0';

	UChar* saveState = 0;

	// not using getTerminatedBuffer() because that method triggers valgrind warnings
	UnicodeString delimiters = UNICODE_STRING_SIMPLE(" \t\v\f\r\n");
	UChar* delimsBuffer = new UChar[delimiters.length() + 1];
	u_memmove(delimsBuffer, delimiters.getBuffer(), delimiters.length());
	delimsBuffer[delimiters.length()] = '\0';

	UChar* next = u_strtok_r(buf, delimsBuffer, &saveState);
	UnicodeString varName;
	UnicodeString varType;
	pelet::SymbolClass symbol;
	while (next) {
		if (UNICODE_STRING_SIMPLE("@var").caseCompare(next, 0) == 0) {
			symbol.Clear();
			symbol.SetToObject();

			// example line: @var string $nameString a string version of a name
			// will be lenient and allow the reverse var then type
			// @var $nameString string
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			FillNameOrType(next, symbol.Lexeme, symbol.PhpDocType);
			if (next) {
				next = u_strtok_r(NULL, delimsBuffer, &saveState);
				FillNameOrType(next, symbol.Lexeme, symbol.PhpDocType);
				if (!symbol.Lexeme.isEmpty() && !symbol.PhpDocType.isEmpty()) {

					// handle namespaces in the phpDoc
					symbol.PhpDocType = PhpDocTypeToAbsoluteClassname(symbol.PhpDocType);
					Variable->VariableFound(CurrentNamespace.ToAbsoluteSignature(), CurrentClassName, CurrentMemberName, symbol, phpDocComment);
					next = u_strtok_r(NULL, delimsBuffer, &saveState);
				}
			}
			if (!next) {
				break;
			}
		} else {
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
		}
	}
	delete[] buf;
	delete[] delimsBuffer;
}

void pelet::ObserverQuadClass::NotifyMagicMethodsAndProperties(const UnicodeString& phpDocComment, UnicodeString currentNamespaceName, UnicodeString currentClassName, const int lineNumber) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (!Member) {
		return;
	}
	if (phpDocComment.isEmpty()) {
		return;
	}

	UnicodeString memberName;
	UnicodeString memberType;

	// not using getTerminatedBuffer() because that method triggers valgrind warnings
	UChar* buf = new UChar[phpDocComment.length() + 1];
	u_memmove(buf, phpDocComment.getBuffer(), phpDocComment.length());
	buf[phpDocComment.length()] = '\0';

	UChar* saveState = 0;
	// not using getTerminatedBuffer() because that method triggers valgrind warnings
	UnicodeString delimiters = UNICODE_STRING_SIMPLE(" \t\n\v\f");
	UChar* delimsBuffer = new UChar[delimiters.length() + 1];
	u_memmove(delimsBuffer, delimiters.getBuffer(), delimiters.length());
	delimsBuffer[delimiters.length()] = '\0';

	UChar* next = u_strtok_r(buf, delimsBuffer, &saveState);
	while (next) {
		if (UNICODE_STRING_SIMPLE("@property").caseCompare(next, 0) == 0 ||
		        UNICODE_STRING_SIMPLE("@property-read").caseCompare(next, 0) == 0 ||
		        UNICODE_STRING_SIMPLE("@property-write").caseCompare(next, 0) == 0) {

			// example line: @property string $nameString a string version of a name
			// will be lenient and allow the reverse var then type
			// @property $nameString string
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			FillNameOrType(next, memberName, memberType);
			if (!next) {
				break;
			}
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			FillNameOrType(next, memberName, memberType);
			if (!memberName.isEmpty() && !memberType.isEmpty()) {

				// handles namespaces in the magic properties
				memberType = PhpDocTypeToAbsoluteClassname(memberType);
				Member->PropertyFound(currentNamespaceName, currentClassName, memberName, memberType, UNICODE_STRING_SIMPLE(""),
				                      pelet::TokenClass::PUBLIC, false, false, lineNumber);
				memberName.remove();
				memberType.remove();
			}
			if (!next) {
				break;
			}
		} else if (UNICODE_STRING_SIMPLE("@method").caseCompare(next, 0) == 0) {

			// example line:  @method Integer getAge() getAge(int $int1, int $int2) returns the person's age
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			if (!next) {
				break;
			}
			memberType.setTo(next);
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			if (!next) {
				break;
			}
			memberName.setTo(next);

			// add the 'function' to keep the sig consistent with the other notify method
			UnicodeString signature = UNICODE_STRING_SIMPLE("public function ");

			// keep reading next tokens for the signature; stop when we encounter a closing parenthesis
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			while (next) {
				signature.append(next);
				size_t len = u_strlen(next);
				if (')' == next[len - 1]) {
					break;
				}

				// put this after the break so that we dont put a space at the end of the sig
				signature.append(UNICODE_STRING_SIMPLE(" "));
				next = u_strtok_r(NULL, delimsBuffer, &saveState);
			}
			if (!memberName.isEmpty() && !memberType.isEmpty()) {
				if (memberName.endsWith(UNICODE_STRING_SIMPLE("()"))) {
					memberName.remove(memberName.length() - 2, 2);
				}

				// handles namespaces in the magic properties
				memberType = PhpDocTypeToAbsoluteClassname(memberType);
				Member->MethodFound(currentNamespaceName, currentClassName, memberName, signature, memberType, UNICODE_STRING_SIMPLE(""),
				                    pelet::TokenClass::PUBLIC, false, lineNumber);
			}
			if (!next) {
				break;
			}
		} else {
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
		}
	}
	delete[] buf;
	delete[] delimsBuffer;
}

pelet::SemanticValueClass* pelet::ObserverQuadClass::SemanticValueInit() {
	/*if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return NULL;
	}
	if (!DoCollectExpressions) {
		return NULL;
	}*/
	
	pelet::SemanticValueClass* value = new pelet::SemanticValueClass;
	AllAstItems.push_back(value);
	value->Token = 0;
	value->Lexeme = NULL;
	value->Comment = NULL;
	value->Pos = 0;
	
	UnicodeString* lexeme = new UnicodeString();
	UnicodeString* comment = new UnicodeString();
	value->Lexeme = lexeme;
	value->Comment = comment;
	AllValues.push_back(lexeme);
	AllValues.push_back(comment);
	
	return value;
}

void pelet::ObserverQuadClass::SemanticValueFree() {
	for (size_t i = 0; i < AllValues.size(); ++i) {
		delete AllValues[i];
	}
	AllValues.clear();
	
	for (size_t i = 0; i < AllAstItems.size(); ++i) {
		delete AllAstItems[i];
	}
	AllAstItems.clear();
}

/**
void pelet::ObserverQuadClass::ClassStart(pelet::SemanticValueClass* commentValue, bool isAbstract,
											  bool isFinal, bool isInterface, bool isTrait) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentClass.Clear();

	// comment is attached to the first modifier
	// see php53lex() function
	CurrentClass.AppendToComment(commentValue);
	CurrentClass.IsAbstract = isAbstract;
	CurrentClass.IsFinal = isFinal;
	CurrentClass.IsInterface = isInterface;
	CurrentClass.IsTrait = isTrait;
}

void pelet::ObserverQuadClass::ClassSetName(SemanticValueClass* nameValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentClass.GrabClassName(nameValue);
}

void pelet::ObserverQuadClass::ClassSetExtends() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentClass.ExtendsFrom = AbsoluteNamespaceClass(CurrentQualifiedName);
}

void pelet::ObserverQuadClass::ClassAddToImplements() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentClass.ImplementsList.push_back(AbsoluteNamespaceClass(CurrentQualifiedName));
	CurrentQualifiedName.Clear();
}


void pelet::ObserverQuadClass::ClassFound(const int lineNumber) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Class) {
		Class->ClassFound(CurrentNamespace.ToAbsoluteSignature(), CurrentClassName, CurrentClass.ToSignature(), CurrentClass.Comment, lineNumber);
	}
	if (Member) {
		NotifyMagicMethodsAndProperties(CurrentClass.Comment, lineNumber);
	}
	CurrentMember.Clear();
}

void pelet::ObserverQuadClass::ClassEnd(const int lineNumber, pelet::SemanticValueClass* value) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Class) {
		Class->ClassEnd(CurrentNamespace.ToAbsoluteSignature(), CurrentClassName, value->Pos);
	}
	CurrentClass.Clear();
}

void pelet::ObserverQuadClass::ClassMemberFound(bool isProperty, const int lineNumber) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	

	if (Member && isProperty) {
		UnicodeString propType = ReturnTypeFromPhpDocComment(comment, true);
		
	}
	
	// when encountering methods; 'skip' the method body if at all possible
	if (!isProperty) {
		DoCollectExpressions = Variable || ExpressionObserver;
	}
	else {
		DoCollectExpressions = true;
	}
}

void pelet::ObserverQuadClass::ClassMethodEnd(pelet::SemanticValueClass* value) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Member) {
		Member->MethodEnd(CurrentNamespace.ToAbsoluteSignature(), CurrentClassName, CurrentMemberName, value->Pos);
	}
	CurrentMember.Clear();
	CurrentParametersList.Clear();
	DoCollectExpressions = true;
}
*/

/***
void pelet::ObserverQuadClass::NamespaceDeclarationFound(pelet::QualifiedNameClass* namespaceName) {
	Namespace = *namespaceName;
	QualifiedNameClear();
	NamespaceAliasClear();
	if (Class) {
		Class->NamespaceDeclarationFound(CurrentNamespace.ToAbsoluteSignature());
	}
}

void pelet::ObserverQuadClass::NamespaceGlobalDeclarationFound() {
	QualifiedNameClear();
	NamespaceAliasClear();
	CurrentNamespace.Clear();
	CurrentQualifiedName.Clear();

	if (Class) {
		Class->NamespaceDeclarationFound(CurrentNamespace.ToAbsoluteSignature());
	}
}

void pelet::ObserverQuadClass::NamespaceUse() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	UnicodeString fullyQualifiedNamespace = CurrentQualifiedName.ToAbsoluteSignature();
	int32_t index = fullyQualifiedCurrentNamespace.lastIndexOf(UNICODE_STRING_SIMPLE("\\"));

	//by default alias is the last part of the namespace name
	UnicodeString alias;
	if (index >= 0) {
		alias.setTo(fullyQualifiedNamespace, index + 1);
	}

	// dont worry about duplicate aliases, since its incorrect PHP
	NamespaceAliases[alias] = fullyQualifiedNamespace;
	if (Class) {
		Class->NamespaceUseFound(fullyQualifiedNamespace, alias);
	}
}

void pelet::ObserverQuadClass::NamespaceUseAlias(pelet::SemanticValueClass* namespaceAlias) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	UnicodeString fullyQualifiedNamespace = CurrentQualifiedName.ToAbsoluteSignature();
	UnicodeString alias;
	if (namespaceAlias.Lexeme) {
		alias = *namespaceAlias.Lexeme;
	}

	// dont worry about duplicate aliases, since its incorrect PHP
	NamespaceAliases[alias] = fullyQualifiedNamespace;

	if (Class) {
		Class->NamespaceUseFound(fullyQualifiedNamespace, alias);
	}
}

void pelet::ObserverQuadClass::NamespaceUseAbsolute() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	UnicodeString fullyQualifiedNamespace = CurrentQualifiedName.ToAbsoluteSignature();
	int32_t index = fullyQualifiedCurrentNamespace.lastIndexOf(UNICODE_STRING_SIMPLE("\\"));

	//by default alias is the last part of the namespace name
	UnicodeString alias;
	if (index >= 0) {
		alias.setTo(fullyQualifiedNamespace, index + 1);
	}

	// dont worry about duplicate aliases, since its incorrect PHP
	NamespaceAliases[alias] = fullyQualifiedNamespace;
	if (Class) {
		Class->NamespaceUseFound(fullyQualifiedNamespace, alias);
	}
}

void pelet::ObserverQuadClass::NamespaceUseAbsoluteAlias(pelet::SemanticValueClass* namespaceAlias) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	UnicodeString fullyQualifiedNamespace = CurrentQualifiedName.ToAbsoluteSignature();
	UnicodeString alias;
	if (namespaceAlias.Lexeme) {
		alias = *namespaceAlias.Lexeme;
	}

	// dont worry about duplicate aliases, since its incorrect PHP
	NamespaceAliases[alias] = fullyQualifiedNamespace;
	if (Class) {
		Class->NamespaceUseFound(fullyQualifiedNamespace, alias);
	}
}

void pelet::ObserverQuadClass::NamespaceConstantFound(const pelet::SemanticValueClass* nameValue, const int lineNumber) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Class) {
		Class->DefineDeclarationFound(CurrentNamespace.ToAbsoluteSignature(), *nameValue->Lexeme, UNICODE_STRING_SIMPLE(""),
			*nameValue->Comment, lineNumber);
	}
}

void pelet::ObserverQuadClass::DefineFound(const pelet::ExpressionClass& nameSymbol, const pelet::ExpressionClass& valueSymbol, const UnicodeString& comment, const int lineNumber) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Class) {
		Class->DefineDeclarationFound(CurrentNamespace.ToAbsoluteSignature(), nameSymbol.Lexeme, valueSymbol.Lexeme, comment, lineNumber);
	}
}

void pelet::ObserverQuadClass::IncludeFound(const int lineNumber) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Class) {
		if (!ExpressionVariables.empty()) {

			// ExpressionVariables is filled when a variable is parsed
			pelet::ExpressionClass expr = ExpressionVariables[0];
			
	}
}

void pelet::ObserverQuadClass::FunctionStart(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* referenceValue, pelet::SemanticValueClass* commentValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.Clear();
	CurrentMember.SetNameAndReturnReference(nameValue, referenceValue, commentValue);

	// the keyword 'function' will always be attached to the comment
	// see php53lex() function
	CurrentMember.IsReturnReference = ('&' == referenceValue.Token);
	CurrentParametersList.Clear();
}

void pelet::ObserverQuadClass::FunctionFound(const int lineNumber) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	UnicodeString functionName = CurrentMemberName;
	
	if (Function) {
		Function->FunctionFound(CurrentNamespace.ToAbsoluteSignature(), functionName, signature, returnType, comment, lineNumber);
	}
	NotifyVariablesFromParameterList();
	DoCollectExpressions = Variable || ExpressionObserver;
}

void pelet::ObserverQuadClass::CreateParameterWithOptionalClassName() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentParametersList.CreateWithOptionalType(AbsoluteNamespaceClass(CurrentQualifiedName));
	CurrentQualifiedName.Clear();

}

void pelet::ObserverQuadClass::FunctionEnd(pelet::SemanticValueClass* value) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Function) {
		Function->FunctionEnd(CurrentNamespace.ToAbsoluteSignature(), CurrentMemberName, value->Pos);
	}
	CurrentMember.Clear();
	CurrentParametersList.Clear();
	DoCollectExpressions = true;
}

void pelet::ObserverQuadClass::AssignmentExpressionFound() {
	if (!DoCollectExpressions) {
		return;
	}
	if (ExpressionVariables.size() < (size_t)2) {
		return;
	}
	pelet::SymbolClass symbol;

	// the first variable is the name of the variable
	// the second variable has the value
	pelet::ExpressionClass dest = ExpressionVariables[0];
	pelet::ExpressionClass src = ExpressionVariables[1];
	symbol.Comment = dest.Comment;
	symbol.Lexeme = dest.Lexeme;
	symbol.ChainList.insert(symbol.ChainList.end(), src.ChainList.begin(), src.ChainList.end());
	if (pelet::ExpressionClass::ARRAY == src.Type) {
		symbol.Type = pelet::SymbolClass::ARRAY;
	}
	else if (pelet::ExpressionClass::FUNCTION_CALL == src.Type) {
		symbol.Type = pelet::SymbolClass::OBJECT;
	}
	else if (pelet::ExpressionClass::NEW_CALL == src.Type) {
		symbol.Type = pelet::SymbolClass::OBJECT;
	}
	else if (pelet::ExpressionClass::SCALAR == src.Type) {
		symbol.Type = pelet::SymbolClass::PRIMITIVE;
	}
	else if (pelet::ExpressionClass::UNKNOWN == src.Type) {
		symbol.Type = pelet::SymbolClass::UNKNOWN;
	}
	else if (pelet::ExpressionClass::VARIABLE == src.Type) {
		symbol.Type = pelet::SymbolClass::OBJECT;
	}
	UnicodeString className = CurrentClassName;
	UnicodeString functionName = CurrentMemberName;
	UnicodeString comment = symbol.Comment;

	// no need to announce class members; they are already taken care of
	// by the ClassMember observer
	if (Variable && symbol.Lexeme.caseCompare(UNICODE_STRING_SIMPLE("$this"), 0) != 0) {
		Variable->VariableFound(CurrentNamespace.ToAbsoluteSignature(), className, functionName, symbol, comment);
	}
	ExpressionVariables.clear();
}

void pelet::ObserverQuadClass::ExceptionCatchFound(pelet::SemanticValueClass* variableValue) {
	if (!DoCollectExpressions) {
		return;
	}
	CurrentExpression.Name = CurrentQualifiedName;
	if (variableValue->Lexeme) {
		CurrentExpression.Lexeme = *variableValue->Lexeme;
	}
	pelet::SymbolClass symbol;
	symbol.SetToObject();
	symbol.Lexeme = CurrentExpression.Lexeme;
	symbol.Comment = CurrentExpression.Comment;
	UnicodeString name = AbsoluteNamespaceClass(CurrentExpression.Name);
	if (!name.isEmpty()) {
		symbol.ChainList.push_back(name);
	}
	if (Variable) {
		Variable->VariableFound(CurrentNamespace.ToAbsoluteSignature(), CurrentClassName, CurrentMemberName, symbol, symbol.Comment);
	}
}

void pelet::ObserverQuadClass::GlobalVariableFound(pelet::SemanticValueClass* variableValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Variable && variableValue->Lexeme) {
		CurrentExpression.Lexeme = *variableValue->Lexeme;
		pelet::SymbolClass symbol;
		symbol.SetToObject();
		symbol.Lexeme = CurrentExpression.Lexeme;
		symbol.Comment = CurrentExpression.Comment;
		Variable->VariableFound(CurrentNamespace.ToAbsoluteSignature(), CurrentClassName, CurrentMemberName, symbol, symbol.Comment);
	}
}

void pelet::ObserverQuadClass::ForeachVariableFound() {
	if (!DoCollectExpressions) {
		return;
	}
	if (Variable && !ExpressionVariables.empty()) {
		pelet::ExpressionClass expr = ExpressionVariables.back();
		pelet::SymbolClass symbol;
		symbol.SetToObject();
		symbol.Lexeme = expr.Lexeme;
		symbol.Comment = expr.Comment;
		Variable->VariableFound(CurrentNamespace.ToAbsoluteSignature(), CurrentClassName, CurrentMemberName, symbol, symbol.Comment);
	}
}

void pelet::ObserverQuadClass::StaticVariableFound(pelet::SemanticValueClass* variableValue) {
	if (!DoCollectExpressions) {
		return;
	}
	if (Variable && variableValue->Lexeme) {
		CurrentExpression.Lexeme = *variableValue->Lexeme;
		pelet::SymbolClass symbol;
		symbol.SetToObject();
		symbol.Lexeme = CurrentExpression.Lexeme;
		symbol.Comment = CurrentExpression.Comment;
		Variable->VariableFound(CurrentNamespace.ToAbsoluteSignature(), CurrentClassName, CurrentMemberName, symbol, symbol.Comment);
	}
}

void pelet::ObserverQuadClass::ExpressionPushNewScalar(pelet::SemanticValueClass* value) {
	if (!DoCollectExpressions) {
		return;
	}
	pelet::ExpressionClass expr;
	expr.Type = pelet::ExpressionClass::SCALAR;
	if (value->Lexeme) {
		expr.Lexeme = *value->Lexeme;
		ExpressionVariables.push_back(expr);
	}
}

void pelet::ObserverQuadClass::ExpressionPushNewArray(pelet::SemanticValueClass* value) {
	if (!DoCollectExpressions) {
		return;
	}
	pelet::ExpressionClass expr;
	CurrentExpression.Type = pelet::ExpressionClass::ARRAY;
	if (value->Lexeme) {
		expr.Lexeme = *value->Lexeme;
		ExpressionVariables.push_back(expr);
	}
}

void pelet::ObserverQuadClass::ExpressionPushNewVariable(pelet::SemanticValueClass* value) {
	if (!DoCollectExpressions) {
		return;
	}
	pelet::ExpressionClass expr;
	expr.Type = pelet::ExpressionClass::VARIABLE;
	if (value->Lexeme) {
		expr.Lexeme = *value->Lexeme;
	}
	if (value->Comment) {
		expr.Comment = *value->Comment;
	}
	UnicodeString name = expr.Lexeme;
	if (!name.isEmpty()) {
		expr.ChainList.push_back(name);
	}
	ExpressionVariables.push_back(expr);
}

void pelet::ObserverQuadClass::ExpressionPushNewInstanceCall() {
	if (!DoCollectExpressions) {
		return;
	}
	pelet::ExpressionClass expr;
	expr.Type = pelet::ExpressionClass::NEW_CALL;
	expr.Name = CurrentQualifiedName;
	UnicodeString name = AbsoluteNamespaceClass(expr.Name);
	if (!name.isEmpty()) {
		expr.ChainList.push_back(name);
	}
	ExpressionVariables.push_back(expr);
}

void pelet::ObserverQuadClass::ExpressionPushNewUnknown(pelet::SemanticValueClass* value) {
	if (!DoCollectExpressions) {
		return;
	}
	pelet::ExpressionClass expr;
	expr.Type = pelet::ExpressionClass::UNKNOWN;
	if (value->Lexeme) {
		expr.Lexeme = *value->Lexeme;
	}
	if (value->Comment) {
		expr.Comment = *value->Comment;
	}
	UnicodeString name = CurrentExpression.Lexeme;
	if (!name.isEmpty()) {
		expr.ChainList.push_back(name);
	}
	ExpressionVariables.push_back(expr);
}

void pelet::ObserverQuadClass::CurrentExpressionPushAsVariable(pelet::SemanticValueClass* value) {
	if (!DoCollectExpressions) {
		return;
	}
	pelet::ExpressionClass expr;
	expr.Type = pelet::ExpressionClass::VARIABLE;
	if (value->Lexeme) {
		expr.Lexeme = *value->Lexeme;
	}
	if (value->Comment) {
		expr.Comment = *value->Comment;
	}
	UnicodeString name = expr.Lexeme;
	if (!name.isEmpty()) {
		expr.ChainList.push_back(name);
	}
	ExpressionVariables.push_back(expr);
}

void pelet::ObserverQuadClass::ExpressionPop() {
	if (!DoCollectExpressions) {
		return;
	}
	if (!ExpressionVariables.empty()) {
		ExpressionVariables.pop_back();
	}
}

void pelet::ObserverQuadClass::CurrentExpressionAppendToChain(SemanticValueClass* operatorValue, SemanticValueClass* propertyValue, bool isMethod) {
	if (!DoCollectExpressions) {
		return;
	}
	if (!ExpressionVariables.empty()) {
		ExpressionVariables.back().AppendToChain(operatorValue, propertyValue, isMethod);

		if (isMethod) {
			ExpressionVariables.back().CallArguments = CurrentFunctionCallExpression.CallArguments;
		}
	}
}

void pelet::ObserverQuadClass::FunctionCallStart() {
	if (!Class && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentFunctionCallExpression.Clear();
	CurrentFunctionCallExpression.Name = CurrentQualifiedName;
	CurrentFunctionCallExpression.Type = pelet::ExpressionClass::FUNCTION_CALL;
}

void pelet::ObserverQuadClass::FunctionCallEnd(const int lineNumber) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (CurrentFunctionCallExpression.CallArguments.size() == (size_t)2) {
		if (CurrentFunctionCallExpression.Name.ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
			DefineFound(CurrentFunctionCallExpression.CallArguments[0],
				CurrentFunctionCallExpression.CallArguments[1],
				CurrentFunctionCallExpression.Name.Comment, lineNumber);
		}
	}
}

void pelet::ObserverQuadClass::ExpressionAsCallArgument() {
	if (!DoCollectExpressions) {
		return;
	}
	if (!ExpressionVariables.empty()) {
		CurrentFunctionCallExpression.CallArguments.push_back(ExpressionVariables.back());

		// remove from ExpressionVariables we wont place function arguments
		// as "regular" variables because we dont want function arguments to
		// trigger VariableFound notifications.
		// for example the expression
		//
		// $newUser = fix($user)
		//
		// should generate only 1 VariableFound notification for the $newUser variable
		ExpressionVariables.pop_back();
	}
}

void pelet::ObserverQuadClass::CurrentExpressionPushAsFunctionCall() {
	if (!DoCollectExpressions) {
		return;
	}
	pelet::ExpressionClass expr;
	expr.Type = pelet::ExpressionClass::VARIABLE;
	expr.Name = CurrentFunctionCallExpression.Name;
	expr.Comment = CurrentFunctionCallExpression.Comment;
	expr.CallArguments = CurrentFunctionCallExpression.CallArguments;

	UnicodeString name = AbsoluteNamespaceClass(expr.Name);
	if (!name.isEmpty()) {
		expr.ChainList.push_back(name + UNICODE_STRING_SIMPLE("()"));
		ExpressionVariables.push_back(expr);
	}
}

void pelet::ObserverQuadClass::CurrentExpressionAsStaticMember(pelet::SemanticValueClass* scopeOperatorValue) {
	if (!DoCollectExpressions) {
		return;
	}
	if (ExpressionObserver && !ExpressionVariables.empty()) {

		// static member is the variable in CurrentExpression
		// the class name itself is in the QualifiedName
		// this is called right after the variable is parsed, so
		// ChainList will have the variable name as its first element
		pelet::ExpressionClass& expr = ExpressionVariables.back();
		if (!expr.ChainList.empty() && scopeOperatorValue->Lexeme) {
			expr.ChainList[0] = *scopeOperatorValue->Lexeme + expr.Lexeme;
			expr.ChainList.insert(expr.ChainList.begin(), CurrentQualifiedName.ToSignature());
			expr.Lexeme = CurrentQualifiedName.ToSignature();
			expr.Name = CurrentQualifiedName;
		}
	}
}

void pelet::ObserverQuadClass::CurrentExpressionPushAsClassConstant(pelet::SemanticValueClass* scopeOperatorValue,
										 pelet::SemanticValueClass* constantNameValue) {
	if (!DoCollectExpressions) {
		return;
	}
	if (scopeOperatorValue->Lexeme && constantNameValue->Lexeme) {
		pelet::ExpressionClass expr;
		expr.Name = CurrentQualifiedName;
		expr.Lexeme = CurrentQualifiedName.ToSignature();
		expr.ChainList.push_back(CurrentQualifiedName.ToSignature());
		expr.ChainList.push_back(*scopeOperatorValue->Lexeme + *constantNameValue->Lexeme);
		ExpressionVariables.push_back(expr);
	}
}

void pelet::ObserverQuadClass::ClearExpressions() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentExpression.Clear();
	CurrentFunctionCallExpression.Clear();
	ExpressionVariables.clear();
	CurrentQualifiedName.Clear();
}
*/

/***
void pelet::ObserverQuadClass::ExpressionFound() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (!ExpressionObserver) {
		return;
	}
	pelet::ExpressionClass expr;
	if (!ExpressionVariables.empty()) {

		// ExpressionVariables is filled when a variable is parsed
		expr = ExpressionVariables[0];
		expr.Name = CurrentQualifiedName;
		ExpressionObserver->ExpressionFound(expr);
	}
	else {

		// CurrentQualifiedName is parsed when the expression is just a class name
		// for example, the statement "MyClass;";
		expr.Name = CurrentQualifiedName;
		ExpressionObserver->ExpressionFound(expr);
	}
}
*/

/***
void pelet::ObserverQuadClass::QualifiedNameClear() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentQualifiedName.Clear();
}

void pelet::ObserverQuadClass::QualifiedNameGrabNameAndComment(pelet::SemanticValueClass* nameValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentQualifiedName.GrabNameAndComment(nameValue);
}

void pelet::ObserverQuadClass::QualifiedNameAddName(pelet::SemanticValueClass* nameValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentQualifiedName.AddName(nameValue);
}

void pelet::ObserverQuadClass::QualifiedNameMakeAbsolute() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentQualifiedName.MakeAbsolute();
}

void pelet::ObserverQuadClass::ParametersListSetName(pelet::SemanticValueClass* nameValue, bool isReference) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentParametersList.SetName(nameValue, isReference);
	CurrentQualifiedName.Clear();
}

void pelet::ObserverQuadClass::ParametersListCreate() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentQualifiedName.Clear();
	CurrentParametersList.Create();
}

void pelet::ObserverQuadClass::ParametersListCreateWithOptionalType(pelet::SemanticValueClass* typeValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentParametersList.CreateWithOptionalType(typeValue);
}

void pelet::ObserverQuadClass::ClassMemberClear() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.Clear();
}

void pelet::ObserverQuadClass::ClassMemberSetNameAndReturnReference(SemanticValueClass* nameValue, SemanticValueClass* referenceValue,
																		SemanticValueClass* functionValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.SetNameAndReturnReference(nameValue, referenceValue, functionValue);
}

void pelet::ObserverQuadClass::ClassMemberSetAsPublic() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.SetAsPublic();
}

void pelet::ObserverQuadClass::ClassMemberSetAsProtected() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.SetAsProtected();
}

void pelet::ObserverQuadClass::ClassMemberSetAsPrivate() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.SetAsPrivate();
}

void pelet::ObserverQuadClass::ClassMemberSetAsStatic() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.IsStaticMember = true;
}

void pelet::ObserverQuadClass::ClassMemberSetAsAbstract() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.IsAbstractMember = true;
}

void pelet::ObserverQuadClass::ClassMemberSetAsFinal() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.IsFinalMember = true;
}

void pelet::ObserverQuadClass::ClassMemberSetAsConst(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.SetAsConst(nameValue, commentValue);
}

void pelet::ObserverQuadClass::ClassMemberAppendToComment(pelet::SemanticValueClass* commentValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.AppendToComment(commentValue);
}
*/

int NextSemanticValue(pelet::ParserType* value, pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers) {
	int ret = analyzer.NextToken();
	value->semanticValue = observers.SemanticValueInit();

	// ignore these token; there are no parse rules for them
	if (pelet::T_OPEN_TAG == ret) {
		ret = analyzer.NextToken();
	}

	// optimization: SemanticValueInit() method knows when we need to examine
	// comments and will allocate memory only when needed
	pelet::SemanticValueClass commentValue;
	UnicodeString comment;
	UnicodeString lexeme;
	
	// should be OK since SemanticValue does not own the pointers
	commentValue.Comment = &comment;
	commentValue.Lexeme = &lexeme;
	if (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {

		// advance past all comments (there can be more than one consecutive)
		// keep /** and /* comments separate; we only want /* comments to
		// get type hints for local varibles
		while (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {
			if (pelet::T_DOC_COMMENT == ret && value->semanticValue->Comment) {
				analyzer.GetLexeme(*value->semanticValue->Comment);
			} else if (pelet::T_COMMENT == ret && commentValue.Comment) {
				analyzer.GetLexeme(*commentValue.Comment);
			}
			ret = analyzer.NextToken();
		}
	}
	if (commentValue.Comment && !commentValue.Comment->isEmpty()) {
		observers.NotifyLocalVariableTypeHint(*commentValue.Comment);
	}
	if (pelet::T_CLOSE_TAG == ret) {
		ret = ';';
	}
	value->semanticValue->Token = ret;
	if (value->semanticValue->Lexeme) {
		analyzer.GetLexeme(*value->semanticValue->Lexeme);
	}
	value->semanticValue->Pos = analyzer.GetCharacterPosition();
	value->semanticValue->LineNumber = analyzer.GetLineNumber();	
	return ret;
}

void GrammarError(pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers, std::string msg) {
	int capacity = msg.length() + 1;
	int written = u_sprintf(analyzer.ParserError.getBuffer(capacity), "%s", msg.c_str());
	analyzer.ParserError.releaseBuffer(written);
	observers.SemanticValueFree();
}

pelet::ExpressionClass* pelet::ObserverQuadClass::AssignmentExpressionFromExpressionFound(pelet::ExpressionClass* variable, pelet::ExpressionClass* expression) {
	
	// TODO make a special kind of assignment expression with its own src and dest so that it is easier to understand what the variable is
	pelet::ExpressionClass* newExpr =  new pelet::ExpressionClass();
	newExpr->Type = pelet::StatementClass::ASSIGNMENT;
	newExpr->Comment = variable->Comment;
	newExpr->Lexeme = variable->Lexeme;
	
	newExpr->ExpressionType = expression->ExpressionType;
	newExpr->Name = expression->Name;
	newExpr->NamespaceScope = CurrentNamespace.ToAbsoluteSignature();
	newExpr->ClassScope = CurrentClassName;
	newExpr->MethodScope = CurrentMemberName;
	for (size_t i = 0; i < expression->ChainList.size(); ++i) {
		newExpr->ChainList.push_back(expression->ChainList[i]);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::AssignmentExpressionFromNewFound(pelet::ExpressionClass* variable, pelet::QualifiedNameClass* className) {
	
	// TODO make a special kind of assignment expression with its own src and dest so that it is easier to understand what the variable is
	pelet::ExpressionClass* newExpr =  new pelet::ExpressionClass();
	newExpr->Type = pelet::StatementClass::ASSIGNMENT;
	newExpr->Comment = variable->Comment;
	newExpr->ExpressionType = pelet::ExpressionClass::NEW_CALL;
	newExpr->Lexeme = variable->Lexeme;
	newExpr->Name = *className;
	newExpr->ChainList.push_back(AbsoluteNamespaceClass(*className));
	newExpr->NamespaceScope = CurrentNamespace.ToAbsoluteSignature();
	newExpr->ClassScope = CurrentClassName;
	newExpr->MethodScope = CurrentMemberName;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::AssignmentExpressionFromVariableFound(pelet::ExpressionClass* variable, pelet::ExpressionClass* srcVariable) {

	// TODO make a special kind of assignment expression with its own src and dest so that it is easier to understand what the variable is
	pelet::ExpressionClass* newExpr =  new pelet::ExpressionClass();
	newExpr->Type = pelet::StatementClass::ASSIGNMENT;
	newExpr->Comment = srcVariable->Comment;
	newExpr->ExpressionType = srcVariable->ExpressionType;
	newExpr->Lexeme = srcVariable->Lexeme;
	newExpr->Name = srcVariable->Name;
	newExpr->NamespaceScope = CurrentNamespace.ToAbsoluteSignature();
	newExpr->ClassScope = CurrentClassName;
	newExpr->MethodScope = CurrentMemberName;
	for (size_t i = 0; i < srcVariable->ChainList.size(); ++i) {
		newExpr->ChainList.push_back(srcVariable->ChainList[i]);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
	
}

pelet::ClassMemberSymbolClass* pelet::ObserverQuadClass::ClassMemberSymbolMake(pelet::SemanticValueClass* varValue) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->Type = pelet::StatementClass::METHOD_DECLARATION;
	if (varValue && varValue->Comment) {
		newMember->Comment = *varValue->Comment;
		newMember->StartingLineNumber = varValue->LineNumber;
	}
	newMember->IsAbstractMember = varValue && pelet::T_ABSTRACT == varValue->Token;
	newMember->IsFinalMember = varValue && pelet::T_FINAL == varValue->Token;
	newMember->IsConstMember = varValue && pelet::T_CONST == varValue->Token;
	newMember->IsStaticMember = varValue && pelet::T_STATIC == varValue->Token;
	if (varValue && pelet::T_PUBLIC == varValue->Token) {
		newMember->SetAsPublic();
	}
	else if (varValue && pelet::T_PROTECTED == varValue->Token) {
		newMember->SetAsProtected();
	}
	else if (varValue && pelet::T_PRIVATE == varValue->Token) {
		newMember->SetAsPrivate();
	}	
	AllAstItems.push_back(newMember);
	return newMember;
}

pelet::ClassMemberSymbolClass* pelet::ObserverQuadClass::ClassMemberSymbolMakeAsPublicVariable(pelet::SemanticValueClass* varValue) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->Type = pelet::StatementClass::PROPERTY_DECLARATION;
	newMember->SetNameAndReturnReference(varValue, false, varValue);
	newMember->ClassName = CurrentClassName;
	newMember->SetAsPublic();
	newMember->StartingLineNumber = varValue->LineNumber;
	AllAstItems.push_back(newMember);
	return newMember;
}

pelet::StatementListClass* pelet::ObserverQuadClass::ClassMemberSymbolMakeFunction(pelet::SemanticValueClass* nameValue, bool isReference, 
		pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters, const int endingPosition) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->Type = pelet::StatementClass::FUNCTION_DECLARATION;
	newMember->SetNameAndReturnReference(nameValue, isReference, functionValue);
	newMember->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
	newMember->ClassName = CurrentClassName;
	if (parameters) {
		newMember->ParametersList = *parameters;
	}
	newMember->StartingLineNumber = nameValue->LineNumber;
	newMember->EndingPosition = endingPosition;
	AllAstItems.push_back(newMember);
	return StatementListMakeAndAppend(newMember);
}

pelet::StatementListClass* pelet::ObserverQuadClass::ClassMemberSymbolMakeMethod(pelet::SemanticValueClass* nameValue, pelet::ClassMemberSymbolClass* modifiers, 
		bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters, const int endingPosition) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->Type = pelet::StatementClass::METHOD_DECLARATION;
	newMember->SetNameAndReturnReference(nameValue, isReference, functionValue);
	newMember->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
	newMember->ClassName = CurrentClassName;
	if (parameters) {
		newMember->ParametersList = *parameters;
	}
	newMember->IsAbstractMember = modifiers->IsAbstractMember;
	newMember->IsFinalMember = modifiers->IsFinalMember;
	newMember->IsConstMember = modifiers->IsConstMember;
	newMember->IsStaticMember = modifiers->IsStaticMember;
	
	// comment can only be attached to the modifiers or the function keyword
	// the method may not have any modifiers
	if (newMember->Comment.isEmpty() && !modifiers->Comment.isEmpty()) {
		newMember->Comment = modifiers->Comment;
	}
	if (modifiers->IsPublicMember) {
		newMember->SetAsPublic();
	}
	if (modifiers->IsProtectedMember) {
		newMember->SetAsProtected();
	}
	if (modifiers->IsPrivateMember) {
		newMember->SetAsPrivate();
	}
	newMember->StartingLineNumber = nameValue->LineNumber;
	newMember->EndingPosition = endingPosition;
	AllAstItems.push_back(newMember);
	return StatementListMakeAndAppend(newMember);
}

pelet::StatementListClass* pelet::ObserverQuadClass::ClassMemberSymbolMakeVariable(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue, 
		bool isConstant, const int startingLineNumber) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->Type = pelet::StatementClass::PROPERTY_DECLARATION;
	if (isConstant) {
		newMember->SetAsConst(nameValue, commentValue);
	}
	else {
		newMember->SetNameAndReturnReference(nameValue, false, commentValue);
	}
	newMember->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
	newMember->ClassName = CurrentClassName;
	newMember->SetAsPublic();
	
	newMember->StartingLineNumber = startingLineNumber;
	if (nameValue->Lexeme) {
		newMember->EndingPosition = nameValue->Pos + nameValue->Lexeme->length();
	}
	AllAstItems.push_back(newMember);
	return StatementListMakeAndAppend(newMember);
}

pelet::StatementListClass* pelet::ObserverQuadClass::ClassMemberSymbolMakeVariables(pelet::StatementListClass* variableStatements, pelet::ClassMemberSymbolClass* modifiers) {
	
	// set the modifiers on all of the given property declarations
	for (size_t i = 0; i < variableStatements->Size(); ++i) {
		pelet::StatementClass::Types type = variableStatements->TypeAt(i);
		if (pelet::StatementClass::PROPERTY_DECLARATION == type) {
			pelet::ClassMemberSymbolClass* member = (pelet::ClassMemberSymbolClass*)variableStatements->At(i);
			member->IsAbstractMember = modifiers->IsAbstractMember;
			member->IsFinalMember = modifiers->IsFinalMember;
			member->IsConstMember = modifiers->IsConstMember;
			member->IsStaticMember = modifiers->IsStaticMember;
			member->Comment = modifiers->Comment;
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

pelet::ClassMemberSymbolClass* pelet::ObserverQuadClass::ClassMemberSymbolSetModifier(pelet::ClassMemberSymbolClass* memberSymbol, pelet::SemanticValueClass* modifierValue) {
	memberSymbol->IsAbstractMember = pelet::T_ABSTRACT == modifierValue->Token;
	memberSymbol->IsFinalMember = pelet::T_FINAL == modifierValue->Token;
	memberSymbol->IsConstMember = pelet::T_CONST == modifierValue->Token;
	memberSymbol->IsStaticMember = pelet::T_STATIC == modifierValue->Token;
	if (pelet::T_PUBLIC == modifierValue->Token) {
		memberSymbol->SetAsPublic();
	}
	else if (pelet::T_PROTECTED == modifierValue->Token) {
		memberSymbol->SetAsProtected();
	}
	else if (pelet::T_PRIVATE == modifierValue->Token) {
		memberSymbol->SetAsPrivate();
	}
	return memberSymbol;
}

pelet::ClassSymbolClass* pelet::ObserverQuadClass::ClassSymbolAddToImplements(pelet::ClassSymbolClass* classSymbol, pelet::QualifiedNameClass* implementsClassName) {
	classSymbol->ImplementsList.push_back(AbsoluteNamespaceClass(*implementsClassName));
	return classSymbol;
}

pelet::ClassSymbolClass* pelet::ObserverQuadClass::ClassSymbolAddToImplements(pelet::QualifiedNameClass* implementsClassName) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	newClassSymbol->ImplementsList.push_back(AbsoluteNamespaceClass(*implementsClassName));
	AllAstItems.push_back(newClassSymbol);
	return newClassSymbol;
}

pelet::ClassSymbolClass* pelet::ObserverQuadClass::ClassSymbolExtends(pelet::QualifiedNameClass* extendsClassName) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	newClassSymbol->ExtendsFrom = AbsoluteNamespaceClass(*extendsClassName);
	AllAstItems.push_back(newClassSymbol);
	return newClassSymbol;
}

pelet::StatementListClass* pelet::ObserverQuadClass::ClassSymbolMake(pelet::SemanticValueClass* nameValue, pelet::ClassSymbolClass* classTypeSymbol, pelet::ClassSymbolClass* extendsSymbol, pelet::ClassSymbolClass* implementsSymbol, pelet::SemanticValueClass* endToken) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	newClassSymbol->GrabClassName(nameValue);
	newClassSymbol->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
	newClassSymbol->Comment = classTypeSymbol->Comment;
	newClassSymbol->IsAbstract = classTypeSymbol->IsAbstract;
	newClassSymbol->IsFinal = classTypeSymbol->IsFinal;
	newClassSymbol->IsInterface = classTypeSymbol->IsInterface;
	newClassSymbol->IsTrait = classTypeSymbol->IsTrait;
	
	if (extendsSymbol) {
		newClassSymbol->ExtendsFrom = extendsSymbol->ExtendsFrom;
	}
	newClassSymbol->ImplementsList = implementsSymbol->ImplementsList;
	
	newClassSymbol->StartingLineNumber = nameValue->LineNumber;
	newClassSymbol->EndingLineNumber = endToken->LineNumber;
	
	AllAstItems.push_back(newClassSymbol);
	return StatementListMakeAndAppend(newClassSymbol);
}

pelet::ClassSymbolClass* pelet::ObserverQuadClass::ClassSymbolStart(pelet::SemanticValueClass* commentValue, bool isAbstract, bool isFinal, bool isInterface, bool isTrait) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	if (commentValue) {
		newClassSymbol->AppendToComment(commentValue);
	}
	newClassSymbol->IsAbstract = isAbstract;
	newClassSymbol->IsFinal = isFinal;
	newClassSymbol->IsInterface = isInterface;
	newClassSymbol->IsTrait = isTrait;
	
	AllAstItems.push_back(newClassSymbol);
	return newClassSymbol;
}

pelet::StatementListClass* pelet::ObserverQuadClass::ConstantMake(pelet::SemanticValueClass* value, int lineNumber) {
	pelet::ConstantStatementClass* constant = new pelet::ConstantStatementClass();
	if (value->Lexeme) {
		constant->Name = *value->Lexeme;
	}
	if (value->Comment) {
		constant->Comment = *value->Comment;
	}
	constant->LineNumber = lineNumber;
	constant->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
	
	AllAstItems.push_back(constant);
	return StatementListMakeAndAppend(constant);
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionAppendToChain(pelet::ExpressionClass* expression, bool isMethod) {
	if (!expression->ChainList.empty() && isMethod) {
		expression->ChainList.back().append(UNICODE_STRING_SIMPLE("()"));
	}
	return expression;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionAppendToChain(pelet::ExpressionClass* variableProperties, pelet::ExpressionClass* newVariableProperty) {
	if (!newVariableProperty->ChainList.empty()) {
		variableProperties->ChainList.push_back(newVariableProperty->ChainList.front());
	}
	return variableProperties;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeArray(pelet::StatementListClass* pairStatements) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->ExpressionType = pelet::ExpressionClass::ARRAY;
	/** TODO populate the array keys [that are scalar strings]
	for (size_t i = 0; i < pairStatements->Size(); ++i) {
		pelet::StatementClass::Types type =  pairStatements->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* pairExpr = (pelet::ExpressionClass*) pairStatements->At(i);
			if (pelet::ExpressionClass::SCALAR == pairExpr->ExpressionType) {
				
			}
		}
	}
	*/
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeAssignmentList(pelet::StatementListClass* assignmentList) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->Type = pelet::StatementClass::ASSIGNMENT_LIST;
	newExpr->ExpressionType = pelet::ExpressionClass::ASSIGNMENT_LIST;
	newExpr->NamespaceScope = CurrentNamespace.ToAbsoluteSignature();
	newExpr->ClassScope = CurrentClassName;
	newExpr->MethodScope = CurrentMemberName;
	
	for (size_t i = 0; i < assignmentList->Size(); ++i) {
		pelet::StatementClass::Types type =  assignmentList->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) assignmentList->At(i);
			if (pelet::ExpressionClass::VARIABLE == singleExpr->ExpressionType && singleExpr->ChainList.size() <= 1) {
				newExpr->VariablesList.push_back(singleExpr->Lexeme);
			}
		}
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeClassConstant(pelet::QualifiedNameClass* className, pelet::SemanticValueClass* constantName) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->ExpressionType = pelet::ExpressionClass::FUNCTION_CALL;
	newExpr->Name = *className;
	newExpr->Lexeme = AbsoluteNamespaceClass(*className);
	newExpr->ChainList.push_back(AbsoluteNamespaceClass(*className));
	if (constantName->Lexeme) {
		newExpr->ChainList.push_back(UNICODE_STRING_SIMPLE("::") + *constantName->Lexeme);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeFunctionCall(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->ExpressionType = pelet::ExpressionClass::FUNCTION_CALL;
	
	// not sure how to resolve the namespace here; since a functions fallback to the root namespace
	newExpr->Name = *functionName;
	newExpr->ChainList.push_back(AbsoluteNamespaceClass(*functionName) + UNICODE_STRING_SIMPLE("()"));
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			newExpr->CallArguments.push_back(*singleExpr);
		}
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeFunctionCallFromAbsoluteNamespace(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->ExpressionType = pelet::ExpressionClass::FUNCTION_CALL;
	
	functionName->MakeAbsolute();
	newExpr->Name = *functionName;
	newExpr->ChainList.push_back(functionName->ToAbsoluteSignature() + UNICODE_STRING_SIMPLE("()"));
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			newExpr->CallArguments.push_back(*singleExpr);
		}
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeFunctionCallFromCurrentNamespace(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->ExpressionType = pelet::ExpressionClass::FUNCTION_CALL;
	
	// not sure how to resolve the namespace here; since a functions fallback to the root namespace
	newExpr->Name = *functionName;
	newExpr->ChainList.push_back(AbsoluteNamespaceClass(*functionName) + UNICODE_STRING_SIMPLE("()"));
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			newExpr->CallArguments.push_back(*singleExpr);
		}
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeGlobalVariable(pelet::SemanticValueClass* value) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->Type = pelet::StatementClass::ASSIGNMENT;
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	newExpr->NamespaceScope = CurrentNamespace.ToAbsoluteSignature();
	newExpr->ClassScope = CurrentClassName;
	newExpr->MethodScope = CurrentMemberName;	
	
	if (value->Lexeme) {
		newExpr->Lexeme = *value->Lexeme;
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeNewInstanceCall(pelet::QualifiedNameClass* className) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->ExpressionType = pelet::ExpressionClass::NEW_CALL;
	newExpr->Name = *className;
	newExpr->ChainList.push_back(AbsoluteNamespaceClass(*className));
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeNil() {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->Type = pelet::StatementClass::NIL;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeObject(pelet::ExpressionClass* srcExpression) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->Copy(*srcExpression);
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeScalar(pelet::ExpressionClass* srcExpression) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->Copy(*srcExpression);
	newExpr->ExpressionType = pelet::ExpressionClass::SCALAR;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeScalar(pelet::SemanticValueClass* srcValue) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->ExpressionType = pelet::ExpressionClass::SCALAR;
	if (srcValue->Comment) {
		newExpr->Comment = *srcValue->Comment;
	}
	if (srcValue->Lexeme) {
		newExpr->Lexeme = *srcValue->Lexeme;
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeScalarFromConstant(pelet::QualifiedNameClass* constantName) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->ExpressionType = pelet::ExpressionClass::FUNCTION_CALL;
	newExpr->Name = *constantName;
	newExpr->Lexeme = constantName->ToSignature();
	newExpr->ChainList.push_back(constantName->ToSignature());
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeStaticMember(pelet::QualifiedNameClass* className, pelet::ExpressionClass* memberName) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->ExpressionType = pelet::ExpressionClass::FUNCTION_CALL;
	newExpr->Name = *className;
	newExpr->Lexeme = AbsoluteNamespaceClass(*className);
	newExpr->ChainList.push_back(AbsoluteNamespaceClass(*className));
	if (!memberName->Lexeme.isEmpty() && pelet::ExpressionClass::VARIABLE == memberName->ExpressionType && memberName->ChainList.size() <= 1) {
		newExpr->ChainList.push_back(UNICODE_STRING_SIMPLE("::") + memberName->Lexeme);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;	
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeStaticMethodCall(pelet::QualifiedNameClass* className, pelet::SemanticValueClass* methodName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->ExpressionType = pelet::ExpressionClass::FUNCTION_CALL;
	newExpr->Name = *className;
	newExpr->ChainList.push_back(AbsoluteNamespaceClass(*className));
	if (methodName->Lexeme) {
		newExpr->ChainList.push_back(UNICODE_STRING_SIMPLE("::") + *methodName->Lexeme + UNICODE_STRING_SIMPLE("()"));
	}
	AllAstItems.push_back(newExpr);
	return newExpr;	
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeStaticVariable(pelet::SemanticValueClass* nameValue) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->Type = pelet::StatementClass::ASSIGNMENT;
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	newExpr->NamespaceScope = CurrentNamespace.ToAbsoluteSignature();
	newExpr->ClassScope = CurrentClassName;
	newExpr->MethodScope = CurrentMemberName;
	
	if (nameValue->Lexeme) {
		newExpr->Lexeme = *nameValue->Lexeme;
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeVariable(pelet::ExpressionClass* baseName, pelet::ExpressionClass* firstProperty, bool isFirstPropertyMethod, pelet::ExpressionClass* restProperties) {
	if (firstProperty && !firstProperty->ChainList.empty()) {
		UnicodeString prop = UNICODE_STRING_SIMPLE("->") + firstProperty->ChainList[0];
		if (isFirstPropertyMethod) {
			prop = UNICODE_STRING_SIMPLE("->") + firstProperty->ChainList[0] + UNICODE_STRING_SIMPLE("()");
		}		
		baseName->ChainList.push_back(prop);
	}
	if (restProperties) {
		for (size_t i = 0; i < restProperties->ChainList.size(); ++i) {
			baseName->ChainList.push_back(UNICODE_STRING_SIMPLE("->") + restProperties->ChainList[i]);
		}
	}
	return baseName;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeVariable(pelet::SemanticValueClass* variableValue) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	if (variableValue->Comment) {
		newExpr->Comment = *variableValue->Comment;
	}
	if (variableValue->Lexeme) {
		newExpr->Lexeme = *variableValue->Lexeme;
		newExpr->ChainList.push_back(*variableValue->Lexeme);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionNil() {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->Type = pelet::ExpressionClass::NIL;	
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::IncludeFound(pelet::ExpressionClass* expr, const int lineNumber) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass();
	newExpr->Copy(*expr);
	newExpr->Type = pelet::ExpressionClass::INCLUDE_STATEMENT;
	newExpr->LineNumber = lineNumber;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

void pelet::ObserverQuadClass::MakeAst(pelet::StatementListClass* statements) {
	
	// go through the list of statements and send the correct notifications
	for (size_t i = 0; i < statements->Size(); ++i) {
		pelet::StatementClass::Types type = statements->TypeAt(i);
		pelet::StatementClass* stmt = statements->At(i);
		switch(type) {
			case pelet::StatementClass::ASSIGNMENT:
				if (ExpressionObserver) {
					pelet::ExpressionClass* expr = (pelet::ExpressionClass*)stmt;
					ExpressionObserver->ExpressionFound(*expr);
				}
				if (Variable) {
					pelet::ExpressionClass* expr = (pelet::ExpressionClass*)stmt;
					pelet::SymbolClass symbol;
					symbol.FromExpression(*expr);
					Variable->VariableFound(expr->NamespaceScope, expr->ClassScope, expr->MethodScope, symbol, expr->Comment);
				}
				break;
			case pelet::StatementClass::CLASS_DECLARATION:
				if (Class || Member) {
					pelet::ClassSymbolClass* classSymbol = (pelet::ClassSymbolClass*) stmt;
					if (Class) {
						Class->ClassFound(classSymbol->NamespaceName, classSymbol->ClassName, classSymbol->ToSignature(), classSymbol->Comment, classSymbol->StartingLineNumber);
					}
					if (Member) {
						NotifyMagicMethodsAndProperties(classSymbol->Comment, classSymbol->NamespaceName, classSymbol->ClassName, classSymbol->StartingLineNumber);
					}
					if (Class) {
						Class->ClassEnd(classSymbol->NamespaceName, classSymbol->ClassName, classSymbol->EndingLineNumber);
					}
				}
				break;
			case pelet::StatementClass::DEFINE_DECLARATION:
				if (Class) {
					pelet::ConstantStatementClass* constant = (pelet::ConstantStatementClass*) stmt;
					Class->DefineDeclarationFound(constant->NamespaceName, constant->Name, constant->Value, constant->Comment, constant->LineNumber);
				}
				break;
			case pelet::StatementClass::EXPRESSION:
				if (ExpressionObserver) {
					pelet::ExpressionClass* expr = (pelet::ExpressionClass*)stmt;
					ExpressionObserver->ExpressionFound(*expr);
				}
				if (Class) {
					
					// check for define() function calls, these are constants
					pelet::ExpressionClass* expr = (pelet::ExpressionClass*)stmt;
					if (expr->CallArguments.size() == (size_t)2) {
						if (expr->Name.ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
							Class->DefineDeclarationFound(UNICODE_STRING_SIMPLE(""), expr->CallArguments[0].Lexeme,
								expr->CallArguments[1].Lexeme,
								expr->Name.Comment, expr->LineNumber);
						}
					}
				}
				break;
			case pelet::StatementClass::FUNCTION_DECLARATION:
				if (Function || Variable) {
					pelet::ClassMemberSymbolClass* memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;
					
					// remove the 'public' we are re-using the ClassMember symbol which always assumes a
					// method signature
					// didnt feel like writing a whole other class for just for functions when functions and
					// methods are almost identical
					UnicodeString signature = memberSymbol->ToMethodSignature(memberSymbol->ParametersList.ToSignature());
					int32_t index = signature.indexOf(UNICODE_STRING_SIMPLE("function"));
					signature.setTo(signature, index);
					UnicodeString comment = memberSymbol->Comment;
					UnicodeString returnType = ReturnTypeFromPhpDocComment(comment, false);
					if (Function) {
						Function->FunctionFound(memberSymbol->NamespaceName, memberSymbol->MemberName, signature, returnType, memberSymbol->Comment, memberSymbol->StartingLineNumber);
					}
					if (Variable) {
						NotifyVariablesFromParameterList(memberSymbol->ParametersList, memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName);
					}
					if (Function) {
						Function->FunctionEnd(memberSymbol->NamespaceName, memberSymbol->MemberName, memberSymbol->EndingPosition);
					}
				}
				break;
			case pelet::StatementClass::INCLUDE_STATEMENT:
				if (Class) {
					pelet::ExpressionClass* expr = (pelet::ExpressionClass*)stmt;
					if (pelet::ExpressionClass::SCALAR == expr->ExpressionType) {
						Class->IncludeFound(expr->Lexeme, expr->LineNumber);
					}
					else {

						// not sure what to do for include statements
						// with variables; ie. " include $file; "
						// for now just propagate an empty name
						UnicodeString empty;
						Class->IncludeFound(empty, expr->LineNumber);
					}
				}
				break;
			case pelet::StatementClass::ASSIGNMENT_LIST:
				if (Variable) {
					pelet::ExpressionClass* expr = (pelet::ExpressionClass*)stmt;
					for (size_t i = 0; i < expr->VariablesList.size(); ++i) {
						pelet::SymbolClass symbol;
						symbol.FromExpression(*expr);
						symbol.Lexeme = expr->VariablesList[i];
						Variable->VariableFound(expr->NamespaceScope, expr->ClassScope, expr->MethodScope, symbol, expr->Comment);
					}
				}
				break;
			case pelet::StatementClass::METHOD_DECLARATION:
				if (Member || Variable) {
					pelet::ClassMemberSymbolClass* memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;
					UnicodeString comment = memberSymbol->Comment;
					UnicodeString propType = ReturnTypeFromPhpDocComment(comment, false);
					UnicodeString signature = memberSymbol->ToMethodSignature(memberSymbol->ParametersList.ToSignature());
					pelet::TokenClass::TokenIds visibility = pelet::TokenClass::PUBLIC;
					if (memberSymbol->IsProtectedMember) {
						visibility = pelet::TokenClass::PROTECTED;
					}
					else if (memberSymbol->IsPrivateMember) {
						visibility = pelet::TokenClass::PRIVATE;
					}
					UnicodeString className = memberSymbol->ClassName;
					bool isStatic = memberSymbol->IsStaticMember;
					if (Member) {
						Member->MethodFound(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName, signature, propType, comment, visibility, isStatic, memberSymbol->StartingLineNumber);
					}
					if (Variable) {
						NotifyVariablesFromParameterList(memberSymbol->ParametersList, memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName);
					}
					if (Member) {
						Member->MethodEnd(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName, memberSymbol->EndingPosition);
					}
				}
				break;
			case pelet::StatementClass::NAMESPACE_DECLARATION:
				if (Class) {
					pelet::NamespaceDeclarationClass* declaration = (pelet::NamespaceDeclarationClass*) stmt;
					Class->NamespaceDeclarationFound(declaration->NamespaceName);
				}
				break;
			case pelet::StatementClass::NAMESPACE_USE:
				if (Class) {
					pelet::NamespaceUseClass* namespaceUse = (pelet::NamespaceUseClass*) stmt;
					Class->NamespaceUseFound(namespaceUse->NamespaceName, namespaceUse->Alias);
				}	
				break;
			case pelet::StatementClass::NIL:
			
				// NIL is anything we want to skip on purpose
				break;
			case pelet::StatementClass::PROPERTY_DECLARATION:
				if (Member) {
					pelet::ClassMemberSymbolClass* memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;
					UnicodeString comment = memberSymbol->Comment;
					UnicodeString propType = ReturnTypeFromPhpDocComment(comment, true);
					
					pelet::TokenClass::TokenIds visibility = pelet::TokenClass::PUBLIC;
					if (memberSymbol->IsProtectedMember) {
						visibility = pelet::TokenClass::PROTECTED;
					}
					else if (memberSymbol->IsPrivateMember) {
						visibility = pelet::TokenClass::PRIVATE;
					}
					UnicodeString className = memberSymbol->ClassName;
					bool isStatic = memberSymbol->IsStaticMember;
					bool isConst = memberSymbol->IsConstMember;
					Member->PropertyFound(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName, propType, comment, visibility, isConst, isStatic, memberSymbol->StartingLineNumber);
				}
				break;			
			case pelet::StatementClass::TRAIT_ALIAS_DECLARATION:
				// TODO
				break;
			case pelet::StatementClass::TRAIT_INSTEADOF_DECLARATION:
				// TODO
				break;
			case pelet::StatementClass::TRAIT_USE_DECLARATION:
				// TODO
				break;
		}
	}
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceDeclarationFound(pelet::QualifiedNameClass* namespaceName) {
	pelet::NamespaceDeclarationClass* newNamespace = new pelet::NamespaceDeclarationClass();
	newNamespace->NamespaceName = namespaceName->ToAbsoluteSignature();
	
	AllAstItems.push_back(newNamespace);
	return StatementListMakeAndAppend(newNamespace);
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceGlobalDeclarationFound() {
	pelet::NamespaceDeclarationClass* newNamespace = new pelet::NamespaceDeclarationClass();
	newNamespace->NamespaceName = UNICODE_STRING_SIMPLE("\\");
	AllAstItems.push_back(newNamespace);
	return StatementListMakeAndAppend(newNamespace);
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::NamespaceNameAppend(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* nameValue) {
	namespaceName->AddName(nameValue);
	return namespaceName;
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::NamespaceNameMake(pelet::SemanticValueClass* nameValue) {
	QualifiedNameClass* qualifiedName = new pelet::QualifiedNameClass();
	qualifiedName->GrabNameAndComment(nameValue);
	AllAstItems.push_back(qualifiedName);
	return qualifiedName;
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceUse(pelet::QualifiedNameClass* namespaceName) {
	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	UnicodeString alias = useStatement->Set(namespaceName, UNICODE_STRING_SIMPLE(""));
	
	// dont worry about duplicate aliases, since its incorrect PHP
	NamespaceAliases[alias] = namespaceName->ToAbsoluteSignature();
	
	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceUseAbsolute(pelet::QualifiedNameClass* namespaceName) {
	namespaceName->MakeAbsolute();
	
	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	UnicodeString alias = useStatement->Set(namespaceName, UNICODE_STRING_SIMPLE(""));
	
	// dont worry about duplicate aliases, since its incorrect PHP
	NamespaceAliases[alias] = namespaceName->ToAbsoluteSignature();
	
	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceUseAbsoluteAlias(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* aliasValue) {
	namespaceName->MakeAbsolute();
	
	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	if (aliasValue->Lexeme) {
		UnicodeString alias = useStatement->Set(namespaceName, *aliasValue->Lexeme);
		
		// dont worry about duplicate aliases, since its incorrect PHP
		NamespaceAliases[alias] = namespaceName->ToAbsoluteSignature();
	}		
	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceUseAlias(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* aliasValue) {
	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	if (aliasValue->Lexeme) {
		UnicodeString alias = useStatement->Set(namespaceName, *aliasValue->Lexeme);
		
		// dont worry about duplicate aliases, since its incorrect PHP
		NamespaceAliases[alias] = namespaceName->ToAbsoluteSignature();
	}		
	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::ParametersListClass* pelet::ObserverQuadClass::ParametersListAppend(pelet::ParametersListClass* parametersList, pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference) {
	UnicodeString typeString = AbsoluteNamespaceClass(*type);
	if (typeString == UNICODE_STRING_SIMPLE("\\")) {
		typeString = UNICODE_STRING_SIMPLE("");
	}
	if (typeString == UNICODE_STRING_SIMPLE("\\array")) {
		typeString = UNICODE_STRING_SIMPLE("");
	}
	parametersList->CreateWithOptionalType(typeString);
	parametersList->SetName(parameterName, isReference);
	return parametersList;
	
	return parametersList;
}

pelet::ParametersListClass* pelet::ObserverQuadClass::ParametersListCreate(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference) {
	pelet::ParametersListClass* parametersList = new pelet::ParametersListClass;
	
	UnicodeString typeString = AbsoluteNamespaceClass(*type);
	if (typeString == UNICODE_STRING_SIMPLE("\\")) {
		typeString = UNICODE_STRING_SIMPLE("");
	}
	if (typeString == UNICODE_STRING_SIMPLE("\\array")) {
		typeString = UNICODE_STRING_SIMPLE("");
	}
	parametersList->CreateWithOptionalType(typeString);
	parametersList->SetName(parameterName, isReference);
	
	AllAstItems.push_back(parametersList);
	return parametersList;
}

pelet::ParametersListClass* pelet::ObserverQuadClass::ParametersListNil() {
	pelet::ParametersListClass* parametersList = new pelet::ParametersListClass;
	
	AllAstItems.push_back(parametersList);
	return parametersList;
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::QualifiedNameCreate(pelet::SemanticValueClass* nameValue) {
	pelet::QualifiedNameClass* qualifiedName = new pelet::QualifiedNameClass;
	qualifiedName->GrabNameAndComment(nameValue);
	AllAstItems.push_back(qualifiedName);
	return qualifiedName;
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::QualifiedNameMakeAbsolute(pelet::QualifiedNameClass* qualifiedName) {
	qualifiedName->MakeAbsolute();
	return qualifiedName;
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::QualifiedNameMakeFromCurrentNamespace(pelet::QualifiedNameClass* qualifiedName) {
	qualifiedName->Prepend(CurrentNamespace);
	return qualifiedName;
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::QualifiedNameNil() {
	pelet::QualifiedNameClass* qualifiedName = new pelet::QualifiedNameClass;
	AllAstItems.push_back(qualifiedName);
	return qualifiedName;
}

pelet::SemanticValueClass* pelet::ObserverQuadClass::SemanticValueNil() {
	pelet::SemanticValueClass* value = new pelet::SemanticValueClass;
	value->Comment = NULL;
	value->Lexeme = NULL;
	value->LineNumber = -1;
	value->Pos = -1;
	value->Token = -1;
	
	AllAstItems.push_back(value);
	return value;
}

pelet::StatementListClass* pelet::ObserverQuadClass::StatementListAppend(pelet::StatementListClass* statementList, pelet::StatementClass* statement) {
	statementList->Push(statement);
	return statementList;
}

pelet::StatementListClass* pelet::ObserverQuadClass::StatementListMake() {
	pelet::StatementListClass* statementList =  new pelet::StatementListClass;
	AllAstItems.push_back(statementList);
	return statementList;
}

pelet::StatementListClass* pelet::ObserverQuadClass::StatementListMakeAndAppend(pelet::StatementClass* statement) {
	pelet::StatementListClass* statementList =  new pelet::StatementListClass;
	statementList->Push(statement);
	
	AllAstItems.push_back(statementList);
	return statementList;	
}

pelet::StatementListClass* pelet::ObserverQuadClass::StatementListMerge(pelet::StatementListClass* a, pelet::StatementListClass* b) {
	a->PushAll(b);
	return a;
}

pelet::StatementListClass* pelet::ObserverQuadClass::StatementListNil() {
	pelet::StatementListClass* statementList =  new pelet::StatementListClass;
	AllAstItems.push_back(statementList);
	return statementList;
}

void pelet::ObserverQuadClass::SetCurrentClassName(pelet::SemanticValueClass* value) {
	CurrentClassName = value && value->Lexeme ? *value->Lexeme : UNICODE_STRING_SIMPLE("");
}

void pelet::ObserverQuadClass::SetCurrentMemberName(pelet::SemanticValueClass* value) {
	CurrentMemberName = value && value->Lexeme ? *value->Lexeme : UNICODE_STRING_SIMPLE("");
}

void pelet::ObserverQuadClass::SetCurrentNamespace(pelet::QualifiedNameClass* qualifiedName) {
	NamespaceAliases.clear();
	if (qualifiedName) {
		CurrentNamespace = *qualifiedName;
	}
	else {
		CurrentNamespace.Clear();
		CurrentNamespace.MakeAbsolute();
	}
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeAsAssignmentExpression(pelet::ExpressionClass* expression) {
	expression->Type = pelet::ExpressionClass::ASSIGNMENT;
	expression->NamespaceScope = CurrentNamespace.ToAbsoluteSignature();
	expression->ClassScope = CurrentClassName;
	expression->MethodScope = CurrentMemberName;	
	return expression;
}

