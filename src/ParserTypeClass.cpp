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
	NamespaceName = UNICODE_STRING_SIMPLE("\\");
}

void pelet::ConstantStatementClass::Init(pelet::SemanticValueClass* value, int lineNumber, const pelet::QualifiedNameClass& currentNamespace) {
	if (value) {
		Name = value->Lexeme;
		Comment = value->Comment;
	}
	LineNumber = lineNumber;
	NamespaceName = currentNamespace.ToAbsoluteSignature();
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
	NamespaceName = namespaceName->ToAbsoluteSignature();
	StartingPosition = startingPosition.Pos;
}

void pelet::NamespaceDeclarationClass::Init(const pelet::TokenPositionClass& startingPosition) {
	NamespaceName = UNICODE_STRING_SIMPLE("\\");
	StartingPosition = startingPosition.Pos;
}

pelet::NamespaceUseClass::NamespaceUseClass()
	: StatementClass(pelet::StatementClass::NAMESPACE_USE)
	, NamespaceName()
	, Alias()
	, StartingPos(0) {

}

void pelet::NamespaceUseClass::Init(pelet::QualifiedNameClass* qualifiedName, pelet::SemanticValueClass* aliasValue, bool isAbsolute) {
	if (isAbsolute) {
		qualifiedName->MakeAbsolute();
	}
	UnicodeString alias;
	if (aliasValue) {
		alias = aliasValue->Lexeme;
	}
	Set(qualifiedName, alias);
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
		UsedTraits.push_back(scope.AbsoluteNamespaceClass(*usedTrait, currentNamespace));
	}
	NamespaceName = currentNamespace.ToAbsoluteSignature();
	ClassName = scope.ClassName;
}

pelet::TraitUseClass* pelet::TraitUseClass::AppendUse(pelet::QualifiedNameClass* usedTrait,
									 const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	if (usedTrait) {
		UsedTraits.push_back(scope.AbsoluteNamespaceClass(*usedTrait, currentNamespace));
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
	NamespaceName = currentNamespace.ToAbsoluteSignature();
}

pelet::TraitInsteadOfClass* pelet::TraitInsteadOfClass::AppendInsteadOf(pelet::QualifiedNameClass *insteadOfClass, 
																		const pelet::ScopeClass& scope, 
																		const pelet::QualifiedNameClass& currentNamespace) {
	if (insteadOfClass) {
		InsteadOfList.push_back(scope.AbsoluteNamespaceClass(*insteadOfClass, currentNamespace));
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
		TraitUsedClassName = scope.AbsoluteNamespaceClass(*className,  currentNamespace);
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
	NamespaceName = currentNamespace.ToAbsoluteSignature();
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
	ClassName.remove();
	NamespaceName.remove();
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

pelet::ClassSymbolClass* pelet::ClassSymbolClass::AddToImplements(pelet::QualifiedNameClass* implementsClassName, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	ImplementsList.push_back(scope.AbsoluteNamespaceClass(*implementsClassName, currentNamespace));
	return this;
}

pelet::ClassSymbolClass* pelet::ClassSymbolClass::SetExtends(pelet::QualifiedNameClass* extendsClassName, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	ExtendsFrom = scope.AbsoluteNamespaceClass(*extendsClassName, currentNamespace);
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
	NamespaceName = currentNamespace.ToAbsoluteSignature();
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
	, Comment()
	, NamespaceName()
	, ClassName()
	, ParametersList()
	, MethodStatements()
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
	MethodStatements.Clear();
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

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeBody(pelet::StatementListClass* bodyStatements, 
	const pelet::TokenPositionClass& startingPositionTokenValue, const pelet::TokenPositionClass& endingPositionTokenValue) {
	if (bodyStatements) {
		MethodStatements = *bodyStatements;
	}
	StartingPosition = startingPositionTokenValue.Pos;
	EndingPosition = endingPositionTokenValue.Pos;
	return this;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::Make(pelet::SemanticValueClass* varValue) {
	Type = pelet::StatementClass::METHOD_DECLARATION;
	if (varValue) {
		Comment = varValue->Comment;
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

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeAsPublicVariable(pelet::SemanticValueClass* varValue) {
	Type = pelet::StatementClass::PROPERTY_DECLARATION;
	SetNameAndReturnReference(varValue, false, varValue);
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
	SetNameAndReturnReference(nameValue, isReference, functionValue);
	NamespaceName = currentNamespace.ToAbsoluteSignature();
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
	SetNameAndReturnReference(nameValue, isReference, functionValue);
	NamespaceName = currentNamespace.ToAbsoluteSignature();
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
		if (Comment.isEmpty() && !modifiers->Comment.isEmpty()) {
			Comment = modifiers->Comment;
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
		SetAsConst(nameValue, commentValue);
	} else {
		SetNameAndReturnReference(nameValue, false, commentValue);
	}
	NamespaceName = currentNamespace.ToAbsoluteSignature();
	ClassName = scope.ClassName;
	SetAsPublic();
	StartingLineNumber = startingLineNumber;
	if (nameValue) {
		EndingPosition = nameValue->Pos + nameValue->Lexeme.length();
	}
	return this;
}

pelet::StatementListClass* pelet::ClassMemberSymbolClass::MakeVariables(pelet::StatementListClass* variableStatements, pelet::ClassMemberSymbolClass* modifiers) {

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

pelet::QualifiedNameClass::QualifiedNameClass()
	: Comment()
	, IsAbsolute(false)
	, Namespaces() {

}

void pelet::QualifiedNameClass::Init(SemanticValueClass* value) {
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

pelet::QualifiedNameClass* pelet::QualifiedNameClass::AddName(SemanticValueClass* value) {
	if (value) {
		Namespaces.insert(Namespaces.begin(), value->Lexeme);
	}
	return this;
}

pelet::QualifiedNameClass* pelet::QualifiedNameClass::MakeAbsolute() {
	IsAbsolute = true;
	return this;
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

void pelet::QualifiedNameClass::Init(const UnicodeString& name) {
	Namespaces.insert(Namespaces.begin(), name);
}

pelet::QualifiedNameClass* pelet::QualifiedNameClass::MakeFromCurrentNamespace(const pelet::QualifiedNameClass* currentNamespace) {
	if (currentNamespace) {
		Prepend(*currentNamespace);
	}
	return this;
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

pelet::ParametersListClass* pelet::ParametersListClass::Append(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference,
															   const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	UnicodeString typeString;
	if (type) {
		typeString = scope.AbsoluteNamespaceClass(*type, currentNamespace);
		if (typeString == UNICODE_STRING_SIMPLE("\\")) {
			typeString = UNICODE_STRING_SIMPLE("");
		}
		if (typeString == UNICODE_STRING_SIMPLE("\\array")) {
			typeString = UNICODE_STRING_SIMPLE("");
		}
		if (typeString == UNICODE_STRING_SIMPLE("\\callable")) {
			typeString = UNICODE_STRING_SIMPLE("");
		}
	}
	CreateWithOptionalType(typeString);
	SetName(parameterName, isReference);
	return this;
}

void pelet::ParametersListClass::Init(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference,
															   const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	UnicodeString typeString;
	if (type) {
		typeString = scope.AbsoluteNamespaceClass(*type, currentNamespace);
		if (typeString == UNICODE_STRING_SIMPLE("\\")) {
			typeString = UNICODE_STRING_SIMPLE("");
		}
		if (typeString == UNICODE_STRING_SIMPLE("\\array")) {
			typeString = UNICODE_STRING_SIMPLE("");
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
	Comment.remove();
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
	if (!variable.ArrayKey.isEmpty()) {
		ArrayKeys.push_back(variable.ArrayKey);
	}
	ExpressionType = pelet::ExpressionClass::VARIABLE;
	LineNumber = variable.LineNumber;	
}

UnicodeString pelet::ExpressionClass::FirstValue() const {
	UnicodeString str;
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

void pelet::ExpressionClass::AppendToChain(const UnicodeString& propertyName,
		std::vector<pelet::ExpressionClass> callArguments, bool isMethod, bool isStatic) {
	pelet::VariablePropertyClass objectCall;
	objectCall.IsStatic = isStatic;
	objectCall.Name = propertyName;
	objectCall.IsFunction = isMethod;
	objectCall.CallArguments = callArguments;
	ChainList.push_back(objectCall);
}

void pelet::ExpressionClass::ToNewCall(const UnicodeString& className) {
	Clear();
	ExpressionType = NEW_CALL;
	pelet::VariablePropertyClass objectCall;
	objectCall.Name = className;
	ChainList.push_back(objectCall);
}

void pelet::ExpressionClass::ToStaticFunctionCall(const UnicodeString& className, const UnicodeString& propertyName, bool isMethod) {
	Clear();
	ExpressionType = FUNCTION_CALL;
	if (!className.isEmpty()) {
		pelet::VariablePropertyClass objectCall;
		objectCall.Name = className;
		ChainList.push_back(objectCall);
	}
	if (!propertyName.isEmpty()) {
		pelet::VariablePropertyClass objectCall;
		objectCall.Name = propertyName;
		objectCall.IsFunction = isMethod;
		objectCall.IsStatic = true;
		ChainList.push_back(objectCall);
	}
}

void pelet::ExpressionClass::ToVariable(const UnicodeString& variableName) {
	Clear();
	ExpressionType = VARIABLE;
	pelet::VariablePropertyClass objectCall;
	objectCall.Name = variableName;
	objectCall.IsFunction = false;
	objectCall.IsStatic = false;
	ChainList.push_back(objectCall);
}

void pelet::ExpressionClass::ToScalar(const UnicodeString& scalarValue) {
	Clear();
	ExpressionType = SCALAR;
	pelet::VariablePropertyClass objectCall;
	objectCall.Name = scalarValue;
	objectCall.IsFunction = false;
	objectCall.IsStatic = false;
	ChainList.push_back(objectCall);
}

void pelet::ExpressionClass::ToConstant(const UnicodeString& className, const UnicodeString& constantName) {
	Clear();
	ExpressionType = FUNCTION_CALL;
	if (!className.isEmpty()) {
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
	Comment.remove();
	PhpDocType.remove();
	ChainList.clear();
	ArrayKey.remove();
	Scope.Clear();
	LineNumber = 0;
}

void pelet::VariableClass::AppendToChain(const UnicodeString& propertyValue) {
	pelet::VariablePropertyClass prop;
	prop.Name = propertyValue;
	prop.IsFunction = false;
	prop.IsStatic = false;
	ChainList.push_back(prop);	
}

void pelet::VariableClass::AppendToChain(const UnicodeString& propertyValue,
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
	NamespaceName.remove();
	ClassName.remove();
	MethodName.remove();
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
		NamespaceAliases = new std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>(*src.NamespaceAliases);
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
	return ClassName.isEmpty() && MethodName.isEmpty();
}

bool pelet::ScopeClass::IsGlobalNamespace() const {
	return UNICODE_STRING_SIMPLE("\\").compare(NamespaceName) == 0 || NamespaceName.isEmpty();
}

void pelet::ScopeClass::AddNamespace(const UnicodeString& namespaceName, const UnicodeString& namespaceAlias) {
	if (!NamespaceAliases) {
		NamespaceAliases = new std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>();
	}
	(*NamespaceAliases)[namespaceAlias] = namespaceName;
}

UnicodeString pelet::ScopeClass::GetFullNamespace(const UnicodeString& alias) const {
	UnicodeString fullName;
	if (NamespaceAliases) {
		std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>::const_iterator it = NamespaceAliases->find(alias);
		if (it != NamespaceAliases->end()) {
			fullName = it->second;
		}
	}
	return fullName;
}

std::map<UnicodeString, UnicodeString, pelet::UnicodeStringComparatorClass> pelet::ScopeClass::GetNamespaceAliases() const {
	std::map<UnicodeString, UnicodeString, pelet::UnicodeStringComparatorClass> map;
	if (NamespaceAliases) {
		map.insert(NamespaceAliases->begin(), NamespaceAliases->end());
	}
	return map;
}

UnicodeString pelet::ScopeClass::AbsoluteNamespaceClass(const pelet::QualifiedNameClass& name,
														const pelet::QualifiedNameClass& namespaceName) const {
	UnicodeString fullyQualified;

	// does name use an alias?
	UnicodeString alias;
	UnicodeString qualified = name.ToSignature();
	int32_t index = qualified.indexOf(UNICODE_STRING_SIMPLE("\\"));
	if (index > 0) {
		alias.setTo(qualified, 0, index);
	}
	UnicodeString fullNamespace = GetFullNamespace(alias);
	if (!fullNamespace.isEmpty()) {

		// substitute alias with namespace
		fullyQualified.setTo(qualified, index + 1);
		fullyQualified = fullNamespace + UNICODE_STRING_SIMPLE("\\") + fullyQualified;
	} else {

		// no alias, prepend the curent namespace
		fullyQualified = name.Prepend(namespaceName);
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