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
#ifndef __TEST_OBSERVERCLASS_H__ 
#define __TEST_OBSERVERCLASS_H__ 

#include <pelet/ParserClass.h>

/**
 * Testing the parser involves testing the notifications raised by the parser.  So, this test class will implement
 * all observer interfaces and push the parameters into publicly accessible vectors. The different test cases
 * can then assert that the notifications send the correct arguments.
 */
class TestObserverClass : 
	public pelet::ClassObserverClass, public pelet::ClassMemberObserverClass, 
	public pelet::FunctionObserverClass, public pelet::VariableObserverClass,
	public pelet::ExpressionObserverClass {

public:

	
	std::vector<UnicodeString> ClassNamespace, ClassName, ClassSignature, ClassComment,
						NamespaceName,
						NamespaceUseName, NamespaceAlias,
						MethodClassNamespace, MethodClassName, MethodName, MethodSignature, MethodReturnType, MethodComment,
						PropertyClassNamespace, PropertyClassName, PropertyName, PropertyType, PropertyComment,
						FunctionNamespace, FunctionName, FunctionSignature, FunctionReturnType, FunctionComment,
						VariableClassNamespace, VariableClassName, VariableMethodName, VariableName, VariableComment, VariableArrayKeys,
						VariableExpressionChainList, VariablePhpDocType,
						VariableExpressionArrayKeys,
						DefinedNamespaceName, DefinedName, DefinedValue, DefinedComment,
						MethodEndClassNamespace, MethodEndClassName, MethodEndMethodName,
						IncludeFile,
						TraitNamespace, TraitClassName, TraitUsed, TraitMethodName, TraitAlias, TraitInsteadOf;
	std::vector<bool> PropertyConsts, MethodIsStatic, PropertyIsStatic;
	std::vector<pelet::TokenClass::TokenIds> MethodVisibility, PropertyVisibility, TraitAliasVisibility;
	std::vector<pelet::ExpressionClass::ExpressionTypes> VariableExpressionTypes;
	std::vector<int> NamespaceUseStartingPos, 
					MethodStartingPos, MethodEndingPos,
					FunctionStartingPos, FunctionEndingPos;
	std::vector<int> ClassLineNumber, MethodLineNumber, PropertyLineNumber, FunctionLineNumber, IncludeLineNumber;
	std::vector<pelet::ExpressionClass> Expressions;
	
	void ClassFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& signature, 
			const UnicodeString& comment, const int lineNumber);
			
	void NamespaceUseFound(const UnicodeString& namespaceName, const UnicodeString& alias, int startingPos);
	
	void NamespaceDeclarationFound(const UnicodeString& namespaceName, int startingPos);
	
	void MethodFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
			const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment,
			pelet::TokenClass::TokenIds visibility, bool isStatic, const int lineNumber);

	void MethodScope(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
		int startingPos, int endingPos);
	
	void PropertyFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& propertyName, 
			const UnicodeString& propertyType, const UnicodeString& comment, 
			pelet::TokenClass::TokenIds visibility, bool isConst, bool isStatic, const int lineNumber);
	
	void FunctionFound(const UnicodeString& namespaceName, const UnicodeString& functionName, 
			const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, const int lineNumber);

	void FunctionScope(const UnicodeString& namespaceName, const UnicodeString& functionName, int startingPos, int endingPos);
	
	void VariableFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
		const pelet::VariableClass& variable, const pelet::ExpressionClass& expression, const UnicodeString& comment);
	
	void DefineDeclarationFound(const UnicodeString& namespaceName, const UnicodeString& variableName, const UnicodeString& variableValue, 
			const UnicodeString& comment, const int lineNumber);

	void IncludeFound(const UnicodeString& file, const int lineNumber);

	void TraitUseFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& traitName);
	
	void TraitAliasFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& traitUsedClassName, 
		const UnicodeString& traitMethodName, 
		const UnicodeString& alias, pelet::TokenClass::TokenIds visibility);

	void TraitInsteadOfFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& traitUsedClassName,
		const UnicodeString& traitMethodName, const std::vector<UnicodeString>& insteadOfList);
		
	void ExpressionFound(const pelet::ExpressionClass& expression);
};

#endif
