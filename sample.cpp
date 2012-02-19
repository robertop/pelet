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
	public pelet::FunctionObserverClass  {   // for functions

public:

	/**
	 * This method gets called when a class is found.
	 * 
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& signature the list of classes that the class inherits / implements in code format
	 *        for example "extends UserClass implements Runnable"
	 * @param const UnicodeString& comment PHPDoc attached to the class
	 */
	virtual void ClassFound(const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Class Found: %.*S\n", className.length(), className.getBuffer());
		u_fclose(ufout);		
	}
	
	/**
	 * This method gets called when a define declaration is found.
	 * 
	 * @param const UnicodeString& variableName the name of the defined variable
	 * @param const UnicodeString& variableValue the variable value
	 * @param const UnicodeString& comment PHPDoc attached to the define
	 */
	virtual void DefineDeclarationFound(const UnicodeString& variableName, const UnicodeString& variableValue, 
		const UnicodeString& comment) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		u_fprintf(ufout, "Define Found: %.*S\n", variableName.length(), variableName.getBuffer());
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
	 */
	virtual void MethodFound(const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, 
		pelet::TokenClass::TokenIds visibility, bool isStatic) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		if (returnType.isEmpty()) {
			u_fprintf(ufout, "Method Found: %.*S in class %.*S. Method did not have @return in PHPDoc comment\n", 
				methodName.length(), methodName.getBuffer(), className.length(), className.getBuffer());
		}
		else {
			u_fprintf(ufout, "Method Found: %.*S in class %.*S and returns %.*S\n", 
				methodName.length(), methodName.getBuffer(), className.length(), className.getBuffer(), 
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
	 * @param isStatic true if the method is static
	 */
	virtual void PropertyFound(const UnicodeString& className, const UnicodeString& propertyName, 
		const UnicodeString& propertyType, const UnicodeString& comment, 
		pelet::TokenClass::TokenIds visibility, bool isConst, bool isStatic) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		if (propertyType.isEmpty()) {
			u_fprintf(ufout, "Property Found: %.*S in class %.*S. Did not have @return in PHPDoc comment\n", 
				propertyName.length(), propertyName.getBuffer(), className.length(), className.getBuffer());
		}
		else {
			u_fprintf(ufout, "Property Found: %.*S in class %.*S and is of type %.*S\n", 
				propertyName.length(), propertyName.getBuffer(), className.length(), className.getBuffer(), 
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
	 * This method gets called when a function is found.
	 * 
	 * @param const UnicodeString& functionName the name of the method that was found
	 * @param const UnicodeString& signature string containing method parameters.  String is normalized, meaning that
	 *        any extra white space is removed, and every token is separated by one space only. ie. for the code
	 *        "public function doWork( $item1,   $item2  ) " the signature will be  "($item1, $item2)"
	 * @param const UnicodeString& returnType the function's return type, as dictated by the PHPDoc comment
	 * @param const UnicodeString& comment PHPDoc attached to the class
	 */
	virtual void FunctionFound(const UnicodeString& functionName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment) {
		UFILE* ufout = u_finit(stdout, NULL, NULL);
		if (returnType.isEmpty()) {
			u_fprintf(ufout, "Function Found: %.*S. Function Did not have @return in PHPDoc comment\n", 
				functionName.length(), functionName.getBuffer());
		}
		else {
			u_fprintf(ufout, "Function Found: %.*S and it returns %.*S\n", 
				functionName.length(), functionName.getBuffer(),
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
	
	
};

int main(int argc, char** argv) {
	if (argc < 2) {
		printf("This program requires 1 argument: The path of the PHP file to parse.\n");
		return -1;
	}
	SampleObserver observer;
	pelet::ParserClass parser;
	parser.SetClassObserver(&observer);
	parser.SetClassMemberObserver(&observer);
	parser.SetFunctionObserver(&observer);
	
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