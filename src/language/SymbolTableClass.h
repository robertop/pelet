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
 */
#ifndef __symboltable__
#define __symboltable__

#include <language/ParserClass.h>
#include <language/ParserObserverClass.h>
#include <search/ResourceFinderClass.h>
#include <unicode/unistr.h>
#include <map>
#include <vector>

namespace mvceditor {

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
	 * Builds symbols for the given source code. After symbols are created, lookups can be performed. 
	 * 
	 * @param UnicodeString code the code to analyze
	 */
	void CreateSymbols(const UnicodeString& code);
	
	/**
	 * Returns the variables that are inside the scope at the given position i.e. what class/function is at position.
	 * 
	 * @param int position is index into code string given to the CreateSymbols() method.
	 * @return std::vector<UnicodeString> the variables in scope. The variables will contain the siguil ('$')
	 */
	std::vector<UnicodeString> GetVariablesInScope(int pos) const;
	
	/**
	 * outout to stdout
	 */
	void Print() const;
		
	virtual void ClassFound(const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment);

	virtual void DefineDeclarationFound(const UnicodeString& variableName, const UnicodeString& variableValue, 
			const UnicodeString& comment);
	
	virtual void MethodFound(const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment,
		TokenClass::TokenIds visibility, bool isStatic);

	void MethodEnd(const UnicodeString& className, const UnicodeString& methodName, int pos);
	
	virtual void PropertyFound(const UnicodeString& className, const UnicodeString& propertyName, 
		const UnicodeString& propertyType, const UnicodeString& comment, 
		TokenClass::TokenIds visibility, bool isConst, bool isStatic);
	
	virtual void FunctionFound(const UnicodeString& functionName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment);

	void FunctionEnd(const UnicodeString& functionName, int pos);
		
	virtual void VariableFound(const UnicodeString& className, const UnicodeString& methodName, 
		const SymbolClass& symbol, const UnicodeString& comment);
private:

	/**
	 * Get the vector of variables for the given scope.
	 * 
	 * @return std::vector<SymbolClass>
	 */
	std::vector<SymbolClass>& GetScope(const UnicodeString& className, const UnicodeString& functionName);

	/**
	 * Stores the given scope and relates it to the given position. 
	 */
	void PushStartPos(const UnicodeString& className, const UnicodeString& functionName, int startPos);
	
	/**
	 * 	Add the super global PHP predefined variables into the given scope.  For example  $_GET, $_POST, ....
	 * 
	 *  @param vector<SymbolClass>& scope the scope list
	 */
	void CreatePredefinedVariables(std::vector<SymbolClass>& scope);

	/**
	 * @return the "scope string" used throughout this class, in the Variables map and the ScopePositions map
	 */
	UnicodeString ScopeString(const UnicodeString& className, const UnicodeString& functionName) const;

	/**
	 * The parser.
	 * 
	 * @var ParserClass
	 */
	ParserClass Parser;
	
	/**
	 * Holds all variables for the currently parsed piece of code. Each vector will represent its own scope.
	 * The key will be the scope name.  The scope name is a combination of the class, method name. 
	 * The scope string is that which is returned by ScopeString() method.
	 * The value is the parsed Symbol.
	 * @var std::map<UnicodeString, vector<SymbolClass>>
	 */
	std::map<UnicodeString, std::vector<SymbolClass>, UnicodeStringComparatorClass> Variables;

	/**
	 * This will store the character positions where the scope started and ended.
	 * The scope string is that which is returned by ScopeString() method.
	 * The global scope will always start at 0
	 * For purposes of this class; it is enough to know that the ranges will never overlap.
	 * For exact meanings of where the the class, method, and function start positions, see the
	 * ParserClass::GetCharacterPosition
	 * @see ParserClass::GetCharacterPosition
	 */
	std::map<UnicodeString, std::pair<int, int>, UnicodeStringComparatorClass> ScopePositions;
};

}

#endif // __symboltable__