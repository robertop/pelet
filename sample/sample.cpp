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
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& signature the list of classes that the class inherits / implements in code format
	 *        for example "extends UserClass implements Runnable"
	 * @param const UnicodeString& comment PHPDoc attached to the class
	 * @param lineNumber the line number (1-based) that the class was found in
	 */
	virtual void ClassFound(const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment, const int lineNumber) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Class Found: %.*S on line %d\n", className.length(), className.getBuffer(), lineNumber);
		u_fclose(ufout);		
	}
	
	/**
	 * This method gets called when a define declaration is found.
	 * 
	 * @param const UnicodeString& variableName the name of the defined variable
	 * @param const UnicodeString& variableValue the variable value
	 * @param const UnicodeString& comment PHPDoc attached to the define
	 * @param lineNumber the line number (1-based) that the define was found in
	 */
	virtual void DefineDeclarationFound(const UnicodeString& variableName, const UnicodeString& variableValue, 
		const UnicodeString& comment, const int lineNumber) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Define Found: %.*S on line %d\n", variableName.length(), variableName.getBuffer(), lineNumber);
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
	
		
	/* This method gets called when a class method is found.
	 * 
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
	virtual void MethodFound(const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, 
		pelet::TokenClass::TokenIds visibility, bool isStatic, const int lineNumber) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		if (returnType.isEmpty()) {
			u_fprintf(ufout, "Method Found: %.*S in class %.*S on line %d. Method did not have @return in PHPDoc comment\n", 
				methodName.length(), methodName.getBuffer(), className.length(), className.getBuffer(), lineNumber);
		}
		else {
			u_fprintf(ufout, "Method Found: %.*S in class %.*S on line %d and returns %.*S\n", 
				methodName.length(), methodName.getBuffer(), className.length(), className.getBuffer(), lineNumber,
				returnType.length(), returnType.getBuffer());
		}
		u_fclose(ufout);
	}
	
	/**
	 * Override this method to perform any custom logic when a class property is found.
	 * 
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& propertyName the name of the property that was found
	 * @param const UnicodeString& propertyType the property's type, as dictated by the PHPDoc comment
	 * @param const UnicodeString& comment PHPDoc attached to the property
	 * @param visibility the visibility token attached  to the property: PUBLIC, PROTECTED, or PRIVATE
	 * @param bool isConst true if property is a constant
	 * @param isStatic true if the property is static
	 * @param lineNumber the line number (1-based) that the property was found in
	 */
	virtual void PropertyFound(const UnicodeString& className, const UnicodeString& propertyName, 
		const UnicodeString& propertyType, const UnicodeString& comment, 
		pelet::TokenClass::TokenIds visibility, bool isConst, bool isStatic, const int lineNumber) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		if (propertyType.isEmpty()) {
			u_fprintf(ufout, "Property Found: %.*S in class %.*S on line %d. Did not have @return in PHPDoc comment\n", 
				propertyName.length(), propertyName.getBuffer(), className.length(), className.getBuffer(), lineNumber);
		}
		else {
			u_fprintf(ufout, "Property Found: %.*S in class %.*S on line %d and is of type %.*S\n", 
				propertyName.length(), propertyName.getBuffer(), className.length(), className.getBuffer(), lineNumber,
				propertyType.length(), propertyType.getBuffer());
		}
		u_fclose(ufout);	
	}

	/**
	 * This method gets called when the function has ended (a closing brace '}' was encountered).
	 *
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& methodName the name of the method that was found
	 * @param pos the character position (of the closing brace '}' original source code)
	 */
	virtual void MethodEnd(const UnicodeString& className, const UnicodeString& methodName, int pos) {
		
	}

	/**
	 * This method gets called when a trait use statement has been found
	 *
	 * @param className the fully qualified name of the class that uses the trait
	 * @param traitName the fully qualified name of the trait to be used 
	 */
	virtual void TraitUseFound(const UnicodeString& className, const UnicodeString& traitName) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Trait Usage Found in class %.*S. Trait Name %.*S \n", 
			className.length(), className.getBuffer(), traitName.length(), traitName.getBuffer());
		u_fclose(ufout);
	}
	
	/**
	 * Override this method to perform custom logic when a trait method has been aliased
	 * 
	 * @param traitUsedClassName the class name of the trait to be aliased
	 * @param traitMethodName the fully qualified name of the trait method that is to be aliased (hidden)
	 *        this may be empty if the trait adaptation only changes the visibility and
	 *        does not need to resolve a trait conflict
	 * @param alias the name of the new alias. alias may be empty when ONLY the visibility is changed.
	 * @param visibility the visbility of the trait method. may be PUBLIC if the visibility was not changed.
	 */
	virtual void TraitAliasFound(const UnicodeString& className, const UnicodeString& traitUsedClassName,
		const UnicodeString& traitMethodName, 
		const UnicodeString& alias, pelet::TokenClass::TokenIds visibility) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		if (!alias.isEmpty()) {
			char* visibilityStr;
			if (pelet::TokenClass::PRIVATE == visibility) {
				visibilityStr = "private";
			}
			else if (pelet::TokenClass::PROTECTED == visibility) {
				visibilityStr = "protected";
			}
			else {
				visibilityStr = "public";
			}
			u_fprintf(ufout, "Trait Alias Found in class %.*S. Trait Class %.*S Trait Method %.*S Trait Alias %.*S New Visibility %s \n", 
				className.length(), className.getBuffer(), 
				traitUsedClassName.length(), traitUsedClassName.getBuffer(),
				traitMethodName.length(), traitMethodName.getBuffer(),
				alias.length(), alias.getBuffer(),
				visibilityStr);
		}
		else {
			char* visibilityStr;
			if (pelet::TokenClass::PRIVATE == visibility) {
				visibilityStr = "private";
			}
			else if (pelet::TokenClass::PROTECTED == visibility) {
				visibilityStr = "protected";
			}
			else {
				visibilityStr = "public";
			}
			u_fprintf(ufout, "Trait Change in visbility Found in class %.*S. Trait Class %.*S Trait Method %.*S New Visibility %s\n", 
				className.length(), className.getBuffer(), 
				traitUsedClassName.length(), traitUsedClassName.getBuffer(),
				traitMethodName.length(), traitMethodName.getBuffer(),
				visibilityStr
			);
		}
		u_fclose(ufout);
	}
	
	/**
	 * This method gets called when a function is found.
	 * 
	 * @param const UnicodeString& functionName the name of the method that was found
	 * @param const UnicodeString& signature string containing method parameters.  String is normalized, meaning that
	 *        any extra white space is removed, and every token is separated by one space only. ie. for the code
	 *        "public function doWork( $item1,   $item2  ) " the signature will be  "($item1, $item2)"
	 * @param const UnicodeString& returnType the function's return type, as dictated by the PHPDoc comment
	 * @param const UnicodeString& comment PHPDoc attached to the class
	 * @param lineNumber the line number (1-based) that the function was found in
	 */
	virtual void FunctionFound(const UnicodeString& functionName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, const int lineNumber) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		if (returnType.isEmpty()) {
			u_fprintf(ufout, "Function Found: %.*S on line %d. Function Did not have @return in PHPDoc comment\n", 
				functionName.length(), functionName.getBuffer(), lineNumber);
		}
		else {
			u_fprintf(ufout, "Function Found: %.*S on line %d and it returns %.*S\n", 
				functionName.length(), functionName.getBuffer(), lineNumber,
				returnType.length(), returnType.getBuffer());
		}
		u_fclose(ufout);		
	}

	/**
	 * This method gets called when the function has ended (a closing brace '}' was encountered).
	 * @param const UnicodeString& functionName the name of the method that was found
	 * @param pos the character position (of the closing brace '}' original source code)
	 */
	virtual void FunctionEnd(const UnicodeString& functionName, int pos) {
		
	}
	
	/**
	 * This method gets called when a variable assignment is found. Note that the same 
	 * variable may be assigned different values at different times within the same function.
	 * The symbol will be constructed in the following way:
	 *
	 * Example assignment:  $name = $this->getName()->toString();
	 *
	 * Lexeme: lexeme will contain the variable's name (ie $name)
	 * ChainList: This is a list of  properties / methods
	 *            that were successively invoked.
	 *            In this example, the expression chain list will have 3 items in
	 *           the chain list "$this" "->getName()" and "->toString()".
	 *
	 * 
	 * @param const UnicodeString& className class where the variable was found. may be empty is variable is scoped 
	 *        inside a function or is global.
	 * @param const UnicodeString& methodName function/method name where the variable was found. may be empty if 
	 *        variable is globally scoped.
	 * @param const SymbolClass& symbol the name  & type of the variable that was found
	 * @param const UnicodeString& comment PHPDoc attached to the variable
	 */
	virtual void VariableFound(const UnicodeString& className, const UnicodeString& methodName, 
			const pelet::SymbolClass& symbol, const UnicodeString& comment) {
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
		if (pelet::SymbolClass::ARRAY == symbol.Type) {
			type = UNICODE_STRING_SIMPLE("Variable is an array");
		}
		else if (pelet::SymbolClass::PRIMITIVE == symbol.Type) {
			type = UNICODE_STRING_SIMPLE("Variable is a primitive");
		}
		else if (pelet::SymbolClass::OBJECT == symbol.Type) {
			type = UNICODE_STRING_SIMPLE("Variable is the result of an object operation. ");
			type += UNICODE_STRING_SIMPLE("Chain list is: ");
			for (size_t i = 0; i < symbol.ChainList.size(); ++i) {
				type += symbol.ChainList[i];
				if (i < (symbol.ChainList.size() - 1)) {
					type += UNICODE_STRING_SIMPLE(", ");
				}
			}
			
		}
		else if (pelet::SymbolClass::UNKNOWN == symbol.Type) {
			type = UNICODE_STRING_SIMPLE("Variable is dynamic variable");
		}
		if (!symbol.PhpDocType.isEmpty()) {
			type += UNICODE_STRING_SIMPLE("Variable is decorated with a PHPDoc comment: ");
			type += symbol.PhpDocType;
		}
		u_fprintf(ufout, "Variable Found: %.*S in scope %S. %S\n", 
				symbol.Lexeme.length(), symbol.Lexeme.getBuffer(),
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