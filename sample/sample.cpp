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
#include <unicode/unistr.h>
#include <unicode/ustdio.h>

// this is only used so that this program ca be run through valgrind (memory leak
// detector). In real-world usage, this include is not needed.
#include <unicode/uclean.h>

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
	 * @param const UnicodeString& namespace the fully qualified "declared" namespace of the class that was found
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& signature the list of classes that the class inherits / implements in code format
	 *        for example "extends UserClass implements Runnable"
	 * @param const UnicodeString& comment PHPDoc attached to the class
	 * @param lineNumber the line number (1-based) that the class was found in
	 */
	virtual void ClassFound(const UnicodeString&  namespaceName, const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment, const int lineNumber) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Class Found: %.*S in namespace %.*S on line %d \n", 
			className.length(), className.getBuffer(), 
			namespaceName.length(), namespaceName.getBuffer(),
			lineNumber);
		u_fclose(ufout);		
	}
	
	/**
	 * This method gets called when a define declaration is found.
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace name that the constant that was found
	 * @param const UnicodeString& variableName the name of the defined variable
	 * @param const UnicodeString& variableValue the variable value
	 * @param const UnicodeString& comment PHPDoc attached to the define
	 * @param lineNumber the line number (1-based) that the define was found in
	 */
	virtual void DefineDeclarationFound(const UnicodeString& namespaceName, const UnicodeString& variableName, const UnicodeString& variableValue, 
		const UnicodeString& comment, const int lineNumber) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Define Found: %.*S in namespace %.*S on line %d\n", 
			variableName.length(), variableName.getBuffer(), 
			namespaceName.length(), namespaceName.getBuffer(), 
			lineNumber);
		u_fclose(ufout);
	}
	
	/**
	 * Override this method to perform any custom logic when a namespace declaration is found.
	 * 
	 * @param const UnicodeString& namespaceName the name of the namespace name. Name will
	 *        be fully qualified (starts with '\')
	 */
	virtual void NamespaceDeclarationFound(const UnicodeString& namespaceName) { 
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Namespace Declaration Found: %.*S \n", namespaceName.length(), namespaceName.getBuffer());
		u_fclose(ufout);
	}
	
	/**
	 * Override this method to perform any custom logic when an include / require / require_once / include_once declaration is found.
	 * 
	 * @param const UnicodeString& filename the name of the included file, but only if the statement
	 *        is a constant expression. Otherwise, lineNumber will be an empty string 
	 * @param lineNumber the line number (1-based) that the include/ was found in
	 */
	virtual void IncludeFound(const UnicodeString& filename, const int lineNumber) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Include or Require Found: %.*S on line %d\n", filename.length(), filename.getBuffer(), lineNumber);
		u_fclose(ufout);
	}
	
	/**
	 * Override this method to perform any custom logic when a namespace is imported ("use" keyword).
	 * 
	 * @param UnicodeString namespaceName the fully qualified namespace that is being imported
	 * @param alias any alias to the namespaceName.  alias will never be empty. If the code does not
	 *        specify an alias, the alias will be the last part of the namespace.
	 *        For example the statement "use First\Class;" will result in the  alias being "Class"
	 */
	virtual void NamespaceUseFound(const UnicodeString& namespaceName, const UnicodeString& alias) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Namespace Import (Use) Found: %.*S alias %d\n", namespaceName.length(), namespaceName.getBuffer(), 
			alias.length(), alias.getBuffer());
		u_fclose(ufout);
	}
		
	/* This method gets called when a class method is found.
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that was found
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& methodName the name of the method that was found
	 * @param const UnicodeString& signature string containing method parameters.  String is normalized, meaning that
	 *        any extra white space is removed, and every token is separated by one space only. ie. for the code
	 *        "public function doWork( $item1,   $item2  ) " the signature will be  "($item1, $item2)"
	 * @param const UnicodeString& returnType the method's return type, as dictated by the PHPDoc comment
	 * @param const UnicodeString& comment PHPDoc attached to the class
	 * @param visibility the visibility token attached to the method: PUBLIC, PROTECTED, or PRIVATE
	 * @param isStatic true if the method is static
	 * @param lineNumber the line number (1-based) that the method was found in
	 */
	virtual void MethodFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, 
		pelet::TokenClass::TokenIds visibility, bool isStatic, const int lineNumber) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		if (returnType.isEmpty()) {
			u_fprintf(ufout, "Method Found: %.*S in class %.*S in namespace %.*S on line %d. Method did not have @return in PHPDoc comment\n", 
				methodName.length(), methodName.getBuffer(), className.length(), className.getBuffer(), 
				namespaceName.length(), namespaceName.getBuffer(),
				lineNumber);
		}
		else {
			u_fprintf(ufout, "Method Found: %.*S in class %.*S in namespace %.*S on line %d and returns %.*S\n", 
				methodName.length(), methodName.getBuffer(), className.length(), className.getBuffer(), 
				namespaceName.length(), namespaceName.getBuffer(),
				lineNumber,
				returnType.length(), returnType.getBuffer());
		}
		u_fclose(ufout);
	}
	
	/**
	 * Override this method to perform any custom logic when a class property is found.
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that was found
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& propertyName the name of the property that was found
	 * @param const UnicodeString& propertyType the property's type, as dictated by the PHPDoc comment
	 * @param const UnicodeString& comment PHPDoc attached to the property
	 * @param visibility the visibility token attached  to the property: PUBLIC, PROTECTED, or PRIVATE
	 * @param bool isConst true if property is a constant
	 * @param isStatic true if the property is static
	 * @param lineNumber the line number (1-based) that the property was found in
	 */
	virtual void PropertyFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& propertyName, 
		const UnicodeString& propertyType, const UnicodeString& comment, 
		pelet::TokenClass::TokenIds visibility, bool isConst, bool isStatic, const int lineNumber) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		if (propertyType.isEmpty()) {
			u_fprintf(ufout, "Property Found: %.*S in class %.*S in namespace %.*S on line %d. Did not have @return in PHPDoc comment\n", 
				propertyName.length(), propertyName.getBuffer(), className.length(), className.getBuffer(), 
				namespaceName.length(), namespaceName.getBuffer(),
				lineNumber);
		}
		else {
			u_fprintf(ufout, "Property Found: %.*S in class %.*S in namespace %.*S on line %d and is of type %.*S\n", 
				propertyName.length(), propertyName.getBuffer(), className.length(), className.getBuffer(), 
				namespaceName.length(), namespaceName.getBuffer(),
				lineNumber,
				propertyType.length(), propertyType.getBuffer());
		}
		u_fclose(ufout);	
	}

	/**
	 * Override this method to perform any logic when the method body has ended (a closing brace '}' was encountered).
	 *
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that was found
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& methodName the name of the method that was found
	 * @param startingPos the character position (of the closing brace '{' original source code)
	 *        In case of an abstract method, startingPos is the position of the semicolon ';'
	 * @param endingPos the character position (of the closing brace '}' original source code)
	 *        In case of an abstract method, endingPos is the position of the semicolon ';'
	 */
	virtual void MethodScope(const UnicodeString& namespaceName, const UnicodeString& className, 
		const UnicodeString& methodName, int startingPos, int endingPos) { 
	}

	/**
	 * This method gets called when a trait use statement has been found
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that uses the trait
	 * @param className the fully qualified name of the class that uses the trait
	 * @param traitName the fully qualified name of the trait to be used 
	 */
	virtual void TraitUseFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& traitName) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Trait Usage Found in class %.*S in namespace %.*S. Trait Name %.*S \n", 
			className.length(), className.getBuffer(), 
			namespaceName.length(), namespaceName.getBuffer(),
			traitName.length(), traitName.getBuffer());
		u_fclose(ufout);
	}
	
	/**
	 * Override this method to perform custom logic when a trait method has been aliased
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that uses the trait
	 * @param traitUsedClassName the class name of the trait to be aliased
	 * @param traitMethodName the fully qualified name of the trait method that is to be aliased (hidden)
	 *        this may be empty if the trait adaptation only changes the visibility and
	 *        does not need to resolve a trait conflict
	 * @param alias the name of the new alias. alias may be empty when ONLY the visibility is changed.
	 * @param visibility the visbility of the trait method. may be PUBLIC if the visibility was not changed.
	 */
	virtual void TraitAliasFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& traitUsedClassName,
		const UnicodeString& traitMethodName, 
		const UnicodeString& alias, pelet::TokenClass::TokenIds visibility) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		if (!alias.isEmpty()) {
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
			u_fprintf(ufout, "Trait Alias Found in class %.*S in namespace %.*S. Trait Class %.*S Trait Method %.*S Trait Alias %.*S New Visibility %s \n", 
				className.length(), className.getBuffer(), 
				namespaceName.length(), namespaceName.getBuffer(),
				traitUsedClassName.length(), traitUsedClassName.getBuffer(),
				traitMethodName.length(), traitMethodName.getBuffer(),
				alias.length(), alias.getBuffer(),
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
			u_fprintf(ufout, "Trait Change in visbility Found in class %.*S in namespace %.*S. Trait Class %.*S Trait Method %.*S New Visibility %s\n", 
				className.length(), className.getBuffer(), 
				namespaceName.length(), namespaceName.getBuffer(),
				traitUsedClassName.length(), traitUsedClassName.getBuffer(),
				traitMethodName.length(), traitMethodName.getBuffer(),
				visibilityStr
			);
		}
		u_fclose(ufout);
	}

	/**
	 * This method gets called when a trait method conflict has been resolved
	 * (an insteadof operation) 
	 *
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that was found
	 * @param className name of the class that uses the trait
	 * @param traitUsedClassName the class name of the trait to be used
	 * @param traitMethodName name of the trait method that is to being resolved
	 * @param insteadOfList the list of fully qualified trait names that are listed after the insteadof operator
	 */
	virtual void TraitInsteadOfFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& traitUsedClassName,
		const UnicodeString& traitMethodName, const std::vector<UnicodeString>& insteadOfList) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Trait InsteadOf Found in class %.*S in namespace %.*S. Trait Class %.*S Trait Method %.*S \n", 
			className.length(), className.getBuffer(), 
			namespaceName.length(), namespaceName.getBuffer(),
			traitUsedClassName.length(), traitUsedClassName.getBuffer(),
			traitMethodName.length(), traitMethodName.getBuffer()
		);
		u_fprintf(ufout, "Instead of");
		for (size_t i = 0; i < insteadOfList.size(); ++i) {
			u_fprintf(ufout, " %.*S", insteadOfList[i].length(), insteadOfList[i].getBuffer());
		}
		u_fclose(ufout);
	}
	
	/**
	 * This method gets called when a function is found.
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the function that was found
	 * @param const UnicodeString& functionName the name of the method that was found
	 * @param const UnicodeString& signature string containing method parameters.  String is normalized, meaning that
	 *        any extra white space is removed, and every token is separated by one space only. ie. for the code
	 *        "public function doWork( $item1,   $item2  ) " the signature will be  "($item1, $item2)"
	 * @param const UnicodeString& returnType the function's return type, as dictated by the PHPDoc comment
	 * @param const UnicodeString& comment PHPDoc attached to the class
	 * @param lineNumber the line number (1-based) that the function was found in
	 */
	virtual void FunctionFound(const UnicodeString& namespaceName, const UnicodeString& functionName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, const int lineNumber) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		if (returnType.isEmpty()) {
			u_fprintf(ufout, "Function Found: %.*S in namespace %.*S on line %d. Function Did not have @return in PHPDoc comment\n", 
				functionName.length(), functionName.getBuffer(), 
				namespaceName.length(), namespaceName.getBuffer(),
				lineNumber);
		}
		else {
			u_fprintf(ufout, "Function Found: %.*S in namespace %.*S on line %d and it returns %.*S\n", 
				functionName.length(), functionName.getBuffer(), 
				namespaceName.length(), namespaceName.getBuffer(),
				lineNumber,
				returnType.length(), returnType.getBuffer());
		}
		u_fclose(ufout);		
	}

	/**
	 * Override this method to perform any logic when the function body has ended (a closing brace '}' was encountered).
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the function that was found
	 * @param const UnicodeString& functionName the name of the method that was found
	 * @param startingPos the character position (of the closing brace '{' original source code)
	 * @param endingPos the character position (of the closing brace '}' original source code)
	 */
	virtual void FunctionScope(const UnicodeString& namespaceName, const UnicodeString& functionName, int startingPos, int endingPos) { 
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
	 * @param const UnicodeString& namespace the fully qualified namespace of the containing class / function.
	 * @param const UnicodeString& className class where the variable was found. may be empty is variable is scoped 
	 *        inside a function or is global.
	 * @param const UnicodeString& methodName function/method name where the variable was found. may be empty if 
	 *        variable is globally scoped.
	 * @param const VariableClass& variable the name of the variable that was found, along with any array keys that were used
	 *       in the left hand of the assignment. 
	 * @param const ExpressionClass& expression the expression assigned to the variable
	 * @param const UnicodeString& comment PHPDoc attached to the variable
	 * 
	 * @see pelet::VariableClass
	 */
	virtual void VariableFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
		const pelet::VariableClass& variable, const pelet::ExpressionClass& expression, const UnicodeString& comment) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		UnicodeString scope;
		if (className.isEmpty() && methodName.isEmpty()) {
			scope = UNICODE_STRING_SIMPLE("<global>");
		}
		else if (className.isEmpty() && !methodName.isEmpty()) {
			scope = methodName;
		}
		else {
			scope = className + UNICODE_STRING_SIMPLE("::") + methodName;
		}
		UnicodeString type;
		if (pelet::ExpressionClass::ARRAY == expression.ExpressionType) {
			type = UNICODE_STRING_SIMPLE("Variable is an array");
		}
		else if (pelet::ExpressionClass::SCALAR == expression.ExpressionType) {
			type = UNICODE_STRING_SIMPLE("Variable is a primitive");
		}
		else if (pelet::ExpressionClass::VARIABLE == expression.ExpressionType) {
			type = UNICODE_STRING_SIMPLE("Variable is a variable expression. ");
			type += UNICODE_STRING_SIMPLE("Chain list is: ");
			for (size_t i = 0; i < expression.ChainList.size(); ++i) {
				type += expression.ChainList[i];
				if (i < (expression.ChainList.size() - 1)) {
					type += UNICODE_STRING_SIMPLE(", ");
				}
			}
			
		}
		else if (pelet::ExpressionClass::UNKNOWN == expression.ExpressionType) {
			type = UNICODE_STRING_SIMPLE("Variable is of unknown type.");
		}
		if (!variable.PhpDocType.isEmpty()) {
			type += UNICODE_STRING_SIMPLE("Variable is decorated with a PHPDoc comment: ");
			type += variable.PhpDocType;
		}
		u_fprintf(ufout, "Variable Found: %.*S in scope %S. %S\n", 
				variable.ChainList[0].length(), variable.ChainList[0].getBuffer(),
				scope.getTerminatedBuffer(),
				type.getTerminatedBuffer());
	}
};

int main(int argc, char** argv) {
	if (argc < 2) {
		printf("This program requires 1 argument: The path of the PHP file to parse.\n");
		return -1;
	}
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
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Parse error: %S on line %d\n", results.Error.getTerminatedBuffer(), results.LineNumber);
		u_fclose(ufout);
	}
	
	// this is only used so that this program can be run through valgrind (memory leak
	// detector). In real-world usage, this include is not needed.
	u_cleanup();
	return 0;
}