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
#include <pelet/FullParserObserverClass.h>
#include <pelet/ResourceParserObserverClass.h>
#include <wx/tokenzr.h>
#include <algorithm>
#include <cctype>

pelet::FullParserObserverClass::FullParserObserverClass(ClassObserverClass* classObserver, ClassMemberObserverClass* memberObserver,
        FunctionObserverClass* functionObserver, VariableObserverClass* variableObserver,
        ExpressionObserverClass* expressionObserver)
	: Scope()
	, Class(classObserver)
	, Member(memberObserver)
	, Function(functionObserver)
	, Variable(variableObserver)
	, ExpressionObserver(expressionObserver)
	, AllAstItems() {
}

pelet::FullParserObserverClass::~FullParserObserverClass() {
	SemanticValueFree();
}

void pelet::FullParserObserverClass::NamespaceAliasClear() {
	Scope.ClearAliases();
}

void pelet::FullParserObserverClass::NotifyVariablesFromParameterList(pelet::ParametersListClass& parameters, wxString currentNamespaceName, wxString currentClassName, wxString currentMethodName) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	size_t paramCount = parameters.GetCount();
	if (paramCount > 0 && Variable) {
		wxString paramName,
		              paramType;
		wxString comment;
		for (size_t i = 0; i < paramCount; ++i) {
			pelet::VariableClass variable(Scope);
			pelet::ExpressionClass expression(Scope);
			parameters.Param(i, paramName, paramType);
			if (!paramType.empty()) {
				expression.ToNewCall(paramType);
			} else {
				expression.ExpressionType = pelet::ExpressionClass::UNKNOWN;
			}
			variable.AppendToChain(paramName);
			variable.PhpDocType = paramType;
			Variable->VariableFound(currentNamespaceName, currentClassName, currentMethodName, variable, expression, comment);
		}
	}

	// remove any expressions that were created by the static scalar rules
	// ie default argument values
}

void pelet::FullParserObserverClass::NotifyLocalVariableTypeHint(const wxString& comment) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	NotifyLocalVariableFromPhpDoc(comment);
}

void pelet::FullParserObserverClass::NotifyLocalVariableFromPhpDoc(const wxString& phpDocComment) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (!Variable) {
		return;
	}
	if (phpDocComment.empty()) {
		return;
	}

	// assuming that PHPDoc for local variables look like this
	// /* @var $dog Dog */
	// people got used to doing it this way
	// http://stackoverflow.com/questions/4329288/code-hinting-completion-for-array-of-objects-in-zend-studio-or-any-other-ecli
	// there could be multiple hints in a single comment
	
	
	wxString delimiters = wxT(" \t\v\f\r\n");
	wxStringTokenizer tokenizer(phpDocComment, delimiters);
	wxString varName;
	wxString varType;
	wxString next;
	while (tokenizer.HasMoreTokens()) {
		next = tokenizer.NextToken();
		next.MakeLower();
		if (next.compare(wxT("@var")) == 0) {
			pelet::VariableClass variable(Scope);
			pelet::ExpressionClass expression(Scope);
			wxString variableName;

			// example line: @var string $nameString a string version of a name
			// will be lenient and allow the reverse var then type
			// @var $nameString string
			next = tokenizer.NextToken();
			FillNameOrType(next, variableName, variable.PhpDocType);
			if (!next.empty()) {
				next = tokenizer.NextToken();
				FillNameOrType(next, variableName, variable.PhpDocType);
				if (!variableName.empty() && !variable.PhpDocType.empty()) {

					// handle namespaces in the phpDoc
					variable.PhpDocType = pelet::PhpDocTypeToAbsoluteClassname(variable.PhpDocType, Scope, DeclaredNamespace);
					variable.AppendToChain(variableName);
					Variable->VariableFound(DeclaredNamespace.ToSignature(), Scope.ClassName, Scope.MethodName, variable, expression, phpDocComment);
					next = tokenizer.NextToken();
				}
			}
			if (next.empty()) {
				break;
			}
		}
	}
}

pelet::SemanticValueClass* pelet::FullParserObserverClass::SemanticValueInit() {
	pelet::SemanticValueClass* value = new pelet::SemanticValueClass;
	AllAstItems.push_back(value);
	return value;
}

void pelet::FullParserObserverClass::SemanticValueFree() {
	for (size_t i = 0; i < AllAstItems.size(); ++i) {
		delete AllAstItems[i];
	}
	AllAstItems.clear();
}

int pelet::FullLex(pelet::ParserType* value, pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers) {
	int ret = analyzer.NextToken();
	value->semanticValue = observers.SemanticValueInit();

	// ignore these token; there are no parse rules for them
	if (pelet::T_OPEN_TAG == ret || pelet::T_OPEN_TAG_WITH_ECHO == ret) {
		ret = analyzer.NextToken();
	}

	// optimization: SemanticValueInit() method knows when we need to examine
	// comments and will allocate memory only when needed
	pelet::SemanticValueClass commentValue;
	if (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {

		// advance past all comments (there can be more than one consecutive)
		// keep /** and /* comments separate; we only want /* comments to
		// get type hints for local varibles
		while (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {
			if (pelet::T_DOC_COMMENT == ret) {
				analyzer.GetLexeme(value->semanticValue->Comment);
			} else if (pelet::T_COMMENT == ret) {
				analyzer.GetLexeme(commentValue.Comment);
			}
			ret = analyzer.NextToken();
		}
	}
	if (!commentValue.Comment.empty()) {
		observers.NotifyLocalVariableTypeHint(commentValue.Comment);
	}
	if (pelet::T_CLOSE_TAG == ret) {
		ret = ';';
	}
	value->semanticValue->Token = ret;
	analyzer.GetLexeme(value->semanticValue->Lexeme);
	value->semanticValue->Pos = analyzer.GetCharacterPosition();
	value->semanticValue->LineNumber = analyzer.GetLineNumber();
	return ret;
}

void pelet::FullGrammarError(pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers, std::string msg) {
	wxString wxMsg(msg.c_str(), wxConvUTF8);
	analyzer.ParserError = wxMsg;
	observers.SemanticValueFree();
}

pelet::ExpressionClass* pelet::FullParserObserverClass::AssignmentExpressionFromExpressionFound(pelet::VariableClass* variable, pelet::ExpressionClass* expression) {
	pelet::AssignmentExpressionClass* newExpr =  new pelet::AssignmentExpressionClass(Scope);
	newExpr->Destination = *variable;
	newExpr->Set(*expression);
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::AssignmentExpressionFromNewFound(pelet::VariableClass* variable, pelet::QualifiedNameClass* className) {
	pelet::AssignmentExpressionClass* newExpr =  new pelet::AssignmentExpressionClass(Scope);
	newExpr->ToNewCall(Scope.FullyQualify(*className, DeclaredNamespace));
	newExpr->Destination = *variable;

	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::AssignmentExpressionFromVariableFound(pelet::VariableClass* variable, pelet::VariableClass* srcVariable) {
	pelet::AssignmentExpressionClass* newExpr =  new pelet::AssignmentExpressionClass(Scope);
	newExpr->Destination = *variable;

	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	for (size_t i = 0; i < srcVariable->ChainList.size(); ++i) {
		newExpr->ChainList.push_back(srcVariable->ChainList[i]);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;

}

pelet::ClassMemberSymbolClass* pelet::FullParserObserverClass::ClassMemberSymbolMake(pelet::SemanticValueClass* varValue) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->Make(varValue, Scope, DeclaredNamespace);
	AllAstItems.push_back(newMember);
	return newMember;
}

pelet::ClassMemberSymbolClass* pelet::FullParserObserverClass::ClassMemberSymbolMakeAsPublicVariable(pelet::SemanticValueClass* varValue) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->MakeAsPublicVariable(varValue, Scope, DeclaredNamespace);
	AllAstItems.push_back(newMember);
	return newMember;
}

pelet::StatementListClass* pelet::FullParserObserverClass::ClassMemberSymbolMakeFunction(pelet::SemanticValueClass* nameValue, bool isReference,
        pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters, 
		pelet::SemanticValueClass* startingBodyTokenValue, pelet::SemanticValueClass* endingBodyTokenValue) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	pelet::TokenPositionClass startingPos;
	startingPos.LineNumber = nameValue->LineNumber;
	startingPos.Pos = startingBodyTokenValue->Pos;
	startingPos.Token = startingBodyTokenValue->Token;
	pelet::TokenPositionClass endingPos;
	endingPos.LineNumber = nameValue->LineNumber;
	endingPos.Pos = endingBodyTokenValue->Pos;
	endingPos.Token = endingBodyTokenValue->Token;
	newMember->MakeFunction(nameValue, isReference, functionValue, parameters, startingPos, endingPos, Scope, DeclaredNamespace);
	AllAstItems.push_back(newMember);
	return StatementListMakeAndAppend(newMember);
}

pelet::StatementListClass* pelet::FullParserObserverClass::ClassMemberSymbolMakeMethod(pelet::SemanticValueClass* nameValue, pelet::ClassMemberSymbolClass* modifiers,
        bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters,
		pelet::ClassMemberSymbolClass* methodBody) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->MakeMethod(nameValue, modifiers, isReference, functionValue, parameters, methodBody, Scope, DeclaredNamespace);
	AllAstItems.push_back(newMember);
	pelet::StatementListClass* list = StatementListMakeAndAppend(newMember);
	list = StatementListMerge(list, &methodBody->MethodStatements);
	return list;
}

pelet::ClassMemberSymbolClass* pelet::FullParserObserverClass::ClassMemberMakeBody(pelet::StatementListClass* bodyStatements, 
	pelet::SemanticValueClass* startingPositionTokenValue, pelet::SemanticValueClass* endingPositionTokenValue) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	pelet::TokenPositionClass startingPos;
	startingPos.LineNumber = startingPositionTokenValue->LineNumber;
	startingPos.Pos = startingPositionTokenValue->Pos;
	startingPos.Token = startingPositionTokenValue->Token;
	pelet::TokenPositionClass endingPos;
	endingPos.LineNumber = endingPositionTokenValue->LineNumber;
	endingPos.Pos = endingPositionTokenValue->Pos;
	endingPos.Token = endingPositionTokenValue->Token;
	newMember->MakeBody(bodyStatements, startingPos, endingPos);
	AllAstItems.push_back(newMember);
	return newMember;
}

pelet::StatementListClass* pelet::FullParserObserverClass::ClassMemberSymbolMakeVariable(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue,
        bool isConstant, const int startingLineNumber) {
	int endingPosition = 0;
	if (nameValue) {
		endingPosition = nameValue->Pos + nameValue->Lexeme.length();
	}
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->MakeVariable(nameValue, commentValue, isConstant, endingPosition, Scope, DeclaredNamespace);
	AllAstItems.push_back(newMember);
	return StatementListMakeAndAppend(newMember);
}

pelet::StatementListClass* pelet::FullParserObserverClass::ClassMemberSymbolMakeVariables(pelet::StatementListClass* variableStatements, pelet::ClassMemberSymbolClass* modifiers) {
	return pelet::ClassMemberSymbolClass::MakeVariables(variableStatements, modifiers, Scope, DeclaredNamespace);
}

pelet::ClassMemberSymbolClass* pelet::FullParserObserverClass::ClassMemberSymbolSetModifier(pelet::ClassMemberSymbolClass* memberSymbol, pelet::SemanticValueClass* modifierValue) {
	memberSymbol->IsAbstractMember = pelet::T_ABSTRACT == modifierValue->Token;
	memberSymbol->IsFinalMember = pelet::T_FINAL == modifierValue->Token;
	memberSymbol->IsConstMember = pelet::T_CONST == modifierValue->Token;
	memberSymbol->IsStaticMember = pelet::T_STATIC == modifierValue->Token;
	if (pelet::T_PUBLIC == modifierValue->Token) {
		memberSymbol->SetAsPublic();
	} else if (pelet::T_PROTECTED == modifierValue->Token) {
		memberSymbol->SetAsProtected();
	} else if (pelet::T_PRIVATE == modifierValue->Token) {
		memberSymbol->SetAsPrivate();
	}
	return memberSymbol;
}

pelet::ClassSymbolClass* pelet::FullParserObserverClass::ClassSymbolAddToImplements(pelet::ClassSymbolClass* classSymbol, pelet::QualifiedNameClass* implementsClassName) {
	classSymbol->AddToImplements(implementsClassName, Scope, DeclaredNamespace);
	return classSymbol;
}

pelet::ClassSymbolClass* pelet::FullParserObserverClass::ClassSymbolAddToImplements(pelet::QualifiedNameClass* implementsClassName) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	newClassSymbol->AddToImplements(implementsClassName, Scope, DeclaredNamespace);
	AllAstItems.push_back(newClassSymbol);
	return newClassSymbol;
}

pelet::ClassSymbolClass* pelet::FullParserObserverClass::ClassSymbolExtends(pelet::QualifiedNameClass* extendsClassName) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	newClassSymbol->SetExtends(extendsClassName, Scope, DeclaredNamespace);
	AllAstItems.push_back(newClassSymbol);
	return newClassSymbol;
}

pelet::StatementListClass* pelet::FullParserObserverClass::ClassSymbolMake(pelet::SemanticValueClass* nameValue, pelet::ClassSymbolClass* classTypeSymbol, pelet::ClassSymbolClass* extendsSymbol, pelet::ClassSymbolClass* implementsSymbol, pelet::SemanticValueClass* endToken) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	newClassSymbol->GrabClassName(nameValue);
	newClassSymbol->NamespaceName = DeclaredNamespace.ToSignature();
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

pelet::ClassSymbolClass* pelet::FullParserObserverClass::ClassSymbolStart(pelet::SemanticValueClass* commentValue, bool isAbstract, bool isFinal, bool isInterface, bool isTrait) {
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

pelet::StatementListClass* pelet::FullParserObserverClass::ConstantMake(pelet::SemanticValueClass* value, int lineNumber) {
	pelet::ConstantStatementClass* constant = new pelet::ConstantStatementClass();
	if (value) {
		constant->Name = value->Lexeme;
	}
	if (value) {
		constant->Comment = value->Comment;
	}
	constant->LineNumber = lineNumber;
	constant->NamespaceName = DeclaredNamespace.ToSignature();

	AllAstItems.push_back(constant);
	return StatementListMakeAndAppend(constant);
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeArray(pelet::StatementListClass* pairStatements) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->ExpressionType = pelet::ExpressionClass::ARRAY;

	// populate the array keys [that are scalar strings]
	for (size_t i = 0; i < pairStatements->Size(); ++i) {
		pelet::StatementClass::Types type =  pairStatements->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* pairExpr = (pelet::ExpressionClass*) pairStatements->At(i);
			if (pelet::ExpressionClass::SCALAR == pairExpr->ExpressionType) {
				newExpr->ArrayKeys.push_back(pairExpr->FirstValue());
			}
		}
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeAssignmentList(pelet::StatementListClass* assignmentList) {
	pelet::AssignmentListExpressionClass* newExpr = new pelet::AssignmentListExpressionClass(Scope);
	
	for (size_t i = 0; i < assignmentList->Size(); ++i) {
		pelet::StatementClass::Types type =  assignmentList->TypeAt(i);
		if (pelet::StatementClass::VARIABLE == type) {
			pelet::VariableClass* singleVariable = (pelet::VariableClass*) assignmentList->At(i);
			if (singleVariable->ChainList.size() <= 1) {
				newExpr->Destinations.push_back(*singleVariable);
			}
		}
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeClassConstant(pelet::QualifiedNameClass* className, pelet::SemanticValueClass* constantName) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	wxString fullClassName = Scope.FullyQualify(*className, DeclaredNamespace);
	wxString constantNameString;
	if (constantName) {
		constantNameString = constantName->Lexeme;
	}
	newExpr->ToStaticFunctionCall(fullClassName, constantNameString, false);
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeFunctionCall(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);

	newVar->LineNumber = lineNumber;
	if (functionName) {
		newVar->Comment = functionName->Comment;
	}
	std::vector<pelet::ExpressionClass> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(*singleExpr);
		}
		else if (pelet::StatementClass::VARIABLE == type) {
			pelet::VariableClass* var = (pelet::VariableClass*) callArguments->At(i);
			pelet::ExpressionClass singleExpr(var->Scope);
			singleExpr.Copy(*var);
			varCallArguments.push_back(singleExpr);
		}
	}
	
	// not sure how to resolve the namespace here; since a functions fallback to the root namespace
	wxString fullFunctionName = Scope.FullyQualify(*functionName, DeclaredNamespace);
	newVar->AppendToChain(fullFunctionName, varCallArguments, true, false);
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeFunctionCallFromAbsoluteNamespace(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	functionName->MakeAbsolute();
	std::vector<pelet::ExpressionClass> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(*singleExpr);
		}
	}
	wxString fullFunctionName = functionName->ToSignature() ;
	newVar->AppendToChain(fullFunctionName, varCallArguments, true, false);
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeFunctionCallFromDeclaredNamespace(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	std::vector<pelet::ExpressionClass> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(*singleExpr);
		}
	}
	wxString fullFunctionName = Scope.FullyQualify(*functionName, DeclaredNamespace);
	newVar->AppendToChain(fullFunctionName, varCallArguments, true, false);
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeGlobalVariable(pelet::SemanticValueClass* value) {
	pelet::AssignmentExpressionClass* newExpr = new pelet::AssignmentExpressionClass(Scope);
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	if (value) {
		newExpr->Destination.AppendToChain(value->Lexeme);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeNewInstanceCall(pelet::QualifiedNameClass* className) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->ToNewCall(Scope.FullyQualify(*className, DeclaredNamespace));
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeObject(pelet::ExpressionClass* srcExpression) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->Copy(*srcExpression);
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeScalar(pelet::ExpressionClass* srcExpression) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->Copy(*srcExpression);
	newExpr->ExpressionType = pelet::ExpressionClass::SCALAR;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeScalar(pelet::SemanticValueClass* srcValue) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	if (srcValue) {
		newExpr->ToScalar(srcValue->Lexeme);
		newExpr->Comment = srcValue->Comment;
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeScalarFromConstant(pelet::QualifiedNameClass* constantName) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->ToConstant(wxT(""), constantName->ToSignature());
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeStaticMethodCall(pelet::QualifiedNameClass* className, 
		pelet::SemanticValueClass* methodName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	std::vector<pelet::ExpressionClass> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(*singleExpr);
		}
	}
	
	newVar->AppendToChain(Scope.FullyQualify(*className, DeclaredNamespace));
	if (methodName) {
		newVar->AppendToChain(methodName->Lexeme, varCallArguments, true, true);
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeStaticVariable(pelet::SemanticValueClass* nameValue) {
	pelet::AssignmentExpressionClass* newExpr = new pelet::AssignmentExpressionClass(Scope);
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	if (nameValue) {
		newExpr->Destination.AppendToChain(nameValue->Lexeme);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableAppendArrayOffset(pelet::VariableClass* arrayVariable, pelet::ExpressionClass* offsetExpr) {
	if (pelet::ExpressionClass::SCALAR == offsetExpr->ExpressionType) {
		arrayVariable->ArrayKey = offsetExpr->FirstValue();
	}
	return arrayVariable;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionNil() {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->Type = pelet::ExpressionClass::NIL;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::IncludeFound(pelet::ExpressionClass* expr, const int lineNumber) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->Copy(*expr);
	newExpr->Type = pelet::ExpressionClass::INCLUDE_STATEMENT;
	newExpr->LineNumber = lineNumber;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

void pelet::FullParserObserverClass::MakeAst(pelet::StatementListClass* statements) {
	
	// go through the list of statements and send the correct notifications
	for (size_t i = 0; i < statements->Size(); ++i) {
		pelet::StatementClass::Types type = statements->TypeAt(i);
		pelet::StatementClass* stmt = statements->At(i);
		wxString name;
		switch(type) {
		case pelet::StatementClass::ASSIGNMENT:
			if (ExpressionObserver) {
				pelet::AssignmentExpressionClass* expr = (pelet::AssignmentExpressionClass*)stmt;
				ExpressionObserver->ExpressionFound(*expr);
			}
			if (Variable) {
				pelet::AssignmentExpressionClass* expr = (pelet::AssignmentExpressionClass*)stmt;
				Variable->VariableFound(expr->Destination.Scope.NamespaceName, 
					expr->Destination.Scope.ClassName, expr->Destination.Scope.MethodName, 
					expr->Destination, *expr, expr->Comment);
			}
			break;
		case pelet::StatementClass::CLASS_DECLARATION:
			if (Class || Member) {
				pelet::ClassSymbolClass* classSymbol = (pelet::ClassSymbolClass*) stmt;
				if (Class) {
					Class->ClassFound(classSymbol->NamespaceName, classSymbol->ClassName, classSymbol->ToSignature(),
					                  classSymbol->Comment, classSymbol->StartingLineNumber);
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
				pelet::ExpressionClass * expr = (pelet::ExpressionClass*)stmt;
				if (expr->ChainList.size() == 1) {
					name = expr->ChainList[0].Name;
					name.MakeLower();
					if (name.compare(wxT("define")) == 0
						&& 2 == expr->ChainList[0].CallArguments.size()) {
						Class->DefineDeclarationFound(wxT(""), expr->ChainList[0].CallArguments[0].FirstValue(),
													expr->ChainList[0].CallArguments[1].FirstValue(),
													expr->Comment, expr->LineNumber);
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
				wxString signature = memberSymbol->ToMethodSignature(memberSymbol->ParametersList.ToSignature());
				size_t index = signature.find(wxT("function"));
				signature = signature.substr(index, std::string::npos);
				wxString comment = memberSymbol->GetComment();
				if (Function) {
					Function->FunctionFound(memberSymbol->NamespaceName, memberSymbol->MemberName, signature,
					                        memberSymbol->GetReturnType(), comment, memberSymbol->StartingLineNumber);
				}
				if (Variable) {
					NotifyVariablesFromParameterList(memberSymbol->ParametersList, memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName);
				}
				if (Function) {
					Function->FunctionScope(memberSymbol->NamespaceName, memberSymbol->MemberName,
						memberSymbol->StartingPosition, memberSymbol->EndingPosition);
				}
			}
			break;
		case pelet::StatementClass::INCLUDE_STATEMENT:
			if (Class) {
				pelet::ExpressionClass* expr = (pelet::ExpressionClass*)stmt;
				if (pelet::ExpressionClass::SCALAR == expr->ExpressionType) {
					Class->IncludeFound(expr->FirstValue(), expr->LineNumber);
				} else {

					// not sure what to do for include statements
					// with variables; ie. " include $file; "
					// for now just propagate an empty name
					wxString empty;
					Class->IncludeFound(empty, expr->LineNumber);
				}
			}
			break;
		case pelet::StatementClass::ASSIGNMENT_LIST:
			if (Variable) {
				pelet::AssignmentListExpressionClass* expr = (pelet::AssignmentListExpressionClass*)stmt;
				for (size_t i = 0; i < expr->Destinations.size(); ++i) {
					Variable->VariableFound(expr->Scope.NamespaceName, 
						expr->Scope.ClassName, expr->Scope.MethodName, 
						expr->Destinations[i], *expr, expr->Comment);
				}
			}
			break;
		case pelet::StatementClass::METHOD_DECLARATION:
			if (Member || Variable) {
				pelet::ClassMemberSymbolClass* memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;
				wxString signature = memberSymbol->ToMethodSignature(memberSymbol->ParametersList.ToSignature());
				pelet::TokenClass::TokenIds visibility = pelet::TokenClass::PUBLIC;
				if (memberSymbol->IsProtectedMember) {
					visibility = pelet::TokenClass::PROTECTED;
				} else if (memberSymbol->IsPrivateMember) {
					visibility = pelet::TokenClass::PRIVATE;
				}
				wxString className = memberSymbol->ClassName;
				bool isStatic = memberSymbol->IsStaticMember;
				if (Member) {
					Member->MethodFound(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName, signature,
					                    memberSymbol->GetReturnType(), memberSymbol->GetComment(), visibility, isStatic, memberSymbol->StartingLineNumber);
				}
				if (Variable) {
					NotifyVariablesFromParameterList(memberSymbol->ParametersList, memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName);
				}
				if (Member) {
					Member->MethodScope(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName, 
						memberSymbol->StartingPosition, memberSymbol->EndingPosition);
				}
			}
			break;
		case pelet::StatementClass::NAMESPACE_DECLARATION:
			if (Class) {
				pelet::NamespaceDeclarationClass* declaration = (pelet::NamespaceDeclarationClass*) stmt;
				Class->NamespaceDeclarationFound(declaration->NamespaceName, declaration->StartingPosition);
			}
			break;
		case pelet::StatementClass::NAMESPACE_USE:
			if (Class) {
				pelet::NamespaceUseClass* namespaceUse = (pelet::NamespaceUseClass*) stmt;
				Class->NamespaceUseFound(namespaceUse->NamespaceName, namespaceUse->Alias, namespaceUse->StartingPos);
			}
			break;
		case pelet::StatementClass::NIL:

			// NIL is anything we want to skip on purpose
			break;
		case pelet::StatementClass::VARIABLE:

			// we only want variables that are in assignments for now
			break;
		case pelet::StatementClass::PROPERTY_DECLARATION:
			if (Member) {
				pelet::ClassMemberSymbolClass* memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;
				pelet::TokenClass::TokenIds visibility = pelet::TokenClass::PUBLIC;
				if (memberSymbol->IsProtectedMember) {
					visibility = pelet::TokenClass::PROTECTED;
				} else if (memberSymbol->IsPrivateMember) {
					visibility = pelet::TokenClass::PRIVATE;
				}
				wxString className = memberSymbol->ClassName;
				bool isStatic = memberSymbol->IsStaticMember;
				bool isConst = memberSymbol->IsConstMember;
				Member->PropertyFound(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName,
				                      memberSymbol->GetReturnType(), memberSymbol->GetComment(), visibility, isConst, isStatic, memberSymbol->StartingLineNumber);
			}
			break;
		case pelet::StatementClass::TRAIT_ALIAS_DECLARATION:
			if (Member) {
				pelet::TraitAliasClass* traitAlias = (pelet::TraitAliasClass*) stmt;
				Member->TraitAliasFound(traitAlias->NamespaceName, traitAlias->ClassName,
				                        traitAlias->TraitUsedClassName, traitAlias->TraitMethodReferenceName, traitAlias->Alias, traitAlias->Visibility);
			}
			break;
		case pelet::StatementClass::TRAIT_INSTEADOF_DECLARATION:
			if (Member) {
				pelet::TraitInsteadOfClass* traitInsteadOf = (pelet::TraitInsteadOfClass*) stmt;
				Member->TraitInsteadOfFound(traitInsteadOf->NamespaceName, traitInsteadOf->ClassName,
				                            traitInsteadOf->TraitUsedClassName, traitInsteadOf->TraitMethodReferenceName, traitInsteadOf->InsteadOfList);
			}
			break;
		case pelet::StatementClass::TRAIT_USE_DECLARATION:
			if (Member) {
				pelet::TraitUseClass* traitUse = (pelet::TraitUseClass*) stmt;
				for (size_t i = 0; i < traitUse->UsedTraits.size(); ++i) {
					Member->TraitUseFound(traitUse->NamespaceName, traitUse->ClassName, traitUse->UsedTraits[i]);
				}
			}
			break;
		case pelet::StatementClass::SCALAR:
			break;
		}
	}
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceDeclarationFound(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* namespaceTokenValue) {
	pelet::NamespaceDeclarationClass* newNamespace = new pelet::NamespaceDeclarationClass();
	newNamespace->NamespaceName = namespaceName->ToSignature();
	newNamespace->StartingPosition = namespaceTokenValue->Pos;
	AllAstItems.push_back(newNamespace);
	return StatementListMakeAndAppend(newNamespace);
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceGlobalDeclarationFound(pelet::SemanticValueClass* namespaceTokenValue) {
	pelet::NamespaceDeclarationClass* newNamespace = new pelet::NamespaceDeclarationClass();
	newNamespace->StartingPosition = namespaceTokenValue->Pos;
	newNamespace->NamespaceName = wxT("\\");
	AllAstItems.push_back(newNamespace);
	return StatementListMakeAndAppend(newNamespace);
}

pelet::QualifiedNameClass* pelet::FullParserObserverClass::NamespaceNameAppend(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* nameValue) {
	namespaceName->AppendName(nameValue);
	return namespaceName;
}

pelet::QualifiedNameClass* pelet::FullParserObserverClass::NamespaceNameMake(pelet::SemanticValueClass* nameValue) {
	QualifiedNameClass* qualifiedName = new pelet::QualifiedNameClass();
	qualifiedName->Init(nameValue);
	AllAstItems.push_back(qualifiedName);
	return qualifiedName;
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUse(pelet::QualifiedNameClass* namespaceName) {
	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	
	// according to PHP rules, all imports use absolute namespaces
	namespaceName->MakeAbsolute();
	wxString alias = useStatement->Set(namespaceName, wxT(""));

	// dont worry about duplicate aliases, since its incorrect PHP
	Scope.AddNamespaceAlias(namespaceName->ToSignature(), alias);

	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUseAbsolute(pelet::QualifiedNameClass* namespaceName) {
	namespaceName->MakeAbsolute();

	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	wxString alias = useStatement->Set(namespaceName, wxT(""));

	// dont worry about duplicate aliases, since its incorrect PHP
	Scope.AddNamespaceAlias(namespaceName->ToSignature(), alias);

	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUseAbsoluteAlias(pelet::QualifiedNameClass* namespaceName, 
		pelet::SemanticValueClass* aliasValue) {
	namespaceName->MakeAbsolute();

	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	if (aliasValue) {
		wxString alias = useStatement->Set(namespaceName, aliasValue->Lexeme);

		// dont worry about duplicate aliases, since its incorrect PHP
		Scope.AddNamespaceAlias(namespaceName->ToSignature(), alias);
	}
	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUseAlias(pelet::QualifiedNameClass* namespaceName, 
		pelet::SemanticValueClass* aliasValue) {
		
	// according to PHP rules, all imports use absolute namespaces
	namespaceName->MakeAbsolute();
	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	if (aliasValue) {
		wxString alias = useStatement->Set(namespaceName, aliasValue->Lexeme);

		// dont worry about duplicate aliases, since its incorrect PHP
		Scope.AddNamespaceAlias(namespaceName->ToSignature(), alias);
	}
	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUseSetStartingPos(pelet::StatementListClass* namespaceStatements, pelet::SemanticValueClass* useToken) {
	for (size_t i = 0; i < namespaceStatements->Size(); ++i) {
		pelet::StatementClass::Types type = namespaceStatements->TypeAt(i);
		if (pelet::StatementClass::NAMESPACE_USE == type) {
			pelet::NamespaceUseClass* useStmt = (pelet::NamespaceUseClass*) namespaceStatements->At(i);
			useStmt->StartingPos = useToken->Pos;
		}
	}
	return namespaceStatements;
}

pelet::ParametersListClass* pelet::FullParserObserverClass::ParametersListAppend(pelet::ParametersListClass* parametersList, pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference) {
	parametersList->Append(type, parameterName, isReference, Scope, DeclaredNamespace);
	return parametersList;
}

pelet::ParametersListClass* pelet::FullParserObserverClass::ParametersListCreate(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference) {
	pelet::ParametersListClass* parametersList = new pelet::ParametersListClass;
	parametersList->Append(type, parameterName, isReference, Scope, DeclaredNamespace);
	AllAstItems.push_back(parametersList);
	return parametersList;
}

pelet::ParametersListClass* pelet::FullParserObserverClass::ParametersListNil() {
	pelet::ParametersListClass* parametersList = new pelet::ParametersListClass;

	AllAstItems.push_back(parametersList);
	return parametersList;
}

pelet::QualifiedNameClass* pelet::FullParserObserverClass::QualifiedNameCreate(pelet::SemanticValueClass* nameValue) {
	pelet::QualifiedNameClass* qualifiedName = new pelet::QualifiedNameClass;
	qualifiedName->Init(nameValue);
	AllAstItems.push_back(qualifiedName);
	return qualifiedName;
}

pelet::QualifiedNameClass* pelet::FullParserObserverClass::QualifiedNameMakeAbsolute(pelet::QualifiedNameClass* qualifiedName) {
	qualifiedName->MakeAbsolute();
	return qualifiedName;
}

pelet::QualifiedNameClass* pelet::FullParserObserverClass::QualifiedNameMakeFromDeclaredNamespace(pelet::QualifiedNameClass* qualifiedName) {
	qualifiedName->PrependNamespace(DeclaredNamespace);
	return qualifiedName;
}

pelet::QualifiedNameClass* pelet::FullParserObserverClass::QualifiedNameNil() {
	pelet::QualifiedNameClass* qualifiedName = new pelet::QualifiedNameClass;
	AllAstItems.push_back(qualifiedName);
	return qualifiedName;
}

pelet::SemanticValueClass* pelet::FullParserObserverClass::SemanticValueNil() {
	pelet::SemanticValueClass* value = new pelet::SemanticValueClass;
	AllAstItems.push_back(value);
	return value;
}

pelet::StatementListClass* pelet::FullParserObserverClass::StatementListAppend(pelet::StatementListClass* statementList, pelet::StatementClass* statement) {
	statementList->Push(statement);
	return statementList;
}

pelet::StatementListClass* pelet::FullParserObserverClass::StatementListMake() {
	pelet::StatementListClass* statementList =  new pelet::StatementListClass;
	AllAstItems.push_back(statementList);
	return statementList;
}

pelet::StatementListClass* pelet::FullParserObserverClass::StatementListMakeAndAppend(pelet::StatementClass* statement) {
	pelet::StatementListClass* statementList =  new pelet::StatementListClass;
	statementList->Push(statement);

	AllAstItems.push_back(statementList);
	return statementList;
}

pelet::StatementListClass* pelet::FullParserObserverClass::StatementListMerge(pelet::StatementListClass* a, pelet::StatementListClass* b) {
	a->PushAll(b);
	return a;
}

pelet::StatementListClass* pelet::FullParserObserverClass::StatementListNil() {
	pelet::StatementListClass* statementList =  new pelet::StatementListClass;
	AllAstItems.push_back(statementList);
	return statementList;
}

void pelet::FullParserObserverClass::SetCurrentClassName(pelet::SemanticValueClass* value) {
	Scope.ClassName = value ? value->Lexeme : wxT("");
}

void pelet::FullParserObserverClass::SetCurrentMemberName(pelet::SemanticValueClass* value) {
	Scope.MethodName = value ? value->Lexeme : wxT("");
}

void pelet::FullParserObserverClass::SetDeclaredNamespace(pelet::QualifiedNameClass* qualifiedName) {
	Scope.ClearAliases();
	if (qualifiedName) {
		DeclaredNamespace = *qualifiedName;
		
		// setting to true because the namespace declaration is always absolute according to PHP rules
		DeclaredNamespace.IsAbsolute = true;
		Scope.NamespaceName = DeclaredNamespace.ToSignature();
	} else {
		DeclaredNamespace.Clear();
		DeclaredNamespace.IsAbsolute = true;
		Scope.NamespaceName.clear();
	}
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeAsAssignmentExpression(pelet::VariableClass* variable) {
	pelet::AssignmentExpressionClass* newExpr =  new pelet::AssignmentExpressionClass(Scope);
	newExpr->Destination = *variable;
	newExpr->Comment = variable->Comment;
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	newExpr->ChainList = variable->ChainList;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::TraitAliasClass* pelet::FullParserObserverClass::TraitAliasMake(pelet::TraitAliasClass* traitMethodReference, pelet::ClassMemberSymbolClass* traitModifiers) {
	pelet::TraitAliasClass* newAlias = new pelet::TraitAliasClass;
	newAlias->TraitUsedClassName = traitMethodReference->TraitUsedClassName;
	newAlias->TraitMethodReferenceName = traitMethodReference->TraitMethodReferenceName;
	if (traitModifiers->IsPublicMember) {
		newAlias->Visibility = pelet::TokenClass::PUBLIC;
	} else if (traitModifiers->IsProtectedMember) {
		newAlias->Visibility = pelet::TokenClass::PROTECTED;
	} else if (traitModifiers->IsPrivateMember) {
		newAlias->Visibility = pelet::TokenClass::PRIVATE;
	}
	AllAstItems.push_back(newAlias);
	return newAlias;
}

pelet::TraitAliasClass* pelet::FullParserObserverClass::TraitAliasMake(pelet::TraitAliasClass* traitMethodReference, pelet::ClassMemberSymbolClass* traitModifiers, pelet::SemanticValueClass* aliasValue) {
	pelet::TraitAliasClass* newAlias = new pelet::TraitAliasClass;
	newAlias->TraitUsedClassName = traitMethodReference->TraitUsedClassName;
	newAlias->TraitMethodReferenceName = traitMethodReference->TraitMethodReferenceName;
	if (traitModifiers->IsPublicMember) {
		newAlias->Visibility = pelet::TokenClass::PUBLIC;
	} else if (traitModifiers->IsProtectedMember) {
		newAlias->Visibility = pelet::TokenClass::PROTECTED;
	} else if (traitModifiers->IsPrivateMember) {
		newAlias->Visibility = pelet::TokenClass::PRIVATE;
	}
	if (aliasValue) {
		newAlias->Alias = aliasValue->Lexeme;
	}
	AllAstItems.push_back(newAlias);
	return newAlias;
}

pelet::TraitAliasClass* pelet::FullParserObserverClass::TraitAliasMakeMethodReferenceList(pelet::QualifiedNameClass* qualifiedName, pelet::SemanticValueClass* methodName) {
	pelet::TraitAliasClass* newAlias = new pelet::TraitAliasClass;
	newAlias->TraitUsedClassName = Scope.FullyQualify(*qualifiedName, DeclaredNamespace);
	if (methodName) {
		newAlias->TraitMethodReferenceName = methodName->Lexeme;
	}
	AllAstItems.push_back(newAlias);
	return newAlias;
}

pelet::TraitAliasClass* pelet::FullParserObserverClass::TraitAliasMakeMethodReferenceList(pelet::SemanticValueClass* methodName) {
	pelet::TraitAliasClass* newAlias = new pelet::TraitAliasClass;
	if (methodName) {
		newAlias->TraitMethodReferenceName = methodName->Lexeme;
	}
	AllAstItems.push_back(newAlias);
	return newAlias;
}

pelet::TraitInsteadOfClass* pelet::FullParserObserverClass::TraitInsteadOfAppendReferenceList(pelet::TraitInsteadOfClass* traitInsteadOf, pelet::QualifiedNameClass* qualifiedName) {
	traitInsteadOf->AppendInsteadOf(qualifiedName, Scope, DeclaredNamespace);
	return traitInsteadOf;
}

pelet::TraitInsteadOfClass* pelet::FullParserObserverClass::TraitInsteadOfMake(pelet::TraitAliasClass* traitMethodReference, pelet::TraitInsteadOfClass* traitInsteadOfList) {
	pelet::TraitInsteadOfClass* newInsteadOf = new pelet::TraitInsteadOfClass;
	newInsteadOf->TraitUsedClassName =  traitMethodReference->TraitUsedClassName;
	newInsteadOf->TraitMethodReferenceName = traitMethodReference->TraitMethodReferenceName;
	newInsteadOf->InsteadOfList = traitInsteadOfList->InsteadOfList;
	AllAstItems.push_back(newInsteadOf);
	return newInsteadOf;
}

pelet::TraitInsteadOfClass* pelet::FullParserObserverClass::TraitInsteadOfMakeReferenceList(pelet::QualifiedNameClass* qualifiedName) {
	pelet::TraitInsteadOfClass* newInsteadOf = new pelet::TraitInsteadOfClass;
	newInsteadOf->AppendInsteadOf(qualifiedName, Scope, DeclaredNamespace);
	AllAstItems.push_back(newInsteadOf);
	return newInsteadOf;
}

pelet::TraitUseClass* pelet::FullParserObserverClass::TraitUseAppend(pelet::TraitUseClass* traitUse, pelet::QualifiedNameClass* qualifiedName) {
	return traitUse->AppendUse(qualifiedName, Scope, DeclaredNamespace);
}

pelet::StatementListClass* pelet::FullParserObserverClass::TraitUseMake(pelet::TraitUseClass* traitsUsed, pelet::StatementListClass* traitAdaptations) {
	pelet::StatementListClass* list = StatementListMake();
	traitsUsed->NamespaceName = DeclaredNamespace.ToSignature();
	traitsUsed->ClassName = Scope.ClassName;
	list->Push(traitsUsed);
	for (size_t i = 0; i < traitAdaptations->Size(); ++i) {
		pelet::StatementClass::Types type = traitAdaptations->TypeAt(i);
		if (pelet::StatementClass::TRAIT_ALIAS_DECLARATION == type) {
			pelet::TraitAliasClass* traitDeclaration = (pelet::TraitAliasClass* )traitAdaptations->At(i);
			traitDeclaration->NamespaceName = DeclaredNamespace.ToSignature();
			traitDeclaration->ClassName = Scope.ClassName;
			list->Push(traitDeclaration);
		} else if (pelet::StatementClass::TRAIT_INSTEADOF_DECLARATION == type) {
			pelet::TraitInsteadOfClass* insteadOfDeclaration = (pelet::TraitInsteadOfClass* )traitAdaptations->At(i);
			insteadOfDeclaration->NamespaceName = DeclaredNamespace.ToSignature();
			insteadOfDeclaration->ClassName = Scope.ClassName;
			list->Push(insteadOfDeclaration);
		}
	}
	return list;
}

pelet::TraitUseClass* pelet::FullParserObserverClass::TraitUseStart(pelet::QualifiedNameClass* qualifiedName) {
	pelet::TraitUseClass* newTraitUse = new pelet::TraitUseClass;
	newTraitUse->AppendUse(qualifiedName, Scope, DeclaredNamespace);
	AllAstItems.push_back(newTraitUse);
	return newTraitUse;
}
pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeFromVariable(pelet::VariableClass* variableValue) {
	pelet::ExpressionClass* expr = new pelet::ExpressionClass(Scope);
	expr->Copy(*variableValue);
	AllAstItems.push_back(expr);
	return expr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionAppendToChain(pelet::ExpressionClass* expression, pelet::VariableClass* variable) {
	for (size_t i = 0; i < variable->ChainList.size(); ++i) {
		expression->ChainList.push_back(variable->ChainList[i]);
	}
	return expression;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionAppendToChain(pelet::ExpressionClass* expression, pelet::ExpressionClass* restExpression) {
	for (size_t i = 0; i < restExpression->ChainList.size(); ++i) {
		expression->ChainList.push_back(restExpression->ChainList[i]);
	}
	return expression;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableAppendToChain(pelet::VariableClass* variable, pelet::VariableClass* callArguments, 
		pelet::SemanticValueClass* operatorValue) {
	if (variable && callArguments && !variable->ChainList.empty() && !callArguments->ChainList.empty()) {
		variable->ChainList.back().CallArguments = callArguments->ChainList[0].CallArguments;
		variable->ChainList.back().IsFunction = callArguments->ChainList[0].IsFunction;
		variable->ChainList.back().IsStatic = false;
	}
	return variable;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeAndAppendFunctionCall(pelet::StatementListClass* callArguments, bool isMethod) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	std::vector<pelet::ExpressionClass> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(*singleExpr);
		}
		else if (pelet::StatementClass::VARIABLE == type) {
			pelet::VariableClass* var = (pelet::VariableClass*) callArguments->At(i);
			pelet::ExpressionClass singleExpr(var->Scope);
			singleExpr.Copy(*var);
			varCallArguments.push_back(singleExpr);
		}
	}
	newVar->AppendToChain(wxT(""), varCallArguments, isMethod, false);
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableAppendToChain(pelet::VariableClass* variableProperties, pelet::VariableClass* newVariableProperty) {
	if (!newVariableProperty->ChainList.empty()) {
		variableProperties->ChainList.push_back(newVariableProperty->ChainList.front());
	}
	return variableProperties;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMake(pelet::VariableClass* baseName, pelet::VariableClass* firstProperty, 
		pelet::VariableClass* firstPropertyCallArguments, pelet::VariableClass* restProperties) {
	if (firstProperty && firstPropertyCallArguments && !firstProperty->ChainList.empty() && !firstPropertyCallArguments->ChainList.empty()) {
		baseName->AppendToChain(firstProperty->ChainList[0].Name, firstPropertyCallArguments->ChainList[0].CallArguments, 
			firstPropertyCallArguments->ChainList[0].IsFunction, firstPropertyCallArguments->ChainList[0].IsStatic);
	}
	else if (firstProperty && !firstProperty->ChainList.empty()) {
		
		// a property not a function call
		baseName->AppendToChain(firstProperty->ChainList[0].Name, firstProperty->ChainList[0].CallArguments, 
			false, false);
	}
	if (restProperties) {
		for (size_t i = 0; i < restProperties->ChainList.size(); ++i) {
			baseName->ChainList.push_back(restProperties->ChainList[i]);
		}
	}
	return baseName;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableNil() {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableStart(pelet::SemanticValueClass* variableValue) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	if (variableValue) {
		newVar->AppendToChain(variableValue->Lexeme);
		newVar->Comment = variableValue->Comment;
		newVar->LineNumber = variableValue->LineNumber;
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableStartStaticMember(pelet::QualifiedNameClass* className, pelet::VariableClass* memberName) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	if (className && memberName) {
		newVar->AppendToChain(Scope.FullyQualify(*className, DeclaredNamespace));
		
		// dont handle variable static members for now ClassName::${$varName}
		if (memberName->ChainList.size() == 1) {
			std::vector<pelet::ExpressionClass> args;
			newVar->AppendToChain(memberName->ChainList[0].Name, args, false, true);
		}
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::ScopeClass pelet::FullParserObserverClass::CurrentScope() {
	return Scope;
}

void pelet::FullParserObserverClass::DeclareAssignedPropertiesFromAssignments(pelet::StatementListClass* classStatements) {
	if (classStatements == NULL || classStatements->Size() <= 0) {
		return;
	}
	std::vector<wxString> assignedProperties;
	
	// gather all of the declared properties
	for (size_t i = 0; i < classStatements->Size(); ++i) {
		if (pelet::StatementClass::PROPERTY_DECLARATION == classStatements->TypeAt(i)) {
			pelet::ClassMemberSymbolClass* member = (pelet::ClassMemberSymbolClass*)classStatements->At(i);
			assignedProperties.push_back(member->MemberName);
		}
	}
	
	// to keep while we are iterating through the class statements
	// since we want to add to class statements we will add after looping through them
	pelet::StatementListClass newMembers;
	
	// go through all assignments and make a property declaration for each assigned variable
	// that is not already declared
	for (size_t i = 0; i < classStatements->Size(); ++i) {
		bool isThisAssignment = false;
		pelet::AssignmentExpressionClass* expr = NULL;
		if (pelet::StatementClass::ASSIGNMENT == classStatements->TypeAt(i)) {
			expr = (pelet::AssignmentExpressionClass*)classStatements->At(i);
			
			// the chain list must have 2 items: "$this" and the property name
			if (expr->Destination.ChainList.size() == 2 && expr->Destination.ChainList[0].Name == wxT("$this") 
					&& !expr->Destination.ChainList[0].IsFunction && !expr->Destination.ChainList[1].IsFunction) {
				isThisAssignment = true;
			}
		}
		if (isThisAssignment) {
			
			// add the siguil because declared properties have the siguil while the properties added at run time
			// do not; we want to compare apples-to-apples
			wxString propertyName = wxT("$") + expr->Destination.ChainList[1].Name;
			if (assignedProperties.end() == std::find(assignedProperties.begin(), assignedProperties.end(), propertyName)) {
				pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass;
				pelet::SemanticValueClass nameValue;
				pelet::SemanticValueClass commentValue;
				nameValue.Lexeme = propertyName;
				nameValue.LineNumber = expr->LineNumber;
				
				// cannot assign  nameValue.EndingPosition dont know which line to point to
				newMember->MakeVariable(&nameValue, &commentValue, false, 0, CurrentScope(), this->DeclaredNamespace);
				newMember->ClassName = CurrentScope().ClassName;
				
				// this class will own the pointer
				AllAstItems.push_back(newMember);
				newMembers.Push(newMember);
				assignedProperties.push_back(propertyName);
			}
		}
	}
	classStatements->PushAll(&newMembers);
}

void pelet::FullParserObserverClass::CreateMagicMethodsAndProperties(pelet::StatementListClass* classStatements, pelet::ClassSymbolClass* clazz) {
	pelet::CreateMagicMethodsAndProperties(AllAstItems, classStatements, Scope, DeclaredNamespace, clazz->Comment, clazz->EndingLineNumber);
}
