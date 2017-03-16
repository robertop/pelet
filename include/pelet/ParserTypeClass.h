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
#include <unicode/unistr.h>
#include <vector>
#include <map>

namespace pelet {

// these classes are defined below.
class StatementClass;
class StatementListClass;
class TokenPositionClass;
class SemanticValueClass;
class ConstantClass;
class AstItemClass;
class ParametersListClass;
class QualifiedNameClass;
class ExpressionClass;
class VariableClass;
class AssignmentExpressionClass;
class AssignmentListExpressionClass;
class AssignmentCompoundExpressionClass;
class BinaryOperationClass;
class UnaryOperationClass;
class UnaryVariableOperationClass;
class TernaryOperationClass;
class InstanceOfOperationClass;
class ScalarExpressionClass;
class NewInstanceExpressionClass;
class GlobalVariableStatementClass;
class StaticVariableStatementClass;
class ArrayExpressionClass;
class ArrayPairExpressionClass;
class IncludeExpressionClass;
class ClosureExpressionClass;
class IssetExpressionClass;
class EvalExpressionClass;
class AnonymousClassExpressionClass;
class ConstantStatementClass;
class TypeHintClass;

/**
 * Case-sensitive string comparator for use as STL Predicate
 */
class PELET_API UnicodeStringComparatorClass {
public:
		bool operator()(const UnicodeString& str1, const UnicodeString& str2) const {
			return (str1.compare(str2) < (int8_t)0) ? true : false;
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
	 * @param const UnicodeString& namespace the fully qualified "declared" namespace of the class that was found
	 * @param const UnicodeString& className the name of the class that was found
	 * @param const UnicodeString& baseClassName the name of the base class 
	 *        Note that the extends class name is FULLY QUALIFIED in the proper manner using the current
	 *        defined namespace and any aliases (or will be left alone if they are already fully qualified).
	 *        In other words, this is the "unparsed" class name and NOT what was actually in the input source code.
	 * @param const UnicodeString& implmentedInterfaceNames comma-separated list of interfaces that
	 *        the class implements. 
	 *        Note that the implements class names are FULLY QUALIFIED in the proper manner using the current
	 *        defined namespace and any aliases (or will be left alone if they are already fully qualified).
	 *        In other words, this is the "unparsed" implements list and NOT what was actually in the input source code.
	 * @param const UnicodeString& comment PHPDoc attached to the class, interface, or trait
	 * @param lineNumber the line number (1-based) that the class was found in
	 */
	virtual void ClassFound(const UnicodeString& namespaceName, const UnicodeString& className, 
		const UnicodeString& signature,
		const UnicodeString& baseClassName, const UnicodeString& implementInterfaceNames, 
		const UnicodeString& comment, const int lineNumber) { }
		
	/**
	 * Override this method to perform any logic when the class has ended (a closing brace '}' was encountered).
	 *
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that was found
	 * @param const UnicodeString& className the name of the class that was found
	 * @param pos the character position (of the closing brace '}' original source code)
	 */
	virtual void ClassEnd(const UnicodeString& namespaceName, const UnicodeString& className, int pos)  { }
	
	/**
	 * Override this method to perform any custom logic when a define declaration is found.
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the define that was found
	 * @param const UnicodeString& variableName the name of the defined variable
	 * @param const UnicodeString& variableValue the variable value
	 * @param const UnicodeString& comment PHPDoc attached to the define
	 * @param lineNumber the line number (1-based) that the define was found in
	 */
	virtual void DefineDeclarationFound(const UnicodeString& namespaceName, const UnicodeString& variableName, const UnicodeString& variableValue, 
		const UnicodeString& comment, const int lineNumber) { }
		
	/**
	 * Override this method to perform any custom logic when an include / require / require_once / include_once declaration is found.
	 * 
	 * @param const UnicodeString& filename the name of the included file, but only if the statement
	 *        is a constant expression. Otherwise, lineNumber will be an empty string 
	 * @param lineNumber the line number (1-based) that the include/ was found in
	 */
	virtual void IncludeFound(const UnicodeString& filename, const int lineNumber) { }
	
	/**
	 * Override this method to perform any custom logic when a namespace declaration is found.
	 * 
	 * @param const UnicodeString& namespaceName the name of the namespace name. Name will
	 *        be fully qualified (starts with '\')
	 * @param startingPos the character position (of the 'namespace' keyword in the original source code)
	 *        this is 0-based
	 */
	virtual void NamespaceDeclarationFound(const UnicodeString& namespaceName, int startingPos) { }
	
	/**
	 * Override this method to perform any custom logic when a namespace is imported ("use" keyword).
	 * 
	 * @param UnicodeString namespaceName the fully qualified namespace that is being imported. It will 
	 *        always begin with a leading slash, even if the original source did not include it
	 * @param alias any alias to the namespaceName. alias will never be empty. If the code does not
	 *        specify an alias, the alias will be the last part of the namespace.
	 *        For example the statement "use First\Class;" will result in the  alias being "Class"
	 * @param lineNumber the line number (1-based) that the namespace statement was found in
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
	virtual void NamespaceUseFound(const UnicodeString& namespaceName, const UnicodeString& alias, int lineNumber, int startingPos) { }

	/**
	 * Override this method to perform any custom logic when a function is imported ("use function" keyword).
	 * 
	 * @param UnicodeString functionName the fully qualified function name that is being imported. It will 
	 *        always begin with a leading slash, even if the original source did not include it
	 * @param alias any alias to the function. alias will never be empty. If the code does not
	 *        specify an alias, the alias will be the last part of the namespace.
	 *        For example the statement "use First\Capitalize;" will result in the  alias being "Capitalize"
	 * @param lineNumber the line number (1-based) that the use function statement was found in
	 * @param startingPos
	 *        Character position where the use function statement starts. This number is 
	 *        0-based. It is the position where the "use" token starts. For example,
	 *        in the statement "use \First\Capitalize" then StartingPosition is the position of "use"
	 *        Even in the case of where a use statement has commas, then StartingPosition is the 
	 *        position of the namespace token. For example, in the statement
	 *        "use \First\Capitalize, \Sec\Titleize" then StartingPosition for 
	 *        the namespace \Sec\Titleize is the position of "use"
	 * @see LexicalAnalyzerClass::GetCharacterPosition()
	 */
	virtual void UseFunctionFound(const UnicodeString& functionName, const UnicodeString& alias, int lineNumber, int startingPos) { }

	/**
	 * Override this method to perform any custom logic when a constant is imported ("use constant" keyword).
	 * 
	 * @param UnicodeString constatntName the fully qualified constant that is being imported. It will 
	 *        always begin with a leading slash, even if the original source did not include it
	 * @param alias any alias to the constant. alias will never be empty. If the code does not
	 *        specify an alias, the alias will be the last part of the namespace.
	 *        For example the statement "use First\MAX_PEOPLE;" will result in the  alias being "MAX_PEOPLE"
	 * @param lineNumber the line number (1-based) that the use statement was found in
	 * @param startingPos
	 *        Character position where the constant use statement starts. This number is 
	 *        0-based. It is the position where the "use" token starts. For example,
	 *        in the statement "use \First\MAX_PEOPLE" then StartingPosition is the position of "use"
	 *        Even in the case of where a use statement has commas, then StartingPosition is the 
	 *        position of the namespace token. For example, in the statement
	 *        "use \First\MAX_PEOPLE, \Sec\MIN_DISTANCE" then StartingPosition for 
	 *        the namespace \Sec\MIN_DISTANCE is the position of "use"
	 * @see LexicalAnalyzerClass::GetCharacterPosition()
	 */
	virtual void UseConstantFound(const UnicodeString& constantName, const UnicodeString& alias, int lineNumber, int startingPos) { }
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
	 * @param hasVariableArguments TRUE if the function takes in variable arguments; this is determined
	 *                             by the function/method body calling funct_get_arg() OR func_get_args() 
	 */
	virtual void MethodFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, 
		TokenClass::TokenIds visibility, bool isStatic, const int lineNumber,
		bool hasVariableArguments) { }
	
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
		TokenClass::TokenIds visibility, bool isConst, bool isStatic, const int lineNumber) { }

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
		const UnicodeString& methodName, int startingPos, int endingPos) { }

	/**
	 * Override this method to perform custom logic when a trait user statement has been found
	 *
	 * @param const UnicodeString& namespace the fully qualified namespace of the class
	 * @param className the name of the class that uses the trait (NOT a fully qualified or qualified name)
	 * @param traitName the fully qualified name of the trait to be used. FULLY QUALIFIED in the proper manner using the current
	 *        defined namespace and any aliases (or will be left alone if they are already fully qualified).
	 *        In other words, this is the "unparsed" trait name and NOT what was actually in the input source code. 
	 */
	virtual void TraitUseFound(const UnicodeString& namespaceName, const UnicodeString& className, 
		const UnicodeString& fullyQualifiedTraitName) { }
	
	/**
	 * Override this method to perform custom logic when a trait method has been aliased
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that uses the trait
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
	virtual void TraitAliasFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& traitUsedClassName,
		const UnicodeString& traitMethodName, 
		const UnicodeString& alias, TokenClass::TokenIds visibility) { }

	/**
	 * Override this method to perform custom logic when a trait method conflict has been resolved
	 * (an insteadof operation) 
	 *
	 * @param const UnicodeString& namespace the fully qualified namespace of the class that was found
	 * @param className the name of the class that uses the trait (NOT a fully qualified or qualified name)
	 * @param traitUsedClassName the class name of the trait to be used. FULLY QUALIFIED in the proper manner using the current
	 *        defined namespace and any aliases (or will be left alone if they are already fully qualified).
	 *        In other words, this is the "unparsed" trait name and NOT what was actually in the input source code.
	 * @param traitMethodName name of the trait method that is to being resolved
	 * @param insteadOfList the list of fully qualified trait names that are listed after the insteadof operator
	 */
	virtual void TraitInsteadOfFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& traitUsedClassName,
		const UnicodeString& traitMethodName, const std::vector<UnicodeString>& insteadOfList) { }
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
	 * @param hasVariableArguments TRUE if the function takes in variable arguments; this is determined
	 *                             by the function/method body calling funct_get_arg() OR func_get_args() 
	 */
	virtual void FunctionFound(const UnicodeString& namespaceName, const UnicodeString& functionName, 
		const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment, const int lineNumber,
		bool hasVariableArguments) { }

	/**
	 * Override this method to perform any logic when the function body has ended (a closing brace '}' was encountered).
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the function that was found
	 * @param const UnicodeString& functionName the name of the method that was found
	 * @param startingPos the character position (of the closing brace '{' original source code)
	 * @param endingPos the character position (of the closing brace '}' original source code)
	 */
	virtual void FunctionScope(const UnicodeString& namespaceName, const UnicodeString& functionName, int startingPos, int endingPos) { }
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
	 * A special case here is that pelet will report type hinted variables here in the VariableFound callback. When
	 * pelet sees a comment in the form "@var $user AdminUser" it will parse the variable name and class name
	 * and call the VariableFound callback.  In this case, expression contains no information since there
	 * is no right hand side of an assignment. variable.IsPhpDocVariable will be set to TRUE and the 
	 * parsed class name is available from variable.PhpDocType.
	 * 
	 * @param const UnicodeString& namespace the fully qualified namespace of the containing class / function.
	 * @param const UnicodeString& className class where the variable was found. may be empty is variable is scoped 
	 *        inside a function or is global.
	 * @param const UnicodeString& methodName function/method name where the variable was found. may be empty if 
	 *        variable is globally scoped.
	 * @param const VariableClass& variable the name of the variable that was found, along with any array keys that were used
	 *       in the left hand of the assignment. 
	 * @param const ExpressionClass* expression the expression assigned to the variable. do not take ownership of the pointer.
	 * @param const UnicodeString& comment PHPDoc attached to the variable
	 * 
	 * @see pelet::VariableClass
	 */
	virtual void VariableFound(const UnicodeString& namespaceName, const UnicodeString& className, const UnicodeString& methodName, 
		const VariableClass& variable, pelet::ExpressionClass* expression, const UnicodeString& comment) { }
};

/**
 * Interface to inherit when needing to be notified of all expressions.  An object of 
 * this type will be passed to the ParserClass; the parser will call the appropriate
 * method when an expression has been parsed. This interface is most useful when needing to parse
 * a single expression.
 * A note about pointers:
 * All of the expression pointers are owned by ExpressionObserverClass and will be 
 * deleted when ExpressionObserverClass goes out of scope.  They can also be 
 * cleaned up manually by calling CleanupStatements() but it should rarely
 * need to be done.
 * 
 * FAQ: Why isn't an observer method being called?
 * 
 * Each callback (ExpressionVariableFound, ExpressionIncludeFound, etc...) is
 * called when the top-level statement matches the callback.
 * For example, in this expression:
 * 
 * $x += $this->myMethod($y, $z) + $this->another();
 * 
 * the ONLY callback that will be called is
 * ExpressionCompounAssignment.  The ExpressionVariableFound
 * and the ExpressionBinaryOperationFound will NOT be called
 * because they were not the top-level statement. However,
 * the the binary operation expressions will
 * be given as the Expression of the compound assignment, and
 * the binary operation expression will have Variable 
 * for the left and right hand sides.
 */
class PELET_API ExpressionObserverClass {

public:

	ExpressionObserverClass();

	virtual ~ExpressionObserverClass();

	/**
	 * Override this method to get the pseudo-parse tree for a single variable expression.($x, $x->func())
	 * This method only gets called when the top-level statement is a variable. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param expression the variable expression that was parsed.
	 * @see pelet::AssignmentExpressionClass
	 */
	virtual void ExpressionVariableFound(pelet::VariableClass* expression) { }

	/**
	 * Override this method to get the pseudo-parse tree for a single assignment expression.($x = $y)
	 * This method only gets called when the top-level statement is an assignment. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param expression the assignment expression that was parsed.
	 * @see pelet::AssignmentExpressionClass
	 */
	virtual void ExpressionAssignmentFound(pelet::AssignmentExpressionClass* expression) { }

	/**
	 * Override this method to get the pseudo-parse tree for a single assignment list expression.(list($x, $z) = $y)
	 * This method only gets called when the top-level statement is a list assignment. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param expression the assignment list expression that was parsed.
	 * @see pelet::AssignmentListExpressionClass
	 */
	virtual void ExpressionAssignmentListFound(pelet::AssignmentListExpressionClass* expression) { }

	/**
	 * Override this method to get the pseudo-parse tree for a single compound assignment expression ($x += $y).
	 *  This method only gets called when the top-level statement is a compound assignment. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param expression the assignment expression that was parsed.
	 * @see pelet::AssignmentCompoundExpressionClass
	 */
	virtual void ExpressionAssignmentCompoundFound(pelet::AssignmentCompoundExpressionClass* expression) { }

	/**
	 * Override this method to get the pseudo-parse tree for a binary operation expression ($x + $y).
	 *  This method only gets called when the top-level statement is a binary operation. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param expression the binary expression that was parsed.
	 * @see pelet::BinaryOperationClass
	 */
	virtual void ExpressionBinaryOperationFound(pelet::BinaryOperationClass* expression) { }

	/**
	 * Override this method to get the pseudo-parse tree for a unary expression operation expression (!feof()).
	 * This method only gets called when the top-level statement is a unary operation. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param expression the unary expression that was parsed.
	 * @see pelet::UnaryOperationClass
	 */
	virtual void ExpressionUnaryOperationFound(pelet::UnaryOperationClass* expression) { }

	/**
	 * Override this method to get the pseudo-parse tree for a unary variable operation expression ($x++).
	 *  This method only gets called when the top-level statement is a unary variable operation. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param expression the unary expression that was parsed.
	 * @see pelet::UnaryOperationClass
	 */
	virtual void ExpressionUnaryVariableOperationFound(pelet::UnaryVariableOperationClass* expression) { }

	/**
	 * Override this method to get the pseudo-parse tree for a ternary operation expression ($x ? $y : $z).
	 * This method only gets called when the top-level statement is a ternary operation. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param expression the ternary expression that was parsed.
	 * @see pelet::TernaryOperationClass
	 */
	virtual void ExpressionTernaryOperationFound(pelet::TernaryOperationClass* expression) { }
	
	/**
	 * Override this method to get the pseudo-parse tree for a instanceof operation expression ($x instanceof MyClass).
	 * This method only gets called when the top-level statement is an instanceof operation. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param expression the instanceof expression that was parsed.
	 * @see pelet::InstanceOfOperationClass
	 */
	virtual void ExpressionInstanceOfOperationFound(pelet::InstanceOfOperationClass* expression) { }

	/**
	 * Override this method to get the pseudo-parse tree for a scalar expression (NAME).
	 * could be a number, string, or a namespace/class name;
	 * This method only gets called when the top-level statement is a scalar. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * 
	 * @param expression the scalar expression that was parsed.
	 * @see pelet::ScalarExpressionClass
	 */
	virtual void ExpressionScalarFound(pelet::ScalarExpressionClass* expression) { }

	/**
	 * Override this method to get the pseudo-parse tree for a new instance expression ( new MyClass).
	 * This method only gets called when the top-level statement is a new operation. See
	 * the ExpressionObserverClass class comment for more info.
	* 
	 * @param expression the new instance expression that was parsed.
	 * @see pelet::NewInstanceExpressionClass
	 */
	virtual void ExpressionNewInstanceFound(pelet::NewInstanceExpressionClass* expression) { }

	/**
	 * Override this method to get the pseudo-parse tree for a function argument.
	 * 
	 * @param variable the variable that was parsed.
	 * @see pelet::VariableClass
	 */
	virtual void ExpressionFunctionArgumentFound(pelet::VariableClass* variable) {}

	/**
	 * Override this method to get the pseudo-parse tree for an anonymous class,
	 * including all methods defined in that anonymous class.
	 * 
	 * @param expr the AST for the anonymous class that was parsed.
	 * @see pelet::AnonymousClassExpressionClass
	 */
	virtual void ExpressionAnonymousClassFound(pelet::AnonymousClassExpressionClass* expr) {}
	
	/**
	 * Override this method to get the pseudo-parse tree for a global variable declaration
	 * 
	 * @param variables the global variables that were parsed
	 * @see pelet::GlobalVariableStatementClass
	 */
	virtual void StatementGlobalVariablesFound(pelet::GlobalVariableStatementClass* variables) {}

	/**
	 * Override this method to get the pseudo-parse tree for a static variable declaration
	 * 
	 * @param variables the global variables that were parsed
	 * @see pelet::StaticVariableStatementClass
	 */
	virtual void StatementStaticVariablesFound(pelet::StaticVariableStatementClass* variables) {}

	/**
	 * Override this method to get the pseudo-parse tree for an include expression.
	 * This method only gets called when the top-level statement is an include expression. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param the expression that was parsed.
	 * @see pelet::IncludeExpressionClass
	 */
	virtual void ExpressionIncludeFound(pelet::IncludeExpressionClass* expr) {}

	/**
	 * Override this method to get the pseudo-parse tree for closure expression.
	 * The closure expression contains the list of expressions that were inside the
	 * closure.
	 * This method only gets called when the top-level statement is a closure. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param the expression that was parsed.
	 * @see pelet::ClosureExpressionClass
	 */
	virtual void ExpressionClosureFound(pelet::ClosureExpressionClass* expr) {}
	
	/**
	 * Override this method to get the pseudo-parse tree for an isset expression.
	 * The isset expression contains the list of expressions that were inside the
	 * isset call.
	 * This method only gets called when the top-level statement is an isset() expression. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param the expression that was parsed.
	 * @see pelet::IssetExpressionClass
	 */
	virtual void ExpressionIssetFound(pelet::IssetExpressionClass* expr) {}
	
	/**
	 * Override this method to get the pseudo-parse tree for a single array expression.
	 * array(1, 2 => 3)
	 * This method only gets called when the top-level statement is an array expression. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param expression the variable expression that was parsed.
	 * @see pelet::ArrayExpressionClass
	 */
	virtual void ExpressionArrayFound(pelet::ArrayExpressionClass* expression) { }
	
	/**
	 * Override this method to get the pseudo-parse tree for an eval expression.
	 * eval('code')
	 * This method only gets called when the top-level statement is an eval() call. See
	 * the ExpressionObserverClass class comment for more info.
	 * 
	 * @param expression the eval expression that was parsed.
	 * @see pelet::EvalExpressionClass
	 */
	virtual void ExpressionEvalFound(pelet::EvalExpressionClass* expression) { }

	/**
	 * Override this method to get the pseudo-parse tree for a declare directive
	 * declare(ticks=1)
	 * 
	 * @param expression the constante statement that was parsed.
	 * @see pelet::ConstantStatementClass
	 */
	virtual void ExpressionDeclareDirectiveFound(pelet::ConstantStatementClass* stmt) { }

	/**
	 * this method will take ownership of the given statement pointers. after a call
	 * to this method, this object will now own all of the pointers
	 * and will delete the statements sometime later. This will usually be called by the
	 * parser.
	 */
	void StatementOwnership(std::vector<pelet::AstItemClass*> statements);

	/**
	 * Cleanup (delete) the statements given to StatementOwnership() This will
	 * be called when this object goes out of scope, but it can be called earlier if needed.
	 * However it should not be called inside the callbacks.
	 */
	void CleanupStatements();

private:

	/**
	 * This class will own the pointers.
	 */
	std::vector<pelet::AstItemClass*> Statements;
};

/**
 * A "simple" observer useful when needing to recursively descend down
 * the AST to look a single type of expression.  For example, in this
 * expression
 * 
 *  $x += $this->myMethod($y, $z) + $this->another();
 * 
 * the OnAnyExpression() method will be called 5 times
 * with the following parameters
 * 
 * VariableExpression - $x
 * VariableExpression - $y
 * Variable - $this->another()
 * Variable - this->method($y, $z)
 * AssignmentCompoundExpression - $x += $this->myMethod($y, $z) + $this->another()
 * 
 * This class should only be used if you don't care about at what 
 * position in the AST an expression is located; for example, when the
 * callback is called with a variable there is no way to know whether the variable
 * is part of a binary operation, function call, or array access.
 */
class PELET_API AnyExpressionObserverClass : public ExpressionObserverClass {
	
	
	public:
	
	AnyExpressionObserverClass();
	
	/**
	 * Override this method so that you can be called when recursing down the
	 * AST. 
	 * The expression can be of any kind.
	 */
	virtual void OnAnyExpression(pelet::ExpressionClass* expression) = 0;
	
	// the rest of the methods below should NOT be overriden
	void ExpressionVariableFound(pelet::VariableClass* expression);
	void ExpressionAssignmentFound(pelet::AssignmentExpressionClass* expression);
	void ExpressionAssignmentListFound(pelet::AssignmentListExpressionClass* expression);
	void ExpressionAssignmentCompoundFound(pelet::AssignmentCompoundExpressionClass* expression);
	void ExpressionBinaryOperationFound(pelet::BinaryOperationClass* expression);
	void ExpressionUnaryOperationFound(pelet::UnaryOperationClass* expression);
	void ExpressionUnaryVariableOperationFound(pelet::UnaryVariableOperationClass* expression);
	void ExpressionTernaryOperationFound(pelet::TernaryOperationClass* expression);
	void ExpressionInstanceOfOperationFound(pelet::InstanceOfOperationClass* expression);
	void ExpressionScalarFound(pelet::ScalarExpressionClass* expression);
	void ExpressionNewInstanceFound(pelet::NewInstanceExpressionClass* expression);
	void StatementGlobalVariablesFound(pelet::GlobalVariableStatementClass* variables);
	void StatementStaticVariablesFound(pelet::StaticVariableStatementClass* variables);
	void ExpressionIncludeFound(pelet::IncludeExpressionClass* expr);
	void ExpressionClosureFound(pelet::ClosureExpressionClass* expr);
	void ExpressionIssetFound(pelet::IssetExpressionClass* expr);
	void ExpressionArrayFound(pelet::ArrayExpressionClass* expression);
	void ExpressionEvalFound(pelet::EvalExpressionClass* expression);
	void ExpressionAnonymousClassFound(pelet::AnonymousClassExpressionClass* expression);
	
	void CheckExpression(pelet::ExpressionClass* expression);
	void CheckVariable(pelet::VariableClass* variable);
	/**
	 * Recurse through the statement list and check each expression. Recurses
	 * into method and function bodies.
	 */
	void CheckStatementList(pelet::StatementListClass& stmts);
};

/**
 * a class that will iterate through an entire AST and will count the
 * number of times a specific function was called.  Note that this 
 * class iterates down function calls themselves; ie it will find 
 * code like this:
 * 
 *   $this->myFun(otherFunc(1, 3), anotherFunc(3));
 */
class FunctionCallCountObserverClass : public pelet::AnyExpressionObserverClass {

public:

	/**
	 *  the function name to look for; whenever a function call with
	 *  this name is called, a counter is incremented
	 *  Note that this is NOT a fully qualified function name
	 */
	UnicodeString FunctionName;
	
	FunctionCallCountObserverClass();
	
	/**
	 * @return number of this FunctionName was called
	 */
	int CountCalls(pelet::StatementListClass* stmts);
		
	void OnAnyExpression(pelet::ExpressionClass* expression);

private:

	int Counter;
};

/**
 * This class represents a scope of a variable: ie the containing namespace, class, and function name.
 */
class PELET_API ScopeClass {

public:
	
	/**
	 * The fully qualified namespace; "" (empty string) for the root namespace
	 */
	UnicodeString NamespaceName;
	
	/**
	 * The class name only
	 * Could be empty if the scope is a function
	 */
	UnicodeString ClassName;
	
	/**
	 * The method or function name only.
	 */
	UnicodeString MethodName;
	
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
	 * true if this scope is a closure anonymous function
	 * scope
	 */
	bool IsAnonymousScope() const;
	
	/**
	 * @return int unique number of anonymous function count
	 */
	int GetAnonymousFunctionCount() const;

	/**
	 * A map of the current aliases of the parsed file.
	 * The imported namespaces "use Name\Name as Alias;"
	 * If the import statement does not use an explicit alias, them it implicity
	 * uses the last namespace name as the alias.
	 * "use Name\Child" the Child is the alias.
	 * Note that no check is done to ensure aliases are unique.
	 */
	std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass> GetNamespaceAliases() const;

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
	void AddNamespaceAlias(const UnicodeString& namespaceName, const UnicodeString& namespaceAlias);

	/**
	 * add a function alias. this is the result of a "use" statement
	 * For example, for the code
	 * 
	 *    use function My\Full\Classname as Another;
	 * 
	 * namespaceName is "My\Full\Classname" and function alias is "Another"
	 * 
	 * @param namespaceName the namespace being used. by PHP rules, this is always absolute
	 * @param functionAlias the name the function is referred as  
	 */
	void AddFunctionAlias(const UnicodeString& namespaceName, const UnicodeString& functionAlias);
	
	/**
	 * add a constant alias. this is the result of a "use" statement
	 * For example, for the code
	 * 
	 *    use constant My\Full\Classname as Another;
	 * 
	 * namespaceName is "My\Full\Classname" and constant alias is "Another"
	 * 
	 * @param namespaceName the namespace being used. by PHP rules, this is always absolute
	 * @param constatntAlias the name the constant is referred as  
	 */
	void AddConstantAlias(const UnicodeString& namespaceName, const UnicodeString& constantAlias);

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
	UnicodeString ResolveAlias(const UnicodeString& alias) const;

	/**
	 * Like ResolveAlias, but using function aliases only: "use function ... AS ..."
	 */
	UnicodeString ResolveFunctionAlias(const UnicodeString& alias) const;


	/**
	 * Like ResolveAlias, but using constant aliases only: "use constant... AS ..."
	 */	
	UnicodeString ResolveConstantAlias(const UnicodeString& alias) const;

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
	UnicodeString FullyQualify(const pelet::QualifiedNameClass& name, 
		const pelet::QualifiedNameClass& declaredNamespace) const;

	/**
	 * Fully qualifying a function checks for function aliases first, if that fails
	 * then we use FullyQualify()
	 */
	UnicodeString FullyQualifyFunction(const pelet::QualifiedNameClass& functionName, 
		const pelet::QualifiedNameClass& declaredNamespace) const;
			
	/**
	 * Fully qualifying a constant checks for constant aliases first, if that fails
	 * then we use FullyQualify()
	 */
	UnicodeString FullyQualifyConstant(const pelet::QualifiedNameClass& constantName, 
		const pelet::QualifiedNameClass& declaredNamespace) const;
	/**
	 *
	 * @param isAnonymous TRUE if this scope represents a closure,
	 *        false if not.
	 * @param anonymousFunctionCount the number of anymous functions 
	 *        found in the current class/method
	 */
	void SetIsAnonymous(bool isAnonymous, int anonymousFunctionCount = -1);
	
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
	std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>* NamespaceAliases;
	std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>* FunctionAliases;
	std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>* ConstantAliases;
	
	/**
	 * -1 scope is not anonymous
	 *  0 scope is first anonymous function seen in this class/method/function
	 *  1 scope is the second anonymous function seen in this class/method/function 
	 *  2 scope is the third anonymous function seen in this class/method/function
	 *  3+ ...
	 */
	int AnonymousFunctionCount;

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
		NAMESPACE_DECLARATION,
		NAMESPACE_USE,
		METHOD_DECLARATION,           // 5
		PROPERTY_DECLARATION,
		TRAIT_USE_DECLARATION,
		TRAIT_ALIAS_DECLARATION,
		TRAIT_INSTEADOF_DECLARATION,  
		FUNCTION_DECLARATION,         // 10
		GLOBAL_VARIABLE_DECLARATION,
		STATIC_VARIABLE_DECLARATION,
		EXPRESSION,
		FUNCTION_IMPORT,
		CONSTANT_IMPORT,              // 15
		DECLARE_DIRECTIVE_STATEMENT
	};
	
	Types Type;

	virtual ~StatementClass();

protected:
		
	/**
	 * protected, at this class is an abstract class that needs to be
	 * inherited from to be useful.
	 */
	StatementClass(Types type);	
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
	UnicodeString Comment;
	
	/**
	 * If TRUE then this is a fully Qualified namespace name
	 */
	bool IsAbsolute;
	
	/**
	 * The line in the source where the expression was located. 
	 * @see LexicalAnalyzerClass::GetLineNumber
	 */
	int LineNumber;

	/**
	 * The character position in the source where the expression was located. 
	 * @see LexicalAnalyzerClass::GetCharacterPosition()
	 */
	int Pos;

	QualifiedNameClass();
	void Clear();
	void Init(SemanticValueClass* value);
	void Init(const UnicodeString& name, int lineNumber, int pos);
	pelet::QualifiedNameClass* AppendName(SemanticValueClass* value);
	pelet::QualifiedNameClass* MakeAbsolute();

	// only used for PHP >= 7.0
	pelet::QualifiedNameClass* SetAlias(SemanticValueClass* alias);
	void SetAlias(const UnicodeString& alias);
	UnicodeString GetAlias() const;

	bool IsEmpty() const;

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
	UnicodeString ToSignature() const;
	
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
	/*UnicodeString Prepend(const QualifiedNameClass& name) const;
	*/

	pelet::QualifiedNameClass* MakeFromDeclaredNamespace(const pelet::QualifiedNameClass* qualifiedName);

private:

	std::vector<UnicodeString> Namespaces;
	UnicodeString Alias;
		
};

/**
 * A list of 0 or more qualified names. These names are fully qualified.
 */
class PELET_API QualifiedNameListClass : public AstItemClass {
public:
	/**
	 * This class will not own these pointers.
	 */
	std::vector<pelet::QualifiedNameClass*> Names;
	
	QualifiedNameListClass();
	
	void Push(pelet::QualifiedNameClass* qualifiedName);
};

/**
 * An unqualified name is a name used in a grouped import statement. It is a namespace name
 * that is not fully qualified. This is only used for PHP >= 7.0.
 */
class PELET_API UnprefixedNameClass : public AstItemClass {
public:
	UnicodeString NamespaceName;
	UnicodeString Alias;

	UnprefixedNameClass();
	
	void Set(pelet::QualifiedNameClass* namespaceName);

	void Set(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* alias);
};

/**
 * A list of 0 or more namespace names used in a grouped import statement.
 * This is only used for PHP >= 7.0.
 */
class PELET_API UnprefixedNameListClass : public AstItemClass {
public:
	/**
	 * This class will not own these pointers.
	 */
	std::vector<pelet::UnprefixedNameClass*> Names;

	UnprefixedNameListClass();
	
	void Push(pelet::UnprefixedNameClass* name);

};

/**
 * An optional type use in function / method arguments and return declarations. It is a namespace name
 * that is fully qualified. This is only used for PHP >= 7.1.
 */
class PELET_API TypeHintClass : public AstItemClass {
public:
	UnicodeString NamespaceName;
	bool IsNullable;

	TypeHintClass();

	void Set(pelet::QualifiedNameClass* namespaceName, bool isNullable);
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
	UnicodeString Name;
	
	/**
	 * If this property is a method, then this vector will contain the function call
	 * arguments.
	 * This class will NOT own any of the pointers
	 */
	std::vector<pelet::ExpressionClass*> CallArguments;

	/**
	 * When this property is an array access, then this
	 * will be the expression inside the array access operator
	 * for example:  the property $users[$name] 
	 * will have ArrayAccess = VariableClass instance.
	 * This class will NOT own this pointer.
	 * note that his may be NULL for empty array access 
	 * ie. $arr[] = 1;
	 */
	pelet::ExpressionClass* ArrayAccess;

	/**
	 * When this property is the result of an expression grouped
	 * in parenthesis, then this
	 * will be the expression inside the parenthesis.
	 * for example:  the variable ($users[$name])
	 * will have Expression = $users[$name]
	 *
	 * This class will NOT own this pointer.
	 */
	pelet::ExpressionClass* CallableExpression;

	/**
	 * If TRUE then this property is  a function call.
	 */
	bool IsFunction;
	
	/**
	 * If TRUE then this property was accessed with the static operator ('::')
	 * If FALSE then this property was accessed with the object operator ('->')
	 */
	bool IsStatic;

	/**
	 * bool TRUE if this property or method contains a array access
	 * for example for $users['name'] this will be 2 VariableProperty
	 * instances, the first with Name = "users", IsArrayAccess = false, and 
	 * the second with Name = "", IsArrayAccess = true and ArrayAccess = a 
	 * ScalarExpressionClass instance
	 */
	bool IsArrayAccess;
	
	/**
	 * If TRUE, this variable or function to access is the result of the callable
	 * expression.  For example, "$foo($bar)" is stored like this:
	 * 
	 *  Name = <empty>
	 *  IsFunction = true
	 *  IsCallable = true
	 *  CallableExpression = Expression($foo)
	 *  CallArguments = [ Variable($bar) ]
	 *
	 * Example 2 - expression wrapped in parenthesis: ($users[$name])
	 *  Name = <empty>
	 *  IsFunction = false
	 *  IsCallable = true
	 *  CallableExpression = Variable($users)
	 *  ArrayAccess = Variable($name)
	 *  CallArguments = [ ]
	 */
	bool IsCallableExpression;

	VariablePropertyClass();

	VariablePropertyClass(const pelet::VariablePropertyClass& src);

	pelet::VariablePropertyClass& operator=(const pelet::VariablePropertyClass& src);

	void Copy(const pelet::VariablePropertyClass& src);
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
		NEW_CALL,
		ASSIGNMENT_COMPOUND,
		BINARY_OPERATION,           // 5
		UNARY_OPERATION,
		UNARY_VARIABLE_OPERATION,
		TERNARY_OPERATION,
		INSTANCEOF_OPERATION,
		ARRAY_PAIR,                 // (10) 
		INCLUDE,                    // for now, include, include_once, require, require_once are all the same
		CLOSURE,
		ASSIGNMENT,
		ASSIGNMENT_LIST,
		ISSET,                      // (15)
		EVAL,
		ANONYMOUS_CLASS,
		UNKNOWN // stuff that we dont want to track
	};

	/**
	 * The function where this expression is located.
	 */
	ScopeClass Scope;

	/**
	 * The kind of expression.
	 */
	ExpressionTypes ExpressionType;
	
	/**
	 * The line in the source where the expression was located. 
	 * @see LexicalAnalyzerClass::GetLineNumber
	 */
	int LineNumber;

	/**
	 * The character position in the source where the expression was located. 
	 * @see LexicalAnalyzerClass::GetCharacterPosition()
	 */
	int Pos;

    /**
     * TRUE if this expression uses the unpack (splat) operator, ex. "callMe(...$items)"
     */    
    bool IsUnpack;

	ExpressionClass(const pelet::ScopeClass& scope);

	void Copy(const ExpressionClass& src);
};

/**
 * This class will represent a single PHP scalar. An scalar is either
 * a string, an integer, a double. 
 * Examples: ("name", 123, 123.43)
 *
 * Strings can be further "de-referenced" with the offset operator, for example
 * 'one two three'[4]. In this case, there will be 1 item
 * in the Offsets vector.

 */
class PELET_API ScalarExpressionClass : public ExpressionClass {

public:

	UnicodeString Value;

	std::vector<pelet::ExpressionClass*> Offsets;

	ScalarExpressionClass();

	ScalarExpressionClass(const ScopeClass& scope);

	ScalarExpressionClass(const pelet::ScalarExpressionClass& src);

	pelet::ScalarExpressionClass& operator=(const pelet::ScalarExpressionClass& src);

	void Copy(const pelet::ScalarExpressionClass& src);

	void Init(pelet::SemanticValueClass* value);
};

/**
 * This class represents 1 key-value pair in a 
 * array creation expression. This class will not
 * own the expression pointers.
 */
class ArrayPairExpressionClass : public ExpressionClass {

public:
	
	/**
	 * This will be NULL if the array does not have a key
	 * defined. This class will not own the expression pointer
	 */
	pelet::ExpressionClass* Key;

	/**
	* This class will not
	* own the expression pointer
	*/
	pelet::ExpressionClass* Value;
	
	/**
	 * A value can also be a list of array pairs. 
	 * This is used for array destructuring in PHP >= 7.1
	 * This object will not own the pair pointers.
	 */
	std::vector<pelet::ArrayPairExpressionClass*> Pairs;

	ArrayPairExpressionClass(const pelet::ScopeClass& scope);

	ArrayPairExpressionClass(const pelet::ArrayPairExpressionClass& src);

	pelet::ArrayPairExpressionClass& operator=(const pelet::ArrayPairExpressionClass& src);

	void Copy(const pelet::ArrayPairExpressionClass& src);
};

/**
 * This class represents an array expression. The ArrayPairs contains the list of
 * key-value pairs of an array. For example, for the expression:
 * array('one' => 1, 'two' => 2)
 * then ArrayPairs will contain 2 items: the pair "one", 1 (a scalar expression
 * as the key and a scalar expression as the value) and "two" (a scalar expression
 * as the key and a scalar expression as the value)
 * Note that if the source code does not define keys then this key will be NULL
 * as well; for example array(1, 2) will not produce any array keys (ArrayPairs will
 * still have 2 items, but the keys will be empty).
 *
 * An array can be further "de-referenced" with the offset operator, for example
 * array('one' => 1, 'two' => 2)['two']. In this case, there will be 1 item
 * in the Offsets vector.
 */
class PELET_API ArrayExpressionClass : public ExpressionClass {

public:

	std::vector<pelet::ArrayPairExpressionClass*> ArrayPairs;

	std::vector<pelet::ExpressionClass*> Offsets;

	ArrayExpressionClass(const ScopeClass& scope);

	ArrayExpressionClass(const pelet::ArrayExpressionClass& src);

	pelet::ArrayExpressionClass& operator=(const pelet::ArrayExpressionClass& src);

	void Copy(const pelet::ArrayExpressionClass& src);

};

/**
 * This class will represent an invocation of "new"; creation of a PHP 
 * object.
 * Example: new MyClass()
 */
class PELET_API NewInstanceExpressionClass : public ExpressionClass {

public:
	
	/**
	 * this is always a fully qualified class name
	 */
	UnicodeString ClassName;

	/**
	 * method calls or property accesses that follow the new call
	 * for example 
	 * new MyClass()->userName
	 * ChainList will have 1 item; the Name will be "userName"
	 *
	 * Example 2:
	 * * new MyClass()->userName->getLength()
	 * ChainList will have 2 item; 
	 * item 1's Name will be "userName"
	 * item 2' Name will be "getLegth()" and IsFunction will be TRUE
	 */
	std::vector<VariablePropertyClass> ChainList;

	/**
	 * these are the call arguments to the class constructor.
	 * this class will not own these pointers
	 */
	std::vector<pelet::ExpressionClass*> CallArguments;

	NewInstanceExpressionClass(const ScopeClass& scope);

	NewInstanceExpressionClass(const pelet::NewInstanceExpressionClass& src);

	pelet::NewInstanceExpressionClass& operator=(const pelet::NewInstanceExpressionClass& src);

	void Copy(const pelet::NewInstanceExpressionClass& src);

	/**
	 * add the give var's chain list to this object
	 */
	void AddToChain(pelet::VariableClass* var);

	/**
	 * adds the statements from the given statement list as call arguments
	 * the given list may be null
	 */
	void AddStatementsAsArguments(pelet::StatementListClass* statements);
};

/**
 * The VariableClass represents one PHP variable. This is different from other
 * expressions such as scalars and arrays, as scalars and arrays are not variables.
 * A variable is:
 * 
 * - a simple variable ($name)
 * - a function call  (myFunct())
 * - an array access  ($person['name'])
 * - a long property chain ($this->myFunct()->name->first)
 * - a static member (MyClass::$instance)
 * - an indirect, or "variable" variable ($clazz)
 *
 */
class PELET_API VariableClass : public ExpressionClass {

public:

	/**
	 * Any PHP doc comment that was attached to this variable (appeared immediately before).
	 */
	UnicodeString Comment;

	/**
	 * The name of the "type" of this variable that was parsed out of the PHPDoc. For example
	 * when a variable is decorated with " \@var $var TypeClass" comments
	 */
	UnicodeString PhpDocType;
	
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
	 * TRUE if this variable has been passed by reference, this is only set
	 * when the variable has been passed by reference into a closure via a 
	 * closure parameter or a USE (lexical) variable
	 */
	bool IsReference;
	
	/**
	 * An indirect variable is a variable whose name is in another variable, for example
	 * 
	 * $$clazzName
	 * 
	 * Currently, there is no way to know how many levels of indirection there are
	 * for example
	 * 
	 * $$clazz
	 * 
	 * Will also be captured as an indirect variable, with "clazz" as the 
	 * variable
	 */
	bool IsIndirect;
	
	/**
	 * TRUE if this variable is a "pseudo" variable that was declared in 
	 * a PHP comment and not in the source code.
	 */
	bool IsPhpDocVariable;
	
	VariableClass(const pelet::ScopeClass& scope);

	VariableClass(const pelet::VariableClass& src);

	pelet::VariableClass& operator=(const pelet::VariableClass& src);

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
	void AppendToChain(const UnicodeString& propertyValue);
	
	/**
	 * Add a property to the variable chain list
	 * @param operatorLexeme the lexeme of the operation
	 * @param callArguments if property is a function call, this is the
	 *        arguments to that call. this class will not own any of the pointers
	 * @param isMethod TRUE if the property is a method
	 * @param isStatic if TRUE if the property is accessed statically ('::')
	 */
	void AppendToChain(const UnicodeString& propertyValue, 
		std::vector<pelet::ExpressionClass*> callArguments, bool isMethod, bool isStatic);

	/**
	 * Add a property that is the result of evaluating the given expression.
	 * For example, in the variable
	 *
	 * (new DateTime())->getTimestamp()
	 *
	 * There are 2 item in the chain list:
	 *  - new DateTime() (expression)
	 *  - getTimestamp() (function call)
	 */
	void AppendToChain(pelet::ExpressionClass* callableExpr);

	/**
	 * Add a property that is the result of evaluating the given function.
	 * For example, in the variable
	 *
	 * $factory($arg1, $arg2)->getTimestamp()
	 *
	 * There are 2 item in the chain list:
	 *  - $factory (callable expression, with 2 arguments $arg1, $arg2)
	 *  - getTimestamp() (function call)
	 */
	void AppendToChain(pelet::ExpressionClass* callableExpr, std::vector<pelet::ExpressionClass*> arguments);
	
	void ToStaticFunctionCall(const UnicodeString& className, const UnicodeString& functionName, bool isMethod);
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
	pelet::StatementListClass* PushAll(const pelet::StatementListClass* statementList);

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
	UnicodeString Name;
	
	/**
	 * the namespace that the constant was defined in. if constant is 
	 * in the root namespace, then this will contain "\"
	 */
	UnicodeString NamespaceName;
	
	UnicodeString Comment;
	
	UnicodeString Value;
	
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
	
	UnicodeString NamespaceName;
	
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
	
	UnicodeString NamespaceName;
	
	UnicodeString Alias;
	
	/**
	 * 1-based line number where the "use" token starts
	 */
	int LineNumber;

	/**
	 *  Character position within the file where the namespace use statement starts. This number is 
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
	
	UnicodeString Set(QualifiedNameClass* qualifiedName, UnicodeString alias);

	static pelet::StatementListClass* SetStartingPos(pelet::StatementListClass* namespaceStatements, const pelet::TokenPositionClass& useToken);
};

class PELET_API FunctionImportClass : public StatementClass {
public:
	/**
	 * The fully qualifide name of the function being imported.
	 */
	UnicodeString FunctionName;
	
	/**
	 * Alias of the function. This is optional.
	 */
	UnicodeString Alias;

	/**
	 * 1-based line number where the "use" token starts
	 */
	int LineNumber;

	/**
	 *  Character position within the file where the namespace use statement starts. This number is 
	 *  0-based. It is the position where the "use" token starts. For example,
	 *  in the statement "use \First\Child" then StartingPosition is the position of "use"
	 *  Even in the case of where a use statement has commas, then StartingPosition is the 
	 *  position of the namespace token. For example, in the statement
	 *  "use \First\Child, \Sec\Child" then StartingPosition for 
	 *  the namespace \Sec\Child is the position of "use"
	 */
	int StartingPos;
	
	FunctionImportClass();
	
	void Init(const UnicodeString& functionName, pelet::SemanticValueClass* alias,
		int lineNumber, int startingPos);
};

class PELET_API ConstantImportClass : public StatementClass {
public:
	/**
	 *  The full qualified name of the constant being imported.
	 */
	UnicodeString ConstantName;
	
	/**
	 * Alias of the constant. This is optional.
	 */
	UnicodeString Alias;

	/**
	 * 1-based line number where the "use" token starts
	 */
	int LineNumber;

	/**
	 *  Character position within the file where the namespace use statement starts. This number is 
	 *  0-based. It is the position where the "use" token starts. For example,
	 *  in the statement "use \First\Child" then StartingPosition is the position of "use"
	 *  Even in the case of where a use statement has commas, then StartingPosition is the 
	 *  position of the namespace token. For example, in the statement
	 *  "use \First\Child, \Sec\Child" then StartingPosition for 
	 *  the namespace \Sec\Child is the position of "use"
	 */
	int StartingPos;
	
	ConstantImportClass();
	
	void Init(const UnicodeString& constantName, pelet::SemanticValueClass* alias,
		int lineNumber, int startingPos);
};

class PELET_API TraitUseClass : public StatementClass {
	
public:

	/**
	 * The fully qualified namespace of the class where the traits are being used in. This is the name of the
	 * namespace only
	 */
	UnicodeString NamespaceName;
	
	/**
	 * The class where the traits are being used in. This is the name of the
	 * class only
	 */
	UnicodeString ClassName;
	
	/**
	 * list of the fully qualified names of the traits that are used.
	 */
	std::vector<UnicodeString> UsedTraits;
	
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
	UnicodeString NamespaceName;
	
	/**
	 * The class where the traits are being used in. This is the name of the
	 * class only
	 */
	UnicodeString ClassName;
	
	/**
	 * The fully qualified class name of the trait class that is being aliased. This may be empty
	 * if the source code does not define it (ie. the alias does not need to resolve a conflict)
	 */
	UnicodeString TraitUsedClassName;
	
	/**
	 * The name of the method being aliased (the "old" name)
	 */
	UnicodeString TraitMethodReferenceName;
	
	/**
	 * the method alias; the "new" name
	 */
	UnicodeString Alias;
	
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
	UnicodeString NamespaceName;
	
	/**
	 * The class where the traits are being used in. This is the name of the
	 * class only
	 */
	UnicodeString ClassName;
	
	/**
	 * The fully qualified class name of the trait class that is being aliased. This may be empty
	 * if the source code does not define it (ie. the alias does not need to resolve a conflict)
	 */
	UnicodeString TraitUsedClassName;
	
	/**
	 * The name of the method being resolved
	 */
	UnicodeString TraitMethodReferenceName;
	
	/**
	 * list of fully qualified class names that define the method in question but
	 * will NOT be used
	 */
	std::vector<UnicodeString> InsteadOfList;
	
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
 * in the Expression variable.
 */
class PELET_API AssignmentExpressionClass : public ExpressionClass {
		
	public:

	/**
	 * The left hand side of the equals sign; the variable being assigned
	 */
	VariableClass Destination;

	/**
	 * The right side of the equals sign, the expression that was 
	 * assigned to the variable.
	 * This pointer is NOT owned by this class.
	 */
	ExpressionClass* Expression;

	AssignmentExpressionClass(const pelet::ScopeClass& scope);

	AssignmentExpressionClass(const pelet::AssignmentExpressionClass& src);

	pelet::AssignmentExpressionClass& operator=(const pelet::AssignmentExpressionClass& src);

	void Copy(const pelet::AssignmentExpressionClass& src);

};

/**
 * Holds both sides of an assignment statement in the form
 * 
 * list(variable1, variable2, variable3) = expression
 * 
 * The right hand side of the equals sign (the value to assign) will be stored
 * in the expression
 */
class PELET_API AssignmentListExpressionClass : public ExpressionClass {
		
	public:

	/**
	 * The left hand side of the equals sign; the variable being assigned
	 */
	std::vector<VariableClass> Destinations;

	/**
	 * The right side of the equals sign, the expression that was 
	 * assigned to the variables.
	 * This pointer is NOT owned by this class.
	 */
	ExpressionClass* Expression;

	AssignmentListExpressionClass(const pelet::ScopeClass& scope);

	AssignmentListExpressionClass(const pelet::AssignmentListExpressionClass& src);

	pelet::AssignmentListExpressionClass& operator=(const pelet::AssignmentListExpressionClass& src);

	void Copy(const pelet::AssignmentListExpressionClass& src);

};


/**
 * Holds both sides of a 2-operand compound assignment expression in the form
 * 
 * Variable <OP> Expression
 * 
 * where <OP> is "+=", "-=", "*=", "/=", ".=",
 *  "%=", "&=", "|=", "^=", "<<=", ">>=" 
 *
 * The left operand is stored in Variable member, the 
 * right operand is stored in the RightOperand member
 */
class PELET_API AssignmentCompoundExpressionClass : public ExpressionClass {
		
	public:

	/**
	 * The left hand side of the expression
	 */
	VariableClass Variable;

	/**
	 * the operation being done
	 * one of pelet::Tokens
	 */
	int Operator;

	/**
	 * the value assigned to the variable
	 * This pointer is NOT owned by this class.
	 */
	pelet::ExpressionClass* RightOperand;

	AssignmentCompoundExpressionClass(const pelet::ScopeClass& scope);

	AssignmentCompoundExpressionClass(const pelet::AssignmentCompoundExpressionClass& src);

	pelet::AssignmentCompoundExpressionClass& operator=(const pelet::AssignmentCompoundExpressionClass& src);

	void Copy(const pelet::AssignmentCompoundExpressionClass& src);
};

/**
 * Holds both sides of a 2-expression operation in the form
 * 
 * LeftOperand <OP> RightOperand
 * 
 * where <OP> is "||", "&&", "or", "and", "xor",
 *  "|", "&", "^", ".", "+", "-", "*", "/", "%",
 * "<<", ">>", "===", "!===", "==", "!=", "<", "<=",
 * ">", ">=", "instanceof",
 *
 * The left operand is stored in LeftOperand member, the 
 * right operand is stored in the RightOperand member
 */
class PELET_API BinaryOperationClass : public ExpressionClass {
		
	public:

	/**
	 * The left hand side of the expression
	 * This pointer is NOT owned by this class.
	 */
	ExpressionClass* LeftOperand;

	/**
	 * the operation being done
	 * one of pelet::Tokens
	 */
	int Operator;

	/**
	 * the value assigned to the variable
	 * This pointer is NOT owned by this class.
	 */
	pelet::ExpressionClass* RightOperand;

	BinaryOperationClass(const pelet::ScopeClass& scope);

	BinaryOperationClass(const pelet::BinaryOperationClass& src);

	pelet::BinaryOperationClass& operator=(const pelet::BinaryOperationClass& src);

	void Copy(const pelet::BinaryOperationClass& src);
};

/**
 * Holds a unary operation in the form
 * 
 * <OP> operand or
 * operand <OP>
 * 
 * where <OP> is "++" (postfix), "++" (prefix), "--" (postfix),
 * "--" (prefix),  "+", "-", "!", "~", "(int)",
 * "(double)", "(float)", "(string)", "(array)",
 * "(object)", "(bool)", "(boolean)", "(unset)",
 * "exit", "@"
 *
 * The operand is stored in the Operand member
 */
class PELET_API UnaryOperationClass : public ExpressionClass {
		
	public:

	/**
	 * the operation being done
	 */
	int Operator;
	
	
	/**
	 * the value being manipulated
	 * This pointer is NOT owned by this class.
	 */
	pelet::ExpressionClass* Operand;

	
	UnaryOperationClass(const pelet::ScopeClass& scope);

	UnaryOperationClass(const pelet::UnaryOperationClass& src);

	pelet::UnaryOperationClass& operator=(const pelet::UnaryOperationClass& src);

	void Copy(const pelet::UnaryOperationClass& src);

};

/**
 * Holds a unary operation in the form
 * 
 * <OP> operand or
 * operand <OP>
 * 
 * where <OP> is "++" (postfix), "++" (prefix), "--" (postfix),
 * "--" (prefix), 
 *
 * The operand is stored in the Operand member
 */
class PELET_API UnaryVariableOperationClass : public ExpressionClass {
		
	public:	

	/**
	 * the operation being done
	 */
	int Operator;	
	
	/**
	 * the variable being manipulated
	 */
	pelet::VariableClass Variable;

	UnaryVariableOperationClass(const pelet::ScopeClass& scope);

	UnaryVariableOperationClass(const pelet::UnaryVariableOperationClass& src);

	pelet::UnaryVariableOperationClass& operator=(const pelet::UnaryVariableOperationClass& src);

	void Copy(const pelet::UnaryVariableOperationClass& src);

};

/**
 * Holds both sides of a 3-expression operation in the form
 * 
 * expression1 ? expression2 : expression3
 * 
 * expression1 is stored in Expression1, expression2 is stored
 * in Expression2 and expression3 is stored in Expression3
 * 
 */
class PELET_API TernaryOperationClass : public ExpressionClass {
		
	public:

	/**
	 * The left hand side of the expression
	 * This pointer is NOT owned by this class.
	 */
	ExpressionClass* Expression1;

	/**
	 * The middle hand side of the expression
	 * This pointer is NOT owned by this class.
	 */
	ExpressionClass* Expression2;

	/**
	 * The right side of the expression. note that this may be
	 * invalid (NULL) for ternary expressions that don't have 3 expressions
	 * This pointer is NOT owned by this class.
	 */
	pelet::ExpressionClass* Expression3;

	TernaryOperationClass(const pelet::ScopeClass& scope);

	TernaryOperationClass(const pelet::TernaryOperationClass& src);

	pelet::TernaryOperationClass& operator=(const pelet::TernaryOperationClass& src);

	void Copy(const pelet::TernaryOperationClass& src);

};

/**
 * Holds both sides of an instanceof operation in the form
 * 
 * expr instanceof class
 * 
 * expr is stored in Expression1
 * and class is stored in ClassName
 * 
 */
class PELET_API InstanceOfOperationClass : public ExpressionClass {

public:

	/**
	 * The left hand side of the expression
	 * This pointer is NOT owned by this class.
	 */
	ExpressionClass* Expression1;

	
	/**
	 * The right hand side of the operation
	 * This is always a fully qualified class naem
	 */
	UnicodeString ClassName;
	
	InstanceOfOperationClass(const pelet::ScopeClass& scope);
	
	InstanceOfOperationClass(const pelet::InstanceOfOperationClass& src);
	
	pelet::InstanceOfOperationClass& operator=(const pelet::InstanceOfOperationClass& src);
	
	void Copy(const pelet::InstanceOfOperationClass& src);
};

class PELET_API ClosureExpressionClass : public ExpressionClass {

public:

	/**
	 * parameters to the closure. This class will not own
	 * the pointers.
	 */
	std::vector<pelet::VariableClass*> Parameters;

	/**
	 * variables "use" by the closure. This class will not own
	 * the pointers.
	 */
	std::vector<pelet::VariableClass*> LexicalVars;

	/**
	 * statements declared by the closure.  This class will not
	 * own any of the statement pointers.
	 */
	pelet::StatementListClass Statements;

	/**
	 * The return type of this closure, as determined by the return type
	 * declaration. This is only available in PHP >= 7.0
	 * This is a fully qualified name. 
	 */
	UnicodeString ReturnType;
	
	/** 
	 * character position of closure body, 0 based 
	 * StartingPosition is the position of the start brace '{'
	 */
	int StartingPosition;
	
	/** 
	 * character position of closure body, 0 based 
	 * EndingPosition is the position of the end brace '}' 
	 */
	int EndingPosition;

	ClosureExpressionClass(const pelet::ScopeClass& scope);

	ClosureExpressionClass(const pelet::ClosureExpressionClass& src);

	pelet::ClosureExpressionClass& operator=(const pelet::ClosureExpressionClass& src);

	void Copy(const pelet::ClosureExpressionClass& src);
	
	void SetReturnType(pelet::QualifiedNameClass* name, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
	
	void SetReturnType(pelet::TypeHintClass* name, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
};

/**
 * This class represents a list of variables
 * declared inside an isset statement ie. 
 * 
 * isset($var1, $var2)
 */
class PELET_API IssetExpressionClass : public ExpressionClass {

public:

	/**
	 * the expression inside the isset statement
	 * the pointers will NOT be owned by this class
	 */
	std::vector<pelet::ExpressionClass*> Expressions;

	IssetExpressionClass(const pelet::ScopeClass& scope);

	IssetExpressionClass(const pelet::IssetExpressionClass& src);

	pelet::IssetExpressionClass& operator=(const pelet::IssetExpressionClass& src);

	void Copy(const pelet::IssetExpressionClass& src);
};

/**
 * This class represents an eval expression
 * 
 * eval($var1)
 */
class PELET_API EvalExpressionClass : public ExpressionClass {

public:

	/**
	 * the expression inside the eval statement
	 * the pointers will NOT be owned by this class
	 */
	pelet::ExpressionClass* Expression;

	EvalExpressionClass(const pelet::ScopeClass& scope);

	EvalExpressionClass(const pelet::EvalExpressionClass& src);

	pelet::EvalExpressionClass& operator=(const pelet::EvalExpressionClass& src);

	void Copy(const pelet::EvalExpressionClass& src);
};

/**
 * This class represents a list of variables
 * declared as global ie. 
 * 
 * global $var1, $var2
 */
class PELET_API GlobalVariableStatementClass : public StatementClass {

public:

	/**
	 * the variables declared global
	 * the pointers will NOT be owned by this class
	 */
	std::vector<pelet::VariableClass*> Variables;

	GlobalVariableStatementClass();

};

/**
 * This class represents a list of variables
 * declared as static
 *
 * static $var1, $var = 0;
 */
class PELET_API StaticVariableStatementClass : public StatementClass {

public:

	/**
	 * the variables declared static
	 * the pointers will NOT be owned by this class
	 */
	std::vector<pelet::VariableClass*> Variables;

	StaticVariableStatementClass();
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
 * and unions values have to be Plain Old Data types (which UnicodeString is not).
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
	UnicodeString Lexeme;

	/**
	 * This is the **PHPDoc** comment that was immediately before this token.
	 */
	UnicodeString Comment;

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
	UnicodeString ClassName;
	
	UnicodeString NamespaceName;
	
	UnicodeString Comment;
	
	/** 
	 * This is always fully qualified name
	 */
	UnicodeString ExtendsFrom;
	
	/** 
	 * These are always fully qualified names
	 */
	std::vector<UnicodeString> ImplementsList; 
	
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

	ClassSymbolClass* MergeModifiers(pelet::ClassSymbolClass* other);
	
	UnicodeString ToSignature() const;
	
	/**
	 * @return comma separated string of all interfaces that are implemented 
	 *         by this class. All interfaces are fully qualified.
	 */
	UnicodeString ImplementsString() const;
	
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
	void CreateWithOptionalType(const UnicodeString& className);

	/**
	 * Append another parameter
	 */
	pelet::ParametersListClass* Append(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, 
		bool isReference, bool hasDefault,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);
	
	/**
	 * Append another parameter
	 */
	pelet::ParametersListClass* Append(pelet::TypeHintClass* type, pelet::SemanticValueClass* parameterName, 
		bool isReference, bool hasDefault,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);

	/**
	 * Append another list of parameters to this list.
	 * returns this.
	 */
	pelet::ParametersListClass* Append(pelet::ParametersListClass* src);
	
	/**
	 * Create the first parameter
	 */
	void Init(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, 
		bool isReference, bool hasDefaults,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace); 

	void Clear();
	
	void Copy(const pelet::ParametersListClass& src);

	/**
	 * Set the last parameter's name, reference value, and default value
	 */
	void SetName(SemanticValueClass* value, bool isReference, bool hasDefaults);

	/**
	 * Set the last parameter's is variadic flag.
	 */
	void SetVariadic(bool isVariadic);

	/**
	 * Recreate the source code by 'unparsing' the parameter list
	 * @return concatenated parameter names; delimited with a comma. Also,
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

	/**
	 * Returns true if the parameter at index was defined as a variadic parameter (the
	 * ellipsis operator).
	 */
	bool IsVariadicAt(size_t index) const;

private:
	std::vector<UnicodeString> Params;
	std::vector<UnicodeString> OptionalTypes;
	std::vector<UnicodeString> Defaults;
	std::vector<bool> IsVariadics;
	std::vector<bool> IsNullables;
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
	UnicodeString MemberName, NamespaceName, ClassName;
	
	ParametersListClass ParametersList;
	
	/**
	 * This class will NOT own the statement pointers in the list
	 */
	StatementListClass MethodStatements;
	
private:

	UnicodeString Comment;

	/**
	 *  for methods / functions this is the type that is returned by the  method / function
	 * for properties, this is the type of the property
	 * For PHP < 7.0, this parsed out of the PHPDoc comment, as PHP syntax does not 
	 * allow for type declarations
	 * For PHP 7.0, this is either the type declared or the PHP Doc comment.
	 */
	UnicodeString ReturnType;
public:
	
	/**
	 * TRUE if the return type was marked as nullable. Only PHP >= 7.1
	 */
	bool IsReturnNullable;
	
	/**
	 * TRUE if the return type was declared in the function definition. Only PHP >= 7.1
	 */
	bool IsReturnTypeDeclared;
	
	
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
	
	/**
	 * TRUE if the function takes in variable arguments; this is determined
	 * by the function/method body calling funct_get_arg() OR func_get_args() 
	 */
	bool HasVariableArguments;

	ClassMemberSymbolClass();
	void SetNameAndReturnReference(SemanticValueClass* nameValue, bool isReturnReference, SemanticValueClass* functionValue, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
	void SetAsConst(SemanticValueClass* nameValue, SemanticValueClass* commentValue, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
	UnicodeString ToMethodSignature(UnicodeString variablesSignature) const;
	void AppendToComment(SemanticValueClass* value, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
	void SetReturnType(QualifiedNameClass* name, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
	void SetReturnType(pelet::TypeHintClass* name, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
	
	void SetAsPublic();
	void SetAsProtected();
	void SetAsPrivate();
	void Clear();
	UnicodeString GetReturnType() const;
	UnicodeString GetComment() const;

	pelet::ClassMemberSymbolClass* MakeBody(pelet::StatementListClass* bodyStatements, 
		const pelet::TokenPositionClass& startingPositionTokenValue, const pelet::TokenPositionClass& endingPositionTokenValue);

	pelet::ClassMemberSymbolClass* Make(pelet::SemanticValueClass* varValue, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);

	pelet::ClassMemberSymbolClass* MakeAsPublicVariable(pelet::SemanticValueClass* varValue, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);

	pelet::ClassMemberSymbolClass* MakeFunction(pelet::SemanticValueClass* nameValue, 
		bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters,
		const pelet::TokenPositionClass& startingBodyTokenValue, const pelet::TokenPositionClass& endingBodyTokenValue,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace, bool hasVariableArguments);

	pelet::ClassMemberSymbolClass* MakeMethod(pelet::SemanticValueClass* nameValue, 
		pelet::ClassMemberSymbolClass* modifiers,
		bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters, 
		pelet::ClassMemberSymbolClass* methodBody,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace, bool hasVariableArguments);
	
	pelet::ClassMemberSymbolClass* MakeVariable(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue, 
		bool isConstant, const int endingPosition, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);
	
	static pelet::StatementListClass* MakeVariables(pelet::StatementListClass* variableStatements, pelet::ClassMemberSymbolClass* modifiers,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace);
	
	pelet::ClassMemberSymbolClass* SetModifier(pelet::SemanticValueClass* modifierValue);
};

class PELET_API IncludeExpressionClass : public ExpressionClass {

public: 

	/**
	 * The file being included.  This is only valid when the include
	 * / require statement has a scalar as the parameter
	 */
	UnicodeString File;

	/**
	 * The line number where the include statement was found.
	 */
	int LineNumber;

	/**
	 * the expression that is given to the include/require statement
	 */
	pelet::ExpressionClass* Expression;

	IncludeExpressionClass();

	IncludeExpressionClass(const pelet::ScopeClass& scope);

	IncludeExpressionClass(const pelet::IncludeExpressionClass& src);

	pelet::IncludeExpressionClass& operator=(const pelet::IncludeExpressionClass& src);

	void Copy(const pelet::IncludeExpressionClass& src);

	void Init(pelet::StatementClass* stmt, int lineNumber);

private:

	pelet::ScopeClass Scope;
};

/**
 * An inline class declaration without a specified name.
 *
 * This is only for PHP >= 7.0
 */
class PELET_API AnonymousClassExpressionClass : public ExpressionClass {

public: 

	std::vector<ExpressionClass*> ConstructorArguments;
	
	/** 
	 * This is always fully qualified name
	 */
	UnicodeString ExtendsFrom;
	
	/** 
	 * These are always fully qualified names
	 */
	std::vector<UnicodeString> ImplementsList; 

	/**
	 * The anonymous class's method declararations.
	 * This class will NOT own the statement pointers in the list
	 */
	StatementListClass Body;

	AnonymousClassExpressionClass(const pelet::ScopeClass& scope);

private:
};

class DeclareDirectiveStatementClass : public StatementClass {
	public:
	
	/**
	 * The directives inside the declare statement
	 */
	std::vector<pelet::ConstantStatementClass*> Directives;
	
	/**
	 * The statements inside the 'declare' scope.
	 */
	pelet::StatementListClass Body;
	
	DeclareDirectiveStatementClass();
};

/**
 * useful macros to alleviate tedious type casting 
 * expression pointers into their type.  Note that the macros
 * also assert that the expression type macthes
 * 
 * PCE == pelet cast expression
 */
#define PCEA(var) (pelet::AssignmentExpressionClass*)var
#define PCEAR(var) (pelet::ArrayExpressionClass*)var
#define PCEL(var) (pelet::AssignmentListExpressionClass*)var
#define PCEB(var) (pelet::BinaryOperationClass*)var
#define PCEU(var) (pelet::UnaryOperationClass*)var
#define PCEUV(var) (pelet::UnaryVariableOperationClass*)var
#define PCET(var) (pelet::TernaryOperationClass*)var
#define PCEIO(var) (pelet::InstanceOfOperationClass*)var
#define PCEV(var) (pelet::VariableClass*)var
#define PCER(var) (pelet::ArrayExpressionClass*)var
#define PCES(var) (pelet::ScalarExpressionClass*)var
#define PCEN(var) (pelet::NewInstanceExpressionClass*)var
#define PCEC(var) (pelet::ClosureExpressionClass*)var

/**
 * This is the parser type that the bison parser uses. A grammar rules outputs
 * to exactly ONE of these properties
 */
typedef union ParserType {
	pelet::StatementListClass *statementList;
	pelet::QualifiedNameClass *qualifiedName;
	pelet::QualifiedNameListClass *qualifiedNameList;
	pelet::ConstantStatementClass *constant;
	pelet::ClassSymbolClass *classSymbol;
	pelet::ClassMemberSymbolClass *classMemberSymbol;
	pelet::ParametersListClass *parametersList;
	pelet::ExpressionClass *expression;
	pelet::VariableClass *variable;
	pelet::TraitUseClass *traitUse;
	pelet::TraitAliasClass *traitAlias;
	pelet::TraitInsteadOfClass *traitInsteadOf;
	pelet::FunctionImportClass* functionImport;
	pelet::ConstantImportClass* constantImport;
	pelet::UnprefixedNameClass* unprefixedName;
	pelet::UnprefixedNameListClass* unprefixedNameList;
	pelet::TypeHintClass* typeHint;
	pelet::SemanticValueClass *semanticValue;
	bool isMethod;
	bool isVariadic;
	bool isComma;
} ParserTypeClass;

/**
 * Get the return type from the '\@return' / '\@var' annotation
 * 
 * @param const UnicodeString& phpDocComment the comment
 * @param bool varAnnotation if false, will return the word after '\@var', else return the word after '\@return'
 * @param scope the scope where the PHPDoc comment is located in
 * @param currentNamespace the current namespace we are in
 * @return UnicodeString
 */
UnicodeString ReturnTypeFromPhpDocComment(const UnicodeString& phpDocComment, bool varAnnotation,
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
UnicodeString PhpDocTypeToAbsoluteClassname(UnicodeString phpDocType, 
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
									 const UnicodeString& phpDocComment, const int lineNumber);

} 

#endif