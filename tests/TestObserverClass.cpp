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

void TestObserverClass::ClassFound(const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment, const int lineNumber) {
	ClassName.push_back(className);
	ClassSignature.push_back(signature);
	ClassComment.push_back(comment);
	ClassLineNumber.push_back(lineNumber);
}

void TestObserverClass::MethodFound(const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment,
		pelet::TokenClass::TokenIds visibility, bool isStatic, const int lineNumber) {
	MethodClassName.push_back(className);
	MethodName.push_back(methodName);
	MethodSignature.push_back(signature);
	MethodReturnType.push_back(returnType);
	MethodComment.push_back(comment);
	MethodVisibility.push_back(visibility);
	MethodIsStatic.push_back(isStatic);
	MethodLineNumber.push_back(lineNumber);
}

void TestObserverClass::MethodEnd(const UnicodeString& className, const UnicodeString& methodName, int pos) {
	//MethodEndClassName.push_back(className);
	//MethodEndMethodName.push_back(methodName);
	MethodEndPos.push_back(pos);
}

void TestObserverClass::PropertyFound(const UnicodeString& className, const UnicodeString& propertyName, 
		const UnicodeString& propertyType, const UnicodeString& comment, 
		pelet::TokenClass::TokenIds visibility, bool isConst, bool isStatic, const int lineNumber) {
	PropertyClassName.push_back(className);
	PropertyName.push_back(propertyName);
	PropertyType.push_back(propertyType);
	PropertyComment.push_back(comment);
	PropertyConsts.push_back(isConst);
	PropertyVisibility.push_back(visibility);
	PropertyIsStatic.push_back(isStatic);
	PropertyLineNumber.push_back(lineNumber);
}

void TestObserverClass::FunctionFound(const UnicodeString& functionName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, const int lineNumber) {
	FunctionName.push_back(functionName);
	FunctionSignature.push_back(signature);
	FunctionReturnType.push_back(returnType);
	FunctionComment.push_back(comment);
	FunctionLineNumber.push_back(lineNumber);
}

void TestObserverClass::FunctionEnd(const UnicodeString& functionName, int pos) {
	// nothing for now
}

void TestObserverClass::VariableFound(const UnicodeString& className, const UnicodeString& methodName, 
	const pelet::SymbolClass& symbol, const UnicodeString& comment) {
	VariableClassName.push_back(className);
	VariableMethodName.push_back(methodName);
	VariableName.push_back(symbol.Lexeme);
	VariableComment.push_back(symbol.Comment);
	VariableTypes.push_back(symbol.Type);
	UnicodeString typeString;
	for (size_t i = 0; i < symbol.ChainList.size(); ++i) {
		typeString.append(symbol.ChainList[i]);
	}
	VariableChainList.push_back(typeString);
	VariablePhpDocType.push_back(symbol.PhpDocType);
}

void TestObserverClass::DefineDeclarationFound(const UnicodeString& variableName, const UnicodeString& variableValue, 
		const UnicodeString& comment, const int lineNumber) {
	DefinedName.push_back(variableName);
	DefinedValue.push_back(variableValue);
	DefinedComment.push_back(comment);		
}

void TestObserverClass::IncludeFound(const UnicodeString& file, const int lineNumber) {
	IncludeFile.push_back(file);
	IncludeLineNumber.push_back(lineNumber);
}

void TestObserverClass::TraitUseFound(const UnicodeString& className, const UnicodeString& traitName) {
	TraitClassName.push_back(className);
	TraitUsed.push_back(traitName);
}
	
void TestObserverClass::TraitAliasFound(const UnicodeString& className, const UnicodeString& traitUsedClassName,
										const UnicodeString& traitMethodName, 
										const UnicodeString& alias, pelet::TokenClass::TokenIds visibility) {
	TraitClassName.push_back(className);
	TraitUsed.push_back(traitUsedClassName);
	TraitMethodName.push_back(traitMethodName);
	TraitAlias.push_back(alias);
	TraitAliasVisibility.push_back(visibility);
}