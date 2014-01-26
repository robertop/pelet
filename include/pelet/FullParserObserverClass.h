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
#include <pelet/Api.h>
#include <pelet/ParserTypeClass.h>
#include <unicode/unistr.h>

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
that the php53parse and the php53lex functions accept a pelet::LexicalAnalyzerClass as 
an argument.
We define a php53lex function, and in that function we will use 
pelet::LexicalAnalyzerClass::NextToken to get the next token from the
source code being parsed.

\section ParserImplementationDetailsGrammar Grammar rules
Let's look at an example grammar rule. A (simplified) bison grammar rule for a PHP variable
looks like this:

@code
compound_variable:
		T_VARIABLE			{ $$ = observers.ExpressionMakeVariable($1); }
	|	'$' '{' expr '}' 
;
@endcode

Where 
compound_variable is the name of a rule
T_VARIABLE is token that matches the rule. By convention these are upper case
|  is the symbol to say that rule can match another set of tokens
'$' {' '}'  are constant tokens to match on
 expr is a "nonterminal" rule (rule that is made up of another rule). By convention these are lower case.

This rule will match a T_VARIABLE token (from the lexer) or a "$" followed by a "{" that
is followed by an expr rule that is followed by another "}".  

Each rule can have an action associated with it.  An action is just a block of C / C++ code
that is executed when the rule is matched.  The only addition is that the action can
access the matching tokens by using $1 for the first token, $2 for the second token, and 
so on... For example, in the second branch $4 is the token '}'

So just what type is $1 ? The type of the $n variables is controlled via bison %type declarations.  Each
bison type declaration declares what each rule will "return" ie. which member of the YYSTYPE union it will write to.
In our case we define it to be a union pelet::ParserTypeClass. The ParserType is a union of all possible data
structures that we build to create the AST from the source code. For example, the grammar rule "expr" has
the following type declaration

%type <expression> expr

At the most simple case, tokens (ie. T_VARIABLE) are of type pelet::SemanticValueClass; this allows us to 
get the token, but also the lexeme; the token is the numeric representation, for example
T_VARIABLE, and the lexeme is the textual representation (for example "$userName").
All non-terminals have a %type declaration and that declaration dictates what type the rule will return (using the $$ 
pseudo variable is essentially accessing the declared property of the union). For example, the expr rule will end up 
assigning a value to the expression property of the ParserType union. Since
the expression property is declared to be of type pelet::ExpressionClass*, then in our example from above
$3 (expr) is of type pelet::ExpressionClass*. 

The AST is built-up by the recursive defintion of the statement grammar rule. Simplified version 
of the statement grammar rule is this:

top_statement_list:
		top_statement_list top_statement		{ $$ = observers.StatementListMerge($1, $2); }
	|	/ * empty * /							{ $$ = observers.StatementListMake(); }
;

top_statement:
	statement								{ $$ = $1; }
		
A top_statement_list is made up a sub list plus a statement; in the action the results top_statement are 
added to the sub list and the new list is returned.


The grammar file contains the entire PHP grammar; most of the rules don't have actions because
we are not interested in them; but the ones we are interested in have actions.  In our case,
we delegate most of the work to the pelet::FullParserObserverClass and the rules contain just 1-liner
method calls. This makes the code a bit more IDE-friendly. Another reason -  a very important one -
that the grammar file and ParserObserverClass are designed this way is to make it easy to implement 
the PHP syntax correctly. Since there is no official PHP language specification, the only sure way to know
that we implemented the PHP syntax correctly is to use the actual PHP grammar file.

\section ParserImplementationDetailsObserver Observer Quad
An FullParserObserverClass is an object that holds the observers (the objects that want to be notified
of source code artifacts like classes, functions, etc..). It gets passed in as a parameter to 
the php53parse and the php53lex functions just like the lexer. The different methods of
the ObserverQuad get called as the different bison rules are triggered, as in for example
the "class" rule:

@code
unticked_class_declaration_statement:
		class_entry_type T_STRING			
		extends_from implements_list		{ observers.SetCurrentClassName($2); }	
		'{' class_statement_list '}'		{ $$ = observers.ClassSymbolMake($2, $1, $3, $4, $8);
											  observers.StatementListMerge($$, $7); 
											  observers.SetCurrentClassName(NULL);  
											}

class_entry_type:
		T_CLASS					{ $$ = observers.ClassSymbolStart($1, false, false, false, false); }
	|	T_ABSTRACT T_CLASS		{ $$ = observers.ClassSymbolStart($1, true, false, false, false); }
	|	T_FINAL T_CLASS			{ $$ = observers.ClassSymbolStart($1, false, true, false, false); }
;

@endcode

In this case, when we see T_CLASS (class keyword) the ClassSymbolStart method gets called. Then, the
SetCurrentClassName method gets called (which allows us to get the name of the class). Then, after
any extends or implements keywords rules are parsed create a ClassSymbolClass structure. By assigning it
to $$, the calling rule will take the resulting object and store it in a StatementListClass object.

\section ParserImplementationDetailsUpdatingGrammar Updating the grammar
When a new PHP version updates the grammar; we must update the rules.  The simplest way to do this 
would be to diff the PHP grammar file with its prior versions, taking the new rules, gutting them (removing
the action block), and adding them to Php53ParserImpl.y.  If any new artifacts become available, then 
we should create new methods in the FullParserObserverClass, and possibly new interfaces that will expose
the new artifacts to the users of the pelet library.

\section Multiple Parser implementations
pelet has three different parsers for each PHP version; a lint parser, a resource parser, and a full parser. 

The lint parser is the quickest parser but it does not gather any info; its only purpose is to check whether
a piece of source code is valid PHP code. These are defined in Php53LintParser.cpp and Php54LintParser.cpp.

The resource parser is not as quick, but it gathers class, method, function, traits, and defined constants
info (does not gather local variables or function calls).  These are defined in 
Php53ResourceParser.cpp and Php54ResourceParser.cpp.

The full parser is the slowest, but it gathers all expressions; including local variables and function
calls. These are defined in Php53FullParser.cpp and Php54FullParser.cpp.
*/


/**
 * A data structure that holds all observers (objects to be notified of artifacts).  Each observer may be NULL.
 * This class will NOT own the observer pointers.
 * This class will also hold the current scope as the parser is parsing the code, acting as a 'global'
 * that the parser can use to store data accross multiple grammar rules.
 * 
 * A word about memory allocation. The FullParserObserverClass will keep track of all pointers returned
 * by ALL methods and delete them at the end when a file is finished being parsed. All of the pointers
 * returned by all methods of the FullParserObserverClass will be owned by ObserverQuadClass and will
 * be deleted when ObserverQuadClass goes out of scope.  We do to simplify memory management
 * as the parser (1) may encounter ambigous code, in which case it has to execute rule, "back up"
 * to the previous rule, and execute another rule, or (2) source code  contains a syntax error
 */
class PELET_API FullParserObserverClass {

public:

	/**
	 * Each observer may be NULL. This class will NOT own the pointers.
	 */
	FullParserObserverClass(ClassObserverClass* classObserver, ClassMemberObserverClass* memberObserver,
		FunctionObserverClass* functionObserver, VariableObserverClass* variableObserver, 
		ExpressionObserverClass* expressionObserver);

	~FullParserObserverClass();

	/**
	 * This method will allocate new string pointers for the Lexeme and Comment;
	 * It will also keep track of the memory and will delete it SematicValueFree is called.
	 */
	pelet::SemanticValueClass* SemanticValueInit();

	/**
	 * Frees all of the memory allocated by any of pointers created by any methods of this class.  This method will be called once 
	 * parsing completes
	 */
	void SemanticValueFree();
	
	pelet::SemanticValueClass* SemanticValueNil();
	
	pelet::QualifiedNameClass* QualifiedNameCreate(pelet::SemanticValueClass* nameValue);
	pelet::QualifiedNameClass* QualifiedNameMakeAbsolute(pelet::QualifiedNameClass* qualifiedName);
	pelet::QualifiedNameClass* QualifiedNameMakeFromDeclaredNamespace(pelet::QualifiedNameClass* qualifiedName);
	pelet::QualifiedNameClass* QualifiedNameNil();
	
	pelet::StatementListClass* NamespaceDeclarationFound(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* namespaceTokenValue);
	pelet::StatementListClass* NamespaceGlobalDeclarationFound(pelet::SemanticValueClass* namespaceTokenValue);
	pelet::QualifiedNameClass* NamespaceNameAppend(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* nameValue);
	pelet::QualifiedNameClass* NamespaceNameMake(pelet::SemanticValueClass* nameValue);
	pelet::StatementListClass* NamespaceUse(pelet::QualifiedNameClass* namespaceName);
	pelet::StatementListClass* NamespaceUseAbsolute(pelet::QualifiedNameClass* namespaceName);
	pelet::StatementListClass* NamespaceUseAbsoluteAlias(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* alias);
	pelet::StatementListClass* NamespaceUseAlias(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* alias);
	pelet::StatementListClass* NamespaceUseSetStartingPos(pelet::StatementListClass* namespaceStatements, pelet::SemanticValueClass* useToken);
	
	pelet::ClassSymbolClass* ClassSymbolAddToImplements(pelet::QualifiedNameClass* implementsClassName);
	pelet::ClassSymbolClass* ClassSymbolAddToImplements(pelet::ClassSymbolClass* classSymbol, pelet::QualifiedNameClass* implementsClassName);
	pelet::ClassSymbolClass* ClassSymbolExtends(pelet::QualifiedNameClass* extendsClassName);
	pelet::StatementListClass* ClassSymbolMake(pelet::SemanticValueClass* nameValue, pelet::ClassSymbolClass* classTypeSymbol, pelet::ClassSymbolClass* extendsSymbol, pelet::ClassSymbolClass* implementsSymbol, pelet::SemanticValueClass* endToken);
	pelet::ClassSymbolClass* ClassSymbolStart(pelet::SemanticValueClass* commentValue, bool isAbstract, bool isFinal, bool isInterface, bool isTrait);
	
	pelet::ParametersListClass* ParametersListNil();
	pelet::ParametersListClass* ParametersListAppend(pelet::ParametersListClass* parametersList, pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference);
	pelet::ParametersListClass* ParametersListCreate(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference); 

	pelet::StatementListClass* ClassMemberSymbolMakeMethod(pelet::SemanticValueClass* nameValue, 
		pelet::ClassMemberSymbolClass* modifiers,
		bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters, 
		pelet::ClassMemberSymbolClass* methodBody);
	pelet::StatementListClass* ClassMemberSymbolMakeVariable(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue, bool isConstant, const int endingPosition);
	pelet::ClassMemberSymbolClass* ClassMemberSymbolMake(pelet::SemanticValueClass* varValue);
	pelet::StatementListClass* ClassMemberSymbolMakeVariables(pelet::StatementListClass* variableStatements, pelet::ClassMemberSymbolClass* modifiers);
	pelet::ClassMemberSymbolClass* ClassMemberSymbolMakeAsPublicVariable(pelet::SemanticValueClass* varValue);
	pelet::ClassMemberSymbolClass* ClassMemberSymbolSetModifier(pelet::ClassMemberSymbolClass* memberSymbol, pelet::SemanticValueClass* modifierValue);
	pelet::StatementListClass* ClassMemberSymbolMakeFunction(pelet::SemanticValueClass* nameValue, 
		bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters,
		pelet::SemanticValueClass* startingBodyTokenValue, pelet::SemanticValueClass* endingBodyTokenValue);
	pelet::ClassMemberSymbolClass* ClassMemberMakeBody(pelet::StatementListClass* bodyStatements, 
		pelet::SemanticValueClass* startingPositionTokenValue, pelet::SemanticValueClass* endingPositionTokenValue);
		
	pelet::StatementListClass* TraitUseMake(pelet::TraitUseClass* traitsUsed, pelet::StatementListClass* traitAdaptations);
	pelet::TraitUseClass* TraitUseStart(pelet::QualifiedNameClass* qualifiedName);
	pelet::TraitUseClass* TraitUseAppend(pelet::TraitUseClass* traitUse, pelet::QualifiedNameClass* qualifiedName);
	pelet::TraitInsteadOfClass* TraitInsteadOfMake(pelet::TraitAliasClass* traitMethodReference, pelet::TraitInsteadOfClass* traitInsteadOfList);
	pelet::TraitInsteadOfClass* TraitInsteadOfMakeReferenceList(pelet::QualifiedNameClass* qualifiedName);
	pelet::TraitInsteadOfClass* TraitInsteadOfAppendReferenceList(pelet::TraitInsteadOfClass* traitInsteadOf, pelet::QualifiedNameClass* qualifiedName);
	pelet::TraitAliasClass* TraitAliasMakeMethodReferenceList(pelet::SemanticValueClass* methodName);
	pelet::TraitAliasClass* TraitAliasMakeMethodReferenceList(pelet::QualifiedNameClass* qualifiedName, pelet::SemanticValueClass* methodName);
	pelet::TraitAliasClass* TraitAliasMake(pelet::TraitAliasClass* traitMethodReference, pelet::ClassMemberSymbolClass* traitModifiers, pelet::SemanticValueClass* aliasValue);
	pelet::TraitAliasClass* TraitAliasMake(pelet::TraitAliasClass* traitMethodReference, pelet::ClassMemberSymbolClass* traitModifiers);

	pelet::ExpressionClass* IncludeFound(pelet::ExpressionClass* expr, const int lineNumber);

	pelet::ExpressionClass* ExpressionMakeAssignmentList(pelet::StatementListClass* assignmentList, pelet::ExpressionClass* srcExpression);
	pelet::ExpressionClass* AssignmentExpressionFromExpressionFound(pelet::VariableClass* variable, pelet::ExpressionClass* expression);
	pelet::ExpressionClass* AssignmentExpressionFromNewFound(pelet::VariableClass* variable, pelet::QualifiedNameClass* className, pelet::StatementListClass* callArguments);
	pelet::ExpressionClass* AssignmentExpressionFromVariableFound(pelet::VariableClass* variable, pelet::VariableClass* srcVariable);
	pelet::ExpressionClass* ExpressionMakeAsAssignmentExpression(pelet::VariableClass* variable);
	pelet::ExpressionClass* ExpressionMakeArray(pelet::StatementListClass* pairStatements);
	pelet::NewInstanceExpressionClass* ExpressionMakeNewInstanceCall(pelet::QualifiedNameClass* className, pelet::StatementListClass* callArguments);
	pelet::ExpressionClass* ExpressionMakeClassConstant(pelet::QualifiedNameClass* className, pelet::SemanticValueClass* constantName);
	pelet::ExpressionClass* ExpressionMakeGlobalVariable(pelet::SemanticValueClass* value);
	pelet::ExpressionClass* ExpressionMakeObject(pelet::ExpressionClass* srcExpression);
	pelet::ExpressionClass* ExpressionMakeScalar(pelet::ExpressionClass* srcExpression);
	pelet::ExpressionClass* ExpressionMakeScalar(pelet::SemanticValueClass* srcValue);
	pelet::ExpressionClass* ExpressionMakeScalarFromConstant(pelet::QualifiedNameClass* constantName);
	pelet::ExpressionClass* ExpressionMakeStaticVariable(pelet::SemanticValueClass* nameValue);
	pelet::ExpressionClass* ExpressionAssignmentCompoundOperation(int operatorToken, pelet::VariableClass* leftOperand, pelet::ExpressionClass* rightOperand);
	pelet::ExpressionClass* ExpressionBinaryOperation(int operatorToken, pelet::ExpressionClass* leftOperand, pelet::ExpressionClass* rightOperand);
	pelet::ExpressionClass* ExpressionUnaryOperation(int operatorToken, pelet::ExpressionClass* operand);
	pelet::ExpressionClass* ExpressionUnaryVariableOperation(int operatorToken, pelet::VariableClass* operand);
	pelet::ExpressionClass* ExpressionTernaryOperation(pelet::ExpressionClass* leftOperand, pelet::ExpressionClass* middleOperand, pelet::ExpressionClass* rightOperand);
	pelet::StatementListClass* ExpressionMakeArrayPair(pelet::ExpressionClass* key, pelet::ExpressionClass* value);
	pelet::ExpressionClass* ExpressionMakeClosure(pelet::ParametersListClass* parameters, pelet::StatementListClass* lexicalVars, pelet::StatementListClass* stmts);
	pelet::ExpressionClass* ExpressionIsset(pelet::ExpressionClass* expr);
	pelet::ExpressionClass* ExpressionIssetMerge(pelet::IssetExpressionClass* isset, pelet::ExpressionClass* expr);
	pelet::ExpressionClass* ExpressionNil();
	
	pelet::VariableClass* VariableMake(pelet::VariableClass* baseName, pelet::VariableClass* firstProperty, pelet::VariableClass* firstPropertyCallArguments, pelet::VariableClass* restProperties);
	pelet::VariableClass* VariableMakeFunctionCall(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber);
	pelet::VariableClass* VariableMakeFunctionCallFromDeclaredNamespace(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber);
	pelet::VariableClass* VariableMakeFunctionCallFromAbsoluteNamespace(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber);
	pelet::VariableClass* VariableMakeStaticMethodCall(pelet::QualifiedNameClass* className, pelet::SemanticValueClass* methodName, pelet::StatementListClass* callArguments, int lineNumber);
	pelet::VariableClass* VariableStart(pelet::SemanticValueClass* variableValue);
	pelet::VariableClass* VariableStartStaticMember(pelet::QualifiedNameClass* className, pelet::VariableClass* memberName);
	pelet::VariableClass* VariableAppendToChain(pelet::VariableClass* variableProperties, pelet::VariableClass* newVariableProperty);
	pelet::VariableClass* VariableAppendToChain(pelet::VariableClass* variable, pelet::VariableClass* callArguments, pelet::SemanticValueClass* operatorValue);
	pelet::VariableClass* VariableMakeAndAppendFunctionCall(pelet::StatementListClass* callArguments, bool isMethod);
	pelet::VariableClass* VariableAppendArrayOffset(pelet::VariableClass* variable, pelet::ExpressionClass* offsetExpr);
	pelet::VariableClass* VariableNil();

	pelet::ExpressionClass* NewInstanceAppendToChain(pelet::ExpressionClass* newInstanceExpr, pelet::VariableClass* variable);
	
	void MakeAst(pelet::StatementListClass* statements);
	
	pelet::StatementListClass* ConstantMake(pelet::SemanticValueClass* value, int lineNumber);
	
	pelet::StatementListClass* StatementListAppend(pelet::StatementListClass* statementList, pelet::StatementClass* statement);
	pelet::StatementListClass* StatementListMake();
	pelet::StatementListClass* StatementListMakeAndAppend(pelet::StatementClass* statement);
	pelet::StatementListClass* StatementListMerge(pelet::StatementListClass* a, pelet::StatementListClass* b); 
	pelet::StatementListClass* StatementListNil();
	
	pelet::StatementListClass* GlobalVariablesStatementMake(pelet::StatementListClass* variables);
	pelet::StatementListClass* StaticVariablesStatementMake(pelet::StatementListClass* variables);

	/**
	 * clear any namespace aliases. This should be called when multiple namespaces
	 * are declared in a single file
	 */
	void NamespaceAliasClear();
	
	/**
	 * Will check the given comment for \@var annotations FOR LOCAL VARIABLES ONLY
	 * and notify the observer.
	 * assuming that comment for local variables look like this
	 *  \@var $dog Dog
	 * people got used to doing it this way
	 * http://stackoverflow.com/questions/4329288/code-hinting-completion-for-array-of-objects-in-zend-studio-or-any-other-ecli
	 */
	void NotifyLocalVariableTypeHint(const UnicodeString& comment);
	
	void SetCurrentClassName(pelet::SemanticValueClass* value);
	
	void SetCurrentMemberName(pelet::SemanticValueClass* value);
	
	void SetDeclaredNamespace(pelet::QualifiedNameClass* qualifiedName);
	
	/**
	 * @return Scope that is filled in *as the source is being parsed*. This is 
	 * useful to get the last good scope when a parse error occurs.
	 */
	pelet::ScopeClass CurrentScope();
	
	/**
	 * run through the class statements and create property declarations based out of
	 * all assignments to "$this->prop". The property declarations are appended to 
	 * the given list.
	 * 
	 * @param classStatements the list of statements parsed from a class declaration
	 */
	void DeclareAssignedPropertiesFromAssignments(pelet::StatementListClass* classStatements);

	/**
	 * parses out the PHPDoc magic property / methods and creates member declarations
	 * for them
	 */
	void CreateMagicMethodsAndProperties(pelet::StatementListClass* classStatements, pelet::ClassSymbolClass* clazz);
	
private:

	/**
	 * Loop through the current parameters list and notify the variable observer
	 * of those variables.  This, in essence, allows the creation of parameters as 
	 * local variables.
	 */
	void NotifyVariablesFromParameterList(pelet::ParametersListClass& parameters, UnicodeString currentNamespaceName, UnicodeString currentClassName, UnicodeString currentMethodName);

	/**
	 * Parses any variable type hints from the given PHPDoc and notifies the variable observer. In this case, the annotation will
	 * contain the variable name AND the variable type as in:
	 *   \@var $myvar VarTypeClass
	 *
	 * The comment may contain more than on name-type pair
	 * @param phpDocComment the entire comment
	 */
	void NotifyLocalVariableFromPhpDoc(const UnicodeString& phpDocComment);
	
	/**
	 * the class, method, and namespace that are currently being parsed.
	 */
	ScopeClass Scope;

	/**
	 * The current namespace
	 */
	QualifiedNameClass DeclaredNamespace;
	
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
	 * keep track of all ParserTypes to delete them at the end
	 */
	std::vector<AstItemClass*> AllAstItems;
};

/**
 * This function will get the next token from the lexer and will create a new SemanticValue (token + lexeme) 
 * from it.
 */
int FullLex(pelet::ParserType* value, pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers);

/**
 * this function will set the error that comes from bison and put it in the LexicalAnalyzer class.
 */
void FullGrammarError(pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers, std::string msg);

}

/* 
 * generated by Bison according to the prefix of our choosing
 * Bison won't put this declaration in the header file so we must
 * manually make it available here by using "extern"
 */
int php53parse(pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers);
int php54parse(pelet::LexicalAnalyzerClass &analyzer, pelet::FullParserObserverClass& observers);

#endif
