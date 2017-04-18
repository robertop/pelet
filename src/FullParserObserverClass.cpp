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
#include <unicode/ustdio.h>
#include <unicode/ustring.h>
#include <algorithm>

pelet::FullParserObserverClass::FullParserObserverClass(ClassObserverClass* classObserver, ClassMemberObserverClass* memberObserver,
        FunctionObserverClass* functionObserver, VariableObserverClass* variableObserver,
        ExpressionObserverClass* expressionObserver)
	: Scope()
	, DeclaredNamespace()
	, Class(classObserver)
	, Member(memberObserver)
	, Function(functionObserver)
	, Variable(variableObserver)
	, ExpressionObserver(expressionObserver)
	, AllAstItems() 
	, AnonymousFunctionCount(-1) {
}

pelet::FullParserObserverClass::~FullParserObserverClass() {
	SemanticValueFree();
}

void pelet::FullParserObserverClass::NamespaceAliasClear() {
	Scope.ClearAliases();
}

void pelet::FullParserObserverClass::NotifyVariablesFromParameterList(pelet::ParametersListClass& parameters, UnicodeString currentNamespaceName, UnicodeString currentClassName, UnicodeString currentMethodName) {
	if (!Variable && !ExpressionObserver) {
		return;
	}
	size_t paramCount = parameters.GetCount();
	if (paramCount > 0) {
		UnicodeString paramName,
		              paramType;
		UnicodeString comment;
		for (size_t i = 0; i < paramCount; ++i) {

			// making this a pointer so that the expression observer
			// receives a pointer just like all other callbacks
			// but also we want to keep the same memory ownership semantics
			// ie. we want the pointer to be alive until the observer
			// dies.
			pelet::VariableClass* variable = new pelet::VariableClass(Scope);
			AllAstItems.push_back(variable);

			parameters.Param(i, paramName, paramType);
			
			// remove the reference operator if it exists
			if (!paramName.isEmpty() && paramName[0] == '&') {
				paramName.remove(0, 1);
			}
			
			variable->AppendToChain(paramName);
			variable->PhpDocType = paramType;
			if (!paramType.isEmpty()) {

				// TODO: set correct line/pos
				pelet::NewInstanceExpressionClass* newCallExpr = new pelet::NewInstanceExpressionClass(Scope);
				AllAstItems.push_back(newCallExpr);

				newCallExpr->ClassName = paramType;
				if (Variable) {
					Variable->VariableFound(currentNamespaceName, currentClassName, currentMethodName, *variable, newCallExpr, comment);
				}
				if (ExpressionObserver) {
					ExpressionObserver->ExpressionFunctionArgumentFound(variable);
				}
			} 
			else {
				pelet::ExpressionClass* unknownExpression = new pelet::ExpressionClass(Scope);
				AllAstItems.push_back(unknownExpression);
				unknownExpression->ExpressionType = pelet::ExpressionClass::UNKNOWN;
				if (Variable) {
					Variable->VariableFound(currentNamespaceName, currentClassName, currentMethodName, *variable, unknownExpression, comment);
				}
				if (ExpressionObserver) {
					ExpressionObserver->ExpressionFunctionArgumentFound(variable);
				}
			}		
		}
	}
}

void pelet::FullParserObserverClass::NotifyLocalVariableTypeHint(const UnicodeString& comment) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	NotifyLocalVariableFromPhpDoc(comment);
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

void pelet::FullParserObserverClass::NotifyLocalVariableFromPhpDoc(const UnicodeString& phpDocComment) {
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
	while (next) {
		if (UNICODE_STRING_SIMPLE("@var").caseCompare(next, 0) == 0) {
			pelet::VariableClass variable(Scope);
			pelet::ExpressionClass expression(Scope);
			UnicodeString variableName;

			// example line: @var string $nameString a string version of a name
			// will be lenient and allow the reverse var then type
			// @var $nameString string
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			FillNameOrType(next, variableName, variable.PhpDocType);
			if (next) {
				next = u_strtok_r(NULL, delimsBuffer, &saveState);
				FillNameOrType(next, variableName, variable.PhpDocType);
				if (!variableName.isEmpty() && !variable.PhpDocType.isEmpty()) {

					// handle namespaces in the phpDoc
					variable.PhpDocType = pelet::PhpDocTypeToAbsoluteClassname(variable.PhpDocType, Scope, DeclaredNamespace);
					variable.IsPhpDocVariable = true;
					variable.AppendToChain(variableName);
					Variable->VariableFound(DeclaredNamespace.ToSignature(), Scope.ClassName, Scope.MethodName, variable, &expression, phpDocComment);
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
	UnicodeString allComments;
	if (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {

		// advance past all comments (there can be more than one consecutive)
		// keep /** and /* comments separate; parse all comments for local
		// variables but only return /** (doc comments) as those are 
		// the important ones
		while (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {
			UnicodeString singleComment;
			if (pelet::T_DOC_COMMENT == ret) {
				analyzer.GetLexeme(singleComment);
				value->semanticValue->Comment.append(singleComment);
			} else if (pelet::T_COMMENT == ret) {
				analyzer.GetLexeme(singleComment);
				commentValue.Comment.append(singleComment);
			}
			ret = analyzer.NextToken();
		}
	}
	if (!commentValue.Comment.isEmpty()) {
		observers.NotifyLocalVariableTypeHint(commentValue.Comment);
	}
	if (value->semanticValue && !value->semanticValue->Comment.isEmpty()) {
		observers.NotifyLocalVariableTypeHint(value->semanticValue->Comment);
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
	int capacity = msg.length() + 1;
	int written = u_sprintf(analyzer.ParserError.getBuffer(capacity), "%s", msg.c_str());
	analyzer.ParserError.releaseBuffer(written);
	observers.SemanticValueFree();
}

pelet::ExpressionClass* pelet::FullParserObserverClass::AssignmentExpressionFromExpressionFound(pelet::VariableClass* variable, pelet::ExpressionClass* expression) {
	pelet::AssignmentExpressionClass* newExpr =  new pelet::AssignmentExpressionClass(Scope);
	newExpr->LineNumber = variable->LineNumber;
	newExpr->Pos = variable->Pos;
	newExpr->Destination = *variable;
	newExpr->Expression = expression;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::AssignmentExpressionFromNewFound(pelet::VariableClass* variable, pelet::QualifiedNameClass* className, 
																						pelet::StatementListClass* callArguments) {
	pelet::NewInstanceExpressionClass* classExpr =  new pelet::NewInstanceExpressionClass(Scope);
	classExpr->LineNumber = variable->LineNumber;
	classExpr->Pos = variable->Pos;
	classExpr->ClassName = Scope.FullyQualify(*className, DeclaredNamespace);
	classExpr->AddStatementsAsArguments(callArguments);

	pelet::AssignmentExpressionClass* newExpr = new pelet::AssignmentExpressionClass(Scope);
	newExpr->LineNumber = variable->LineNumber;
	newExpr->Pos = variable->Pos;
	newExpr->Destination = *variable;
	newExpr->Expression = classExpr;

	AllAstItems.push_back(newExpr);
	AllAstItems.push_back(classExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::AssignmentExpressionFromVariableFound(pelet::VariableClass* variable, pelet::VariableClass* srcVariable) {
	pelet::AssignmentExpressionClass* newExpr = new pelet::AssignmentExpressionClass(Scope);
	newExpr->LineNumber = variable->LineNumber;
	newExpr->Pos = variable->Pos;
	newExpr->Destination = *variable;
	newExpr->Expression = srcVariable;

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
		pelet::StatementListClass* functionStatements,
		pelet::SemanticValueClass* startingBodyTokenValue, pelet::SemanticValueClass* endingBodyTokenValue,
		pelet::QualifiedNameClass* returnType) {
	pelet::TypeHintClass* typeHint = new pelet::TypeHintClass;
	AllAstItems.push_back(typeHint);
	if (returnType) {
		typeHint->Set(returnType, false);
	}
	return ClassMemberSymbolMakeFunction(nameValue, isReference,
		functionValue, parameters,
		functionStatements,
		startingBodyTokenValue, endingBodyTokenValue,
		typeHint);
}

pelet::StatementListClass* pelet::FullParserObserverClass::ClassMemberSymbolMakeFunction(pelet::SemanticValueClass* nameValue, bool isReference,
        pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters,
		pelet::StatementListClass* functionStatements,
		pelet::SemanticValueClass* startingBodyTokenValue, pelet::SemanticValueClass* endingBodyTokenValue,
		pelet::TypeHintClass* returnType) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	pelet::TokenPositionClass startingPos;
	startingPos.LineNumber = nameValue->LineNumber;
	startingPos.Pos = startingBodyTokenValue->Pos;
	startingPos.Token = startingBodyTokenValue->Token;
	pelet::TokenPositionClass endingPos;
	endingPos.LineNumber = nameValue->LineNumber;
	endingPos.Pos = endingBodyTokenValue->Pos;
	endingPos.Token = endingBodyTokenValue->Token;
	
	// check all the function body for calls to func_get_arg or func_get_args
	// note that this is not a simple foreach loop, we must recurse
	// down all expressions and check those too, for example the 
	// binary expression $cnt = func_get_args();
	bool hasVariableArguments = false;
	pelet::FunctionCallCountObserverClass callCount;
	callCount.FunctionName = UNICODE_STRING_SIMPLE("func_get_arg");
	hasVariableArguments |= callCount.CountCalls(functionStatements) > 0;
	callCount.FunctionName = UNICODE_STRING_SIMPLE("func_get_args");
	hasVariableArguments |= callCount.CountCalls(functionStatements) > 0;

	// variable arguments are also made with the ellipsis operator
	for (size_t i = 0; i < parameters->GetCount(); i++) {
		bool isVariadic = parameters->IsVariadicAt(i);
		if (isVariadic) {
			hasVariableArguments = true;
			break;
		}
	}
	
	if (returnType) {
		newMember->SetReturnType(returnType, Scope, DeclaredNamespace);
	}
	newMember->MakeFunction(nameValue, isReference, functionValue, parameters, startingPos, endingPos, Scope, DeclaredNamespace, hasVariableArguments);
	newMember->MethodStatements.PushAll(functionStatements);
	AllAstItems.push_back(newMember);
	return StatementListMakeAndAppend(newMember);
}

pelet::StatementListClass* pelet::FullParserObserverClass::ClassMemberSymbolMakeMethod(pelet::SemanticValueClass* nameValue, pelet::ClassMemberSymbolClass* modifiers,
        bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters,
		pelet::ClassMemberSymbolClass* methodBody, pelet::QualifiedNameClass* returnType) {
	pelet::TypeHintClass* typeHint = new pelet::TypeHintClass;
	AllAstItems.push_back(typeHint);
	if (returnType) {
		typeHint->Set(returnType, false);
	}
	return ClassMemberSymbolMakeMethod(nameValue, modifiers,
		isReference, functionValue, parameters,
		methodBody, typeHint);
}
	
pelet::StatementListClass* pelet::FullParserObserverClass::ClassMemberSymbolMakeMethod(pelet::SemanticValueClass* nameValue, pelet::ClassMemberSymbolClass* modifiers,
        bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters,
		pelet::ClassMemberSymbolClass* methodBody, pelet::TypeHintClass* returnType) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	
	// check all the function body for calls to func_get_arg or func_get_args
	// note that this is not a simple foreach loop, we must recurse
	// down all expressions and check those too, for example the 
	// binary expression $cnt = func_get_args();
	bool hasVariableArguments = false;
	pelet::FunctionCallCountObserverClass callCount;
	callCount.FunctionName = UNICODE_STRING_SIMPLE("func_get_arg");
	hasVariableArguments |= callCount.CountCalls(&methodBody->MethodStatements) > 0;
	callCount.FunctionName = UNICODE_STRING_SIMPLE("func_get_args");
	hasVariableArguments |= callCount.CountCalls(&methodBody->MethodStatements) > 0;

	// variable arguments are also made with the ellipsis operator
	for (size_t i = 0; i < parameters->GetCount(); i++) {
		bool isVariadic = parameters->IsVariadicAt(i);
		if (isVariadic) {
			hasVariableArguments = true;
			break;
		}
	}

	if (returnType) {
		newMember->SetReturnType(returnType, Scope, DeclaredNamespace);
	}
	newMember->MakeMethod(nameValue, modifiers, isReference, functionValue, parameters, methodBody, Scope, DeclaredNamespace, hasVariableArguments);
	AllAstItems.push_back(newMember);
	pelet::StatementListClass* list = StatementListMakeAndAppend(newMember);
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
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->MakeVariable(nameValue, commentValue, isConstant, startingLineNumber, Scope, DeclaredNamespace);
	AllAstItems.push_back(newMember);
	return StatementListMakeAndAppend(newMember);
}

pelet::StatementListClass* pelet::FullParserObserverClass::ClassMemberSymbolMakeVariables(pelet::StatementListClass* variableStatements, pelet::ClassMemberSymbolClass* modifiers) {
	return pelet::ClassMemberSymbolClass::MakeVariables(variableStatements, modifiers, Scope, DeclaredNamespace);
}

pelet::ClassMemberSymbolClass* pelet::FullParserObserverClass::ClassMemberSymbolSetModifier(pelet::ClassMemberSymbolClass* memberSymbol, pelet::SemanticValueClass* modifierValue) {
	if (pelet::T_PUBLIC == modifierValue->Token) {
		memberSymbol->SetAsPublic();
	} 
	else if (pelet::T_PROTECTED == modifierValue->Token) {
		memberSymbol->SetAsProtected();
	} 
	else if (pelet::T_PRIVATE == modifierValue->Token) {
		memberSymbol->SetAsPrivate();
	}

	// no else statements here
	// abstract/static could be together with public/private
	if (pelet::T_ABSTRACT == modifierValue->Token) {
		memberSymbol->IsAbstractMember = true;
	}
	if (pelet::T_FINAL == modifierValue->Token) {
		memberSymbol->IsFinalMember = true;
	}
	if (pelet::T_CONST == modifierValue->Token) {
		memberSymbol->IsConstMember = true;
	}
	if (pelet::T_STATIC == modifierValue->Token) {
		memberSymbol->IsStaticMember = true;
	}
	return memberSymbol;
}

pelet::StatementListClass* pelet::FullParserObserverClass::ClassMemberSymbolAppendToComment(pelet::StatementListClass* variableStatements, pelet::SemanticValueClass* comment) {
	for (size_t i = 0; i < variableStatements->Size(); i++) {
		if (variableStatements->TypeAt(i) == pelet::StatementClass::PROPERTY_DECLARATION) {
			pelet::ClassMemberSymbolClass* member = (pelet::ClassMemberSymbolClass*)variableStatements->At(i);
			member->AppendToComment(comment, Scope, DeclaredNamespace);
		}
	}
	return variableStatements;
}

pelet::StatementListClass* pelet::FullParserObserverClass::ClassMemberSymbolSetModifiers(pelet::StatementListClass* classConstants, pelet::ClassMemberSymbolClass* modifiers) {
	for (size_t i = 0; i < classConstants->Size(); i++) {
		if (pelet::StatementClass::PROPERTY_DECLARATION == classConstants->TypeAt(i)) {
			pelet::ClassMemberSymbolClass* constSymbol = (pelet::ClassMemberSymbolClass*)classConstants->At(i);
			if (modifiers->IsPublicMember) {
				constSymbol->SetAsPublic();
			} 
			else if (modifiers->IsProtectedMember) {
				constSymbol->SetAsProtected();
			} 
			else if (modifiers->IsPrivateMember) {
				constSymbol->SetAsPrivate();
			}
		}
	}
	return classConstants;
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

pelet::ClassSymbolClass* pelet::FullParserObserverClass::ClassSymbolAddToImplements(pelet::QualifiedNameListClass* implementsList) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	AllAstItems.push_back(newClassSymbol);
	for (size_t i = 0; i < implementsList->Names.size(); i++) {
		newClassSymbol->AddToImplements(implementsList->Names[i], Scope, DeclaredNamespace);	
	}
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
	if (newClassSymbol->NamespaceName.isEmpty()) {
		newClassSymbol->NamespaceName = UNICODE_STRING_SIMPLE("\\");
	}
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

pelet::ClassSymbolClass* pelet::FullParserObserverClass::ClassSymbolMergeModifiers(pelet::ClassSymbolClass* a, pelet::ClassSymbolClass* b) {
	if (b->IsAbstract) {
		a->IsAbstract = b->IsAbstract;
	}
	if (b->IsFinal) {
		a->IsFinal = b->IsFinal;
	}
	if (b->IsInterface) {
		a->IsInterface = b->IsInterface;
	}
	if (b->IsTrait) {
		a->IsTrait = b->IsTrait;
	}
	return a;
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

pelet::StatementListClass* pelet::FullParserObserverClass::ExpressionMakeArrayPair(pelet::ExpressionClass* key, pelet::ExpressionClass* value) {
	pelet::StatementListClass* stmtList = StatementListMake();
	pelet::ArrayPairExpressionClass* pair = new pelet::ArrayPairExpressionClass(Scope);
	if (key) {
		pair->LineNumber = key->LineNumber;
		pair->Pos = key->Pos;
	}
	else if (value) {
		pair->LineNumber = value->LineNumber;
		pair->Pos = value->Pos;
	}
	pair->Key = key;
	pair->Value = value;
	stmtList->Push(pair);

	AllAstItems.push_back(pair);
	return stmtList;
}

pelet::StatementListClass* pelet::FullParserObserverClass::ExpressionMakeArrayPair(pelet::ExpressionClass* key, pelet::StatementListClass* stmts) {
	pelet::StatementListClass* stmtList = StatementListMake();
	pelet::ArrayPairExpressionClass* pair = new pelet::ArrayPairExpressionClass(Scope);
	if (key) {
		pair->LineNumber = key->LineNumber;
		pair->Pos = key->Pos;
		pair->Key = key;
	}
	
	for (size_t i = 0; i < stmts->Size(); i++) {
		if (pelet::StatementClass::EXPRESSION == stmts->TypeAt(i)) {
			pelet::ExpressionClass* expr = (pelet::ExpressionClass*)stmts->At(i);
			if (pelet::ExpressionClass::ARRAY_PAIR == expr->ExpressionType) {
				pelet::ArrayPairExpressionClass* pairValueExpr = (pelet::ArrayPairExpressionClass*)expr;
				pair->Pairs.push_back(pairValueExpr);
			}
		}
	}

	stmtList->Push(pair);
	AllAstItems.push_back(pair);
	return stmtList;	
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeArray(pelet::StatementListClass* pairStatements) {
	pelet::ArrayExpressionClass* newExpr = new pelet::ArrayExpressionClass(Scope);

	// populate the array pairs
	for (size_t i = 0; i < pairStatements->Size(); ++i) {
		pelet::StatementClass::Types type =  pairStatements->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* pairExpr = (pelet::ExpressionClass*) pairStatements->At(i);
			if (!newExpr->LineNumber) {
				newExpr->LineNumber = pairExpr->LineNumber;
				newExpr->Pos = pairExpr->Pos;
			}
			if (pelet::ExpressionClass::ARRAY_PAIR == pairExpr->ExpressionType) {
				pelet::ArrayPairExpressionClass* pair = (pelet::ArrayPairExpressionClass*) pairStatements->At(i);
				newExpr->ArrayPairs.push_back(pair);
			}
		}
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeAssignmentList(pelet::StatementListClass* assignmentList, pelet::ExpressionClass* srcExpression) {
	pelet::AssignmentListExpressionClass* newExpr = new pelet::AssignmentListExpressionClass(Scope);
	newExpr->Expression = srcExpression;
	for (size_t i = 0; i < assignmentList->Size(); ++i) {
		pelet::StatementClass::Types type =  assignmentList->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* expr = (pelet::ExpressionClass*)assignmentList->At(i);
			if (!newExpr->LineNumber) {
				newExpr->LineNumber = expr->LineNumber;
				newExpr->Pos = expr->Pos;
			}
			if (expr->ExpressionType == pelet::ExpressionClass::VARIABLE) {
				pelet::VariableClass* singleVariable = (pelet::VariableClass*) expr;
				if (singleVariable->ChainList.size() <= 1) {
					newExpr->Destinations.push_back(*singleVariable);
				}
			}
			if (expr->ExpressionType == pelet::ExpressionClass::ARRAY_PAIR) {
				// PHP 7.1+, array destructuring
				pelet::ArrayPairExpressionClass* arrayPair = (pelet::ArrayPairExpressionClass*) expr;
				if (arrayPair->Key && arrayPair->Key->ExpressionType == pelet::ExpressionClass::VARIABLE) {
					pelet::VariableClass* singleVariable = (pelet::VariableClass*) arrayPair->Key;
					if (singleVariable->ChainList.size() <= 1) {
						newExpr->Destinations.push_back(*singleVariable);
					}	
				}
				if (arrayPair->Value && arrayPair->Value->ExpressionType == pelet::ExpressionClass::VARIABLE) {
					pelet::VariableClass* singleVariable = (pelet::VariableClass*) arrayPair->Value;
					if (singleVariable->ChainList.size() <= 1) {
						newExpr->Destinations.push_back(*singleVariable);
					}	
				}
			}
		}
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeClassConstant(pelet::QualifiedNameClass* className, pelet::SemanticValueClass* constantName) {
	pelet::VariableClass* newExpr = new pelet::VariableClass(Scope);
	UnicodeString fullClassName = Scope.FullyQualify(*className, DeclaredNamespace);
	UnicodeString constantNameString;
	if (constantName) {
		constantNameString = constantName->Lexeme;
	}
	newExpr->ToStaticFunctionCall(fullClassName, constantNameString, false);
	newExpr->LineNumber = className->LineNumber;
	newExpr->Pos = className->Pos;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeFunctionCall(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);

	newVar->LineNumber = lineNumber;
	newVar->Pos = functionName->Pos;
	if (functionName) {
		newVar->Comment = functionName->Comment;
	}
	std::vector<pelet::ExpressionClass*> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(singleExpr);
		}
	}
	
	UnicodeString fullFunctionName = Scope.FullyQualifyFunction(*functionName, DeclaredNamespace);
	newVar->AppendToChain(fullFunctionName, varCallArguments, true, false);
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeFunctionCallFromAbsoluteNamespace(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	functionName->MakeAbsolute();
	std::vector<pelet::ExpressionClass*> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(singleExpr);
			newVar->LineNumber = singleExpr->LineNumber;
			newVar->Pos = singleExpr->Pos;
		}
	}
	UnicodeString fullFunctionName = functionName->ToSignature() ;
	newVar->AppendToChain(fullFunctionName, varCallArguments, true, false);
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeFunctionCallFromDeclaredNamespace(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	std::vector<pelet::ExpressionClass*> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(singleExpr);
			newVar->LineNumber = singleExpr->LineNumber;
			newVar->Pos = singleExpr->Pos;
		}
	}
	UnicodeString fullFunctionName = Scope.FullyQualifyFunction(*functionName, DeclaredNamespace);
	newVar->AppendToChain(fullFunctionName, varCallArguments, true, false);
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeGlobalVariable(pelet::SemanticValueClass* value) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	if (value) {
		newVar->AppendToChain(value->Lexeme);
		newVar->LineNumber = value->LineNumber;
		newVar->Pos = value->Pos;
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::NewInstanceExpressionClass* pelet::FullParserObserverClass::ExpressionMakeNewInstanceCall(pelet::QualifiedNameClass* className, 
																								 pelet::StatementListClass* callArguments) {
	pelet::NewInstanceExpressionClass* newExpr = new pelet::NewInstanceExpressionClass(Scope);
	newExpr->LineNumber = className->LineNumber;
	newExpr->Pos = className->Pos;
	newExpr->ClassName = Scope.FullyQualify(*className, DeclaredNamespace);
	newExpr->AddStatementsAsArguments(callArguments);
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionInstanceOfOperation(pelet::ExpressionClass* leftExpression, 
	pelet::QualifiedNameClass* className) {
	pelet::InstanceOfOperationClass* newExpr = new pelet::InstanceOfOperationClass(Scope);
	newExpr->LineNumber = leftExpression->LineNumber;
	newExpr->Pos = leftExpression->Pos;
	newExpr->Expression1 = leftExpression;
	newExpr->ClassName = Scope.FullyQualify(*className, DeclaredNamespace);
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::NewInstanceAppendToChain(pelet::ExpressionClass* newInstanceExpr, pelet::VariableClass* var) {
	if (newInstanceExpr->ExpressionType == pelet::ExpressionClass::NEW_CALL) {
		pelet::NewInstanceExpressionClass* newCall = (pelet::NewInstanceExpressionClass*) newInstanceExpr;
		newCall->AddToChain(var);
	}
	return newInstanceExpr;
}


pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeObject(pelet::ExpressionClass* srcExpression) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->LineNumber = srcExpression->LineNumber;
	newExpr->Pos = srcExpression->Pos;
	newExpr->Copy(*srcExpression);
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeScalar(pelet::ExpressionClass* srcExpression) {
	pelet::ScalarExpressionClass* newExpr = new pelet::ScalarExpressionClass(Scope);
	newExpr->LineNumber = srcExpression->LineNumber;
	newExpr->Pos = srcExpression->Pos;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeScalar(pelet::SemanticValueClass* srcValue) {
	pelet::ScalarExpressionClass* newExpr = new pelet::ScalarExpressionClass(Scope);
	if (srcValue) {
		newExpr->LineNumber = srcValue->LineNumber;
		newExpr->Pos = srcValue->Pos;
		newExpr->Value = srcValue->Lexeme;
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeScalarFromConstant(pelet::QualifiedNameClass* constantName) {
	pelet::ScalarExpressionClass* newExpr = new pelet::ScalarExpressionClass(Scope);
	newExpr->LineNumber = constantName->LineNumber;
	newExpr->Pos = constantName->Pos;
	newExpr->Value = constantName->ToSignature();
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionAddOffset(pelet::ExpressionClass* expression, pelet::ExpressionClass* offset) {
	if (pelet::ExpressionClass::ARRAY == expression->ExpressionType) {
		((pelet::ArrayExpressionClass*)expression)->Offsets.push_back(offset);
	}
	else if (pelet::ExpressionClass::SCALAR == expression->ExpressionType) {
		((pelet::ScalarExpressionClass*)expression)->Offsets.push_back(offset);
	}
	return expression;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeAnonymousClass(pelet::StatementListClass* constructorArguments, 
	pelet::ClassSymbolClass* extends, pelet::ClassSymbolClass* implementsList, pelet::StatementListClass* body) {
	pelet::AnonymousClassExpressionClass* anonymous = new pelet::AnonymousClassExpressionClass(Scope);
	anonymous->ExtendsFrom = extends->ExtendsFrom;
	anonymous->ImplementsList = implementsList->ImplementsList;
	anonymous->Body.PushAll(body);
	AllAstItems.push_back(anonymous);
	
	return anonymous;
}


pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeStaticMethodCall(pelet::QualifiedNameClass* className, 
		pelet::SemanticValueClass* methodName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	newVar->LineNumber = lineNumber;
	newVar->Pos = className->Pos;
	std::vector<pelet::ExpressionClass*> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(singleExpr);
		}
	}
	
	newVar->AppendToChain(Scope.FullyQualify(*className, DeclaredNamespace));
	if (methodName) {
		newVar->AppendToChain(methodName->Lexeme, varCallArguments, true, true);
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeStaticMethodCall(pelet::QualifiedNameClass* className, 
		pelet::VariableClass* methodName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	newVar->LineNumber = lineNumber;
	newVar->Pos = className->Pos;
	std::vector<pelet::ExpressionClass*> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(singleExpr);
		}
	}
	
	newVar->AppendToChain(Scope.FullyQualify(*className, DeclaredNamespace));
	if (methodName && !methodName->ChainList.empty()) {
		newVar->AppendToChain(methodName->ChainList[0].Name, varCallArguments, true, true);
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeStaticVariable(pelet::SemanticValueClass* nameValue) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	if (nameValue) {
		newVar->AppendToChain(nameValue->Lexeme);
		newVar->LineNumber = nameValue->LineNumber;
		newVar->Pos = nameValue->Pos;
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableAppendArrayOffset(pelet::VariableClass* arrayVariable, pelet::ExpressionClass* offsetExpr) {
	pelet::VariablePropertyClass arrayProp;
	
	// watch out for expressions with the array push operator $a[]=
	// in this case we want ArrayAccess to be NULL
	if (offsetExpr->Type != pelet::StatementClass::EXPRESSION
		|| offsetExpr->ExpressionType != pelet::ExpressionClass::UNKNOWN) {
		arrayProp.ArrayAccess = offsetExpr;
	}
	arrayProp.IsArrayAccess = true;
	arrayVariable->ChainList.push_back(arrayProp);
	return arrayVariable;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableStartIndirectFunctionCall(pelet::ExpressionClass* functionExpression, pelet::StatementListClass* callArguments) {
	pelet::VariableClass* variable = new pelet::VariableClass(Scope);
	AllAstItems.push_back(variable);
	std::vector<pelet::ExpressionClass*> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(singleExpr);
		}
	}
	variable->AppendToChain(functionExpression, varCallArguments);
	
	return variable;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionAssignmentCompoundOperation(int operatorToken, pelet::VariableClass* leftOperand, pelet::ExpressionClass* rightOperand) {
	pelet::AssignmentCompoundExpressionClass* operation = new pelet::AssignmentCompoundExpressionClass(Scope);
	operation->LineNumber = leftOperand->LineNumber;
	operation->Pos = leftOperand->Pos;
	operation->Operator = operatorToken;
	operation->Variable = *leftOperand;
	operation->RightOperand = rightOperand;

	AllAstItems.push_back(operation);
	return operation;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionBinaryOperation(int operatorToken, pelet::ExpressionClass* leftOperand, pelet::ExpressionClass* rightOperand) {
	pelet::BinaryOperationClass* operation = new pelet::BinaryOperationClass(Scope);
	operation->LineNumber = leftOperand->LineNumber;
	operation->Pos = leftOperand->Pos;
	operation->Operator = operatorToken;
	operation->LeftOperand = leftOperand;
	operation->RightOperand = rightOperand;

	AllAstItems.push_back(operation);
	return operation;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionUnaryOperation(int operatorToken, pelet::ExpressionClass* operand) {
	pelet::UnaryOperationClass* operation = new pelet::UnaryOperationClass(Scope);
	operation->LineNumber = operand->LineNumber;
	operation->Pos = operand->Pos;
	operation->Operator = operatorToken;
	operation->Operand = operand;

	AllAstItems.push_back(operation);
	return operation;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionUnaryVariableOperation(int operatorToken, pelet::VariableClass* operand) {
	pelet::UnaryVariableOperationClass* operation = new pelet::UnaryVariableOperationClass(Scope);
	operation->LineNumber = operand->LineNumber;
	operation->Pos = operand->Pos;
	operation->Operator = operatorToken;
	operation->Variable.Copy(*operand);

	AllAstItems.push_back(operation);
	return operation;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionTernaryOperation(pelet::ExpressionClass* leftOperand, pelet::ExpressionClass* middleOperand, pelet::ExpressionClass* rightOperand) {
	pelet::TernaryOperationClass* operation = new pelet::TernaryOperationClass(Scope);
	operation->LineNumber = leftOperand->LineNumber;
	operation->Pos = leftOperand->Pos;
	operation->Expression1 = leftOperand;
	operation->Expression2 = middleOperand;
	if (rightOperand) {
		operation->Expression3 = rightOperand;
	}

	AllAstItems.push_back(operation);
	return operation;
}


pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionNil() {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->Type = pelet::ExpressionClass::EXPRESSION;
	newExpr->ExpressionType = pelet::ExpressionClass::UNKNOWN;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeClosure(
	pelet::ParametersListClass* parameters, pelet::StatementListClass* lexicalVars, pelet::StatementListClass* stmts,
	pelet::SemanticValueClass* startingPositionTokenValue, pelet::SemanticValueClass* endingPositionTokenValue,
	pelet::QualifiedNameClass* returnType) {
	pelet::TypeHintClass* typeHint = new pelet::TypeHintClass();
	if (returnType) {
		typeHint->Set(returnType, false);
	}
	AllAstItems.push_back(typeHint);
	return ExpressionMakeClosure(parameters, lexicalVars, stmts, 
		startingPositionTokenValue, endingPositionTokenValue,
		typeHint);
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeClosure(
	pelet::ParametersListClass* parameters, pelet::StatementListClass* lexicalVars, pelet::StatementListClass* stmts,
	pelet::SemanticValueClass* startingPositionTokenValue, pelet::SemanticValueClass* endingPositionTokenValue,
	pelet::TypeHintClass* returnType) {
		pelet::ClosureExpressionClass* closure = new pelet::ClosureExpressionClass(Scope);
		closure->StartingPosition = startingPositionTokenValue->Pos;
		closure->EndingPosition = endingPositionTokenValue->Pos;
		for (size_t i = 0; i < parameters->GetCount(); ++i) {
			
			// the parameter may contain a & if its a reference 
			// lets parse it out and set the IsReference flag on 
			// the variable if appropriate
			UnicodeString param, type;
			bool isReference = false;
			parameters->Param(i, param, type);
			
			if (param.indexOf('&') == 0) {
				param.remove(0, 1);
				isReference = true;
			}
			
			pelet::VariableClass* var = new pelet::VariableClass(Scope);
			AllAstItems.push_back(var);

			// fill in line number, pos of params as the closure start for now
			var->LineNumber = startingPositionTokenValue->LineNumber;
			var->Pos = startingPositionTokenValue->Pos;
			var->AppendToChain(param);
			var->IsReference = isReference;
			var->PhpDocType = type;
			closure->Parameters.push_back(var);
			
		}
		for (size_t i = 0; i < lexicalVars->Size(); ++i) {
			if (pelet::StatementClass::EXPRESSION == lexicalVars->TypeAt(i)) {
				pelet::ExpressionClass* expr = (pelet::ExpressionClass*) lexicalVars->At(i);
				if (!closure->LineNumber) {
					closure->LineNumber = expr->LineNumber;
					closure->Pos = expr->Pos;
				}
				if (pelet::ExpressionClass::VARIABLE == expr->ExpressionType) {
					closure->LexicalVars.push_back((pelet::VariableClass*)lexicalVars->At(i));
				}
			}
		}
		closure->Statements.PushAll(stmts);

		AllAstItems.push_back(closure);
		return closure;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionIsset(pelet::ExpressionClass* expr) {
	pelet::IssetExpressionClass* isset = new pelet::IssetExpressionClass(Scope);
	isset->Expressions.push_back(expr);

	AllAstItems.push_back(isset);
	return isset;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionIssetMerge(pelet::IssetExpressionClass* isset, pelet::ExpressionClass* expr) {
	isset->Expressions.push_back(expr);
	return isset;
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionEval(pelet::ExpressionClass* expr) {
	pelet::EvalExpressionClass* eval = new pelet::EvalExpressionClass(Scope);
	eval->Expression = expr;

	AllAstItems.push_back(eval);
	return eval;
}
	
pelet::StatementListClass* pelet::FullParserObserverClass::GlobalVariablesStatementMake(pelet::StatementListClass* variables) {
	pelet::GlobalVariableStatementClass* globalVars =  new pelet::GlobalVariableStatementClass();
	for (size_t i = 0; i < variables->Size(); ++i) {
		if (pelet::StatementClass::EXPRESSION == variables->TypeAt(i)) {
			pelet::ExpressionClass* expr = (pelet::ExpressionClass*) variables->At(i);
			if (pelet::ExpressionClass::VARIABLE == expr->ExpressionType) {
				globalVars->Variables.push_back((pelet::VariableClass*)expr);
			}
		}
	}
	AllAstItems.push_back(globalVars);
	return StatementListMakeAndAppend(globalVars);
}

pelet::StatementListClass* pelet::FullParserObserverClass::StaticVariablesStatementMake(pelet::StatementListClass* variables) {
	pelet::StaticVariableStatementClass* staticVars =  new pelet::StaticVariableStatementClass();
	for (size_t i = 0; i < variables->Size(); ++i) {
		if (pelet::StatementClass::EXPRESSION == variables->TypeAt(i)) {
			pelet::ExpressionClass* expr = (pelet::ExpressionClass*) variables->At(i);
			if (pelet::ExpressionClass::VARIABLE == expr->ExpressionType) {
				staticVars->Variables.push_back((pelet::VariableClass*)expr);
			}
		}
	}
	AllAstItems.push_back(staticVars);
	return StatementListMakeAndAppend(staticVars);
}


pelet::ExpressionClass* pelet::FullParserObserverClass::IncludeFound(pelet::ExpressionClass* expr, const int lineNumber) {
	pelet::IncludeExpressionClass* newExpr = new pelet::IncludeExpressionClass(Scope);
	newExpr->LineNumber = expr->LineNumber;
	newExpr->Pos = expr->Pos;
	newExpr->Init(expr, lineNumber);
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::DeclareDirectiveStatementClass* pelet::FullParserObserverClass::DeclareDirectiveMake(pelet::StatementListClass* declares, pelet::StatementListClass* body) {
	pelet::DeclareDirectiveStatementClass* declare = new pelet::DeclareDirectiveStatementClass;
	AllAstItems.push_back(declare);
	
	std::vector<pelet::ConstantStatementClass*> directives;
	for (size_t i = 0; i < declares->Size(); i++) {
		if (pelet::StatementClass::DEFINE_DECLARATION == declares->TypeAt(i)) {
			directives.push_back((pelet::ConstantStatementClass*)declares->At(i));
		}
	}
	if (body) {
		declare->Body.PushAll(body);
	}
	
	declare->Directives = directives;
	
	return declare;
}

void pelet::FullParserObserverClass::MakeAst(pelet::StatementListClass* statements) {
	RecurseAst(statements);
	if (ExpressionObserver) {
		
		// we give ownership to the expression observer if it exists
		// otherwise we still own these pointers
		// doing this AFTER the callbacks because the NotifyVariablesFromParameterList
		// method can add items to the AllAstItems list
		ExpressionObserver->StatementOwnership(AllAstItems);
		AllAstItems.clear();	
	}
}

void pelet::FullParserObserverClass::RecurseAst(pelet::StatementListClass* statements) {
	
	// go through the list of statements and send the correct notifications
	pelet::ClassMemberSymbolClass* functionSymbol = NULL;
	pelet::ClassMemberSymbolClass* memberSymbol = NULL;
	pelet::DeclareDirectiveStatementClass* declareStmt = NULL;
	
	for (size_t i = 0; i < statements->Size(); ++i) {
		pelet::StatementClass::Types type = statements->TypeAt(i);
		pelet::StatementClass* stmt = statements->At(i);
		switch(type) {
		case pelet::StatementClass::CLASS_DECLARATION:
			if (Class || Member) {
				pelet::ClassSymbolClass* classSymbol = (pelet::ClassSymbolClass*) stmt;
				if (Class) {
					Class->ClassFound(classSymbol->NamespaceName, classSymbol->ClassName, 
						classSymbol->ToSignature(),
						classSymbol->ExtendsFrom,
						classSymbol->ImplementsString(),
						classSymbol->Comment,
						classSymbol->StartingLineNumber);
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
			RecurseExpression((pelet::ExpressionClass*)stmt);
			break;
		case pelet::StatementClass::FUNCTION_DECLARATION:
			functionSymbol = (pelet::ClassMemberSymbolClass*) stmt;
			if (Function || Variable || ExpressionObserver) {				

				// remove the 'public' we are re-using the ClassMember symbol which always assumes a
				// method signature
				// didnt feel like writing a whole other class for just for functions when functions and
				// methods are almost identical
				UnicodeString signature = functionSymbol->ToMethodSignature(functionSymbol->ParametersList.ToSignature());
				int32_t index = signature.indexOf(UNICODE_STRING_SIMPLE("function"));
				signature.setTo(signature, index);
				UnicodeString comment = functionSymbol->GetComment();
				if (Function) {
					Function->FunctionFound(functionSymbol->NamespaceName, functionSymbol->MemberName, signature,
					                        functionSymbol->GetReturnType(), comment, functionSymbol->StartingLineNumber,
												functionSymbol->HasVariableArguments);
				}
				if (Variable || ExpressionObserver) {
					NotifyVariablesFromParameterList(functionSymbol->ParametersList, functionSymbol->NamespaceName, 
						functionSymbol->ClassName, functionSymbol->MemberName);
				}
				if (Function) {
					Function->FunctionScope(functionSymbol->NamespaceName, functionSymbol->MemberName,
						functionSymbol->StartingPosition, functionSymbol->EndingPosition);
				}
			}
			
			// recurse down the method's body of statements
			if (functionSymbol->MethodStatements.Size()) {
				RecurseAst(&functionSymbol->MethodStatements);
			}
			break;
		case pelet::StatementClass::METHOD_DECLARATION:
			memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;
			if (Member || Variable || ExpressionObserver) {
				UnicodeString signature = memberSymbol->ToMethodSignature(memberSymbol->ParametersList.ToSignature());
				pelet::TokenClass::TokenIds visibility = pelet::TokenClass::PUBLIC;
				if (memberSymbol->IsProtectedMember) {
					visibility = pelet::TokenClass::PROTECTED;
				} else if (memberSymbol->IsPrivateMember) {
					visibility = pelet::TokenClass::PRIVATE;
				}
				UnicodeString className = memberSymbol->ClassName;
				bool isStatic = memberSymbol->IsStaticMember;
				if (Member) {
					Member->MethodFound(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName, 
										signature,
					                    memberSymbol->GetReturnType(), memberSymbol->GetComment(), visibility, isStatic, 
										memberSymbol->StartingLineNumber,
										memberSymbol->HasVariableArguments);
				}
				if (Variable || ExpressionObserver) {
					NotifyVariablesFromParameterList(memberSymbol->ParametersList, memberSymbol->NamespaceName,
						memberSymbol->ClassName, memberSymbol->MemberName);
				}
				if (Member) {
					Member->MethodScope(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName, 
						memberSymbol->StartingPosition, memberSymbol->EndingPosition);
				}
			}
			
			// recurse down the method's body of statements
			if (memberSymbol->MethodStatements.Size()) {
				RecurseAst(&memberSymbol->MethodStatements);
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
				Class->NamespaceUseFound(namespaceUse->NamespaceName, namespaceUse->Alias, namespaceUse->LineNumber, namespaceUse->StartingPos);
			}
			break;
		case pelet::StatementClass::NIL:

			// NIL is anything we want to skip on purpose
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
				UnicodeString className = memberSymbol->ClassName;
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
		case pelet::StatementClass::GLOBAL_VARIABLE_DECLARATION:
			if (Variable) {
				pelet::GlobalVariableStatementClass * globalStmt = (pelet::GlobalVariableStatementClass*)stmt;
				for (size_t i = 0; i < globalStmt->Variables.size(); ++i) {
					pelet::VariableClass* globalVar = globalStmt->Variables[i];
					pelet::ExpressionClass* unknownExpr = new pelet::ExpressionClass(globalVar->Scope);
					AllAstItems.push_back(unknownExpr);
					unknownExpr->ExpressionType = pelet::ExpressionClass::UNKNOWN;
					Variable->VariableFound(globalVar->Scope.NamespaceName, 
						globalVar->Scope.ClassName, globalVar->Scope.MethodName, 
						*globalVar, unknownExpr, globalVar->Comment);
				}
			}
			if (ExpressionObserver) {
				ExpressionObserver->StatementGlobalVariablesFound((pelet::GlobalVariableStatementClass*)stmt);
			}
			break;

		case pelet::StatementClass::STATIC_VARIABLE_DECLARATION:
			if (Variable) {
				pelet::StaticVariableStatementClass * staticStmt = (pelet::StaticVariableStatementClass*)stmt;
				for (size_t i = 0; i < staticStmt->Variables.size(); ++i) {
					pelet::VariableClass* staticVar = staticStmt->Variables[i];
					pelet::ExpressionClass* unknownExpr = new pelet::ExpressionClass(staticVar->Scope);
					unknownExpr->ExpressionType = pelet::ExpressionClass::UNKNOWN;
					AllAstItems.push_back(unknownExpr);
					Variable->VariableFound(staticVar->Scope.NamespaceName, 
						staticVar->Scope.ClassName, staticVar->Scope.MethodName, 
						*staticVar, unknownExpr, staticVar->Comment);
				}
			}
			if (ExpressionObserver) {
				ExpressionObserver->StatementStaticVariablesFound((pelet::StaticVariableStatementClass*)stmt);
			}
			break;
		
		case pelet::StatementClass::FUNCTION_IMPORT:
			if (Class) {
				pelet::FunctionImportClass* functionImport = (pelet::FunctionImportClass*)stmt;
				Class->UseFunctionFound(functionImport->FunctionName, functionImport->Alias, functionImport->LineNumber, functionImport->StartingPos);
			}
			break;
		
		case pelet::StatementClass::CONSTANT_IMPORT:
			if (Class) {
				pelet::ConstantImportClass* constantImport = (pelet::ConstantImportClass*)stmt;
				Class->UseConstantFound(constantImport->ConstantName, constantImport->Alias, constantImport->LineNumber, constantImport->StartingPos);
			}
			break;
		
		case pelet::StatementClass::DECLARE_DIRECTIVE_STATEMENT:
			declareStmt = (pelet::DeclareDirectiveStatementClass*)stmt;
			if (ExpressionObserver) {
				for (size_t i = 0; i < declareStmt->Directives.size(); i++) {
					ExpressionObserver->ExpressionDeclareDirectiveFound(declareStmt->Directives[i]);
				}
			}
			RecurseAst(&declareStmt->Body);
			break;
		}
	}
}

void pelet::FullParserObserverClass::RecurseExpression(pelet::ExpressionClass* expr) {
	if (Variable) {
		if (pelet::ExpressionClass::ASSIGNMENT == expr->ExpressionType) {
			pelet::AssignmentExpressionClass* assignmentExpr = (pelet::AssignmentExpressionClass*)expr;
			if (!assignmentExpr->Destination.ChainList.empty() && assignmentExpr->Expression) {
				Variable->VariableFound(assignmentExpr->Destination.Scope.NamespaceName, 
					assignmentExpr->Destination.Scope.ClassName, assignmentExpr->Destination.Scope.MethodName, 
					assignmentExpr->Destination, assignmentExpr->Expression, assignmentExpr->Destination.Comment);
			}
		}
		else if (pelet::ExpressionClass::ASSIGNMENT_LIST == expr->ExpressionType) {
			pelet::AssignmentListExpressionClass* assignmentListExpr = (pelet::AssignmentListExpressionClass*)expr;
			for (size_t i = 0; i < assignmentListExpr->Destinations.size(); ++i) {
				if (!assignmentListExpr->Destinations[i].ChainList.empty() && assignmentListExpr->Expression) {
					Variable->VariableFound(assignmentListExpr->Scope.NamespaceName, 
						assignmentListExpr->Scope.ClassName, assignmentListExpr->Scope.MethodName, 
						assignmentListExpr->Destinations[i], assignmentListExpr->Expression, assignmentListExpr->Destinations[i].Comment);
				}
			}
		}
	}

	if (ExpressionObserver) {
		switch (expr->ExpressionType) {
		case pelet::ExpressionClass::ASSIGNMENT:
			ExpressionObserver->ExpressionAssignmentFound((pelet::AssignmentExpressionClass*)expr);
			break;
		case pelet::ExpressionClass::ASSIGNMENT_LIST:
			ExpressionObserver->ExpressionAssignmentListFound((pelet::AssignmentListExpressionClass*)expr);
			break;
		case pelet::ExpressionClass::ASSIGNMENT_COMPOUND:
			ExpressionObserver->ExpressionAssignmentCompoundFound((pelet::AssignmentCompoundExpressionClass*)expr);
			break;
		case pelet::ExpressionClass::BINARY_OPERATION:
			ExpressionObserver->ExpressionBinaryOperationFound((pelet::BinaryOperationClass*)expr);
			break;
		case pelet::ExpressionClass::UNARY_OPERATION:
			ExpressionObserver->ExpressionUnaryOperationFound((pelet::UnaryOperationClass*)expr);
			break;
		case pelet::ExpressionClass::UNARY_VARIABLE_OPERATION:
			ExpressionObserver->ExpressionUnaryVariableOperationFound((pelet::UnaryVariableOperationClass*)expr);
			break;
		case pelet::ExpressionClass::TERNARY_OPERATION:
			ExpressionObserver->ExpressionTernaryOperationFound((pelet::TernaryOperationClass*)expr);
			break;
		case pelet::ExpressionClass::INSTANCEOF_OPERATION:
			ExpressionObserver->ExpressionInstanceOfOperationFound((pelet::InstanceOfOperationClass*)expr);
			break;
		case pelet::ExpressionClass::VARIABLE:
			ExpressionObserver->ExpressionVariableFound((pelet::VariableClass*)expr);
			break;
		case pelet::ExpressionClass::SCALAR:
			ExpressionObserver->ExpressionScalarFound((pelet::ScalarExpressionClass*)expr);
			break;
		case pelet::ExpressionClass::NEW_CALL:
			ExpressionObserver->ExpressionNewInstanceFound((pelet::NewInstanceExpressionClass*)expr);
			break;
		case pelet::ExpressionClass::INCLUDE:
			ExpressionObserver->ExpressionIncludeFound((pelet::IncludeExpressionClass*)expr);
			break;
		case pelet::ExpressionClass::CLOSURE:
			ExpressionObserver->ExpressionClosureFound((pelet::ClosureExpressionClass*)expr);
			break;
		case pelet::ExpressionClass::ISSET:
			ExpressionObserver->ExpressionIssetFound((pelet::IssetExpressionClass*)expr);
			break;
		case pelet::ExpressionClass::EVAL:
			ExpressionObserver->ExpressionEvalFound((pelet::EvalExpressionClass*)expr);
			break;
		case pelet::ExpressionClass::ARRAY:
			ExpressionObserver->ExpressionArrayFound((pelet::ArrayExpressionClass*)expr);
			break;
		case pelet::ExpressionClass::ARRAY_PAIR:
		
			// array pairs are never on their own, they always come inside an array
			break;
		case pelet::ExpressionClass::ANONYMOUS_CLASS:
			ExpressionObserver->ExpressionAnonymousClassFound((pelet::AnonymousClassExpressionClass*)expr);
			break;
		case pelet::ExpressionClass::UNKNOWN:
		
			// we wont notify on unknow stuff
			break;
		}
	}
	if (Class) {

		// check for define() function calls, these are constants
		if (expr->ExpressionType == pelet::ExpressionClass::VARIABLE) {
			pelet::VariableClass* var = (pelet::VariableClass*)expr;
			if (var->ChainList.size() == 1 &&
					var->ChainList[0].Name.caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0 && 
					2 == var->ChainList[0].CallArguments.size()) {
				UnicodeString defineName, defineValue;
				if (pelet::ExpressionClass::SCALAR == var->ChainList[0].CallArguments[0]->ExpressionType) {
					defineName = ((pelet::ScalarExpressionClass*)var->ChainList[0].CallArguments[0])->Value;
				}
				if (pelet::ExpressionClass::SCALAR == var->ChainList[0].CallArguments[1]->ExpressionType) {
					defineValue = ((pelet::ScalarExpressionClass*)var->ChainList[0].CallArguments[1])->Value;
				}
				Class->DefineDeclarationFound(UNICODE_STRING_SIMPLE("\\"), defineName,
											  defineValue,
											  var->Comment, var->LineNumber);
			}
		}
		else if (expr->ExpressionType == pelet::ExpressionClass::INCLUDE) {
			// the base case of the recursion; will end here.
			pelet::IncludeExpressionClass* includeExpr = (pelet::IncludeExpressionClass*)expr;
			Class->IncludeFound(includeExpr->File, includeExpr->LineNumber);
		}
	}
	if (Class && !ExpressionObserver) {	
		pelet::ScalarExpressionClass* scalar = NULL;
		pelet::NewInstanceExpressionClass* newExpr = NULL;
		pelet::ClosureExpressionClass* closure = NULL;
		pelet::IssetExpressionClass* issetExpr = NULL;
		pelet::ArrayExpressionClass* arrayExpr = NULL;
		pelet::UnaryVariableOperationClass* unary = NULL;
		pelet::AnonymousClassExpressionClass* anonymousClassExpr = NULL;

		// look for include expressions in inner expressions
		// for example, we should detect "@include($file)" since
		// the expressions is a unary expression.
		switch (expr->ExpressionType) {
		case pelet::ExpressionClass::ASSIGNMENT:
			RecurseExpression(&((pelet::AssignmentExpressionClass*)expr)->Destination);
			if (((pelet::AssignmentExpressionClass*)expr)->Expression) {
				RecurseExpression(((pelet::AssignmentExpressionClass*)expr)->Expression);
			}
			break;
		case pelet::ExpressionClass::ASSIGNMENT_LIST:
			if (((pelet::AssignmentListExpressionClass*)expr)->Expression) {
				RecurseExpression(((pelet::AssignmentListExpressionClass*)expr)->Expression);
			}
			break;
		case pelet::ExpressionClass::ASSIGNMENT_COMPOUND:
			RecurseExpression(((pelet::AssignmentCompoundExpressionClass*)expr)->RightOperand);
			break;
		case pelet::ExpressionClass::BINARY_OPERATION:
			RecurseExpression(((pelet::BinaryOperationClass*)expr)->LeftOperand);
			RecurseExpression(((pelet::BinaryOperationClass*)expr)->RightOperand);
			break;
		case pelet::ExpressionClass::UNARY_OPERATION:
			RecurseExpression(((pelet::UnaryOperationClass*)expr)->Operand);
			break;
		case pelet::ExpressionClass::UNARY_VARIABLE_OPERATION:
			unary = (pelet::UnaryVariableOperationClass*)expr;
			RecurseExpression(&unary->Variable);
			break;
		case pelet::ExpressionClass::TERNARY_OPERATION:
			RecurseExpression(((pelet::TernaryOperationClass*)expr)->Expression1);
			RecurseExpression(((pelet::TernaryOperationClass*)expr)->Expression2);
			if (expr && ((pelet::TernaryOperationClass*)expr)->Expression3) {
				// ternary could have a null third expression "?:"
				RecurseExpression(((pelet::TernaryOperationClass*)expr)->Expression3);
			}
			break;
		case pelet::ExpressionClass::INSTANCEOF_OPERATION:
			RecurseExpression(((pelet::InstanceOfOperationClass*)expr)->Expression1);
			break;
		case pelet::ExpressionClass::VARIABLE:
			// TODO: recurse into variables
			break;
		case pelet::ExpressionClass::SCALAR:
			scalar = ((pelet::ScalarExpressionClass*)expr);
			for (size_t i = 0; i < scalar->Offsets.size(); i++) {
				RecurseExpression(scalar->Offsets[i]);
			}
			break;
		case pelet::ExpressionClass::NEW_CALL:
			// TODO: recurse into chain list (variable)
			newExpr = ((pelet::NewInstanceExpressionClass*)expr);
			for (size_t i = 0; i < newExpr->CallArguments.size(); i++) {
				RecurseExpression(newExpr->CallArguments[i]);
			}
			break;
		case pelet::ExpressionClass::INCLUDE:
			// already handled by the code above. See comment about recursion ending.
			break;
		case pelet::ExpressionClass::CLOSURE:
			closure = ((pelet::ClosureExpressionClass*)expr);
			for (size_t i = 0; i < closure->Statements.Size(); i++) {
				if (closure->Statements.TypeAt(i) == pelet::StatementClass::EXPRESSION) {
					RecurseExpression((pelet::ExpressionClass*)closure->Statements.At(i));
				}
			}
			break;
		case pelet::ExpressionClass::ISSET:
			issetExpr = ((pelet::IssetExpressionClass*)expr);
			for (size_t i = 0; i < issetExpr->Expressions.size(); i++) {
				RecurseExpression(issetExpr->Expressions[i]);
			}
			break;
		case pelet::ExpressionClass::EVAL:
			RecurseExpression(((pelet::EvalExpressionClass*)expr)->Expression);
			break;
		case pelet::ExpressionClass::ARRAY:
			// TODO: recurse inside the array pair
			arrayExpr = ((pelet::ArrayExpressionClass*)expr);
			for (size_t i = 0; i < arrayExpr->Offsets.size(); i++) {
				RecurseExpression(arrayExpr->Offsets[i]);
			}
			break;
		case pelet::ExpressionClass::ARRAY_PAIR:
		
			// array pairs are never on their own, they always come inside an array
			break;
		case pelet::ExpressionClass::ANONYMOUS_CLASS:
			anonymousClassExpr = (pelet::AnonymousClassExpressionClass*)expr;
			for (size_t i = 0;i < anonymousClassExpr->ConstructorArguments.size(); i++) {
				RecurseExpression(anonymousClassExpr->ConstructorArguments[i]);
			}
			for (size_t i = 0; i < anonymousClassExpr->Body.Size(); i++) {
				if (pelet::StatementClass::EXPRESSION == anonymousClassExpr->Body.TypeAt(i)) {
					RecurseExpression((pelet::ExpressionClass*)anonymousClassExpr->Body.At(i));
				}
			}
			break;
		case pelet::ExpressionClass::UNKNOWN:
		
			// we wont notify on unknow stuff
			break;
		}
	}
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceDeclarationFound(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* namespaceTokenValue) {
	pelet::NamespaceDeclarationClass* newNamespace = new pelet::NamespaceDeclarationClass();
	
	// namespace declararations are always fully qualified.
	pelet::QualifiedNameClass absolute(*namespaceName);
	absolute.IsAbsolute = true;
	
	newNamespace->NamespaceName = absolute.ToSignature();
	newNamespace->StartingPosition = namespaceTokenValue->Pos;
	AllAstItems.push_back(newNamespace);
	return StatementListMakeAndAppend(newNamespace);
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceGlobalDeclarationFound(pelet::SemanticValueClass* namespaceTokenValue) {
	pelet::NamespaceDeclarationClass* newNamespace = new pelet::NamespaceDeclarationClass();
	newNamespace->StartingPosition = namespaceTokenValue->Pos;
	newNamespace->NamespaceName = UNICODE_STRING_SIMPLE("\\");
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

pelet::QualifiedNameListClass* pelet::FullParserObserverClass::NamespaceNameQualify(pelet::QualifiedNameClass* namespaceName, pelet::UnprefixedNameListClass* unprefixedNames) {
	namespaceName->MakeAbsolute();
	pelet::QualifiedNameListClass* qualifiedList = new pelet::QualifiedNameListClass();
	AllAstItems.push_back(qualifiedList);
	for (size_t i = 0; i < unprefixedNames->Names.size(); i++) {
		pelet::QualifiedNameClass* qualifiedName = new pelet::QualifiedNameClass();
		qualifiedName->Init(unprefixedNames->Names[i]->NamespaceName, 0, 0);
		qualifiedName->SetAlias(unprefixedNames->Names[i]->Alias);
		qualifiedName->PrependNamespace(*namespaceName);
		AllAstItems.push_back(qualifiedName);
	}
	
	return qualifiedList;
}

pelet::QualifiedNameListClass* pelet::FullParserObserverClass::NamespaceNameListMake(pelet::QualifiedNameClass* namespaceName) {
	pelet::QualifiedNameListClass* nameList = new pelet::QualifiedNameListClass();
	AllAstItems.push_back(nameList);
	nameList->Push(namespaceName);
	return nameList;
}

pelet::QualifiedNameListClass* pelet::FullParserObserverClass::NamespaceNameListAppend(
	pelet::QualifiedNameListClass* namespaceList, pelet::QualifiedNameClass* namespaceName) {
	namespaceList->Push(namespaceName);
	return namespaceList;
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUse(pelet::QualifiedNameClass* namespaceName) {
	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	
	// according to PHP rules, all imports use absolute namespaces
	namespaceName->MakeAbsolute();
	useStatement->Set(namespaceName, UNICODE_STRING_SIMPLE(""));

	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUseAbsolute(pelet::QualifiedNameClass* namespaceName) {
	namespaceName->MakeAbsolute();

	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	useStatement->Set(namespaceName, UNICODE_STRING_SIMPLE(""));

	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUseAbsoluteAlias(pelet::QualifiedNameClass* namespaceName, 
		pelet::SemanticValueClass* aliasValue) {
	namespaceName->MakeAbsolute();

	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	if (aliasValue) {
		UnicodeString alias = useStatement->Set(namespaceName, aliasValue->Lexeme);

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
		UnicodeString alias = useStatement->Set(namespaceName, aliasValue->Lexeme);
	}                
	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUseMake(pelet::UnprefixedNameClass* namespaceName) {
	pelet::NamespaceUseClass* namespaceUse = new pelet::NamespaceUseClass();
	// according to PHP rules, all imports use absolute namespaces
	namespaceUse->NamespaceName = UNICODE_STRING_SIMPLE("\\") + namespaceName->NamespaceName;
	namespaceUse->Alias = namespaceName->Alias;
	AllAstItems.push_back(namespaceUse);
	return StatementListMakeAndAppend(namespaceUse);
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUseMakeAbsolute(pelet::UnprefixedNameClass* namespaceName) {
	pelet::NamespaceUseClass* namespaceUse = new pelet::NamespaceUseClass();
	namespaceUse->NamespaceName = UNICODE_STRING_SIMPLE("\\") + namespaceName->NamespaceName;
	namespaceUse->Alias = namespaceName->Alias;
	AllAstItems.push_back(namespaceUse);
	return StatementListMakeAndAppend(namespaceUse);
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUseMake(pelet::QualifiedNameClass* namespaceName, pelet::UnprefixedNameListClass* unprefixedNameList) {
	pelet::StatementListClass* stmtList = StatementListNil();
	namespaceName->MakeAbsolute();
	for (size_t i = 0; i < unprefixedNameList->Names.size(); i++) {
		pelet::NamespaceUseClass* useStmt = new pelet::NamespaceUseClass();
		useStmt->NamespaceName = namespaceName->ToSignature() + UNICODE_STRING_SIMPLE("\\") + unprefixedNameList->Names[i]->NamespaceName;
		useStmt->Alias = unprefixedNameList->Names[i]->Alias;
		AllAstItems.push_back(useStmt);
		stmtList->Push(useStmt);
	}
	return stmtList;
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUseQualify(pelet::QualifiedNameClass* namespaceName, pelet::StatementListClass* namespaceStatements) {
	namespaceName->MakeAbsolute();
	for (size_t i = 0; i < namespaceStatements->Size(); ++i) {
		pelet::StatementClass::Types type = namespaceStatements->TypeAt(i);
		if (pelet::StatementClass::NAMESPACE_USE == type) {
			pelet::NamespaceUseClass* useStmt = (pelet::NamespaceUseClass*) namespaceStatements->At(i);
			useStmt->NamespaceName = namespaceName->ToSignature() + useStmt->NamespaceName;
		}
		else if (pelet::StatementClass::FUNCTION_IMPORT == type) {
			pelet::FunctionImportClass* functionImport = (pelet::FunctionImportClass*) namespaceStatements->At(i);
			functionImport->FunctionName = namespaceName->ToSignature() + UNICODE_STRING_SIMPLE("\\")  + functionImport->FunctionName;
		}
		else if (pelet::StatementClass::CONSTANT_IMPORT == type) {
			pelet::ConstantImportClass* constantImport = (pelet::ConstantImportClass*) namespaceStatements->At(i);
			constantImport->ConstantName = namespaceName->ToSignature() + UNICODE_STRING_SIMPLE("\\") + constantImport->ConstantName;
		}
	}
	return namespaceStatements;
}

pelet::StatementListClass* pelet::FullParserObserverClass::NamespaceUseSetStartingPos(pelet::StatementListClass* namespaceStatements, pelet::SemanticValueClass* useToken) {
	for (size_t i = 0; i < namespaceStatements->Size(); ++i) {
		pelet::StatementClass::Types type = namespaceStatements->TypeAt(i);
		if (pelet::StatementClass::NAMESPACE_USE == type) {
			pelet::NamespaceUseClass* useStmt = (pelet::NamespaceUseClass*) namespaceStatements->At(i);
			useStmt->StartingPos = useToken->Pos;
			useStmt->LineNumber = useToken->LineNumber;

			// dont worry about duplicate aliases, since its incorrect PHP
			if (!useStmt->Alias.isEmpty()) {
				Scope.AddNamespaceAlias(useStmt->NamespaceName, useStmt->Alias);
			}
		}
		else if (pelet::StatementClass::FUNCTION_IMPORT == type) {
			pelet::FunctionImportClass* functionImport = (pelet::FunctionImportClass*) namespaceStatements->At(i);
			functionImport->StartingPos = useToken->Pos;
			functionImport->LineNumber = useToken->LineNumber;

			// don't worry about duplicate aliases, since its incorrect PHP
			Scope.AddFunctionAlias(functionImport->FunctionName, functionImport->Alias);
		}
		else if (pelet::StatementClass::CONSTANT_IMPORT == type) {
			pelet::ConstantImportClass* constantImport = (pelet::ConstantImportClass*) namespaceStatements->At(i);
			constantImport->StartingPos = useToken->Pos;
			constantImport->LineNumber = useToken->LineNumber;

			// don't worry about duplicate aliases, since its incorrect PHP
			Scope.AddConstantAlias(constantImport->ConstantName, constantImport->Alias);
		}
	}
	return namespaceStatements;
}

pelet::StatementListClass* pelet::FullParserObserverClass::FunctionOrConstantImportSetStartingPos(
	pelet::QualifiedNameListClass* nameList, pelet::SemanticValueClass* useTypeToken, pelet::SemanticValueClass* useToken) {
	pelet::StatementListClass* stmtList = StatementListNil();
	for (size_t i = 0; i < nameList->Names.size(); i++) {
		nameList->Names[i]->MakeAbsolute();
		if (useTypeToken->Token == pelet::T_FUNCTION) {
			pelet::FunctionImportClass* functionImport = new pelet::FunctionImportClass();
			functionImport->FunctionName = nameList->Names[i]->ToSignature();
			functionImport->Alias = nameList->Names[i]->GetAlias();
			functionImport->LineNumber = useToken->LineNumber;
			functionImport->StartingPos = useToken->Pos;
			
			AllAstItems.push_back(functionImport);
			stmtList->Push(functionImport);
		}
		else if (useTypeToken->Token == pelet::T_CONST) {
			pelet::ConstantImportClass* constantImport = new pelet::ConstantImportClass();
			constantImport->ConstantName = nameList->Names[i]->ToSignature();
			constantImport->Alias = nameList->Names[i]->GetAlias();
			constantImport->LineNumber = useToken->LineNumber;
			constantImport->StartingPos = useToken->Pos;
			
			AllAstItems.push_back(constantImport);
			stmtList->Push(constantImport);		
		}
	}
	return stmtList;
}
pelet::StatementListClass* pelet::FullParserObserverClass::FunctionOrConstantImportSetStartingPos(
	pelet::StatementListClass* useStatements, pelet::SemanticValueClass* useTypeToken, pelet::SemanticValueClass* useToken) {
	pelet::StatementListClass* stmtList = StatementListNil();
	for (size_t i = 0; i < useStatements->Size(); i++) {
		if (useStatements->TypeAt(i) == pelet::StatementClass::NAMESPACE_USE) {
			pelet::NamespaceUseClass* use = (pelet::NamespaceUseClass*)useStatements->At(i);
			if (useTypeToken->Token == pelet::T_FUNCTION) {
				pelet::FunctionImportClass* functionImport = new pelet::FunctionImportClass();
				functionImport->FunctionName = use->NamespaceName;
				functionImport->Alias = use->Alias;
				functionImport->LineNumber = useToken->LineNumber;
				functionImport->StartingPos = useToken->Pos;
				
				AllAstItems.push_back(functionImport);
				stmtList->Push(functionImport);
			}
			else if (useTypeToken->Token == pelet::T_CONST) {
				pelet::ConstantImportClass* constantImport = new pelet::ConstantImportClass();
				constantImport->ConstantName = use->NamespaceName;
				constantImport->Alias = use->Alias;
				constantImport->LineNumber = useToken->LineNumber;
				constantImport->StartingPos = useToken->Pos;
				
				AllAstItems.push_back(constantImport);
				stmtList->Push(constantImport);		
			}
		}
	}
	return stmtList;
}

pelet::UnprefixedNameClass* pelet::FullParserObserverClass::UnprefixedNameMake(pelet::QualifiedNameClass* namespaceName) {
	pelet::UnprefixedNameClass* name = new pelet::UnprefixedNameClass();
	name->Set(namespaceName);
	
	AllAstItems.push_back(name);
	return name;
}

pelet::UnprefixedNameClass* pelet::FullParserObserverClass::UnprefixedNameMakeAlias(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* alias) {
	pelet::UnprefixedNameClass* name = new pelet::UnprefixedNameClass();
	name->Set(namespaceName, alias);
	AllAstItems.push_back(name);
	return name;
}

pelet::UnprefixedNameListClass* pelet::FullParserObserverClass::UnprefixedNameListMake(pelet::UnprefixedNameClass* namespaceName) {
	pelet::UnprefixedNameListClass* nameList = new pelet::UnprefixedNameListClass();
	AllAstItems.push_back(nameList);
	nameList->Names.push_back(namespaceName);
	return nameList;
}

pelet::UnprefixedNameListClass* pelet::FullParserObserverClass::UnprefixedNameListAppend(pelet::UnprefixedNameListClass* namespaceNameList, pelet::UnprefixedNameClass* namespaceName) {
	namespaceNameList->Push(namespaceName);
	return namespaceNameList;
}

pelet::FunctionImportClass* pelet::FullParserObserverClass::FunctionImportMake(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* alias) {
	pelet::FunctionImportClass* functionImport = new pelet::FunctionImportClass;
	AllAstItems.push_back(functionImport);
	functionImport->Init(Scope.FullyQualify(*namespaceName, DeclaredNamespace), 
		alias, namespaceName->LineNumber, namespaceName->Pos);		
	return functionImport;
}

pelet::FunctionImportClass* pelet::FullParserObserverClass::FunctionImportAbsoluteMake(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* alias) {
	pelet::FunctionImportClass* functionImport = new pelet::FunctionImportClass;
	AllAstItems.push_back(functionImport);
	pelet::QualifiedNameClass absoluteName(*namespaceName);
	absoluteName.MakeAbsolute();
	functionImport->Init(absoluteName.ToSignature(), 
		alias, namespaceName->LineNumber, namespaceName->Pos);
	return functionImport;
}

pelet::ConstantImportClass* pelet::FullParserObserverClass::ConstantImportMake(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* alias) {
	pelet::ConstantImportClass* constantImport = new pelet::ConstantImportClass;
	AllAstItems.push_back(constantImport);
	constantImport->Init(
		Scope.FullyQualify(*namespaceName, DeclaredNamespace),
		alias, namespaceName->LineNumber, namespaceName->Pos
	);
	return constantImport;
}

pelet::ConstantImportClass* pelet::FullParserObserverClass::ConstantImportAbsoluteMake(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* alias) {
	pelet::ConstantImportClass* constantImport = new pelet::ConstantImportClass;
	AllAstItems.push_back(constantImport);
	pelet::QualifiedNameClass absoluteName(*namespaceName);
	absoluteName.MakeAbsolute();
	constantImport->Init(absoluteName.ToSignature(),
		alias, namespaceName->LineNumber, namespaceName->Pos
	);
	return constantImport;
}

pelet::StatementListClass* pelet::FullParserObserverClass::FunctionOrConstantImportMake(pelet::SemanticValueClass* value, pelet::UnprefixedNameClass* namespaceName) {
	pelet::StatementListClass* stmtList = StatementListNil();
	if (value->Token == pelet::T_FUNCTION) {
		pelet::FunctionImportClass* functionImport = new pelet::FunctionImportClass();
		functionImport->FunctionName = namespaceName->NamespaceName;
		functionImport->Alias = namespaceName->Alias;
		
		AllAstItems.push_back(functionImport);
		stmtList->Push(functionImport);
	}
	else if (value->Token == pelet::T_CONST) {
		pelet::ConstantImportClass* constantImport = new pelet::ConstantImportClass();
		constantImport->ConstantName = namespaceName->NamespaceName;
		constantImport->Alias = namespaceName->Alias;

	    AllAstItems.push_back(constantImport);
		stmtList->Push(constantImport);
	}
	
	return stmtList;
}

pelet::ParametersListClass* pelet::FullParserObserverClass::ParametersListAppend(pelet::ParametersListClass* parametersList, 
		pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference, bool hasDefault) {
	parametersList->Append(type, parameterName, isReference, hasDefault, Scope, DeclaredNamespace);
	return parametersList;
}

pelet::ParametersListClass* pelet::FullParserObserverClass::ParametersListCreate(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, 
		bool isReference, bool hasDefault, bool isVariadic) {
	pelet::ParametersListClass* parametersList = new pelet::ParametersListClass;
	parametersList->Append(type, parameterName, isReference, hasDefault, Scope, DeclaredNamespace);
	parametersList->SetVariadic(isVariadic);
	AllAstItems.push_back(parametersList);
	return parametersList;
}

pelet::ParametersListClass* pelet::FullParserObserverClass::ParametersListCreate(pelet::TypeHintClass* type, pelet::SemanticValueClass* parameterName, 
		bool isReference, bool hasDefault, bool isVariadic) {
	pelet::ParametersListClass* parametersList = new pelet::ParametersListClass;
	parametersList->Append(type, parameterName, isReference, hasDefault, Scope, DeclaredNamespace);
	parametersList->SetVariadic(isVariadic);
	AllAstItems.push_back(parametersList);
	return parametersList;
}

pelet::ParametersListClass* pelet::FullParserObserverClass::ParametersListNil() {
	pelet::ParametersListClass* parametersList = new pelet::ParametersListClass;

	AllAstItems.push_back(parametersList);
	return parametersList;
}

pelet::ParametersListClass* pelet::FullParserObserverClass::ParametersListAppend(pelet::ParametersListClass* parametersList,
	pelet::ParametersListClass* src) {
	parametersList->Append(src);
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
	//statementList->PushFront(statement);
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
	Scope.ClassName = value ? value->Lexeme : UNICODE_STRING_SIMPLE("");
	AnonymousFunctionCount = -1;
	Scope.SetIsAnonymous(false);
}

void pelet::FullParserObserverClass::SetCurrentMemberName(pelet::SemanticValueClass* value) {
	Scope.MethodName = value ? value->Lexeme : UNICODE_STRING_SIMPLE("");
	AnonymousFunctionCount = -1;
	Scope.SetIsAnonymous(false);
}

void pelet::FullParserObserverClass::IncrementAnonymousFunctionCount() {
	AnonymousFunctionCount++;
	Scope.SetIsAnonymous(true, AnonymousFunctionCount);
}

void pelet::FullParserObserverClass::EndAnonymousFunction() {
	Scope.SetIsAnonymous(false);
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
		Scope.NamespaceName.remove();
	}
}

pelet::ExpressionClass* pelet::FullParserObserverClass::ExpressionMakeAsAssignmentExpression(pelet::VariableClass* variable) {
	pelet::AssignmentExpressionClass* newExpr =  new pelet::AssignmentExpressionClass(Scope);
	newExpr->LineNumber = variable->LineNumber;
	newExpr->Pos = variable->Pos;
	newExpr->Destination.Copy(*variable);
	
	pelet::ExpressionClass* assignedExpr = new pelet::ExpressionClass(variable->Scope);
	assignedExpr->LineNumber = variable->LineNumber;
	assignedExpr->Pos = variable->Pos;
	assignedExpr->ExpressionType = pelet::ExpressionClass::UNKNOWN;

	newExpr->Expression = assignedExpr;

	AllAstItems.push_back(newExpr);
	AllAstItems.push_back(assignedExpr);
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

pelet::TraitInsteadOfClass* pelet::FullParserObserverClass::TraitInsteadOfMakeReferenceList(pelet::QualifiedNameListClass* qualifiedNameList) {
	pelet::TraitInsteadOfClass* newInsteadOf = new pelet::TraitInsteadOfClass;
	for (size_t i = 0; i < qualifiedNameList->Names.size(); i++) {
		newInsteadOf->AppendInsteadOf(qualifiedNameList->Names[i], Scope, DeclaredNamespace);
	}
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

pelet::StatementListClass* pelet::FullParserObserverClass::TraitUseMake(pelet::QualifiedNameListClass* nameList, pelet::StatementListClass* traitAdaptations) {
	pelet::StatementListClass* list = StatementListMake();
	pelet::TraitUseClass* traitUse = new pelet::TraitUseClass();
	AllAstItems.push_back(traitUse);
	for (size_t i = 0; i < nameList->Names.size(); i++) {
		traitUse->AppendUse(nameList->Names[i], Scope, DeclaredNamespace);
	}
	traitUse->NamespaceName = DeclaredNamespace.ToSignature();
	traitUse->ClassName = Scope.ClassName;
	list->Push(traitUse);
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

pelet::VariableClass* pelet::FullParserObserverClass::VariableAppendToChain(pelet::VariableClass* variable, pelet::VariableClass* callArguments, 
		pelet::SemanticValueClass* operatorValue) {
	if (variable && callArguments && !variable->ChainList.empty() && !callArguments->ChainList.empty()) {
		variable->ChainList.back().CallArguments = callArguments->ChainList[0].CallArguments;
		variable->ChainList.back().IsFunction = callArguments->ChainList[0].IsFunction;
		variable->ChainList.back().IsStatic = false;
		variable->ChainList.back().IsArrayAccess = callArguments->ChainList[0].IsArrayAccess;
		variable->ChainList.back().ArrayAccess = callArguments->ChainList[0].ArrayAccess;
	}
	return variable;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeAndAppendFunctionCall(pelet::StatementListClass* callArguments, bool isMethod) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	std::vector<pelet::ExpressionClass*> varCallArguments;
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			varCallArguments.push_back(singleExpr);
			newVar->LineNumber = singleExpr->LineNumber;
			newVar->Pos = singleExpr->Pos;
		}
	}
	newVar->AppendToChain(UNICODE_STRING_SIMPLE(""), varCallArguments, isMethod, false);
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableAppendToChain(pelet::VariableClass* variableProperties, pelet::VariableClass* newVariableProperty) {
	if (!newVariableProperty->ChainList.empty()) {
		variableProperties->ChainList.push_back(newVariableProperty->ChainList.front());
	}
	return variableProperties;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableAppendToChainStaticMember(pelet::VariableClass* variableProperties, pelet::VariableClass* newVariableProperty) {
	if (!newVariableProperty->ChainList.empty()) {
		pelet::VariablePropertyClass prop = newVariableProperty->ChainList.front();
		prop.IsStatic = true;
		variableProperties->ChainList.push_back(prop);
	}
	return variableProperties;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMake(pelet::VariableClass* baseName, pelet::VariableClass* firstProperty, 
		pelet::VariableClass* firstPropertyCallArguments, pelet::VariableClass* restProperties) {
	
	// if we have function arguments, it means that the first property is a method
	if (firstProperty && !firstProperty->ChainList.empty() && firstPropertyCallArguments && !firstPropertyCallArguments->ChainList.empty()) {
		baseName->AppendToChain(firstProperty->ChainList[0].Name, firstPropertyCallArguments->ChainList[0].CallArguments, 
			firstPropertyCallArguments->ChainList[0].IsFunction, firstPropertyCallArguments->ChainList[0].IsStatic);	
		
		// call arguments could have array accesses ie.func1()[0]
		std::vector<pelet::VariablePropertyClass>::const_iterator it = firstPropertyCallArguments->ChainList.begin();
		++it;
		for (; it != firstPropertyCallArguments->ChainList.end(); ++it) {
			baseName->ChainList.push_back(*it);
		}
	}
	else if (firstProperty) {
		std::vector<pelet::VariablePropertyClass>::const_iterator it;
		for (it = firstProperty->ChainList.begin(); it != firstProperty->ChainList.end(); ++it) {
			baseName->ChainList.push_back(*it);
		}
	}
	if (restProperties) {
		std::vector<pelet::VariablePropertyClass>::const_iterator it;
		for (it = restProperties->ChainList.begin(); it != restProperties->ChainList.end(); ++it) {
			baseName->ChainList.push_back(*it);
		}
	}
	return baseName;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeFromExpression(pelet::ExpressionClass* expr) {
	pelet::VariableClass* variable = new pelet::VariableClass(Scope);
	AllAstItems.push_back(variable);
	variable->AppendToChain(expr);
	
	return variable;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableNil() {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableStart(pelet::SemanticValueClass* variableValue, bool isReference) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	if (variableValue) {
		newVar->AppendToChain(variableValue->Lexeme);
		newVar->Comment = variableValue->Comment;
		newVar->LineNumber = variableValue->LineNumber;
		newVar->Pos = variableValue->Pos;
		newVar->IsReference = isReference;
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableStartStaticMember(pelet::QualifiedNameClass* className, pelet::VariableClass* memberName) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	if (className && memberName) {
		newVar->LineNumber = memberName->LineNumber;
		newVar->Pos = memberName->Pos;
		newVar->AppendToChain(Scope.FullyQualify(*className, DeclaredNamespace));
		
		// dont handle variable static members for now ClassName::${$varName}
		if (memberName->ChainList.size() == 1) {
			std::vector<pelet::ExpressionClass*> args;
			newVar->AppendToChain(memberName->ChainList[0].Name, args, false, true);
		}
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::FullParserObserverClass::VariableMakeIndirect(pelet::VariableClass* variable) {
	variable->IsIndirect = true;
	return variable;
}

pelet::StatementListClass* pelet::FullParserObserverClass::VariableMakeCatchedException(pelet::QualifiedNameListClass* caughtExceptions, pelet::SemanticValueClass* variable) {
	pelet::StatementListClass* stmts = StatementListNil();
	for (size_t i = 0; i < caughtExceptions->Names.size(); i++) {
		pelet::ExpressionClass* newExpr = AssignmentExpressionFromNewFound(VariableStart(variable), caughtExceptions->Names[i], NULL);
		stmts->Push(newExpr);
	}
	return stmts;
}

pelet::TypeHintClass* pelet::FullParserObserverClass::TypeHintMake(pelet::QualifiedNameClass* namespaceName, bool isNullable) {
	pelet::TypeHintClass* hint = new pelet::TypeHintClass();
	AllAstItems.push_back(hint);
	hint->Set(namespaceName, isNullable);
	return hint;
}

pelet::TypeHintClass* pelet::FullParserObserverClass::TypeHintMakeNil() {
	pelet::TypeHintClass* hint = new pelet::TypeHintClass();
	AllAstItems.push_back(hint);
	return hint;
}

pelet::ScopeClass pelet::FullParserObserverClass::CurrentScope() {
	return Scope;
}

void pelet::FullParserObserverClass::DeclareAssignedPropertiesFromAssignments(pelet::StatementListClass* classStatements) {
	if (classStatements == NULL || classStatements->Size() <= 0) {
		return;
	}
	std::vector<UnicodeString> assignedProperties;
	pelet::StatementListClass allClassStmts;
	allClassStmts.PushAll(classStatements);
	
	// gather all of the declared properties
	for (size_t i = 0; i < classStatements->Size(); ++i) {
		if (pelet::StatementClass::PROPERTY_DECLARATION == classStatements->TypeAt(i)) {
			pelet::ClassMemberSymbolClass* member = (pelet::ClassMemberSymbolClass*)classStatements->At(i);
			assignedProperties.push_back(member->MemberName);
		}
		if (pelet::StatementClass::METHOD_DECLARATION == classStatements->TypeAt(i)) {
			
			// for methods, the assignment expressions are inside the method body statements,
			// recurse down the method body
			pelet::ClassMemberSymbolClass* methodDeclaration = (pelet::ClassMemberSymbolClass*)classStatements->At(i);
			allClassStmts.PushAll(&methodDeclaration->MethodStatements);
			for (size_t j = 0; j < methodDeclaration->MethodStatements.Size(); ++j) {
				if (pelet::StatementClass::PROPERTY_DECLARATION == methodDeclaration->MethodStatements.TypeAt(j)) {
					pelet::ClassMemberSymbolClass* member = 
						(pelet::ClassMemberSymbolClass*)methodDeclaration->MethodStatements.At(j);
					assignedProperties.push_back(member->MemberName);
				}	
			}
		}
	}
	
	// to keep while we are iterating through the class statements
	// since we want to add to class statements we will add after looping through them
	pelet::StatementListClass newMembers;
	
	// go through all assignments and make a property declaration for each assigned variable
	// that is not already declared
	for (size_t i = 0; i < allClassStmts.Size(); ++i) {
		bool isThisAssignment = false;
		pelet::AssignmentExpressionClass* expr = NULL;
		if (pelet::StatementClass::EXPRESSION == allClassStmts.TypeAt(i)) {
			pelet::ExpressionClass* baseExpr = (pelet::ExpressionClass*)allClassStmts.At(i);
			if (pelet::ExpressionClass::ASSIGNMENT == baseExpr->ExpressionType) {
				expr = (pelet::AssignmentExpressionClass*)baseExpr;
				
				// the chain list must have 2 items: "$this" and the property name
				if (expr->Destination.ChainList.size() == 2 && expr->Destination.ChainList[0].Name == UNICODE_STRING_SIMPLE("$this") 
						&& !expr->Destination.ChainList[0].IsFunction && !expr->Destination.ChainList[1].IsFunction) {
					isThisAssignment = true;
				}
			}
		}
		if (isThisAssignment) {
			
			// add the siguil because declared properties have the siguil while the properties added at run time
			// do not; we want to compare apples-to-apples
			UnicodeString propertyName = UNICODE_STRING_SIMPLE("$") + expr->Destination.ChainList[1].Name;
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
