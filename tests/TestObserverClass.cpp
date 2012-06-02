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

void TestObserverClass::ClassFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment, const int lineNumber) {
	ClassNamespace.push_back(namespaceName);
	ClassName.push_back(className);
	ClassSignature.push_back(signature);
	ClassComment.push_back(comment);
	ClassLineNumber.push_back(lineNumber);
}

void TestObserverClass::NamespaceUseFound(const UnicodeString& namespaceName, const UnicodeString& alias, int startingPos) {
	NamespaceUseName.push_back(namespaceName);
	NamespaceAlias.push_back(alias);
	NamespaceUseStartingPos.push_back(startingPos);
}

void TestObserverClass::NamespaceDeclarationFound(const UnicodeString& namespaceName, int startingPos) {
	NamespaceName.push_back(namespaceName);
}

void TestObserverClass::MethodFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment,
		pelet::TokenClass::TokenIds visibility, bool isStatic, const int lineNumber) {
	MethodClassNamespace.push_back(namespaceName);
	MethodClassName.push_back(className);
	MethodName.push_back(methodName);
	MethodSignature.push_back(signature);
	MethodReturnType.push_back(returnType);
	MethodComment.push_back(comment);
	MethodVisibility.push_back(visibility);
	MethodIsStatic.push_back(isStatic);
	MethodLineNumber.push_back(lineNumber);
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
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, const int lineNumber) {
	FunctionNamespace.push_back(namespaceName);
	FunctionName.push_back(functionName);
	FunctionSignature.push_back(signature);
	FunctionReturnType.push_back(returnType);
	FunctionComment.push_back(comment);
	FunctionLineNumber.push_back(lineNumber);
}

void TestObserverClass::FunctionScope(const UnicodeString& namespaceName, const UnicodeString& functionName, int startingPos, int endingPos) {
	FunctionStartingPos.push_back(startingPos);
	FunctionEndingPos.push_back(endingPos);
}

void TestObserverClass::VariableFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
	const pelet::VariableClass& variable, const pelet::ExpressionClass& expression, const UnicodeString& comment) {
	VariableClassNamespace.push_back(namespaceName);
	VariableClassName.push_back(className);
	VariableMethodName.push_back(methodName);
	VariableName.push_back(variable.ChainList[0].Name);
	VariableComment.push_back(variable.Comment);
	VariableArrayKeys.push_back(variable.ArrayKey);
	VariableExpressionTypes.push_back(expression.ExpressionType);
	UnicodeString typeString;
	for (size_t i = 0; i < expression.ChainList.size(); ++i) {
		UnicodeString prop;
		if (expression.ChainList[i].IsStatic && i > 0) {
			prop = UNICODE_STRING_SIMPLE("::");
		}
		else if (i > 0) {
			prop = UNICODE_STRING_SIMPLE("->");
		}
		prop.append(expression.ChainList[i].Name);
		if (expression.ChainList[i].IsFunction) {
			prop.append(UNICODE_STRING_SIMPLE("()"));
		}
		typeString.append(prop);
	}
	VariableExpressionChainList.push_back(typeString);
	VariablePhpDocType.push_back(variable.PhpDocType);
	for (size_t i = 0; i < expression.ArrayKeys.size(); ++i) {
		VariableExpressionArrayKeys.push_back(expression.ArrayKeys[i]);
	}
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

void TestObserverClass::ExpressionFound(const pelet::ExpressionClass& expression) {
	Expressions.push_back(expression);
}

