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
#include <TestObserverClass.h> 

TestObserverClass::~TestObserverClass() {
}

void TestObserverClass::ClassFound(const UnicodeString& namespaceName, const UnicodeString& className, 
		const UnicodeString& signature, 
		const UnicodeString& baseClassName,
		const UnicodeString& implementsList,
		const UnicodeString& comment, const int lineNumber) {
	ClassNamespace.push_back(namespaceName);
	ClassName.push_back(className);
	ClassSignature.push_back(signature);
	ClassComment.push_back(comment);
	ClassLineNumber.push_back(lineNumber);
}

void TestObserverClass::NamespaceUseFound(const UnicodeString& namespaceName, const UnicodeString& alias, int lineNumber, int startingPos) {
	NamespaceUseName.push_back(namespaceName);
	NamespaceAlias.push_back(alias);
	NamespaceUseLineNumber.push_back(lineNumber);
	NamespaceUseStartingPos.push_back(startingPos);
}

void TestObserverClass::NamespaceDeclarationFound(const UnicodeString& namespaceName, int startingPos) {
	NamespaceName.push_back(namespaceName);
}

void TestObserverClass::MethodFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment,
		pelet::TokenClass::TokenIds visibility, bool isStatic, const int lineNumber, bool hasVariableArguments) {
	MethodClassNamespace.push_back(namespaceName);
	MethodClassName.push_back(className);
	MethodName.push_back(methodName);
	MethodSignature.push_back(signature);
	MethodReturnType.push_back(returnType);
	MethodComment.push_back(comment);
	MethodVisibility.push_back(visibility);
	MethodIsStatic.push_back(isStatic);
	MethodLineNumber.push_back(lineNumber);
	MethodHasVariableArguments.push_back(hasVariableArguments);
}

void TestObserverClass::MethodScope(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
		int startingPos, int endingPos) {
	MethodStartingPos.push_back(startingPos);
	MethodEndingPos.push_back(endingPos);
}

void TestObserverClass::PropertyFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& propertyName, 
		const UnicodeString& propertyType, const UnicodeString& comment, 
		pelet::TokenClass::TokenIds visibility, bool isConst, bool isStatic, const int lineNumber) {
	PropertyClassNamespace.push_back(namespaceName);
	PropertyClassName.push_back(className);
	PropertyName.push_back(propertyName);
	PropertyType.push_back(propertyType);
	PropertyComment.push_back(comment);
	PropertyConsts.push_back(isConst);
	PropertyVisibility.push_back(visibility);
	PropertyIsStatic.push_back(isStatic);
	PropertyLineNumber.push_back(lineNumber);
}

void TestObserverClass::FunctionFound(const UnicodeString& namespaceName, const UnicodeString& functionName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, const int lineNumber, 
		bool hasVariableArguments) {
	FunctionNamespace.push_back(namespaceName);
	FunctionName.push_back(functionName);
	FunctionSignature.push_back(signature);
	FunctionReturnType.push_back(returnType);
	FunctionComment.push_back(comment);
	FunctionLineNumber.push_back(lineNumber);
	FunctionHasVariableArguments.push_back(hasVariableArguments);
}

void TestObserverClass::FunctionScope(const UnicodeString& namespaceName, const UnicodeString& functionName, int startingPos, int endingPos) {
	FunctionStartingPos.push_back(startingPos);
	FunctionEndingPos.push_back(endingPos);
}

void TestObserverClass::VariableFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
									  const pelet::VariableClass& variable, pelet::ExpressionClass* expression, const UnicodeString& comment) {
	VariableClassNamespace.push_back(namespaceName);
	VariableClassName.push_back(className);
	VariableMethodName.push_back(methodName);
	VariableName.push_back(variable.ChainList[0].Name);
	VariableComment.push_back(variable.Comment);
	UnicodeString arrayKey;
	if (variable.ChainList.size() > 1 && variable.ChainList[1].IsArrayAccess && variable.ChainList[1].ArrayAccess) {
		if (pelet::ExpressionClass::SCALAR == variable.ChainList[1].ArrayAccess->ExpressionType) {
			pelet::ScalarExpressionClass* accessExpr = (pelet::ScalarExpressionClass*)variable.ChainList[1].ArrayAccess;
			arrayKey = accessExpr->Value;
		}
	}
	VariableArrayKeys.push_back(arrayKey);
	if (expression) {
		VariableExpressionTypes.push_back(expression->ExpressionType);
	}
	else {
		VariableExpressionTypes.push_back(pelet::ExpressionClass::UNKNOWN);
	}
	UnicodeString typeString;
	if (expression && expression->ExpressionType == pelet::ExpressionClass::VARIABLE) {
		pelet::VariableClass* srcVar = (pelet::VariableClass*) expression;
		for (size_t i = 0; i < srcVar->ChainList.size(); ++i) {
			UnicodeString prop;
			if (srcVar->ChainList[i].IsStatic && i > 0) {
				prop = UNICODE_STRING_SIMPLE("::");
			}
			else if (i > 0) {
				prop = UNICODE_STRING_SIMPLE("->");
			}
			prop.append(srcVar->ChainList[i].Name);
			if (srcVar->ChainList[i].IsFunction) {
				prop.append(UNICODE_STRING_SIMPLE("()"));
			}
			typeString.append(prop);
		}
	}
	if (expression && expression->ExpressionType == pelet::ExpressionClass::ARRAY) {
		pelet::ArrayExpressionClass* srcArray = (pelet::ArrayExpressionClass*) expression;
		for (size_t i = 0; i < srcArray->ArrayPairs.size(); ++i) {
			pelet::ArrayPairExpressionClass* pair = srcArray->ArrayPairs[i];
			if (pair->Key && pelet::ExpressionClass::SCALAR == pair->Key->ExpressionType) {
				VariableExpressionArrayKeys.push_back(((pelet::ScalarExpressionClass*)pair->Key)->Value);
			}
		}
	}
	if (expression && expression->ExpressionType == pelet::ExpressionClass::NEW_CALL) {
		pelet::NewInstanceExpressionClass* newInstance = (pelet::NewInstanceExpressionClass*) expression;
		typeString = newInstance->ClassName;
	}
	if (expression && expression->ExpressionType == pelet::ExpressionClass::SCALAR) {
		pelet::ScalarExpressionClass* scalarExpr = (pelet::ScalarExpressionClass*) expression;
		typeString = scalarExpr->Value;
	}
	VariableExpressionChainList.push_back(typeString);
	VariablePhpDocType.push_back(variable.PhpDocType);
	
}

void TestObserverClass::DefineDeclarationFound(const UnicodeString& namespaceName, const UnicodeString& variableName, const UnicodeString& variableValue, 
		const UnicodeString& comment, const int lineNumber) {
	DefinedNamespaceName.push_back(namespaceName);
	DefinedName.push_back(variableName);
	DefinedValue.push_back(variableValue);
	DefinedComment.push_back(comment);		
}

void TestObserverClass::IncludeFound(const UnicodeString& file, const int lineNumber) {
	IncludeFile.push_back(file);
	IncludeLineNumber.push_back(lineNumber);
}

void TestObserverClass::TraitUseFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& traitName) {
	TraitNamespace.push_back(namespaceName);
	TraitClassName.push_back(className);
	TraitUsed.push_back(traitName);
}
	
void TestObserverClass::TraitAliasFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& traitUsedClassName,
										const UnicodeString& traitMethodName, 
										const UnicodeString& alias, pelet::TokenClass::TokenIds visibility) {
	TraitNamespace.push_back(namespaceName);
	TraitClassName.push_back(className);
	TraitUsed.push_back(traitUsedClassName);
	TraitMethodName.push_back(traitMethodName);
	TraitAlias.push_back(alias);
	TraitAliasVisibility.push_back(visibility);
}

void TestObserverClass::TraitInsteadOfFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& traitUsedClassName,
						  const UnicodeString& traitMethodName, const std::vector<UnicodeString>& insteadOfList) {
	TraitNamespace.push_back(namespaceName);
	TraitClassName.push_back(className);
	TraitUsed.push_back(traitUsedClassName);
	TraitMethodName.push_back(traitMethodName);
	for (size_t i = 0; i < insteadOfList.size(); ++i) {
		TraitInsteadOf.push_back(insteadOfList[i]);
	}
}

void TestObserverClass::ExpressionVariableFound(pelet::VariableClass* expression) {
	VariableExpressions.push_back(expression);
}

void TestObserverClass::ExpressionAssignmentFound(pelet::AssignmentExpressionClass* expression) {
	AssignmentExpressions.push_back(expression);
}

void TestObserverClass::ExpressionAssignmentCompoundFound(pelet::AssignmentCompoundExpressionClass* expression) {
	AssignmentCompoundExpressions.push_back(expression);
}

void TestObserverClass::ExpressionBinaryOperationFound(pelet::BinaryOperationClass* expression) {
	BinaryOperations.push_back(expression);
}

void TestObserverClass::ExpressionUnaryOperationFound(pelet::UnaryOperationClass* expression) {
	UnaryOperations.push_back(expression);
}

void TestObserverClass::ExpressionUnaryVariableOperationFound(pelet::UnaryVariableOperationClass* expression) {
	UnaryVariableOperations.push_back(expression);
}

void TestObserverClass::ExpressionTernaryOperationFound(pelet::TernaryOperationClass* expression) {
	TernaryOperations.push_back(expression);
}

void TestObserverClass::ExpressionFunctionArgumentFound(pelet::VariableClass* variable) {
	VariableExpressions.push_back(variable);
}

void TestObserverClass::StatementGlobalVariablesFound(pelet::GlobalVariableStatementClass* variables) {
	for (size_t i = 0; i < variables->Variables.size(); ++i) {
		VariableExpressions.push_back(variables->Variables[i]);
	}
}

void TestObserverClass::StatementStaticVariablesFound(pelet::StaticVariableStatementClass* variables) {
	for (size_t i = 0; i < variables->Variables.size(); ++i) {
		VariableExpressions.push_back(variables->Variables[i]);
	}
}

void TestObserverClass::ExpressionIncludeFound(pelet::IncludeExpressionClass *expr) {
	IncludeFile.push_back(expr->File);
	IncludeLineNumber.push_back(expr->LineNumber);
	IncludeExpressions.push_back(expr);
}

void TestObserverClass::ExpressionAssignmentListFound(pelet::AssignmentListExpressionClass* expression) {
	AssignmentListExpressions.push_back(expression);
}

void TestObserverClass::ExpressionNewInstanceFound(pelet::NewInstanceExpressionClass* expression) {
	NewInstanceExpressions.push_back(expression);
}

void TestObserverClass::ExpressionIssetFound(pelet::IssetExpressionClass* expression) {
	IssetExpressions.push_back(expression);
}
