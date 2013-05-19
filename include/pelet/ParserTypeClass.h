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
#ifndef __PARSERTYPECLASS_H__
#define __PARSERTYPECLASS_H__

#include <pelet/Api.h>
#include <pelet/TokenClass.h>
#include <wx/string.h>
#include <vector>
#include <map>

namespace pelet {

// these classes are defined below.
class StatementClass;
class TokenPositionClass;
class SemanticValueClass;
class ConstantClass;
class AstItemClass;
class ParametersListClass;
class ExpressionClass;
class VariableClass;
class QualifiedNameClass;

/**
 * Case-sensitive string comparator for use as STL Predicate
 */
class PELET_API wxStringComparatorClass {
public:
		bool operator()(const wxString& str1, const wxString& str2) const {
			return (str1.compare(str2) < 0) ? true : false;
		}
};

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
	 * @param const wxString& namespace the fully qualified "declared" namespace of the class that was found
	 * @param const wxString& className the name of the class that was found
	 * @param const wxString& signature the list of classes that the class inherits / implements in code format
	 *        for example "extends UserClass implements Runnable".
	 *        Note that the extends and implements class names are FULLY QUALIFIED in the proper manner using the current
	 *        defined namespace and any aliases (or will be left alone if they are already fully qualified).
	 *        In other words, this is the "unparsed" signature and NOT what was actually in the input source code.
	 * @param const wxString& comment PHPDoc attached to the class, interface, or trait
	 * @param lineNumber the line number (1-based) that the class was found in
	 */
	virtual void ClassFound(const wxString& namespaceName, const wxString& className, const wxString& signature, 
		const wxString& comment, const int lineNumber) { }
		
	/**
	 * Override this method to perform any logic when the class has ended (a closing brace '}' was encountered).
	 *
	 * @param const wxString& namespace the fully qualified namespace of the class that was found
	 * @param const wxString& className the name of the class that was found
	 * @param pos the character position (of the closing brace '}' original source code)
	 */
	virtual void ClassEnd(const wxString& namespaceName, const wxString& className, int pos)  { }
	
	/**
	 * Override this method to perform any custom logic when a define declaration is found.
	 * 
	 * @param const wxString& namespace the fully qualified namespace of the define that was found
	 * @param const wxString& variableName the name of the defined variable
	 * @param const wxString& variableValue the variable value
	 * @param const wxString& comment PHPDoc attached to the define
	 * @param lineNumber the line number (1-based) that the define was found in
	 */
	virtual void DefineDeclarationFound(const wxString& namespaceName, const wxString& variableName, const wxString& variableValue, 
		const wxString& comment, const int lineNumber) { }
		
	/**
	 * Override this method to perform any custom logic when an include / require / require_once / include_once declaration is found.
	 * 
	 * @param const wxString& filename the name of the included file, but only if the statement
	 *        is a constant expression. Otherwise, lineNumber will be an empty string 
	 * @param lineNumber the line number (1-based) that the include/ was found in
	 */
	virtual void IncludeFound(const wxString& filename, const int lineNumber) { }
	
	/**
	 * Override this method to perform any custom logic when a namespace declaration is found.
	 * 
	 * @param const wxString& namespaceName the name of the namespace name. Name will
	 *        be fully qualified (starts with '\')
	 * @param startingPos the character position (of the 'namespace' keyword in the original source code)
	 *        this is 0-based
	 */
	virtual void NamespaceDeclarationFound(const wxString& namespaceName, int startingPos) { }
	
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
	virtual void NamespaceUseFound(const wxString& namespaceName, const wxString& alias, int startingPos) { }

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
		TokenClass::TokenIds visibility, bool isStatic, const int lineNumber) { }
	
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
		TokenClass::TokenIds visibility, bool isConst, bool isStatic, const int lineNumber) { }

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
		const wxString& methodName, int startingPos, int endingPos) { }

	/**
	 * Override this method to perform custom logic when a trait user statement has been found
	 *
	 * @param const wxString& namespace the fully qualified namespace of the class
	 * @param className the name of the class that uses the trait (NOT a fully qualified or qualified name)
	 * @param traitName the fully qualified name of the trait to be used. FULLY QUALIFIED in the proper manner using the current
	 *        defined namespace and any aliases (or will be left alone if they are already fully qualified).
	 *        In other words, this is the "unparsed" trait name and NOT what was actually in the input source code. 
	 */
	virtual void TraitUseFound(const wxString& namespaceName, const wxString& className, 
		const wxString& fullyQualifiedTraitName) { }
	
	/**
	 * Override this method to perform custom logic when a trait method has been aliased
	 * 
	 * @param const wxString& namespace the fully qualified namespace of the class that uses the trait
	 * @param className name of the class that uses the trait (NOT a fully qualified or qualified name)
	 * @param traitUsedClassName the class name of the trait to be aliased. FULLY QUALIFIED in the proper manner using the current
	 *        defined namespace and any aliases (or will be left alone if they are already fully qualified).
	 *        In other words, this is the "unparsed" trait name and NOT what was actually in the input source code. 
	 * @param traitMethodName the name of the trait method that is to be aliased (hidden)
	 *        this may be empty if the trait adaptation only changes the visibility and
	 *        does not need to resolve a trait conflict
	 * @param alias the name of the new alias. alias may be empty when ONLY the visibility is changed.
	 * @param visibility the visbility of the trait method. may be PUBLIC if the visibility was not changed.
	 */
	virtual void TraitAliasFound(const wxString& namespaceName, const wxString& className, const wxString& traitUsedClassName,
		const wxString& traitMethodName, 
		const wxString& alias, TokenClass::TokenIds visibility) { }

	/**
	 * Override this method to perform custom logic when a trait method conflict has been resolved
	 * (an insteadof operation) 
	 *
	 * @param const wxString& namespace the fully qualified namespace of the class that was found
	 * @param className the name of the class that uses the trait (NOT a fully qualified or qualified name)
	 * @param traitUsedClassName the class name of the trait to be used. FULLY QUALIFIED in the proper manner using the current
	 *        defined namespace and any aliases (or will be left alone if they are already fully qualified).
	 *        In other words, this is the "unparsed" trait name and NOT what was actually in the input source code.
	 * @param traitMethodName name of the trait method that is to being resolved
	 * @param insteadOfList the list of fully qualified trait names that are listed after the insteadof operator
	 */
	virtual void TraitInsteadOfFound(const wxString& namespaceName, const wxString& className, const wxString& traitUsedClassName,
		const wxString& traitMethodName, const std::vector<wxString>& insteadOfList) { }
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
		const wxString& signature, const wxString& returnType, const wxString& comment, const int lineNumber) { }

	/**
	 * Override this method to perform any logic when the function body has ended (a closing brace '}' was encountered).
	 * 
	 * @param const wxString& namespace the fully qualified namespace of the function that was found
	 * @param const wxString& functionName the name of the method that was found
	 * @param startingPos the character position (of the closing brace '{' original source code)
	 * @param endingPos the character position (of the closing brace '}' original source code)
	 */
	virtual void FunctionScope(const wxString& namespaceName, const wxString& functionName, int startingPos, int endingPos) { }
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
		const VariableClass& variable, const ExpressionClass& expression, const wxString& comment) { }
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
	 * @param expression the expression that was parsed
	 * @see pelet::ExpressionClass
	 */
	virtual void ExpressionFound(const ExpressionClass& expression) { }
};

/**
 * This class represents a scope of a variable: ie the containing namespace, class, and function name.
 */
class PELET_API ScopeClass {

public:
	
	/**
	 * The fully qualified namespace; "" (empty string) for the root namespace
	 */
	wxString NamespaceName;
	
	/**
	 * The class name only
	 * Could be empty if the scope is a function
	 */
	wxString ClassName;
	
	/**
	 * The method or function name only.
	 */
	wxString MethodName;
	
	ScopeClass();

	~ScopeClass();
	
	ScopeClass(const pelet::ScopeClass& src);
	
	/**
	 * empties all attributes, class, method, namespaces and all aliases
	 */
	void Clear();

	/**
	 * empties the namespace aliases only
	 */
	void ClearAliases();
	
	void Copy(const pelet::ScopeClass& src);
	
	bool IsGlobalScope() const;
	
	bool IsGlobalNamespace() const;

	/**
	 * A map of the current aliases of the parsed file.
	 * The imported namespaces "use Name\Name as Alias;"
	 * If the import statement does not use an explicit alias, them it implicity
	 * uses the last namespace name as the alias.
	 * "use Name\Child" the Child is the alias.
	 * Note that no check is done to ensure aliases are unique.
	 */
	std::map<wxString, wxString, wxStringComparatorClass> GetNamespaceAliases() const;

	/**
	 * add a namespace alias. this is the result of a "use" statement
	 * For example, for the code
	 * 
	 *    use My\Full\Classname as Another;
	 * 
	 * namespaceName is "My\Full\Classname" and namespaceAlias is "Another"
	 * 
	 * @param namespaceName the namespace being used. by PHP rules, this is always absolute
	 * @param namespaceAlias the name the namespace is referred as  
	 */
	void AddNamespaceAlias(const wxString& namespaceName, const wxString& namespaceAlias);

	/**
	 * Resolve an alias
	 * For example, for the code
	 * 
	 *    use My\Full\Classname as Another;
	 * 
	 * namespaceName is "My\Full\Classname" and namespaceAlias is "Another"
	 * When alias is "Another", this method return "My\Full\Classname"
	 * 
	 * @param alias
	 * @return the namespace that the alias refers to. by PHP rules, this is always absolute
	 */
	wxString ResolveAlias(const wxString& alias) const;

	/**
	 * Calculate the fully qualified name from a namespace name, taking aliases
	 * into account.
	 * 
	 * example code:
	 * 
	 * 
	 * namespace MyProject {
	 * 
	 *    use My\Full\Classname as Another;
	 * 
	 *    class MyClass implements \\Framework\\Base, Another  { ... }
	 * 
	 * }
	 * 
	 * then names can be:  "MyClass" or "\\Framework\Base", "Another"
	 * declaredNamespace is always "MyProject"
	 * 
	 * @param name the name of the class / function / constant. this name may 
	 *        contain an alias, or may contain sub-namespaces
	 * @param declaredNamespace the namespace in which the class  class / function / constant
	 *        is defined in.  this is always fully qualified.
	 */
	wxString FullyQualify(const pelet::QualifiedNameClass& name, 
		const pelet::QualifiedNameClass& declaredNamespace) const;	

	/**
	 * copy a scope
	 */
	void operator=(const pelet::ScopeClass& scope);

private:

	/**
	 * Using a pointer here; if a file does not use namespaces then this 
	 * property will never get used.
	 * This object will own this pointer; thus we need to make sure that it
	 * gets copied when an instance of this object is copied.
	 */
	std::map<wxString, wxString, wxStringComparatorClass>* NamespaceAliases;

};

/** 
 * Start of hierarchy, used only as a way to group all AST data structures so that we
 * can store them in a collection for book-keeping
 */
class PELET_API AstItemClass {
	
	public:
		
		AstItemClass();
		
		virtual ~AstItemClass();
};

/**
 * These are all of the things we extract from PHP source code. An AST artifact
 * can help development of PHP applications by being able to quickly search for
 * declarations or extract info from variables.
 */
class PELET_API StatementClass : public AstItemClass {
	
public:

	enum Types {
		NIL = 0,
		CLASS_DECLARATION,
		DEFINE_DECLARATION,
		INCLUDE_STATEMENT,
		NAMESPACE_DECLARATION,
		NAMESPACE_USE, // 5
		
		METHOD_DECLARATION,
		PROPERTY_DECLARATION,
		TRAIT_USE_DECLARATION,
		TRAIT_ALIAS_DECLARATION,
		TRAIT_INSTEADOF_DECLARATION,  // 10
		FUNCTION_DECLARATION,
		
		ASSIGNMENT,
		ASSIGNMENT_LIST,
		EXPRESSION,
		VARIABLE,		// 15
		SCALAR
	};
	
	Types Type;
	
	StatementClass(Types type);
	
	virtual ~StatementClass();
};

/**
 * This represents a qualified name; it may have any number of namespaces attached to
 * it. Note that in PHP speak, a qualified name is NOT the same as a fully qualified
 * name; ie. a qualified name does not always start at the root namespace.
 * See http://php.net/manual/en/language.namespaces.rules.php
 */
class PELET_API QualifiedNameClass : public AstItemClass {

public:

	/**
	 * A PHPDoc comment attached to the beginning of this name
	 */
	wxString Comment;
	
	/**
	 * If TRUE then this is a fully Qualified namespace name
	 */
	bool IsAbsolute;

	QualifiedNameClass();
	void Clear();
	void Init(SemanticValueClass* value);
	void Init(const wxString& name);
	pelet::QualifiedNameClass* AppendName(SemanticValueClass* value);
	pelet::QualifiedNameClass* MakeAbsolute();
	
	/**
	 * @param name the namespace to prepend to this namespace. This is the current namespace
	 *        that the code belongs to.
	 * 
	 * Examples
	 * if name = "First\Child" and this = "Parent\Classname"
	 * then this method will make this namespace be "\First\Child\Parent\Classname"
	 * 
	 * if this name IsAbsolute = TRUE and name = "First\Child" and this = "\Parent\Classname"
	 * then this method will make this namespace be "\Parent\Classname"
	 * since this name is absolute no need to prepend the given namespace
	 */
	void PrependNamespace(const QualifiedNameClass& name);

	/**
	 * prints out the namespace as a string.
	 * This will have 
	 */
	wxString ToSignature() const;
	
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
	/*wxString Prepend(const QualifiedNameClass& name) const;
	*/

	pelet::QualifiedNameClass* MakeFromDeclaredNamespace(const pelet::QualifiedNameClass* qualifiedName);
	
	/**
	 * @return TRUE if this name is equal to "define"
	 */
	bool IsDefine() const;

private:

	std::vector<wxString> Namespaces;
		
};

/**
 * The VariablePropertyClass represents a single object property of a variable.
 * For example, the variable $this->myFunct()->name->first will have 
 * 4 VariableProperty objects: 
 * $this
 * myFunct()
 * name
 * first
 * 
 */
class PELET_API VariablePropertyClass {
	
	public:

	/**
	 * The method or property name being called. It may also be the variable name itself.
	 */
	wxString Name;
	
	/**
	 * If this property is a method, then this vector will contain the function call
	 * arguments.
	 */
	std::vector<pelet::ExpressionClass> CallArguments;

	/**
	 * If TRUE then this property is  a function call.
	 */
	bool IsFunction;
	
	/**
	 * If TRUE then this property was accessed with the static operator ('::')
	 * If FALSE then this property was accessed with the object operator ('->')
	 */
	bool IsStatic;
	
	VariablePropertyClass();
};


/**
 * This class will represent one PHP Expression. An expression is either
 * - a scalar ("name", 123, 123.43)
 * - an array ( array(1, 2, 3) , [1, 2, 3], array("one" => 1), [ "one" => 1] ) ***
 * - a variable ($abc)
 * - an operation of 1 variable (increment, decrement, cast, error suppression, clone)
 * - a "new" object construction (new MyClass())
 * - a function call (myFunct(), myFunct(1, 'one'))
 * - a long variable property / method chain   ($this->getName()->toString()->trim()->length)
 *
 * The following are currently not supported:
 * - an operation between 2 variables (arithmetic, boolean, bitwise)
 * - an operation between 1 variables and another expression
 * 
 * 
 * *** Note that simple array syntax is only possible in the PHP 5.4 parser.
 */
class PELET_API ExpressionClass : public StatementClass {
	
public:

	enum ExpressionTypes {
		SCALAR, //strings, ints, doubles, booleans are all lumped in, as PHP automatically casts 
		ARRAY,
		VARIABLE,
		FUNCTION_CALL,
		NEW_CALL,
		UNKNOWN // stuff that we just cannot figure out at parse time; dynamic variables; array accesses
	};

	/**
	 * The comment that is attached to the function call / variable.
	 */
	wxString Comment;
	
	/**
	 * The function where this expression is located.
	 */
	ScopeClass Scope;

	/**
	 * In the case of a variable; this is the list of  properties / methods
	 * that were successively invoked.
	 * For example; the expression "$this->name->toString()" will have 3 items in
	 * the chain list "$this" "->name" and "->toString()".
	 */
	std::vector<pelet::VariablePropertyClass> ChainList;
	
	/**
	 * In case this expression is an array declaration, this list will contain the
	 * array keys of the declared array. For example, for the expression:
	 * array('one' => 1, 'two' => 2)
	 * then ArrayKeys will contain 2 items: "one" and "two"
	 * Note that only scalar keys are supported for now
	 * Also note that if the source code does not define keys then this list will be empty
	 * as well; for example array(1, 2) will not produce any array keys.
	 */
	std::vector<wxString> ArrayKeys;

	ExpressionTypes ExpressionType;
	
	/**
	 * The line in the source where the expression was located. 
	 * @see LexicalAnalyzerClass::GetLineNumber
	 */
	int LineNumber;

	ExpressionClass(const pelet::ScopeClass& scope);

	/**
	 * Add a property to the variable chain list
	 
	 * @param propertyValue the token of the property/method to chain
	 * @param callArguments if property is a function call, this is the
	 *        arguments to that call
	 * @param isMethod TRUE if the property is a method
	 * @param operatorValue the token of the operation, used to determine if this is a static call '::'
	 */
	void AppendToChain(SemanticValueClass* propertyValue,
		std::vector<pelet::ExpressionClass> callArguments, bool isMethod, SemanticValueClass* operatorValue);
		
	/**
	 * Add a property to the variable chain list
	 
	 * @param propertyName the lexeme of the property/method to chain
	 * @param callArguments if property is a function call, this is the
	 *        arguments to that call
	 * @param isMethod TRUE if the property is a method
	 * @param isStatic TRUE if this is a static operation '::'
	*/
	void AppendToChain(const wxString& propertyName, 
		std::vector<pelet::ExpressionClass> callArguments, bool isMethod, bool isStatic);

	void Clear();
	void Copy(const ExpressionClass& src);
	void Copy(const VariableClass& variable);
	void ToNewCall(const wxString& className);
	void ToStaticFunctionCall(const wxString& className, const wxString& functionName, bool isMethod);
	void ToVariable(const wxString& variableName);
	void ToScalar(const wxString& scalarValue);
	void ToConstant(const wxString& className, const wxString& constantName);
	wxString FirstValue() const;

};

/**
 * The SymbolClass represents one PHP variable. This is different from an expression, as scalars and arrays are not variables.
 * A variable is:
 * 
 * - a simple variable ($name)
 * - a function call  (myFunct())
 * - an array access  ($person['name'])
 * - a long property chain ($this->myFunct()->name->first)
 * - a static member (MyClass::$instance)
 *
 */
class PELET_API VariableClass : public StatementClass {

public:

	/**
	 * Any PHP doc comment that was attached to this variable (appeared immediately before).
	 */
	wxString Comment;

	/**
	 * The name of the "type" of this variable that was parsed out of the PHPDoc. For example
	 * when a variable is decorated with " \@var $var TypeClass" comments
	 */
	wxString PhpDocType;
	
	/**
	 * The list of methods and properties that were called in order to create this variable. For instance,
	 * for the variable 
	 *   "$this->myFunc()->name->fix() "
	 * the ChainList will be
	 *   0)  $this
	 *   1)  ->myFunct()
	 *   2)  ->name
	 *   3)  ->fix()
	 *
	 * A variable's type can then be resolved by  going down the list in order;
	 * getting the type for item (0) then looking up the result of type for item (0) and item (1) [in this case
	 * "name" property of item 0's type], then looking at the type item (1) [ in this case the 
	 * "fix" property of item 1's type ]
	 *
	 * Any arguments to any of the calling functions will be ignored (since they do not contribute to the type info).
	 * Note that the ChainList contains only 1 item, then this variable is a "simple" variable ie."$name".
	 *
	 */
	std::vector<pelet::VariablePropertyClass> ChainList;
	
	/**
	 * If this variable is an array, then the ArrayKey is the key that is assigned
	 * For example, for the variable $samples['one'], 'one' is the ArrayKey
	 */
	wxString ArrayKey;
	
	/**
	 * The function where this variable is located.
	 */
	ScopeClass Scope;
		
	/**
	 * The line number in the source code where the variable was located in
	 * @see LexicalAnalyzerClass::GetLineNumber
	 */
	int LineNumber;
		
	VariableClass(const pelet::ScopeClass& scope);

	/**
	 * Copies all symbol properties from src to this object.
	 */
	void Copy(const VariableClass& src);

	void AppendToComment(SemanticValueClass* value);

	void Clear();
	
	/**
	 * Add a property to the variable chain list
	 * @param propertyValue the lexeme of the property/method to chain
	 */
	void AppendToChain(const wxString& propertyValue);
	
	/**
	 * Add a property to the variable chain list
	 * @param operatorLexeme the lexeme of the operation
	 * @param callArguments if property is a function call, this is the
	 *        arguments to that call
	 * @param isMethod TRUE if the property is a method
	 * @param isStatic if TRUE if the property is accessed statically ('::')
	 */
	void AppendToChain(const wxString& propertyValue, 
		std::vector<pelet::ExpressionClass> callArguments, bool isMethod, bool isStatic);
};

/**
 * A list of statements.  This class can hold both declarations (classes, methods)
 * or variable assignments and other expressions.
 * This class will NOT own any of the statement pointers.
 */
class PELET_API StatementListClass : public AstItemClass {

public:

	StatementListClass();
	
	size_t Size() const;
	
	pelet::StatementClass::Types TypeAt(size_t index) const;
	
	pelet::StatementClass* At(size_t index) const;

	/**
	 * initialize with a statement.
	 */
	void Init(pelet::StatementClass* statement);

	/**
	 * initialize with another statement list.
	 * all of the given StatementListClass statements are pushed into this list
	 */
	void Init(pelet::StatementListClass* statementList);

	/**
	 * @param statement to add to this list
	 * This class will NOT own any of the statement pointers.
	 */
	pelet::StatementListClass* Push(pelet::StatementClass* statement);
	
	/**
	 * @param list of statements to add to this list
	 * This class will NOT own any of the statement pointers.
	 */
	pelet::StatementListClass* PushAll(pelet::StatementListClass* statementList);

	/**
	 * @param statement to add to this list
	 * This class will NOT own any of the statement pointers.
	 */
	pelet::StatementListClass* PushFront(pelet::StatementClass* stmt);
	
	/**
	 * removes all of the items in this list. Note that the pointers
	 * themselves are NOT deleted.
	 */
	void Clear();
	
private:
	
	std::vector<StatementClass*> Statements;
	
};

/**
 * A declaration of a constant (through the define() call
 * or the const keyword)
 */
class PELET_API ConstantStatementClass : public StatementClass {
	
	public:

	/**
	 * The constant's identifier
	 */
	wxString Name;
	
	/**
	 * the namespace that the constant was defined in. if constant is 
	 * in the root namespace, then this will contain "\"
	 */
	wxString NamespaceName;
	
	wxString Comment;
	
	wxString Value;
	
	/**
	 * The line where the constant was defined in
	 * @see LexicalAnalyzerClass::GetLineNumber()
	 */
	int LineNumber;
	
	ConstantStatementClass();

	/**
	 * initialize a constant from the global namespace
	 * @param functionName the name of the define/constant
	 * @param params the parameters to the define() function,
	 *        to get the name of the new constant
	 * @param lineNumber the line number that the define is in
	 */
	void Init(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* params, int lineNumber);

	/**
	 * initialize a constant from the given namespace
	 * @param name the name of the define
	 * @param lineNumber the line number that the constant is in
	 * @param currentNamespace the namespace the constant in found in
	 */
	void Init(pelet::SemanticValueClass* value, int lineNumber, const pelet::QualifiedNameClass& currentNamespace);
};

class PELET_API NamespaceDeclarationClass : public StatementClass {
	
public:
	
	wxString NamespaceName;
	
	/**
	 * Character position where the 'namespace' keyword starts. This number is 
	 * 0-based.
	 * @see LexicalAnalyzerClass::GetCharacterPosition()
	 */
	int StartingPosition;

	NamespaceDeclarationClass();

	void Init(pelet::QualifiedNameClass* namespaceName, const pelet::TokenPositionClass& startingPosition);

	/**
	 * initializes this as a global namespace declaration
	 */
	void Init(const pelet::TokenPositionClass& startingPosition);
};

class PELET_API NamespaceUseClass : public StatementClass {
	
public:
	
	wxString NamespaceName;
	
	wxString Alias;

	/**
	 *  Character position where the namespace use statement starts. This number is 
	 *  0-based. It is the position where the "use" token starts. For example,
	 *  in the statement "use \First\Child" then StartingPosition is the position of "use"
	 *  Even in the case of where a use statement has commas, then StartingPosition is the 
	 *  position of the namespace token. For example, in the statement
	 *  "use \First\Child, \Sec\Child" then StartingPosition for 
	 *  the namespace \Sec\Child is the position of "use"
	 */
	int StartingPos;
	
	NamespaceUseClass();

	/**
	 * @param qualifiedName the namespace name . by PHP rules this is always absolute; if it is not it will
	 *        be made so
	 * @param alias the alias lexeme. this can be NULL if there is no alias
	 * @param bool TRUE if namespace name is an absolute namespace
	 */
	void Init(QualifiedNameClass* qualifiedName, pelet::SemanticValueClass* alias);
	
	wxString Set(QualifiedNameClass* qualifiedName, wxString alias);

	static pelet::StatementListClass* SetStartingPos(pelet::StatementListClass* namespaceStatements, const pelet::TokenPositionClass& useToken);
};

class PELET_API TraitUseClass : public StatementClass {
	
public:

	/**
	 * The fully qualified namespace of the class where the traits are being used in. This is the name of the
	 * namespace only
	 */
	wxString NamespaceName;
	
	/**
	 * The class where the traits are being used in. This is the name of the
	 * class only
	 */
	wxString ClassName;
	
	/**
	 * list of the fully qualified names of the traits that are used.
	 */
	std::vector<wxString> UsedTraits;
	
	TraitUseClass();

	void Init(pelet::QualifiedNameClass* usedTrait, 
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);
	
	pelet::TraitUseClass* AppendUse(pelet::QualifiedNameClass* usedTrait,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);
};

class PELET_API TraitAliasClass : public StatementClass {
	
public:
	
	/**
	 * The fully qualified namespace of the class where the traits are being used in. This is the name of the
	 * namespace only
	 */
	wxString NamespaceName;
	
	/**
	 * The class where the traits are being used in. This is the name of the
	 * class only
	 */
	wxString ClassName;
	
	/**
	 * The fully qualified class name of the trait class that is being aliased. This may be empty
	 * if the source code does not define it (ie. the alias does not need to resolve a conflict)
	 */
	wxString TraitUsedClassName;
	
	/**
	 * The name of the method being aliased (the "old" name)
	 */
	wxString TraitMethodReferenceName;
	
	/**
	 * the method alias; the "new" name
	 */
	wxString Alias;
	
	/**
	 * the new visbility of the alias. If source code does not define it, then this is public.
	 */
	pelet::TokenClass::TokenIds Visibility;
	
	TraitAliasClass();

	void SetMethodReference(pelet::SemanticValueClass* methodName,
		pelet::QualifiedNameClass* className,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);
	
	pelet::TraitAliasClass* SetModifiers(pelet::SemanticValueClass* modifier);

	pelet::TraitAliasClass* SetAlias(pelet::SemanticValueClass* alias);

	pelet::TraitAliasClass* SetScope(const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);
};

class PELET_API TraitInsteadOfClass : public StatementClass {
	
public:
	
	/**
	 * The fully qualified namespace of the class where the traits are being used in. This is the name of the
	 * namespace only
	 */
	wxString NamespaceName;
	
	/**
	 * The class where the traits are being used in. This is the name of the
	 * class only
	 */
	wxString ClassName;
	
	/**
	 * The fully qualified class name of the trait class that is being aliased. This may be empty
	 * if the source code does not define it (ie. the alias does not need to resolve a conflict)
	 */
	wxString TraitUsedClassName;
	
	/**
	 * The name of the method being resolved
	 */
	wxString TraitMethodReferenceName;
	
	/**
	 * list of fully qualified class names that define the method in question but
	 * will NOT be used
	 */
	std::vector<wxString> InsteadOfList;
	
	TraitInsteadOfClass();

	void Init(pelet::QualifiedNameClass* insteadOfClass, 
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);

	pelet::TraitInsteadOfClass* AppendInsteadOf(pelet::QualifiedNameClass* insteadOfClass, 
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);

	pelet::TraitInsteadOfClass* SetMethodReference(pelet::TraitAliasClass* traitAlias);

};

/**
 * Holds both sides of an assignment statement in the form
 * 
 * variable = expression
 * 
 * The right hand side of the equals sign (the value to assign) will be stored
 * in the properties inherited from the expression class
 */
class PELET_API AssignmentExpressionClass : public ExpressionClass {
		
	public:

	/**
	 * The left hand side of the equals sign; the variable being assigned
	 */
	VariableClass Destination;

	AssignmentExpressionClass(const pelet::ScopeClass& scope);

	/**
	 * Copies the expression properties from src.
	 */
	void Set(pelet::ExpressionClass& src);	
};

/**
 * Holds both sides of an assignment statement in the form
 * 
 * list(variable1, variable2, variable3) = expression
 * 
 * The right hand side of the equals sign (the value to assign) will be stored
 * in the properties inherited from the expression class
 */
class PELET_API AssignmentListExpressionClass : public ExpressionClass {
		
	public:

	/**
	 * The left hand side of the equals sign; the variable being assigned
	 */
	std::vector<VariableClass> Destinations;

	AssignmentListExpressionClass(const pelet::ScopeClass& scope);

	/**
	 * Copies the expression properties from src.
	 */
	void Set(pelet::ExpressionClass& src);	
};

/**
 * Class that will group a token along with the position
 * where it was found in the source.
 * We will use this for most tokens; for most tokens are keywords or
 * operators and we do not need to stringify those.
 */
class TokenPositionClass {

public: 

	/**
	 * The ID of the token
	 */
	int Token;

	/**
	 * The character position of this token 
	 * @see LexicalAnalyzerClass::GetCharacterPosition()
	 */
	int Pos;
	
	/**
	 * The line number that the token was founs in.
	 * @see LexicalAnalyzerClass::GetLineNumber()
	 */
	int LineNumber;

};

/**
 * This is the low-level building block that the parser creates as it is traversing the source
 * code.  The parser's job will be to convert these low-level building blocks into 
 * higher-level class, method, function, and variable declarations.
 *
 * using pointers here because Bison will create a union with this type as one of the values;
 * and unions values have to be Plain Old Data types (which wxString is not).
 * Also, this cannot have a non-trival constructor; Init() should be called right
 * after object construction.
 * Be sure to init and free with the ParserObserverClass; that way memory can be 
 * cleaned up correctly.
 */
class PELET_API SemanticValueClass : public AstItemClass {

public:

	/**
	 * The textual value
	 */
	wxString Lexeme;

	/**
	 * This is the **PHPDoc** comment that was immediately before this token.
	 */
	wxString Comment;

	/**
	 * The ID of the token
	 */
	int Token;

	/**
	 * The character position of this token 
	 * @see LexicalAnalyzerClass::GetCharacterPosition()
	 */
	int Pos;
	
	/**
	 * The line number that the token was founs in.
	 * @see LexicalAnalyzerClass::GetLineNumber()
	 */
	int LineNumber;
	
	SemanticValueClass();
};

/**
 * Data structure that will hold the data points we can to keep track of
 * for PHP class structures.
 */
class PELET_API ClassSymbolClass : public StatementClass {

	public:

	/**
	 * This is NEVER qualified
	 */
	wxString ClassName;
	
	wxString NamespaceName;
	
	wxString Comment;
	
	/** 
	 * This is always fully qualified name
	 */
	wxString ExtendsFrom;
	
	/** 
	 * These are always fully qualified names
	 */
	std::vector<wxString> ImplementsList; 
	
	int StartingLineNumber, EndingLineNumber;
	
	bool IsAbstract;
	bool IsFinal;
	bool IsInterface;
	bool IsTrait;

	ClassSymbolClass();

	void GrabClassName(SemanticValueClass* value);
	void AppendToComment(SemanticValueClass* value);
	void Clear();

	ClassSymbolClass* AddToImplements(pelet::QualifiedNameClass* implementsClassName, 
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);

	ClassSymbolClass* SetExtends(pelet::QualifiedNameClass* extendsClassName, 
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);
	
	ClassSymbolClass* SetAll(pelet::SemanticValueClass* nameValue, pelet::ClassSymbolClass* classTypeSymbol, 
		pelet::ClassSymbolClass* extendsSymbol, pelet::ClassSymbolClass* implementsSymbol, 
		const pelet::TokenPositionClass& endToken,
		const pelet::QualifiedNameClass& currentNamespace);

	ClassSymbolClass* SetFlags(pelet::SemanticValueClass* commentValue, 
		bool isAbstract, bool isFinal, bool isInterface, bool isTrait);
	
	wxString ToSignature() const;
	
};

/**
 * This is a list of function / method parameters for a single function / method. It store
 * the name and type info of each parameter.
 */
class PELET_API ParametersListClass : public AstItemClass {

public:
	ParametersListClass();

	void Create();
	void CreateWithOptionalType(SemanticValueClass* value);
	
	/**
	 * @param className must be the FULLY QUALIFIED class name
	 */
	void CreateWithOptionalType(const wxString& className);

	/**
	 * Append another parameter
	 */
	pelet::ParametersListClass* Append(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);
	
	/**
	 * Create the first parameter
	 */
	void Init(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace); 

	void Clear();	
	void SetName(SemanticValueClass* value, bool isReference);

	/**
	 * Recreate the source code by 'unparsing' the parameter list
	 * @return concatenated paramter names; delimited with a comma. Also,
	 * the returned string will have parenthesis already present.
	 * For example "($name, $places)"
	 */
	wxString ToSignature() const;

	/**
	 * @return the number of parameters that have been created
	 */
	size_t GetCount() const;

	/**
	 * @param index the parameter to get
	 * @param the parameter name will be set in this variable
	 * @param optionalType the parameter's type will be set in this variable
	 */
	void Param(size_t index, wxString& param, wxString& optionalType) const;

private:
	std::vector<wxString> Params;
	std::vector<wxString> OptionalTypes;
};

/**
 * Data structure that will hold the data points we can to keep track of
 * for PHP class method & property structures.
 */
class PELET_API ClassMemberSymbolClass : public StatementClass {

public:

	/**
	 * If this is a property, the MemberName will
	 * have the siguil ('$')
	 */
	wxString MemberName, NamespaceName, ClassName;
	
	ParametersListClass ParametersList;
	
	/**
	 * This class will NOT own the statement pointers in the list
	 */
	StatementListClass MethodStatements;
	
private:

	wxString Comment;

	/**
	 *  for methods / functions this is the type that is returned by the  method / function
	 * for properties, this is the type of the property
	 * note that this is always parsed out of the PHPDoc comment, as PHP syntax does not 
	 * allow for type declarations
	 */
	wxString ReturnType;
	
public:
	
	/** line number, 1-based
	 */
	int StartingLineNumber;
	
	/** 
	 * character position of method body, 0 based 
	 * In the case of abstract methods, StartingPosition is the position of the semicolon
	 * Otherwise StartingPosition is the position of the start brace '{'
	 */
	int StartingPosition;
	
	/** 
	 * character position of method body, 0 based 
	 * In the case of abstract methods, EndingPosition is the position of the semicolon
	 * Otherwise EndingPosition is the position of the start brace '{' 
	 */
	int EndingPosition;

	bool IsPublicMember;
	
	bool IsProtectedMember;
	
	bool IsPrivateMember;
	
	bool IsStaticMember;

	bool IsConstMember;

	bool IsAbstractMember;

	bool IsFinalMember;

	bool IsReturnReference;

	ClassMemberSymbolClass();
	void SetNameAndReturnReference(SemanticValueClass* nameValue, bool isReturnReference, SemanticValueClass* functionValue, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
	void SetAsConst(SemanticValueClass* nameValue, SemanticValueClass* commentValue, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
	wxString ToMethodSignature(wxString variablesSignature) const;
	void AppendToComment(SemanticValueClass* value, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
	
	void SetAsPublic();
	void SetAsProtected();
	void SetAsPrivate();
	void Clear();
	wxString GetReturnType() const;
	wxString GetComment() const;

	pelet::ClassMemberSymbolClass* MakeBody(pelet::StatementListClass* bodyStatements, 
		const pelet::TokenPositionClass& startingPositionTokenValue, const pelet::TokenPositionClass& endingPositionTokenValue);

	pelet::ClassMemberSymbolClass* Make(pelet::SemanticValueClass* varValue, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);

	pelet::ClassMemberSymbolClass* MakeAsPublicVariable(pelet::SemanticValueClass* varValue, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);

	pelet::ClassMemberSymbolClass* MakeFunction(pelet::SemanticValueClass* nameValue, 
		bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters,
		const pelet::TokenPositionClass& startingBodyTokenValue, const pelet::TokenPositionClass& endingBodyTokenValue,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);

	pelet::ClassMemberSymbolClass* MakeMethod(pelet::SemanticValueClass* nameValue, 
		pelet::ClassMemberSymbolClass* modifiers,
		bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters, 
		pelet::ClassMemberSymbolClass* methodBody,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);
	
	pelet::ClassMemberSymbolClass* MakeVariable(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue, 
		bool isConstant, const int endingPosition, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);
	
	static pelet::StatementListClass* MakeVariables(pelet::StatementListClass* variableStatements, pelet::ClassMemberSymbolClass* modifiers,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
	
	pelet::ClassMemberSymbolClass* SetModifier(pelet::SemanticValueClass* modifierValue);
};

class PELET_API ScalarStatementClass : public StatementClass {

public: 

	wxString Scalar;

	ScalarStatementClass();

	void Init(pelet::SemanticValueClass* value);

};

class PELET_API IncludeStatementClass : public StatementClass {

public: 

	/**
	 * The file being included.  This is only valid when the include
	 * / require statement has a scalar as the parameter
	 */
	wxString File;

	/**
	 * The line number where the include statement was found.
	 */
	int LineNumber;

	IncludeStatementClass();

	void Init(pelet::StatementClass* scalar, int lineNumber);

};

/**
 * This is the parser type that the bison parser uses. A grammar rules outputs
 * to exactly ONE of these properties
 */
typedef union ParserType {
	pelet::StatementListClass *statementList;
	pelet::QualifiedNameClass *qualifiedName;
	pelet::ConstantStatementClass *constant;
	pelet::ClassSymbolClass *classSymbol;
	pelet::ClassMemberSymbolClass *classMemberSymbol;
	pelet::ParametersListClass *parametersList;
	pelet::ExpressionClass *expression;
	pelet::VariableClass *variable;
	pelet::TraitUseClass *traitUse;
	pelet::TraitAliasClass *traitAlias;
	pelet::TraitInsteadOfClass *traitInsteadOf;
	pelet::SemanticValueClass *semanticValue;
	bool isMethod;
	bool isComma;
} ParserTypeClass;

/**
 * Get the return type from the '\@return' / '\@var' annotation
 * 
 * @param const wxString& phpDocComment the comment
 * @param bool varAnnotation if false, will return the word after '\@var', else return the word after '\@return'
 * @param scope the scope where the PHPDoc comment is located in
 * @param currentNamespace the current namespace we are in
 * @return wxString
 */
wxString ReturnTypeFromPhpDocComment(const wxString& phpDocComment, bool varAnnotation,
										  const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);

/**
 * Turn a PHPDoc type into a fully qualified class name. The phpdoc type will get
 * qualified according to the same PHP rules as a type hint; the current namespace
 * and any aliases will be correctly accounted for.
 * 
 * @param phpDocType the parsed type in the PHPDoc, ie. in "@return StringClass" then this parameter
 *        should be "StringClass"
 * @param scope the scope where the PHPDoc comment is located in
 * @param currentNamespace the current namespace we are in
 * @param the fully qualified class name
 */
wxString PhpDocTypeToAbsoluteClassname(wxString phpDocType, 
											const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);

/**
 * parses out the given PHPDoc comment and creates property or method declarations for
 * \@property, \@property-read, \@property-write, and \@method 
 * doc tags.
 * @param allAstItems the created items will be appended to this list
 * @param statement the declarations that are created will be added to this list. to keep
 *        things consistant, the pointers added to statements will be added to allAstItems
 *        that way allAstItems manages the pointers
 */
void CreateMagicMethodsAndProperties(std::vector<pelet::AstItemClass*>& allAstItems,
									 pelet::StatementListClass* statements, 
									 const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace,
									 const wxString& phpDocComment, const int lineNumber);

/**
 * sets either varName or varType depending on whether text contents are a variable name or not.
 */
void FillNameOrType(const wxString& text, wxString& varName, wxString& varType);

} 

#endif