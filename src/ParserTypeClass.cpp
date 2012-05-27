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

pelet::TraitUseClass::TraitUseClass()
	: StatementClass(pelet::StatementClass::TRAIT_USE_DECLARATION)
	, NamespaceName()
	, ClassName()
	, UsedTraits() {
}

void pelet::TraitUseClass::AppendUse(UnicodeString trait) {
	UsedTraits.push_back(trait);
}

pelet::TraitInsteadOfClass::TraitInsteadOfClass()
	: StatementClass(pelet::StatementClass::TRAIT_INSTEADOF_DECLARATION)
	, NamespaceName()
	, ClassName()
	, TraitUsedClassName()
	, TraitMethodReferenceName()
	, InsteadOfList() {
		
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
	ClassName = value->Lexeme;
}

void pelet::ClassSymbolClass::AppendToComment(pelet::SemanticValueClass* value) {
	Comment.append(value->Comment);
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
	MemberName = nameValue->Lexeme;
	IsReturnReference = isReturnReference;

	// a comment may be attached to the function keyword.
	// see NextSemanticValue() function
	Comment.append(functionValue->Comment);
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
	MemberName = nameValue->Lexeme;

	// a comment may be attached to the const keyword.
	// see NextSemanticValue() function
	Comment.append(commentValue->Comment);
}

void pelet::ClassMemberSymbolClass::AppendToComment(SemanticValueClass* value) {
	Comment.append(value->Comment);
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

pelet::QualifiedNameClass::QualifiedNameClass()
	: Comment()
	, IsAbsolute(false)
	, Namespaces() {

}

void pelet::QualifiedNameClass::GrabNameAndComment(SemanticValueClass* value) {
	if (value) {
		Comment.setTo(value->Comment);
		AddName(value);
	}
}

void pelet::QualifiedNameClass::Clear() {
	while (!Namespaces.empty()) {
		Namespaces.pop_back();
	}
	IsAbsolute = false;
}

void pelet::QualifiedNameClass::AddName(SemanticValueClass* value) {
	if (value) {
		Namespaces.insert(Namespaces.begin(), value->Lexeme);
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
	if (typeValue) {
		OptionalTypes.push_back(typeValue->Lexeme);
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
	if (value) {
		Params.back().setTo(value->Lexeme);
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
	if (operatorValue) {
		objectCall.append(operatorValue->Lexeme);
	}
	if (propertyValue) {
		objectCall.append(propertyValue->Lexeme);
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
	if (value) {
		Comment.append(value->Comment);
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

pelet::SemanticValueClass::SemanticValueClass() 
	: AstItemClass()
	, Lexeme()
	, Comment()
	, Token(0)
	, Pos(0)
	, LineNumber(0) {
		
}