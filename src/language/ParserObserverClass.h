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
#ifndef __PARSEROBSERVERCLASS_H__
#define __PARSEROBSERVERCLASS_H__

#include <language/TokenClass.h>
#include <unicode/unistr.h>
#include <stack>
#include <vector>

namespace mvceditor {

/**
 * Interface to inherit from when needing to be notified when a class structure is encountered.
 * An object of this type will be passed to the ParserClass; the parser will call the appropriate
 * methods when a class or define statement has been found in the source code.
 * The observer will get notified as the buffer is being parsed.
 */
class ClassObserverClass {

public:
	/**
	 * Override this method to perform any custom logic when a class is found.
	 * 
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& signature the list of classes that the class inherits / implements in code format
	 *        for example "extends UserClass implements Runnable"
	 * @param const UnicodeString& comment PHPDoc attached to the class
	 */
	virtual void ClassFound(const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment) = 0;
	
	/**
	 * Override this method to perform any custom logic when a define declaration is found.
	 * 
	 * @param const UnicodeString& variableName the name of the defined variable
	 * @param const UnicodeString& variableValue the variable value
	 * @param const UnicodeString& comment PHPDoc attached to the define
	 */
	virtual void DefineDeclarationFound(const UnicodeString& variableName, const UnicodeString& variableValue, 
		const UnicodeString& comment) = 0;
	
};

/**
 * Interface to inherit from when needing to be notified when a class member (either variable or method)
 * is encountered. An object of this type will be passed to the ParserClass; the parser will call the appropriate
 * methods when a class property or method has been parsed.
 * The observer will get notified as the buffer is being parsed.
 */
class ClassMemberObserverClass {

public:

	/**
	 * Override this method to perform any custom logic when a class method is found.
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
		TokenClass::TokenIds visibility, bool isStatic) = 0;
	
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
		TokenClass::TokenIds visibility, bool isConst, bool isStatic) = 0;
};

/**
 * Interface to inherit from when needing to be notified when a stand-alone function is encountered. 
 * An object of this type will be passed to the ParserClass; the parser will call the appropriate
 * method when a funciton been parsed.
 * The observer will get notified as the buffer is being parsed.
 */
class FunctionObserverClass {

public:
	/**
	 * Override this method to perform any custom logic when a function is found.
	 * 
	 * @param const UnicodeString& functionName the name of the method that was found
	 * @param const UnicodeString& signature string containing method parameters.  String is normalized, meaning that
	 *        any extra white space is removed, and every token is separated by one space only. ie. for the code
	 *        "public function doWork( $item1,   $item2  ) " the signature will be  "($item1, $item2)"
	 * @param const UnicodeString& returnType the function's return type, as dictated by the PHPDoc comment
	 * @param const UnicodeString& comment PHPDoc attached to the class
	 */
	virtual void FunctionFound(const UnicodeString& functionName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment) = 0;
	
};

/**
 * Interface to inherit from when needing to be notified when a variable creation is encountered. An object of 
 * this type will be passed to the ParserClass; the parser will call the appropriate
 * method when a variable assignment has been parsed.
 * The observer will get notified as the buffer is being parsed.
 */
class VariableObserverClass {

public:

	/**
	 * Override this method to perform any custom logic when a 'new' variable declaration is found.
	 * 
	 * @param const UnicodeString& className class where the variable was found. may be empty is variable is scoped 
	 *        inside a function or is global.
	 * @param const UnicodeString& methodName function/method name where the variable was found. may be empty if 
	 *        variable is globally scoped.
	 * @param const SymbolClass& symbol the name  & type of the variable that was found
	 * @param const UnicodeString& comment PHPDoc attached to the class
	 */
	virtual void VariableFound(const UnicodeString& className, const UnicodeString& methodName, 
		const SymbolClass& symbol, const UnicodeString& comment) = 0;
};


/**
 * This is the low-level building block that the parser creates as it is traversing the source
 * code.  The parser's job will be to convert these low-level building blocks into 
 * higher-level class, method, function, and variable declarations.
 *
 * using pointers here because Bison will create a union with this type as one of the values;
 * and unions values have to be Plain Old Data types (which UnicodeString is not).
 * Also, this cannot have a non-trival constructor; Init() should be called right
 * after object construction.
 */
class SemanticValueClass {

public:

	/**
	 * The ID of the token
	 */
	int Token;

	/**
	 * The textual value; 
	 */
	UnicodeString* Lexeme;

	/**
	 * This is the **PHPDoc** comment that was immediately before this token.
	 */
	UnicodeString* Comment;

	/**
	 * The character position of this token 
	 * @see LexicalAnalyzerClass::GetCharacterPosition()
	 */
	int Pos;

	/**
	 * sets all pointers to NULL
	 */
	void Init();

	/**
	 * deletes all pointers that are set
	 */
	void Free();

};

/**
 * Data structure that will hold the data points we can to keep track of
 * for PHP class structures.
 */
class ClassSymbolClass {

public:

	UnicodeString ClassName, Signature, Comment;

	ClassSymbolClass();

	void GrabClassName(SemanticValueClass& value);
	void AppendToSignature(SemanticValueClass& value);
	void AppendToSignature(SemanticValueClass& value1, SemanticValueClass& value2);
	void AppendToSignature(const UnicodeString& str);
	void AppendToComment(SemanticValueClass& value);
	void Clear();
};

/**
 * Data structure that will hold the data points we can to keep track of
 * for PHP class method & property structures.
 */
class ClassMemberSymbolClass {

public:

	UnicodeString MemberName, Signature, Comment, TypeLexeme;

	bool IsPublicMember;
	
	bool IsProtectedMember;
	
	bool IsPrivateMember;
	
	bool IsStaticMember;

	bool IsConstMember;

	ClassMemberSymbolClass();
	void GrabMemberName(SemanticValueClass& value);
	void AppendToSignature(SemanticValueClass& value);
	void AppendToSignature(SemanticValueClass& value1, SemanticValueClass& value2);
	void AppendToSignature(const UnicodeString& str);
	void AppendToComment(SemanticValueClass& value);
	void Clear();
};

/**
 * This represents a fully qualified name; it may have any number of namespaces attached to
 * it.
 */
class QualifiedNameClass {

public:

	UnicodeString Comment;

	QualifiedNameClass();
	void Clear();
	void GrabComment(SemanticValueClass& value);
	void AddName(SemanticValueClass& value);

	UnicodeString ToSignature() const;

private:

	std::vector<UnicodeString> Namespaces;
	
};

/**
 * This is a list of function / method parameters for a single function / method. It store
 * the name and type info of each parameter.
 */
class ParametersListClass {

public:
	ParametersListClass();

	void Create();
	void Clear();
	void SetOptionalType(SemanticValueClass& value);
	void SetOptionalType(UnicodeString str);
	void SetName(SemanticValueClass& value, bool isReference);

	/**
	 * Recreate the source code by 'unparsing' the parameter list
	 * @return concatenated paramter names; delimited with a comma. Also,
	 * the returned string will have parenthesis already present.
	 * For example "($name, $places)"
	 */
	UnicodeString ToSignature() const;

private:
	std::vector<UnicodeString> Params;
	std::vector<UnicodeString> OptionalTypes;
};

/**
 * The SymbolClass represents one symbol; the 'creation' of a variable in the code, along with the type
 * information associated with that variable. There will be one symbol created when a variable
 * This is not quite an AST; one symbol will represent an entire expression; for example the
 * line 
 *
 * $name = $this->myFunc()->name->fix()
 *
 * will produce one symbol only (called 'name').
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
		OBJECT, // a variable that is an object;
		UNKNOWN // stuff that we just cannot figure out at parse time; dynamic variables; array accesses
	};
	
	/**
	 * The variable's name. The variable name will NOT have the siguil ('$').
	 *
	 * Examples:
	 * 
	 * this
	 * self
	 * parent
	 * aVariable
	 * 
	 * @var UnicodeString
	 */
	UnicodeString Lexeme;

	/**
	 * Any PHP doc comment that was attached to this variable (appeared immediately before).
	 */
	UnicodeSting Comment;
	
	/**
	 * The list of methods and properties that were called in order to create this variable. For instance,
	 * for the expression 
	 *   "$name = $this->myFunc()->name->fix() "
	 * the ChainList will be
	 *   0)  $this->myFunc
	 *   1)  ->name
	 *   2)  ->fix
	 *
	 * A variable's type can then be resolved by  going down the list in order;
	 * getting the type for item (0) then looking up the result of type for item (0) and item (1) [in this case
	 * "name" property of item 0's type], then looking at the type item (1) [ in this case the 
	 * "fix" property of item 1's type ]
	 *
	 * Any arguments to any of the calling functions will be ignored (since they do not contribute to the type info).
	 * Note that this may be empty in the case of primitives. 
	 * 
	 * @var std::vector<UnicodeString>
	 */
	std::vector<UnicodeString> ChainList;
	
	/**
	 * The symbol type
	 */
	Types Type;

	/**
	 * location in the original source where the variable starts.
	 */
	int Pos;
	
	/**
	 * If TRUE, this symbol uses static access ("::")
	 */
	bool IsStatic;
	
	SymbolClass();

	void Copy(const SymbolClass& src);

	void AppendToComment(SemanticValueClass& value);

	void SetToPrimitive();
	void SetToObject();
	void SetToArray();
	void SetToUnknown();

	void StartChain(SemanticValueClass& objectValue, SemanticValueClass& operatorValue, SemanticValueClass& propertyValue, bool isMethod);
	void StartChain(SemanticValueClass& functionValue);
	void AppendToChain(SemanticValueClass& operatorValue, SemanticValueClass& propertyValue, bool isMethod);
	void Clear();
};


/**
 * A data structure that holds all observers.  Each observer may be NULL.
 * This class will NOT own the pointers.
 * This class will also hold the current scope as the parser is parsing the code, acting as a 'global'
 * that the parser can use to store data accross multiple grammar rules.
 */
class ObserverQuadClass {

public:

	ClassObserverClass* Class;

	ClassMemberObserverClass* Member;

	FunctionObserverClass* Function;

	VariableObserverClass* Variable;


	ClassSymbolClass CurrentClass;

	ClassMemberSymbolClass CurrentMember;

	QualifiedNameClass CurrentQualifiedName;

	ParametersListClass CurrentParametersList;

	SymbolClass CurrentSymbol;

	std::vector<SymbolClass> VariablesList;

	/**
	 * Each observer may be NULL. This class will NOT own the pointers.
	 */
	ObserverQuadClass(ClassObserverClass* classObserver, ClassMemberObserverClass* memberObserver,
		FunctionObserverClass* functionObserver, VariableObserverClass* variableObserver);

	/**
	 * Notifies that a class was found. The CurrentClass variable should have been filled with the data.
	 */
	void ClassFound();

	/**
	 * Will erase the current class info.
	 */
	void ClassEnd();

	/**
	 * Notifies that a class property / method has been found. The CurrentMember variable should have been filled with the data.
	 */
	void ClassMemberFound(bool isProperty);

	/**
	 *  Notifites that a define (constant) has been found.
	 */
	void DefineFound(const SymbolClass& name, const SymbolClass& value, const UnicodeString& comment);

	/**
	 * Notifies that a stand-alone function has been found.
	 */
	void FunctionFound(const ClassMemberSymbolClass& functionSymbol);

	/**
	 * Will erase the current function info.
	 */
	void FunctionEnd();

	/**
	 * Notifies that a variable has been found.
	 */
	void VariableFound(const SymbolClass& variableSymbol);

	/**
	 * Add a new primitive symbol to the variables list
	 */
	void CreatePrimitive(SemanticValueClass& value);
	
	/**
	 * Add a new object symbol to the variables list
	 */
	void CreateObject(SemanticValueClass& value);
	
	/**
	 * Add a new array symbol to the variables list
	 */
	void CreateArray(SemanticValueClass& value);
	
	/**
	 * Add a new unknown symbol to the variables list
	 */
	void CreateUnknown(SemanticValueClass& value);

private:

	/**
	 * Get the return type from the '@return' / '@var' annotation
	 * 
	 * @param const UnicodeString& phpDocComment the comment
	 * @param bool varAnnotation if false, will return the word after '@var', else return the word after '@return'
	 * @return UnicodeString
	 */
	UnicodeString ReturnTypeFromPhpDocComment(const UnicodeString& phpDocComment, bool varAnnotation);
};

}

#endif