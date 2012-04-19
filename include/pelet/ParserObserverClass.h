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
#ifndef __PARSEROBSERVERCLASS_H__
#define __PARSEROBSERVERCLASS_H__

#include <pelet/TokenClass.h>
#include <pelet/LexicalAnalyzerClass.h>
#include <unicode/unistr.h>
#include <pelet/Api.h>
#include <stack>
#include <vector>

namespace pelet {

/**
@page ParserImplementationDetailsPage Parser Implementation Details

pelet uses a Bison parser to validate PHP syntax rules. Knowledge of the bison
parser generator is required to modify the parser code.  You may look at the
bison manual at http://www.gnu.org/software/bison/manual/

First thing to note is that the pelet grammar file (Php53ParserImpl.y) was created
by gutting the grammar file that comes in the PHP source distribution.  If you
already know the PHP grammar file then you will be familiar with the grammar. If not,
continue reading this to get a better understanding.

Bison is a parser generator; we write rules in bison grammar, run the grammar through the 
bison executable, and the executable generates C++ source code that can be used in any 
program. The generated C++ source code will define a function called php53parse() that 
we can then call from anywhere in our program.

\section ParserImplementationDetailsInput Input
We define the inputs to the php53parse function by using the %parse-param directive, this will make it so 
that the php53parse and the php53lex functionx accept a pelet::LexicalAnalyzerClass as 
an argument.
We define a php53lex function, and in that function we will use 
pelet::LexicalAnalyzerClass::NextToken to get the next token from the
source code being parsed.

\section ParserImplementationDetailsGrammar Grammar rules
Let's look at an example grammar rule. A (simplified) bison grammar rule for a PHP variable
looks like this:

@code
compound_variable:
		T_VARIABLE			{ observers.CurrentExpressionPushAsVariable($1); }
	|	'$' '{' expr '}' 
;
@endcode

Where 
compound_variable is the name of a rule
T_VARIABLE is token that matches the rule
|  is the symbol to say that rule can match another set of tokens
'$' {' expr '}'  is a "nonterminal" rule (rule that is made up of another rule)

This rule will match a T_VARIABLE token (from the lexer) or a "$" followed by a "{" that
is followed by an expr rule that is followed by another "}".  

Each rule can have an action associated with it.  An action is just a block of C / C++ code
that is executed when the rule is matched.  The only addition is that the action can
access the matching tokens by using $1 for the first token, $2 for the second token, and 
so on... For example, in the second branch $4 is the token '}'

So just what type is $1 ? The $n variables are of type YYSTYPE, in our case we define
it to be pelet::SemanticValueClass (see the php53lex() function). This allows us to
get the token, but also the lexeme, where token is the numeric representation, for example
T_VARIABLE, and the lexeme is the textual representation (for example "$userName").

What about the tokens from recursive rules, as in "expr" in the case above? Bison allows a rule 
to return a YYSTYPE back to a calling rule by using the $$ pseudo variable, but in our case
this is rarely used, and this means that rules should NOT access tokens from sub-rules.  Attempting
to access variables from sub-rules will result in program crashes.

The grammar file contains the entire PHP grammar; most of the rules don't have actions because
we are not interested in them; but the ones we are interested in have actions.  In our case,
we delegate most of the work to the pelet::ObserverQuadClass and the rules contain just 1-liner
method calls. This makes the code a bit more IDE-friendly. Another reason -  a very important one -
that the grammar file and ParserObserverClass are designed this way is to make it easy to implement 
the PHP syntax correctly. Since there is no official PHP language specification, the only sure way to know
that we implemented the PHP syntax correctly is to use the actual PHP grammar file.

\section ParserImplementationDetailsObserver Observer Quad
An ObserverQuadClass is an object that holds the observers (the objects that want to be notified
of source code artifacts like classes, functions, etc..). It gets passed in as a parameter to 
the php53parse and the php53lex functions just like the lexer. The different methods of
the ObserverQuad get called as the different bison rules are triggered, as in for example
the "class" rule:

@code
unticked_class_declaration_statement:
		class_entry_type T_STRING			{ observers.ClassSetName($2); }
		extends_from implements_list		{ observers.ClassFound(analyzer.GetLineNumber()); }
		'{' class_statement_list '}'		{ observers.ClassEnd(analyzer.GetLineNumber()); }

class_entry_type:
		T_CLASS					{ observers.ClassStart($1, false, false, false); }
	|	T_ABSTRACT T_CLASS		{ observers.ClassStart($1, true, false, false); }
	|	T_FINAL T_CLASS			{ observers.ClassStart($1, false, true, false); }
;
@endcode

In this case, when we see T_CLASS (class keyword) the ClassStart method gets called. Then, the
ClassSetName method gets called (which allows us to get the name of the class). Then, after
any extends or implements keywords rules are parsed we call the ClassFound method. The ClassFound
method will, in turn, call any pelet::ClassObserverClass instances that it has been given.

\section ParserImplementationDetailsUpdatingGrammar Updating the grammar
When a new PHP version updates the grammar; we must update the rules.  The simplest way to do this 
would be to diff the PHP grammar file with its prior versions, taking the new rules, gutting them (removing
the action block), and adding them to Php53ParserImpl.y.  If any new artifacts become available, then 
we should create new methods in the ObserverQuadClass, and possibly new interfaces that will expose
the new artifacts to the users of the pelet library.
*/

// these classes are defined below.
class SymbolClass;
class ExpressionClass;


/**
 * Interface to inherit from when needing to be notified when a class structure is encountered.
 * An object of this type will be passed to the ParserClass; the parser will call the appropriate
 * methods when a class or define statement has been found in the source code.
 * The observer will get notified as the buffer is being parsed.
 */
class PELET_API ClassObserverClass {

public:
	/**
	 * Override this method to perform any custom logic when a class, interface, or trait is found.
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that was found
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& signature the list of classes that the class inherits / implements in code format
	 *        for example "extends UserClass implements Runnable"
	 * @param const UnicodeString& comment PHPDoc attached to the class, interface, or trait
	 * @param lineNumber the line number (1-based) that the class was found in
	 */
	virtual void ClassFound(const UnicodeString& nameSpace, const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment, const int lineNumber) = 0;
	
	/**
	 * Override this method to perform any custom logic when a define declaration is found.
	 * 
	 * @param const UnicodeString& variableName the name of the defined variable
	 * @param const UnicodeString& variableValue the variable value
	 * @param const UnicodeString& comment PHPDoc attached to the define
	 * @param lineNumber the line number (1-based) that the define was found in
	 */
	virtual void DefineDeclarationFound(const UnicodeString& variableName, const UnicodeString& variableValue, 
		const UnicodeString& comment, const int lineNumber) = 0;
		
	/**
	 * Override this method to perform any custom logic when an include / require / require_once / include_once declaration is found.
	 * 
	 * @param const UnicodeString& filename the name of the included file, but only if the statement
	 *        is a constant expression. Otherwise, lineNumber will be an empty string 
	 * @param lineNumber the line number (1-based) that the include/ was found in
	 */
	virtual void IncludeFound(const UnicodeString& filename, const int lineNumber) = 0;
	
	/**
	 * Override this method to perform any custom logic when a namespace is imported ("use" keyword).
	 * 
	 * @param UnicodeString nameSpace the fully qualified namespace that is being imported
	 * @param alias any alias to the nameSpace.  alias may be empty.
	 */
	virtual void NamespaceUseFound(const UnicodeString& nameSpace, const UnicodeString& alias) = 0;

};

/**
 * Interface to inherit from when needing to be notified when a class member (either variable or method)
 * is encountered. An object of this type will be passed to the ParserClass; the parser will call the appropriate
 * methods when a class property or method has been parsed.
 * The observer will get notified as the buffer is being parsed.
 */
class PELET_API ClassMemberObserverClass {

public:

	/**
	 * Override this method to perform any custom logic when a class method is found.
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
	virtual void MethodFound(const UnicodeString& nameSpace, const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, 
		TokenClass::TokenIds visibility, bool isStatic, const int lineNumber) = 0;
	
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
	 * @param lineNumber the line number (1-based) that the propertywas found in
	 */
	virtual void PropertyFound(const UnicodeString& nameSpace, const UnicodeString& className, const UnicodeString& propertyName, 
		const UnicodeString& propertyType, const UnicodeString& comment, 
		TokenClass::TokenIds visibility, bool isConst, bool isStatic, const int lineNumber) = 0;

	/**
	 * Override this method to perform any logic when the function has ended (a closing brace '}' was encountered).
	 *
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that was found
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& methodName the name of the method that was found
	 * @param pos the character position (of the closing brace '}' original source code)
	 */
	virtual void MethodEnd(const UnicodeString& nameSpace, const UnicodeString& className, 
		const UnicodeString& methodName, int pos) = 0;

	/**
	 * Override this method to perform custom logic when a trait user statement has been found
	 *
	 * @param const UnicodeString& namespace the fully qualified namespace of the class
	 * @param className the fully qualified name of the class that uses the trait
	 * @param traitName the fully qualified name of the trait to be used 
	 */
	virtual void TraitUseFound(const UnicodeString& nameSpace, const UnicodeString& className, 
		const UnicodeString& traitName) = 0;
	
	/**
	 * Override this method to perform custom logic when a trait method has been aliased
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that uses the trait
	 * @param className the fully qualified name of the class that uses the trait
	 * @param traitUsedClassName the class name of the trait to be aliased
	 * @param traitMethodName the name of the trait method that is to be aliased (hidden)
	 *        this may be empty if the trait adaptation only changes the visibility and
	 *        does not need to resolve a trait conflict
	 * @param alias the name of the new alias. alias may be empty when ONLY the visibility is changed.
	 * @param visibility the visbility of the trait method. may be PUBLIC if the visibility was not changed.
	 */
	virtual void TraitAliasFound(const UnicodeString& nameSpace, const UnicodeString& className, const UnicodeString& traitUsedClassName,
		const UnicodeString& traitMethodName, 
		const UnicodeString& alias, TokenClass::TokenIds visibility) = 0;

	/**
	 * Override this method to perform custom logic when a trait method conflict has been resolved
	 * (an insteadof operation) 
	 *
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that was found
	 * @param className the fully qualified name of the class that uses the trait
	 * @param traitUsedClassName the class name of the trait to be used
	 * @param traitMethodName name of the trait method that is to being resolved
	 */
	virtual void TraitPrecedenceFound(const UnicodeString& nameSpace, const UnicodeString& className, const UnicodeString& traitUsedClassName,
		const UnicodeString& traitMethodName) = 0;
};

/**
 * Interface to inherit from when needing to be notified when a stand-alone function is encountered. 
 * An object of this type will be passed to the ParserClass; the parser will call the appropriate
 * method when a funciton been parsed.
 * The observer will get notified as the buffer is being parsed.
 */
class PELET_API FunctionObserverClass {

public:
	/**
	 * Override this method to perform any custom logic when a function is found.
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
	virtual void FunctionFound(const UnicodeString& nameSpace, const UnicodeString& functionName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, const int lineNumber) = 0;

	/**
	 * Override this method to perform any logic when the function has ended (a closing brace '}' was encountered).
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the function that was found
	 * @param const UnicodeString& functionName the name of the method that was found
	 * @param pos the character position (of the closing brace '}' original source code)
	 */
	virtual void FunctionEnd(const UnicodeString& nameSpace, const UnicodeString& functionName, int pos) = 0;
};

/**
 * Interface to inherit from when needing to be notified when a variable creation is encountered. An object of 
 * this type will be passed to the ParserClass; the parser will call the appropriate
 * method when a variable assignment has been parsed.
 * The observer will get notified as the buffer is being parsed.
 */
class PELET_API VariableObserverClass {

public:

	/**
	 * Override this method to perform any custom logic when a variable assignment is found. Note that the same 
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
	 * @param const UnicodeString& namespace the fully qualified namespace of the containing class / function.
	 * @param const UnicodeString& className class where the variable was found. may be empty is variable is scoped 
	 *        inside a function or is global.
	 * @param const UnicodeString& methodName function/method name where the variable was found. may be empty if 
	 *        variable is globally scoped.
	 * @param const SymbolClass& symbol the name  & type of the variable that was found
	 * @param const UnicodeString& comment PHPDoc attached to the variable
	 */
	virtual void VariableFound(const UnicodeString& nameSpace, const UnicodeString& className, const UnicodeString& methodName, 
		const SymbolClass& symbol, const UnicodeString& comment) = 0;
};

/**
 * Interface to inherit when needing to be notified of all expressions.  An object of 
 * this type will be passed to the ParserClass; the parser will call the appropriate
 * method when an expression has been parsed. This interface is most useful when needing to parse
 * a single expression.
 * The observer will get notified as the buffer is being parsed.
 */
class PELET_API ExpressionObserverClass {

public:

	/**
	 * Override this method to get the pseudo-parse tree for a single expression.
	 * 
	 * @param expression the expression that was parsed.
	 */
	virtual void ExpressionFound(const ExpressionClass& expression) = 0;
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
 * Be sure to init and free with the ParserObserverClas; that way memory can be 
 * cleaned up correctly.
 */
class PELET_API SemanticValueClass {

public:

	/**
	 * The textual value; can be NULL. This object will own the pointer.
	 */
	UnicodeString* Lexeme;

	/**
	 * This is the **PHPDoc** comment that was immediately before this token.
	 * This can be NULL. This object will own the pointer.
	 */
	UnicodeString* Comment;

	/**
	 * The ID of the token
	 */
	int Token;

	/**
	 * The character position of this token 
	 * @see LexicalAnalyzerClass::GetCharacterPosition()
	 */
	int Pos;
};

/**
 * This represents a qualified name; it may have any number of namespaces attached to
 * it.
 */
class PELET_API QualifiedNameClass {

public:

	UnicodeString Comment;
	bool IsAbsolute;

	QualifiedNameClass();
	void Clear();
	void GrabNameAndComment(SemanticValueClass& value);
	void AddName(SemanticValueClass& value);
	void MakeAbsolute();

	UnicodeString ToSignature() const;
	
	
	/** 
	 * prepends a namespace separator '\' to this namespace name
	 */
	UnicodeString ToAbsoluteSignature() const;
	
	/**
	 * @param name the namespace to prepend to this namespace. This is the current namespace
	 *        that the code belongs to.
	 * @return concatenation of name and this name, depending on whether this name is already
	 *         fully qualified (IsAbsolute = true)
	 * 
	 * Examples
	 * if name = "First\Child" and this = "Parent\Classname"
	 * then this method will return "\First\Child\Parent\Classname"
	 * 
	 * if this name IsAbsolute = TRUE and name = "First\Child" and this = "\Parent\Classname"
	 * then this method will return "\Parent\Classname"
	 * since this name is absolute no need to prepend the given namespace
	 */
	UnicodeString Prepend(const QualifiedNameClass& name) const;

private:

	std::vector<UnicodeString> Namespaces;
		
};

/**
 * Data structure that will hold the data points we can to keep track of
 * for PHP class structures.
 */
class PELET_API ClassSymbolClass {

public:

	UnicodeString ClassName;
	UnicodeString Comment;
	QualifiedNameClass ExtendsFrom;
	std::vector<QualifiedNameClass> ImplementsList; 
	bool IsAbstract;
	bool IsFinal;
	bool IsInterface;
	bool IsTrait;

	ClassSymbolClass();

	void GrabClassName(SemanticValueClass& value);
	void AppendToComment(SemanticValueClass& value);
	void Clear();

	UnicodeString ToSignature() const;
	
};

/**
 * Data structure that will hold the data points we can to keep track of
 * for PHP class method & property structures.
 */
class PELET_API ClassMemberSymbolClass {

public:

	/**
	 * If this is a property, the MemberName will
	 * have the siguil ('$')
	 */
	UnicodeString MemberName, Comment;

	bool IsPublicMember;
	
	bool IsProtectedMember;
	
	bool IsPrivateMember;
	
	bool IsStaticMember;

	bool IsConstMember;

	bool IsAbstractMember;

	bool IsFinalMember;

	bool IsReturnReference;

	ClassMemberSymbolClass();
	void SetNameAndReturnReference(SemanticValueClass& nameValue, SemanticValueClass& referenceValue, SemanticValueClass& functionValue);
	void SetAsConst(SemanticValueClass& nameValue, SemanticValueClass& commentValue);
	UnicodeString ToMethodSignature(UnicodeString variablesSignature) const;
	void AppendToComment(SemanticValueClass& value);
	
	void SetAsPublic();
	void SetAsProtected();
	void SetAsPrivate();
	void Clear();
};

/**
 * This is a class that accumulates the trait usage inside of a class. It keeps trait of
 * aliases.
 *
 */
class PELET_API TraitAdaptationSymbolClass {
	
public:

	/** 
	 * the class name of the trait method to be aliased ('old' name) 
	 * this may be empty if the trait only changes the visibility and
	 * does not need to resolve a trait conflict
	 */
	QualifiedNameClass TraitMethodReference;

	/** the name of the trait method. this is the method to alias ('old' name) */
	UnicodeString TraitMethod;
	
	/** 
	 * the name of the alias ('new' name for the method). This may be empty if
	 * only the visibility is changed.
	 */
	UnicodeString TraitAlias;
	
	/** the visbility to change TraitMethodReference to */
	TokenClass::TokenIds MethodVisibility;
	
	TraitAdaptationSymbolClass();
	
	void Clear();
	
};

/**
 * This is a list of function / method parameters for a single function / method. It store
 * the name and type info of each parameter.
 */
class PELET_API ParametersListClass {

public:
	ParametersListClass();

	void Create();
	void CreateWithOptionalType(SemanticValueClass& value);
	void CreateWithOptionalType(const UnicodeString& className);
	void Clear();	
	void SetName(SemanticValueClass& value, bool isReference);

	/**
	 * Recreate the source code by 'unparsing' the parameter list
	 * @return concatenated paramter names; delimited with a comma. Also,
	 * the returned string will have parenthesis already present.
	 * For example "($name, $places)"
	 */
	UnicodeString ToSignature() const;

	/**
	 * @return the number of parameters that have been created
	 */
	size_t GetCount() const;

	/**
	 * @param index the parameter to get
	 * @param the parameter name will be set in this variable
	 * @param optionalType the parameter's type will be set in this variable
	 */
	void Param(size_t index, UnicodeString& param, UnicodeString& optionalType) const;

private:
	std::vector<UnicodeString> Params;
	std::vector<UnicodeString> OptionalTypes;
};

/**
 * This class will represent one PHP Expression. An expression is either
 * - a variable ($abc)
 * - a scalar (constant)
 * - an operation between 2 variables  (arithmetic, boolean, bitwise)
 * - an operation between 1 variables  and another expression
 * - an operation of 1 variable (increment, decrement, cast, error suppression, clone)
 * - a "new" object construction
 * - a function call
 * - a variable assignment of one variable to an expression
 */
class PELET_API ExpressionClass {
	
public:

	enum Types {
		SCALAR,
		ARRAY,
		VARIABLE,
		FUNCTION_CALL,
		NEW_CALL,
		UNKNOWN // stuff that we just cannot figure out at parse time; dynamic variables; array accesses
	};

	/**
	 * In the case of a function call; this is the name of the function that
	 * was called. In the case of a NEW_CALL, then name is the
	 * name of the class that was instantiated. For all other types; this is empty.
	 */
	QualifiedNameClass Name;

	/**
	 * In the case of a scalar; this is the token text (actual string or
	 * int value). In the case of a variable; this is the variable name.
	 * In the case of a variable that chains object operations ($this->name->toString)
	 * then the lexeme is the value of the first variable in the chain ("$this" in
	 * the example above).
	 */
	UnicodeString Lexeme;

	/**
	 * The comment that is attached to the function call / variable.
	 */
	UnicodeString Comment;

	/**
	 * In the case of function calls; this is the arguments of the
	 * function call (each of which could be the results of other
	 * function calls).
	 */
	std::vector<ExpressionClass> CallArguments;

	/**
	 * In the case of a variable; this is the list of  properties / methods
	 * that were successively invoked.
	 * For example; the expression "$this->name->toString()" will have 3 items in
	 * the chain list "$this" "->name" and "->toString()".
	 */
	std::vector<UnicodeString> ChainList;

	Types Type;

	ExpressionClass();

	/**
	 * Add a property name to the variable chain list
	 * @param operatorValue the token of the operation
	 * @param propertyValue the token of the property/method to chain
	 * @param isMethod TRUE if the property is a method
	 */
	void AppendToChain(SemanticValueClass& operatorValue, SemanticValueClass& propertyValue, bool isMethod);

	void Clear();

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
class PELET_API SymbolClass {

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
	 * The variable's name. The variable name WILL have the siguil ('$').
	 *
	 * Examples:
	 * 
	 * $this
	 * self
	 * parent
	 * $aVariable
	 *
	 */
	UnicodeString Lexeme;

	/**
	 * Any PHP doc comment that was attached to this variable (appeared immediately before).
	 */
	UnicodeString Comment;

	/**
	 * The name of the "type" of this variable that was parsed out of the PHPDoc. For example
	 * when a variable is decorated with "/* @var $var TypeClass * /" comments
	 */
	UnicodeString PhpDocType;
	
	/**
	 * The list of methods and properties that were called in order to create this variable. For instance,
	 * for the expression 
	 *   "$name = $this->myFunc()->name->fix() "
	 * the ChainList will be
	 *   0)  $this
	 *   1)  ->myFunct()
	 *   1)  ->name
	 *   2)  ->fix
	 *
	 * A variable's type can then be resolved by  going down the list in order;
	 * getting the type for item (0) then looking up the result of type for item (0) and item (1) [in this case
	 * "name" property of item 0's type], then looking at the type item (1) [ in this case the 
	 * "fix" property of item 1's type ]
	 *
	 * Any arguments to any of the calling functions will be ignored (since they do not contribute to the type info).
	 * Note that the ChainList may be empty in the case of primitives or 'simple' variables. 
	 *
	 */
	std::vector<UnicodeString> ChainList;
	
	/**
	 * The symbol type
	 */
	Types Type;
	
	SymbolClass();

	/**
	 * Copies all symbol properties from src to this object.
	 */
	void Copy(const SymbolClass& src);

	void AppendToComment(SemanticValueClass& value);

	void SetToPrimitive();
	void SetToObject();
	void SetToArray();
	void SetToUnknown();
	void Clear();
	
	/**
	 * Turns the given expression into this symbol
	 */
	void FromExpression(const ExpressionClass& expression);
};

/**
 * A data structure that holds all observers.  Each observer may be NULL.
 * This class will NOT own the pointers.
 * This class will also hold the current scope as the parser is parsing the code, acting as a 'global'
 * that the parser can use to store data accross multiple grammar rules.
 */
class PELET_API ObserverQuadClass {

public:

	/**
	 * Each observer may be NULL. This class will NOT own the pointers.
	 */
	ObserverQuadClass(ClassObserverClass* classObserver, ClassMemberObserverClass* memberObserver,
		FunctionObserverClass* functionObserver, VariableObserverClass* variableObserver, 
		ExpressionObserverClass* expressionObserver);

	~ObserverQuadClass();

	/**
	 * This method will allocate new string pointers for the Lexeme and Comment;
	 * It will also keep track of the memory and will delete it SematicValueFree is called.
	 */
	void SemanticValueInit(SemanticValueClass& value);

	/**
	 * Frees all of the memory allocated by SemanticValueInit().  This method will be called once 
	 * parsing completes
	 */
	void SemanticValueFree();

	/**
	 * Frees the memory allocated by SemanticValueInit() for this single value.  This method is here
	 * because sometimes we want to cleanup single values (if the parser performs error recovery)
	 */
	void SemanticValueFree(SemanticValueClass& value);

	/**
	 * Initializes class info
	 */
	void ClassStart(SemanticValueClass& commentValue, bool isAbstract, bool isFinal, bool isInterface, bool isTrait);

	/**
	 * Sets the name property of the class info
	 */
	void ClassSetName(SemanticValueClass& nameValue);

	/**
	 * Sets the base class name from the CurrentQualifiedName info.
	 */
	void ClassSetExtends();

	/**
	 * Add the current name as an interface that is implemented by the current class.
	 */
	void ClassAddToImplements();

	/**
	 * Notifies that a class was found. The CurrentClass variable should have been filled with the data.
	 */
	void ClassFound(const int lineNumber);

	/**
	 * Will erase the current class info.
	 */
	void ClassEnd(const int lineNumber);

	void QualifiedNameClear();
	
	void QualifiedNameGrabNameAndComment(SemanticValueClass& nameValue);

	void QualifiedNameAddName(SemanticValueClass& nameValue);
	
	void QualifiedNameMakeAbsolute();

	void ParametersListSetName(SemanticValueClass& nameValue, bool isReference);

	void ParametersListCreate();

	void ParametersListCreateWithOptionalType(SemanticValueClass& typeValue);

	void ClassMemberClear();

	void ClassMemberSetNameAndReturnReference(SemanticValueClass& nameValue, SemanticValueClass& referenceValue, SemanticValueClass& functionValue);

	void ClassMemberSetAsPublic();

	void ClassMemberSetAsProtected();

	void ClassMemberSetAsPrivate();

	void ClassMemberSetAsStatic();

	void ClassMemberSetAsAbstract();

	void ClassMemberSetAsFinal();

	void ClassMemberSetAsConst(SemanticValueClass& nameValue, SemanticValueClass& commentValue);

	void ClassMemberAppendToComment(SemanticValueClass& commentValue);

	/**
	 * the QualifiedName is a new trait being used in the current class
	 */
	void TraitUseFound();
	
	void TraitClearAdaptation();
	
	/**
	 * a trait method is being aliased in the current class.
	 * @param traitMethod the trait method being aliased
	 */
	void TraitAliasMethod(SemanticValueClass& traitMethod);
	
	/**
	 * a trait method is being aliased in the current class.
	 */
	void TraitAliasMethodFromQualifiedName(SemanticValueClass& traitMethod);

	/**
	 * notify that a trait conflict has been resolved using the insteadof operator
	 */
	void TraitPrecedenceFound();
	
	/**
	 * @param traitAlias the name of the alias. the trait method being aliased is stored in QualifiedName
	 *        traitAlias may be NULL, in this case then only the modifier is being aliased 
	 *        ie a trait method is being made protected or private
	 */
	void TraitAliasFound(SemanticValueClass* traitAlias);
	
	/**
	 * Set the 'current' namespace; the namespace declaration
	 */
	void NamespaceSetCurrent();
	
	/**
	 * Set the 'current' namespace to be the global namespace
	 */
	void NamespaceSetToGlobal();
	
	/**
	 * Notify that a namespace was imported.
	 */
	void NamespaceUse();
	
	/**
	 * Notify that a namespace was imported using an alias.
	 */	
	void NamespaceUseAlias(SemanticValueClass& namespaceAlias);

	/**
	 * Notify that an absolute namespace was imported.
	 */
	void NamespaceUseAbsolute();
	
	/**
	 * Notify that an absolute namespace was imported with an alias.
	 */
	void NamespaceUseAbsoluteAlias(SemanticValueClass& namespaceAlias);
	
	/**
	 * add a new Paramter to the CurrentParametersList 
	 * using the CurrentQualifiedName as the type
	 */
	void CreateParameterWithOptionalClassName();

	/**
	 * Notifies that a class property / method has been found. The CurrentMember variable should have been filled with the data.
	 */
	void ClassMemberFound(bool isProperty, const int lineNumber);

	/**
	 * Will erase the current method info and notify the method observer
	 */
	void ClassMethodEnd(SemanticValueClass& value);

	/**
	 *  Notifies that a define (constant) has been found.
	 */
	void DefineFound(const ExpressionClass& name, const ExpressionClass& value, const UnicodeString& comment, const int lineNumber);
	
	/**
	 *  Notifies that an include has been found.
	 */
	void IncludeFound(const int lineNumber);//like in include("filename.php")

	/**
	 * Initializes the CurrentMember info.
	 */
	void FunctionStart(SemanticValueClass& nameValue, SemanticValueClass& referenceValue, SemanticValueClass& commentValue);

	/**
	 * Notifies that a stand-alone function has been found.
	 */
	void FunctionFound(const int lineNumber);

	/**
	 * Will erase the current function info and notify the function observer.
	 */
	void FunctionEnd(SemanticValueClass& value);

	/**
	 * Notifies that a variable has been found. This method should be called when an assignment expression has
	 * been parsed.
	 */
	void AssignmentExpressionFound();

	/**
	 * Notifies than an expression has been parsed. This method should be called when an expression has
	 * been parsed.
	 */
	void ExpressionFound();

	/**
	 * When a catch block is parsed; notify that a new variable has been found (the exception that
	 * is catched)
	 * @param variableValue the catch variable value
	 */
	void ExceptionCatchFound(SemanticValueClass& variableValue);
	
	/**
	 * When a global variable is found.
	 * @param variableValue the global variable value
	 */
	void GlobalVariableFound(SemanticValueClass& variableValue);

	/**
	 * When a static variable is found.
	 * @param variableValue the global variable value
	 */
	void StaticVariableFound(SemanticValueClass& variableValue);
	
	/**
	 * When a variable in a foreach loop is found.
	 * The most recently parsed variable will be used. This is the one that has 
	 * been popped into the expression variables list (after a call to CurrentVariableComplete())
	 */
	void ForeachVariableFound();

	/**
	 * Set the current expression to be a scalar value and pushes the 
	 * expression to the ExpressionVariables list.
	 */
	void ExpressionPushNewScalar(SemanticValueClass& value);

	/**
	 * Set the current expression to be an array value and pushes the 
	 * expression to the ExpressionVariables list.
	 */
	void ExpressionPushNewArray(SemanticValueClass& value);

	/**
	 * Set the current expression to be a variable value and pushes the 
	 * expression to the ExpressionVariables list.
	 */
	void ExpressionPushNewVariable(SemanticValueClass& value);

	/**
	 * Set the current expression to be an unknown value and pushes the 
	 * expression to the ExpressionVariables list.
	 */
	void ExpressionPushNewUnknown(SemanticValueClass& value);

	/**
	 * Set the current expression to be the result of a new PHP object and pushes the 
	 * expression to the ExpressionVariables list.
	 */
	void ExpressionPushNewInstanceCall();

	/**
	 * 'undo' the last expression. this method is useful when we want to skip certain expressions.
	 */
	void ExpressionPop();
	
	/**
	 * Adds the current expression to the function call arguments list. This function should
	 * be called when the parser has encountered a function call argument (ie for the 
	 * expression "myFunct($a, $b)" once "$a" has been parsed this function should be
	 * called, then once "$b" has been parsed this function should be called.
	 */
	void ExpressionAsCallArgument();

	/**
	 * Copies the current qualified name to the FunctionCall expression
	 */
	void FunctionCallStart();

	/**
	 * Checks the current function call that was parsed; will notify the class observer when 
	 * the define() function was called
	 */
	void FunctionCallEnd(const int lineNumber);

	/**
	 * Saves the current function call to expression to the CurrentExpression.
	 * Will push the expression to the ExpressionVariables list; it will instead
	 * push the current expression into the CurrentFunctionCall expression. This function
	 * should be called when the parser encounters a function call (ie.  "myFunc();".
	 */
	void CurrentExpressionPushAsFunctionCall();
	
	/**
	 * Sets the current expression to be a variable. This function should be called
	 * when parser encounters a variable at the right side of an assignment 
	 * expression. Will push the expression to the ExpressionVariablesList
	 */
	void CurrentExpressionPushAsVariable(pelet::SemanticValueClass& value);

	/**
	 * Add a property name to the current variable (the one that was last pushed) chain list
	 * @param operatorValue the token of the operation
	 * @param propertyValue the token of the property/method to chain
	 * @param isMethod TRUE if the property is a method
	 */
	void CurrentExpressionAppendToChain(SemanticValueClass& operatorValue, SemanticValueClass& propertyValue, bool isMethod);

	/**
	 * Sets the current expression to be a static member. This function should be called
	 * when parser encounters a variable at the right side of an assignment 
	 * expression. Will NOT push the expression to the ExpressionVariablesList
	 */
	void CurrentExpressionAsStaticMember(SemanticValueClass& scopeOperatorValue);

	/**
	 * Sets the current expression to be a class constant. This function should be called
	 * when parser encounters a variable at the right side of an assignment 
	 * expression. Will NOT push the expression to the ExpressionVariablesList
	 */
	void CurrentExpressionPushAsClassConstant(SemanticValueClass& scopeOperatorValue, SemanticValueClass& constantNameValue);

	/**
	 * Resets the current expression.
	 * This function should be called after the end of every statement.
	 */
	void ClearExpressions();

	/**
	 * Will check the given comment for \@var annotations FOR LOCAL VARIABLES ONLY
	 * and notify the observer.
	 * assuming that comment for local variables look like this
	 *  /* \@var $dog Dog * /
	 * people got used to doing it this way
	 * http://stackoverflow.com/questions/4329288/code-hinting-completion-for-array-of-objects-in-zend-studio-or-any-other-ecli
	 */
	void NotifyLocalVariableTypeHint(const UnicodeString& comment);

private:

	/**
	 * Loop through the current parameters list and notify the variable observer
	 * of those variables.  This, in essence, allows the creation of parameters as 
	 * local variables.
	 */
	void NotifyVariablesFromParameterList();

	/**
	 * Get the return type from the '\@return' / '\@var' annotation
	 * 
	 * @param const UnicodeString& phpDocComment the comment
	 * @param bool varAnnotation if false, will return the word after '\@var', else return the word after '\@return'
	 * @return UnicodeString
	 */
	UnicodeString ReturnTypeFromPhpDocComment(const UnicodeString& phpDocComment, bool varAnnotation);

	/**
	 * Parses any variable type hints from the given PHPDoc and notifies the variable observer. In this case, the annotation will
	 * contain the variable name AND the variable type as in:
	 *   /* \@var $myvar VarTypeClass * /
	 *
	 * The comment may contain more than on name-type pair
	 * @param phpDocComment the entire comment
	 */
	void NotifyLocalVariableFromPhpDoc(const UnicodeString& phpDocComment);

	/**
	 * parses out the given PHPDoc comment and notifies the member observer of any
	 * \@property, \@property-read, \@property-write, and \@method 
	 * declarations.
	 */
	void NotifyMagicMethodsAndProperties(const UnicodeString& phpDocComment, const int lineNumber);

	/**
	 * the class that is currently being parsed.
	 */
	ClassSymbolClass CurrentClass;

	/**
	 * the class method or property that is currently being parsed. Also, this will hold
	 * the current stand-alone function that is being parsed as well
	 */
	ClassMemberSymbolClass CurrentMember;

	/**
	 * The current qualified name (namespaces + name) that is being parsed.
	 */
	QualifiedNameClass CurrentQualifiedName;

	/**
	 * This is a list of all the parameters of a function declaration. For example at the
	 * end of this line
	 *
	 *  function work($one, $two)
	 *
	 * the CurrentParametersList will have $one and $two as its members
	 */
	ParametersListClass CurrentParametersList;

	/**
	 * The current function CALL (not declaration).
	 *
	 * The reason for keeping this is for finding define() calls so that we can notify
	 * the class observer.
	 */
	ExpressionClass CurrentFunctionCallExpression;

	/**
	 * The current trait adaptation
	 */
	TraitAdaptationSymbolClass CurrentTraitAdaptation;

	/**
	 * The current namespace
	 */
	QualifiedNameClass Namespace;
	
	/**
	 * This object will NOT own the pointer
	 */
	ClassObserverClass* Class;

	/**
	 * This object will NOT own the pointer
	 */
	ClassMemberObserverClass* Member;

	/**
	 * This object will NOT own the pointer
	 */
	FunctionObserverClass* Function;

	/**
	 * This object will NOT own the pointer
	 */
	VariableObserverClass* Variable;

	/**
	 * This object will NOT own the pointer
	 */
	ExpressionObserverClass* ExpressionObserver;

	/**
	 * The current expression that is being parsed. This is a bit tricky since this
	 *
	 *  $myString = $another->func()
	 *
	 * Is actually 2 parsed as 2 expression rules.  
	 */
	ExpressionClass CurrentExpression;

	/**
	 * Since we want to notify on variable assigments, we need to keep track of previous
	 * expressions, since an assignment expression is recursively defined as a variable
	 * followed by an '=' followed by an expression. By having this list, we can store
	 * the right side of the assignment (the source expression) and then parse the
	 * left side of the assignment while still having access to the source expression.
	 * @see CurrentVariableComplete() method; after a variable is parsed the 
	 * CurrentVariableComplete method will 'save' it into this vector.
	 */
	std::vector<ExpressionClass> ExpressionVariables;

	/**
	 * Keep track of all allocated strings; we do it here because
	 * we cannot put a constructor/destructor in the SemanticValue class because
	 * bison will generate a union type and unions cannot have non-POD types or types with
	 * constructor/destructors
	 */
	std::vector<UnicodeString*> AllValues;

	/**
	 * Optimization to not bother collecting expressions when they are not needed (no variable
	 * or expression observers). 
	 */
	bool DoCollectExpressions;
};

}

/**
 * This function will get the next token from the lexer and will create a new SemanticValue (token + lexeme) 
 * from it.
 */
int NextSemanticValue(pelet::SemanticValueClass* value, pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers);

/**
 * this function will set the error that comes from bison and put it in the LexicalAnalyzer class.
 */
void GrammarError(pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers, std::string msg);

#endif
