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
#include <pelet/ParserClass.h>
#include <pelet/TokenClass.h>
#include <pelet/ParserTypeClass.h>
#include <wx/init.h>
#include <wx/string.h>

/**
 * This is a program that shows the sample usage of the pelet library.
 * 
 * The pelet library interface to the parser.  We will given pelet::ParserClass an instance
 * of this object; as pelet::ParserClass is tokenizing source code, it will call only the appropriate
 * pelet::(Class|ClassMember|Function)ObserverClass methods AS SOON AS THE TOKEN IS REACHED.
 */
class SampleObserver : 
	public pelet::ClassObserverClass,   // for classes and define()
	public pelet::ClassMemberObserverClass,  // for properties and methods
	public pelet::FunctionObserverClass,  // for functions
	public pelet::VariableObserverClass { // for variables

public:

	/**
	 * This method gets called when a class is found.
	 * 
	 * @param const wxString& namespace the fully qualified "declared" namespace of the class that was found
	 * @param const wxString& className the name of the class that was found
	 * @param const wxString& signature the list of classes that the class inherits / implements in code format
	 *        for example "extends UserClass implements Runnable"
	 * @param const wxString& comment PHPDoc attached to the class
	 * @param lineNumber the line number (1-based) that the class was found in
	 */
	virtual void ClassFound(const wxString&  namespaceName, const wxString& className, const wxString& signature, 
		const wxString& comment, const int lineNumber) {
		wxPrintf(wxT("Class Found: %s in namespace %s on line %d \n"), 
			(const char*)className.ToAscii(), 
			(const char*)namespaceName.ToAscii(), 
			lineNumber);
	}
	
	/**
	 * This method gets called when a define declaration is found.
	 * 
	 * @param const wxString& namespace the fully qualified namespace name that the constant that was found
	 * @param const wxString& variableName the name of the defined variable
	 * @param const wxString& variableValue the variable value
	 * @param const wxString& comment PHPDoc attached to the define
	 * @param lineNumber the line number (1-based) that the define was found in
	 */
	virtual void DefineDeclarationFound(const wxString& namespaceName, const wxString& variableName, const wxString& variableValue, 
		const wxString& comment, const int lineNumber) {
		wxPrintf(wxT("Define Found: %s in namespace %s on line %d\n"), 
			(const char*)variableName.ToAscii(), 
			(const char*)namespaceName.ToAscii(), 
			lineNumber);
	}
	
	/**
	 * Override this method to perform any custom logic when a namespace declaration is found.
	 * 
	 * @param const wxString& namespaceName the name of the namespace name. Name will
	 *        be fully qualified (starts with '\')
	 * @param startingPos the character position (of the 'namespace' keyword in the original source code)
	 *         this is 0-based
	 */
	virtual void NamespaceDeclarationFound(const wxString& namespaceName, int startingPos) { 
		wxPrintf(wxT("Namespace Declaration Found: %s \n"), 
			(const char*)namespaceName.c_str());
	}
	
	/**
	 * Override this method to perform any custom logic when an include / require / require_once / include_once declaration is found.
	 * 
	 * @param const wxString& filename the name of the included file, but only if the statement
	 *        is a constant expression. Otherwise, lineNumber will be an empty string 
	 * @param lineNumber the line number (1-based) that the include/ was found in
	 */
	virtual void IncludeFound(const wxString& filename, const int lineNumber) {
		wxPrintf(wxT("Include or Require Found: %s on line %d\n"), 
			(const char*)filename.ToAscii(), 
			lineNumber);
	}
	
	/**
	 * Override this method to perform any custom logic when a namespace is imported ("use" keyword).
	 * 
	 * @param wxString namespaceName the fully qualified namespace that is being imported. It will 
	 *        always begin with a leading slash, even if the original source did not include it
	 * @param alias any alias to the namespaceName. alias will never be empty. If the code does not
	 *        specify an alias, the alias will be the last part of the namespace.
	 *        For example the statement "use First\Class;" will result in the  alias being "Class"
	 * @param startingPos
	 *        Character position where the namespace use statement starts. This number is 
	 *        0-based. It is the position where the "use" token starts. For example,
	 *        in the statement "use \First\Child" then StartingPosition is the position of "use"
	 *        Even in the case of where a use statement has commas, then StartingPosition is the 
	 *        position of the namespace token. For example, in the statement
	 *        "use \First\Child, \Sec\Child" then StartingPosition for 
	 *        the namespace \Sec\Child is the position of "use"
	 * @see LexicalAnalyzerClass::GetCharacterPosition()
	 */	
	virtual void NamespaceUseFound(const wxString& namespaceName, const wxString& alias, int startingPos) {
		wxPrintf(wxT("Namespace Import (Use) Found: %s alias %d\n"), 
			(const char*)namespaceName.ToAscii(), 
			(const char*)alias.ToAscii());
	}
		
	/* This method gets called when a class method is found.
	 * 
	 * @param const wxString& namespace the fully qualified namespace of the class that was found
	 * @param const wxString& className the name of the class that was found
	 * @param const wxString& methodName the name of the method that was found
	 * @param const wxString& signature string containing method parameters.  String is normalized, meaning that
	 *        any extra white space is removed, and every token is separated by one space only. ie. for the code
	 *        "public function doWork( $item1,   $item2  ) " the signature will be  "($item1, $item2)"
	 * @param const wxString& returnType the method's return type, as dictated by the PHPDoc comment
	 * @param const wxString& comment PHPDoc attached to the class
	 * @param visibility the visibility token attached to the method: PUBLIC, PROTECTED, or PRIVATE
	 * @param isStatic true if the method is static
	 * @param lineNumber the line number (1-based) that the method was found in
	 */
	virtual void MethodFound(const wxString& namespaceName, const wxString& className, const wxString& methodName, 
		const wxString& signature, const wxString& returnType, const wxString& comment, 
		pelet::TokenClass::TokenIds visibility, bool isStatic, const int lineNumber) {
		if (returnType.empty()) {
			wxPrintf(wxT("Method Found: %s in class %s in namespace %s on line %d. Method did not have @return in PHPDoc comment\n"), 
				(const char*)methodName.ToAscii(), 
				(const char*)className.ToAscii(), 
				(const char*)namespaceName.ToAscii(), 
				lineNumber);
		}
		else {
			wxPrintf(wxT("Method Found: %s in class %s in namespace %s on line %d and returns %s\n"), 
				(const char*)methodName.ToAscii(), 
				(const char*)className.ToAscii(), 
				(const char*)namespaceName.ToAscii(),
				lineNumber, 
				(const char*)returnType.ToAscii());
		}
	}
	
	/**
	 * Override this method to perform any custom logic when a class property is found.
	 * 
	 * @param const wxString& namespace the fully qualified namespace of the class that was found
	 * @param const wxString& className the name of the class that was found
	 * @param const wxString& propertyName the name of the property that was found
	 * @param const wxString& propertyType the property's type, as dictated by the PHPDoc comment
	 * @param const wxString& comment PHPDoc attached to the property
	 * @param visibility the visibility token attached  to the property: PUBLIC, PROTECTED, or PRIVATE
	 * @param bool isConst true if property is a constant
	 * @param isStatic true if the property is static
	 * @param lineNumber the line number (1-based) that the property was found in
	 */
	virtual void PropertyFound(const wxString& namespaceName, const wxString& className, const wxString& propertyName, 
		const wxString& propertyType, const wxString& comment, 
		pelet::TokenClass::TokenIds visibility, bool isConst, bool isStatic, const int lineNumber) {
		if (propertyType.empty()) {
			wxPrintf(wxT("Property Found: %s in class %s in namespace %s on line %d. Did not have @return in PHPDoc comment\n"), 
				(const char*)propertyName.ToAscii(), 
				(const char*)className.ToAscii(), 
				(const char*)namespaceName.ToAscii(), 
				lineNumber);
		}
		else {
			wxPrintf(wxT("Property Found: %s in class %s in namespace %s on line %d and is of type %s\n"), 
				(const char*)propertyName.ToAscii(), 
				(const char*)className.ToAscii(), 
				(const char*)namespaceName.ToAscii(), 
				lineNumber, 
				(const char*)propertyType.ToAscii());
		}
	}

	/**
	 * Override this method to perform any logic when the method body has ended (a closing brace '}' was encountered).
	 *
	 * @param const wxString& namespace the fully qualified namespace of the class that was found
	 * @param const wxString& className the name of the class that was found
	 * @param const wxString& methodName the name of the method that was found
	 * @param startingPos the character position (of the closing brace '{' original source code)
	 *        In case of an abstract method, startingPos is the position of the semicolon ';'
	 * @param endingPos the character position (of the closing brace '}' original source code)
	 *        In case of an abstract method, endingPos is the position of the semicolon ';'
	 */
	virtual void MethodScope(const wxString& namespaceName, const wxString& className, 
		const wxString& methodName, int startingPos, int endingPos) { 
	}

	/**
	 * This method gets called when a trait use statement has been found
	 * 
	 * @param const wxString& namespace the fully qualified namespace of the class that uses the trait
	 * @param className the fully qualified name of the class that uses the trait
	 * @param traitName the fully qualified name of the trait to be used 
	 */
	virtual void TraitUseFound(const wxString& namespaceName, const wxString& className, const wxString& traitName) {
		wxPrintf(wxT("Trait Usage Found in class %s in namespace %s. Trait Name %s \n"), 
			(const char*)className.ToAscii(),  
			(const char*)namespaceName.ToAscii(), 
			(const char*)traitName.ToAscii());
	}
	
	/**
	 * Override this method to perform custom logic when a trait method has been aliased
	 * 
	 * @param const wxString& namespace the fully qualified namespace of the class that uses the trait
	 * @param traitUsedClassName the class name of the trait to be aliased
	 * @param traitMethodName the fully qualified name of the trait method that is to be aliased (hidden)
	 *        this may be empty if the trait adaptation only changes the visibility and
	 *        does not need to resolve a trait conflict
	 * @param alias the name of the new alias. alias may be empty when ONLY the visibility is changed.
	 * @param visibility the visbility of the trait method. may be PUBLIC if the visibility was not changed.
	 */
	virtual void TraitAliasFound(const wxString& namespaceName, const wxString& className, const wxString& traitUsedClassName,
		const wxString& traitMethodName, 
		const wxString& alias, pelet::TokenClass::TokenIds visibility) {
		if (!alias.empty()) {
			const char* visibilityStr;
			if (pelet::TokenClass::PRIVATE == visibility) {
				visibilityStr = "private";
			}
			else if (pelet::TokenClass::PROTECTED == visibility) {
				visibilityStr = "protected";
			}
			else {
				visibilityStr = "public";
			}
			wxPrintf(wxT("Trait Alias Found in class %s in namespace %s. Trait Class %s Trait Method %s Trait Alias %s New Visibility %s \n"), 
				(const char*)className.ToAscii(),
				(const char*)namespaceName.ToAscii(),
				(const char*)traitUsedClassName.ToAscii(),
				(const char*)traitMethodName.ToAscii(),
				(const char*)alias.ToAscii(),
				visibilityStr
			);
		}
		else {
			const char* visibilityStr;
			if (pelet::TokenClass::PRIVATE == visibility) {
				visibilityStr = "private";
			}
			else if (pelet::TokenClass::PROTECTED == visibility) {
				visibilityStr = "protected";
			}
			else {
				visibilityStr = "public";
			}
			wxPrintf(wxT("Trait Change in visbility Found in class %s in namespace %s. Trait Class %s Trait Method %s New Visibility %s\n"), 
				(const char*)className.ToAscii(),
				(const char*)namespaceName.ToAscii(),
				(const char*)traitUsedClassName.ToAscii(),
				(const char*)traitMethodName.ToAscii(),
				visibilityStr
			);
		}
	}

	/**
	 * This method gets called when a trait method conflict has been resolved
	 * (an insteadof operation) 
	 *
	 * @param const wxString& namespace the fully qualified namespace of the class that was found
	 * @param className name of the class that uses the trait
	 * @param traitUsedClassName the class name of the trait to be used
	 * @param traitMethodName name of the trait method that is to being resolved
	 * @param insteadOfList the list of fully qualified trait names that are listed after the insteadof operator
	 */
	virtual void TraitInsteadOfFound(const wxString& namespaceName, const wxString& className, const wxString& traitUsedClassName,
		const wxString& traitMethodName, const std::vector<wxString>& insteadOfList) {
		wxPrintf(wxT("Trait InsteadOf Found in class %s in namespace %s. Trait Class %s Trait Method %s \n"), 
			(const char*)className.ToAscii(),
			(const char*)namespaceName.ToAscii(),
			(const char*)traitUsedClassName.ToAscii(),
			(const char*)traitMethodName.ToAscii()
		);
		wxPrintf(wxT("Instead of"));
		for (size_t i = 0; i < insteadOfList.size(); ++i) {
			wxPrintf(wxT(" %s"), (const char*)insteadOfList[i].ToAscii());
		}
	}
	
	/**
	 * This method gets called when a function is found.
	 * 
	 * @param const wxString& namespace the fully qualified namespace of the function that was found
	 * @param const wxString& functionName the name of the method that was found
	 * @param const wxString& signature string containing method parameters.  String is normalized, meaning that
	 *        any extra white space is removed, and every token is separated by one space only. ie. for the code
	 *        "public function doWork( $item1,   $item2  ) " the signature will be  "($item1, $item2)"
	 * @param const wxString& returnType the function's return type, as dictated by the PHPDoc comment
	 * @param const wxString& comment PHPDoc attached to the class
	 * @param lineNumber the line number (1-based) that the function was found in
	 */
	virtual void FunctionFound(const wxString& namespaceName, const wxString& functionName, 
		const wxString& signature, const wxString& returnType, const wxString& comment, const int lineNumber) {
		if (returnType.empty()) {
			wxPrintf(wxT("Function Found: %s in namespace %s on line %d. Function Did not have @return in PHPDoc comment\n"), 
				(const char*)functionName.ToAscii(),
				(const char*)namespaceName.ToAscii(),
				lineNumber);
		}
		else {
			wxPrintf(wxT("Function Found: %s in namespace %s on line %d and it returns %s\n"), 
				(const char*)functionName.ToAscii(),
				(const char*)namespaceName.ToAscii(),
				lineNumber,
				(const char*)returnType.ToAscii());
		}
	}

	/**
	 * Override this method to perform any logic when the function body has ended (a closing brace '}' was encountered).
	 * 
	 * @param const wxString& namespace the fully qualified namespace of the function that was found
	 * @param const wxString& functionName the name of the method that was found
	 * @param startingPos the character position (of the closing brace '{' original source code)
	 * @param endingPos the character position (of the closing brace '}' original source code)
	 */
	virtual void FunctionScope(const wxString& namespaceName, const wxString& functionName, int startingPos, int endingPos) { 
	}
	
	/** 
	 * Override this method to perform any custom logic when a variable assignment is found. Note that the same 
	 * variable may be assigned different values at different times within the same function.
	 * The symbol will be constructed in the following way:
	 *
	 * Example assignment:  $name = $this->getName()->toString();
	 *
	 * Variable: The variable's ChainList will contain the variable's name in index 0: "$name"
	 * ChainList: This is a list of  properties / methods
	 *            that were successively invoked.
	 *            In this example, the expression chain list will have 3 items in
	 *           the chain list "$this" "->getName()" and "->toString()".
	 *
	 * The variable itself may contain an array key in it; like so: $person['name'] = $this->getName()->toString();
	 * In this case, Variable ChainList will contain 1 item: "$name" and the Variable Array Key will contain "name"
	 * 
	 * 
	 * @param const wxString& namespace the fully qualified namespace of the containing class / function.
	 * @param const wxString& className class where the variable was found. may be empty is variable is scoped 
	 *        inside a function or is global.
	 * @param const wxString& methodName function/method name where the variable was found. may be empty if 
	 *        variable is globally scoped.
	 * @param const VariableClass& variable the name of the variable that was found, along with any array keys that were used
	 *       in the left hand of the assignment. 
	 * @param const ExpressionClass& expression the expression assigned to the variable
	 * @param const wxString& comment PHPDoc attached to the variable
	 * 
	 * @see pelet::VariableClass
	 */
	virtual void VariableFound(const wxString& namespaceName, const wxString& className, const wxString& methodName, 
		const pelet::VariableClass& variable, const pelet::ExpressionClass& expression, const wxString& comment) {
		wxString scope;
		if (className.empty() && methodName.empty()) {
			scope = wxT("<global>");
		}
		else if (className.empty() && !methodName.empty()) {
			scope = methodName;
		}
		else {
			scope = className + wxT("::") + methodName;
		}
		wxString type;
		if (pelet::ExpressionClass::ARRAY == expression.ExpressionType) {
			type = wxT("Variable is an array");
		}
		else if (pelet::ExpressionClass::SCALAR == expression.ExpressionType) {
			type = wxT("Variable is a primitive");
		}
		else if (pelet::ExpressionClass::VARIABLE == expression.ExpressionType) {
			type = wxT("Variable is a variable expression. ");
			type += wxT("Chain list is: ");
			for (size_t i = 0; i < expression.ChainList.size(); ++i) {
				if (expression.ChainList[i].IsStatic && i > 0) {
					type += wxT("::");
				}
				else if (i > 0) {
					type += wxT("->");
				}
				type += expression.ChainList[i].Name;
				if (expression.ChainList[i].IsFunction) {
					type += wxT("()");
				}
				if (i < (expression.ChainList.size() - 1)) {
					type += wxT(", ");
				}
			}
			
		}
		else if (pelet::ExpressionClass::UNKNOWN == expression.ExpressionType) {
			type = wxT("Variable is of unknown type.");
		}
		if (!variable.PhpDocType.empty()) {
			type += wxT("Variable is decorated with a PHPDoc comment: ");
			type += variable.PhpDocType;
		}
		wxPrintf(wxT("Variable Found: %s in scope %s. %s\n"), 
				(const char*)variable.ChainList[0].Name.ToAscii(),
				(const char*)scope.ToAscii(),
				(const char*)type.ToAscii());
	}
};

int main(int argc, char** argv) {
	if (argc < 2) {
		printf("This program requires 1 argument: The path of the PHP file to parse.\n");
		return -1;
	}
	wxInitializer init;
	
	SampleObserver observer;
	pelet::ParserClass parser;
	parser.SetVersion(pelet::PHP_54);
	parser.SetClassObserver(&observer);
	parser.SetClassMemberObserver(&observer);
	parser.SetFunctionObserver(&observer);
	parser.SetVariableObserver(&observer);
	
	pelet::LintResultsClass results;
	bool parsed = parser.ScanFile(argv[1], results);
	if (parsed) {
		printf("Parsing complete.\n");
	}
	else {
		wxPrintf(wxT("Parse error: %s on line %d\n"), 
			(const char*)results.Error.ToAscii(), 
			results.LineNumber);
	}
	return 0;
}