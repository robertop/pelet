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
 * @copyright  2009-2011 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 * @author     $Author: robertop2004@gmail.com $
 * @date       $Date: 2011-07-04 12:25:36 -0700 (Mon, 04 Jul 2011) $
 * @version    $Rev: 568 $ 
 */
#ifndef __symboltable__
#define __symboltable__

#include <language/ParserClass.h>
#include <search/ResourceFinderClass.h>
#include <unicode/unistr.h>
#include <map>
#include <vector>

namespace mvceditor {

/**
 * The SymbolClass represents one symbol.  A symbol is represents a variable in the code, along with the type
 * information associated with that variable.
 * 
 */
class SymbolClass {

public:
	
	/**
	 * All the types that are currently being captured.
	 */
	enum Types {
		PRIMITIVE, //strings, ints, doubles, booleans are all lumped in, as PHP automatically casts 
		ARRAY,
		OBJECT,
		FUNCTION,
		CLASS,
		METHOD, // 5
		PROPERTY		
	};
	
	/**
	 * The symbol's name
	 * @var UnicodeString
	 */
	UnicodeString Lexeme;
	
	/**
	 * When a symbol is an object, TypeLexeme is the class name. when TypeLexeme is a function/method, TypeLexeme is the 
	 * function/method's return type.
	 * Note that this may be the empty string.  If it is, then its type will be stored in the Signature and will be
	 * retrieved during the second pass.
	 * 
	 * @var UnicodeString
	 */
	UnicodeString	TypeLexeme;

	/**
	 * When symbols is a function/method,this is the signature (list of parameters)
	 */
	UnicodeString Signature;
	
	/**
	 * PHPDoc comment for this symbol
	 */
	UnicodeString Comment;
	
	/**
	 * The symbol type
	 */
	Types Type;
};

/**
 * Case-sensitive string comparator for use as STL Predicate
 */
class UnicodeStringComparatorClass {
public:
	bool operator()(const UnicodeString& str1, const UnicodeString& str2) const {
		return (str1.compare(str2) < (int8_t)0) ? true : false;
	}
};

/**
 * A Symbol table is the data structure that will hold all of the variables in the code along with their type information.
 * Symbols will be generated per each file according to PHP lanuguage semantics: 
 *  1. There are proper scopes (local variables)
 *  2. no distinction is made between numbers, bools, and strings.  They are all labeled as primitives because
 *     PHP casts transparently.
 * 
 */
class SymbolTableClass : public FunctionObserverClass, public ClassMemberObserverClass, public ClassObserverClass, 
	public VariableObserverClass {

public:
	SymbolTableClass();
	
	/**
	 * Builds symbols for the given source code.  
	 * 
	 * @param UnicodeString code the code to analyze
	 */
	void CreateSymbols(const UnicodeString& code);
	
	/**
	 * Calculates the type information for the variable at the given position. For example, if sourceCode represented this string:
	 * 
	 *   <code>
	 *     UnicodeString sourceCode = UNICODE_STRING_SIMPLE("
	 *       class UserClass {
	 *         private $name;
	 * 
	 *         function getName() {
	 *           return $this->
	 *     ");
	 *   </code>
	 *  then the following C++ code can be used to find a variable's type
	 * 
	 *   <code>
	 *     ResourceFinderClass resourceFinder();
	 *     SymbolTableClass symbolTable();
	 *     // line 79 = line inside getName() method
	 *     if (symbolTable.CreateSymbols(sourceCode)) {
	 *       UnicodeString variableType, objectMember, variablePhpDocComment;
	 *       SymbolClass::Types type;
	 *       if (symbolTable.Lookup(79, resourceFinder, type, variableType, objectMember, variablePhpDocComment)) {
	 *       	puts(variableName); // prints out UserClass
	 *       }
	 *     }
	 *   </code>
	 * 
	 * Type information can be calculated for variables, as well as function calls, method calls, and property getters.
	 * 
	 * @param int the position the symbol is located in; position is index into code string given to the CreateSymbols() method.
	 * @param ResourceFinderClass used to resolve return types from functions; this will help in identifying the types for 
	 *        variables that are created from function calls.
	 * @param SymbolClass::Types& type the symbol's type
	 * @param UnicodeString& typeLexeme the symbol's class name, if it is an object
	 * @param UnicodeString& objectMember the symbol's member invocation, if it is an object
	 * @return bool true if there is a symbol at pos.
	 */
	bool Lookup(int pos, const ResourceFinderClass& resourceFinder, SymbolClass::Types& type, UnicodeString& typeLexeme, UnicodeString& objectMember, 
		UnicodeString& comment);
	
	/**
	 * Returns the variables that are inside the scope at the given position i.e. what class/function is at position.
	 * 
	 * @param int position is index into code string given to the CreateSymbols() method.
	 * @return std::vector<UnicodeString> the variables in scope.
	 */
	std::vector<UnicodeString> GetVariablesInScope(int pos);
	
	/**
	 * outout to stdout
	 */
	void Print();
		
	virtual void ClassFound(const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment);

	virtual void DefineDeclarationFound(const UnicodeString& variableName, const UnicodeString& variableValue, 
			const UnicodeString& comment);
	
	virtual void MethodFound(const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment);
	
	virtual void PropertyFound(const UnicodeString& className, const UnicodeString& propertyName, 
		const UnicodeString& propertyType, const UnicodeString& comment, bool isConst);
	
	virtual void FunctionFound(const UnicodeString& functionName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment);
		
	virtual void VariableCreatedWithNewFound(const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& variableName, const UnicodeString& returnType, const UnicodeString& comment);
		
	virtual void VariableCreatedWithFunctionFound(const UnicodeString& className, const UnicodeString& methodName,
		const UnicodeString& variableName, const UnicodeString& functionCalledName, const UnicodeString& comment);	

	virtual void VariableCreatedWithThisMethodFound(const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& variableName, const UnicodeString& methodCalledName, const UnicodeString& comment);	
		
	virtual void VariableCreatedWithObjectMethodFound(const UnicodeString& className, const UnicodeString& methodName,
		const UnicodeString& variableName,  const UnicodeString& objectName, const UnicodeString& objectMethod, 
		const UnicodeString& comment);
		
	virtual void VariableCreatedWithAnotherVariableFound(const UnicodeString& className, 
		const UnicodeString& methodName, const UnicodeString& variableName, const UnicodeString& sourceVariable, 
		const UnicodeString& comment);
		
	virtual void VariableConstantFound(const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& variableName, const UnicodeString& constant, const UnicodeString& comment);

private:

	/**
	 * The parser.
	 * 
	 * @var ParserClass
	 */
	ParserClass Parser;
	
	/**
	 * Holds all symbols for the currently parsed piece of code. Each vector will represent its own scope.
	 * The string will be the scope name.  The scope name is a combination of the class, method name. 
	 * 
	 * @var std::map<UnicodeString, vector<SymbolClass>>
	 */
	std::map<UnicodeString, std::vector<SymbolClass>, UnicodeStringComparatorClass> Symbols;
	
	/**
	 * Last source code given. Note that this could cause performance problems.
	 * 
	 * @var UnicodeString
	 */
	UnicodeString SourceCode;
	
	/**
	 * Get the vector of symbols for the given scope.
	 * 
	 * @return std::vector<SymbolClass>
	 */
	std::vector<SymbolClass>& GetScope(const UnicodeString& className, const UnicodeString& functionName);

	/**
	 * because a class/method may be used before is it declared, we need to go back and fill in
	 * the types after they have been parsed.
	 * 
	 * @param ResourceFinderClass& resourceFinder cache of all of a project's resources. ResourceFinderClass used to resolve return 
	 *        types from functions; this will help in identifying the types for 
	 *        variables that are created from function calls.
	 * @param SymbolClass& symbol the symbol to resolve
	 */
	void FillInTypeLexeme(const ResourceFinderClass& resourceFinder, SymbolClass& symbol);
	
	/**
	 * Get the last 3 tokens at the given position.
	 */
	void GetTokensAtPos(int pos, int& token, int& lastToken, int& nextToLastToken, UnicodeString& lexeme, UnicodeString& lastLexeme, 
		UnicodeString& nextToLastLexeme, UnicodeString& className, UnicodeString& functionName);
		
	/**
	 * Add the arguments from the given signature into the given scope.  For example for the signature
	 * "funct($a, $b)" a and b variables will be added to the scope for "funct"
	 * 
	 * @param UnicodeString signature method signature
	 * @param vector<SymbolClass>& scope the scope list
	 */
	void CreateScopeArgumentsFromSignature(const UnicodeString& signature, std::vector<SymbolClass>& scope);
	
	/**
	 * 	Add the super global PHP predefined variables into the given scope.  For example  $_GET, $_POST, ....
	 * 
	 *  @param vector<SymbolClass>& scope the scope list
	 */
	void CreatePredefinedVariables(std::vector<SymbolClass>& scope);
};

}

#endif // __symboltable__