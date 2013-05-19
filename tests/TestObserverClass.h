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

	
	std::vector<wxString> ClassNamespace, ClassName, ClassSignature, ClassComment,
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
	
	void ClassFound(const wxString& namespaceName, const wxString& className, const wxString& signature, 
			const wxString& comment, const int lineNumber);
			
	void NamespaceUseFound(const wxString& namespaceName, const wxString& alias, int startingPos);
	
	void NamespaceDeclarationFound(const wxString& namespaceName, int startingPos);
	
	void MethodFound(const wxString& namespaceName, const wxString& className, const wxString& methodName, 
			const wxString& signature, const wxString& returnType, const wxString& comment,
			pelet::TokenClass::TokenIds visibility, bool isStatic, const int lineNumber);

	void MethodScope(const wxString& namespaceName, const wxString& className, const wxString& methodName, 
		int startingPos, int endingPos);
	
	void PropertyFound(const wxString& namespaceName, const wxString& className, const wxString& propertyName, 
			const wxString& propertyType, const wxString& comment, 
			pelet::TokenClass::TokenIds visibility, bool isConst, bool isStatic, const int lineNumber);
	
	void FunctionFound(const wxString& namespaceName, const wxString& functionName, 
			const wxString& signature, const wxString& returnType, const wxString& comment, const int lineNumber);

	void FunctionScope(const wxString& namespaceName, const wxString& functionName, int startingPos, int endingPos);
	
	void VariableFound(const wxString& namespaceName, const wxString& className, const wxString& methodName, 
		const pelet::VariableClass& variable, const pelet::ExpressionClass& expression, const wxString& comment);
	
	void DefineDeclarationFound(const wxString& namespaceName, const wxString& variableName, const wxString& variableValue, 
			const wxString& comment, const int lineNumber);

	void IncludeFound(const wxString& file, const int lineNumber);

	void TraitUseFound(const wxString& namespaceName, const wxString& className, const wxString& traitName);
	
	void TraitAliasFound(const wxString& namespaceName, const wxString& className, const wxString& traitUsedClassName, 
		const wxString& traitMethodName, 
		const wxString& alias, pelet::TokenClass::TokenIds visibility);

	void TraitInsteadOfFound(const wxString& namespaceName, const wxString& className, const wxString& traitUsedClassName,
		const wxString& traitMethodName, const std::vector<wxString>& insteadOfList);
		
	void ExpressionFound(const pelet::ExpressionClass& expression);
};

#endif
