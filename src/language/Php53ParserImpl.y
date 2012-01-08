%{
	
/**
 * This software is released under the terms of the MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to th	`e following conditions:
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
 #include <language/UCharBufferedFileClass.h>
 #include <language/LexicalAnalyzerClass.h>
#include <language/ParserObserverClass.h>
 #include <unicode/unistr.h>
 #include <string>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
 
#define YYSTYPE mvceditor::SemanticValueClass
 
int php53lex(YYSTYPE* value, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers);
void php53error(mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers, std::string msg);

%}

%parse-param { mvceditor::LexicalAnalyzerClass &analyzer }
%parse-param { mvceditor::ObserverQuadClass& observers }
%lex-param  { mvceditor::LexicalAnalyzerClass &analyzer }
%lex-param { mvceditor::ObserverQuadClass& observers }
%destructor { observers.SemanticValueFree($$); } <*>

/**
 * This parser was ripped from the PHP source. All credit goes to them.
 */
 
%define api.pure
%error-verbose
%expect 2
%name-prefix "php53"
%debug

%left T_INCLUDE T_INCLUDE_ONCE T_EVAL T_REQUIRE T_REQUIRE_ONCE
%left ','
%left T_LOGICAL_OR
%left T_LOGICAL_XOR
%left T_LOGICAL_AND
%right T_PRINT
%left '=' T_PLUS_EQUAL T_MINUS_EQUAL T_MUL_EQUAL T_DIV_EQUAL T_CONCAT_EQUAL T_MOD_EQUAL T_AND_EQUAL T_OR_EQUAL T_XOR_EQUAL T_SL_EQUAL T_SR_EQUAL
%left '?' ':'
%left T_BOOLEAN_OR
%left T_BOOLEAN_AND
%left '|'
%left '^'
%left '&'
%nonassoc T_IS_EQUAL T_IS_NOT_EQUAL T_IS_IDENTICAL T_IS_NOT_IDENTICAL
%nonassoc '<' T_IS_SMALLER_OR_EQUAL '>' T_IS_GREATER_OR_EQUAL
%left T_SL T_SR
%left '+' '-' '.'
%left '*' '/' '%'
%right '!'
%nonassoc T_INSTANCEOF
%right '~' T_INC T_DEC T_INT_CAST T_DOUBLE_CAST T_STRING_CAST T_ARRAY_CAST T_OBJECT_CAST T_BOOL_CAST T_UNSET_CAST '@'
%right '['
%nonassoc T_NEW T_CLONE
%token T_EXIT
%token T_IF
%left T_ELSEIF
%left T_ELSE
%left T_ENDIF
%token T_LNUMBER
%token T_DNUMBER
%token T_STRING
%token T_STRING_VARNAME
%token T_VARIABLE
%token T_NUM_STRING
%token T_INLINE_HTML
%token T_CHARACTER
%token T_BAD_CHARACTER
%token T_ENCAPSED_AND_WHITESPACE
%token T_CONSTANT_ENCAPSED_STRING
%token T_ECHO
%token T_DO
%token T_WHILE
%token T_ENDWHILE
%token T_FOR
%token T_ENDFOR
%token T_FOREACH
%token T_ENDFOREACH
%token T_DECLARE
%token T_ENDDECLARE
%token T_AS
%token T_SWITCH
%token T_ENDSWITCH
%token T_CASE
%token T_DEFAULT
%token T_BREAK
%token T_CONTINUE
%token T_GOTO
%token T_FUNCTION
%token T_CONST
%token T_RETURN
%token T_TRY
%token T_CATCH
%token T_THROW
%token T_USE
%token T_GLOBAL
%right T_STATIC T_ABSTRACT T_FINAL T_PRIVATE T_PROTECTED T_PUBLIC
%token T_VAR
%token T_UNSET
%token T_ISSET
%token T_EMPTY
%token T_HALT_COMPILER
%token T_CLASS
%token T_INTERFACE
%token T_EXTENDS
%token T_IMPLEMENTS
%token T_OBJECT_OPERATOR
%token T_DOUBLE_ARROW
%token T_LIST
%token T_ARRAY
%token T_CLASS_C
%token T_METHOD_C
%token T_FUNC_C
%token T_LINE
%token T_FILE
%token T_COMMENT
%token T_DOC_COMMENT
%token T_OPEN_TAG
%token T_OPEN_TAG_WITH_ECHO
%token T_CLOSE_TAG
%token T_WHITESPACE
%token T_START_HEREDOC
%token T_END_HEREDOC
%token T_DOLLAR_OPEN_CURLY_BRACES
%token T_CURLY_OPEN
%token T_PAAMAYIM_NEKUDOTAYIM
%token T_NAMESPACE
%token T_NS_C
%token T_DIR
%token T_NS_SEPARATOR



// these tokens are not part of PHP; mvc editor specific
%token T_END_OF_FILE 0
%token T_ERROR_UNTERMINATED_COMMENT
%token T_ERROR_UNTERMINATED_STRING
%token T_ERROR_UNTERMINATED_BACKTICK

/* 
 * differences from PHP parser:
 *
 * %token T_STRING_VARNAME  // used when expanding variables; we wont be needing to calculate strings 
 * %token T_DOLLAR_OPEN_CURLY_BRACES // used when expanding variables; we wont be needing to calculate strings 
 * %token T_NUM_STRING // escape sequences wont bother with these for now
 * %token T_WHITESPACE // not sure why the parser is looking for white space
 * %token T_CURLY_OPEN // used when expanding variables; we wont be needing to calculate strings 
 *
 * not used by PHP lexer (obsolete??)
 * 
 * %token T_CHARACTER 
 * %token T_BAD_CHARACTER
 */
 
%%
start:
	top_statement_list
;

top_statement_list:
		top_statement_list top_statement
	|	/* empty */
;

namespace_name:
		T_STRING								{ observers.QualifiedNameGrabNameAndComment($1); }
	|	namespace_name T_NS_SEPARATOR T_STRING	{ observers.QualifiedNameAddName($3); }
;

top_statement:
		statement								{ observers.ClearExpressions(); }
	|	function_declaration_statement
	|	class_declaration_statement
	|	T_HALT_COMPILER '(' ')' ';'
	|	T_NAMESPACE namespace_name ';'
	|	T_NAMESPACE namespace_name '{'
		top_statement_list '}'
	|	T_NAMESPACE '{'
		top_statement_list '}'
	|	T_USE use_declarations ';'
	|	constant_declaration ';'
;

use_declarations:
		use_declarations ',' use_declaration
	|	use_declaration
;

use_declaration:
		namespace_name
	|	namespace_name T_AS T_STRING
	|	T_NS_SEPARATOR namespace_name
	|	T_NS_SEPARATOR namespace_name T_AS T_STRING
;

constant_declaration:
		constant_declaration ',' T_STRING '=' static_scalar
	|	T_CONST T_STRING '=' static_scalar
;

inner_statement_list:
		inner_statement_list inner_statement
	|	/* empty */
;

inner_statement:
		statement							{ observers.ClearExpressions(); }
	|	function_declaration_statement
	|	class_declaration_statement
	|	T_HALT_COMPILER '(' ')' ';'
;

statement:
		unticked_statement
	|	T_STRING ':'
;

unticked_statement:
		'{' inner_statement_list '}'
	|	T_IF '(' expr ')' statement elseif_list else_single
	|	T_IF '(' expr ')' ':' inner_statement_list new_elseif_list new_else_single T_ENDIF ';'
	|	T_WHILE '(' expr  ')' while_statement
	|	T_DO statement T_WHILE '(' expr ')' ';'
	|	T_FOR
			'('
				for_expr
			';'
				for_expr
			';'
				for_expr
			')'
			for_statement
	|	T_SWITCH '(' expr ')' switch_case_list
	|	T_BREAK ';'
	|	T_BREAK expr ';'
	|	T_CONTINUE ';'
	|	T_CONTINUE expr ';'
	|	T_RETURN ';'
	|	T_RETURN expr_without_variable ';'
	|	T_RETURN variable ';'
	|	T_GLOBAL global_var_list ';'
	|	T_STATIC static_var_list ';'
	|	T_ECHO echo_expr_list ';'
	|	T_INLINE_HTML
	|	expr ';'
	|	T_UNSET '(' unset_variables ')' ';'
	|	T_FOREACH '(' variable T_AS
		foreach_variable foreach_optional_arg ')'
		foreach_statement
	|	T_FOREACH '(' expr_without_variable T_AS
		variable foreach_optional_arg ')'
		foreach_statement
	|	T_DECLARE '(' declare_list ')' declare_statement
	|	';'		/* empty statement */
	|	T_TRY '{' inner_statement_list '}'
		T_CATCH '(' fully_qualified_class_name T_VARIABLE ')'			{ observers.ExceptionCatchFound($8); }
		'{' inner_statement_list '}'
		additional_catches
	|	T_THROW expr ';'
	|	T_GOTO T_STRING ';'
;

additional_catches:
		non_empty_additional_catches
	|	/* empty */
;

non_empty_additional_catches:
		additional_catch
	|	non_empty_additional_catches additional_catch
;

additional_catch:
	T_CATCH '(' fully_qualified_class_name T_VARIABLE ')'				{ observers.ExceptionCatchFound($4); }
	'{' inner_statement_list '}'
;

unset_variables:
		unset_variable
	|	unset_variables ',' unset_variable
;

unset_variable:
		variable
;

function_declaration_statement:
		unticked_function_declaration_statement
;

class_declaration_statement:
		unticked_class_declaration_statement
;

is_reference:
		/* empty */  						{ $$.Token = 0; }
	|	'&'									{ $$ = $1; }
;

unticked_function_declaration_statement:
		function is_reference T_STRING		{ observers.FunctionStart($3, $2, $1); }
		'(' parameter_list ')'				{ observers.FunctionFound(); }
		'{' inner_statement_list '}'		{ observers.FunctionEnd($11); }
;

unticked_class_declaration_statement:
		class_entry_type T_STRING			{ observers.ClassSetName($2); }
		extends_from implements_list		{ observers.ClassFound(); }
		'{' class_statement_list '}'		{ observers.ClassEnd(); }
	|	interface_entry T_STRING			{ observers.ClassSetName($2); }
		interface_extends_list				{ observers.ClassFound(); }
		'{' class_statement_list '}'		{ observers.ClassEnd(); }
;

class_entry_type:
		T_CLASS					{ observers.ClassStart($1, false, false, false); }
	|	T_ABSTRACT T_CLASS		{ observers.ClassStart($1, true, false, false); }
	|	T_FINAL T_CLASS			{ observers.ClassStart($1, false, true, false); }
;

extends_from:
		/* empty */
	|	T_EXTENDS						{ observers.QualifiedNameClear(); }
		fully_qualified_class_name 		{ observers.ClassSetExtends(); }
;

interface_entry:
	T_INTERFACE		{ observers.ClassStart($1, false, false, true); }
;

interface_extends_list:
		/* empty */
	|	T_EXTENDS			{ observers.QualifiedNameClear(); }
		interface_list
;

implements_list:
		/* empty */
	|	T_IMPLEMENTS		{ observers.QualifiedNameClear(); }
		interface_list
;

interface_list:
		fully_qualified_class_name							{ observers.ClassAddToImplements(); }
	|	interface_list ','	fully_qualified_class_name		{ observers.ClassAddToImplements(); }
;

foreach_optional_arg:
		/* empty */
	|	T_DOUBLE_ARROW foreach_variable
;

foreach_variable:
		variable									{ observers.ForeachVariableFound(); }
	|	'&' variable								{ observers.ForeachVariableFound(); }
;

for_statement:
		statement
	|	':' inner_statement_list T_ENDFOR ';'
;

foreach_statement:
		statement
	|	':' inner_statement_list T_ENDFOREACH ';'
;

declare_statement:
		statement
	|	':' inner_statement_list T_ENDDECLARE ';'
;

declare_list:
		T_STRING '=' static_scalar
	|	declare_list ',' T_STRING '=' static_scalar
;

switch_case_list:
		'{' case_list '}'
	|	'{' ';' case_list '}'
	|	':' case_list T_ENDSWITCH ';'
	|	':' ';' case_list T_ENDSWITCH ';'
;

case_list:
		/* empty */
	|	case_list T_CASE expr case_separator inner_statement_list
	|	case_list T_DEFAULT case_separator inner_statement_list
;

case_separator:
		':'
	|	';'
;

while_statement:
		statement
	|	':' inner_statement_list T_ENDWHILE ';'
;

elseif_list:
		/* empty */
	|	elseif_list T_ELSEIF '(' expr ')' statement
;

new_elseif_list:
		/* empty */
	|	new_elseif_list T_ELSEIF '(' expr ')' ':' inner_statement_list
;

else_single:
		/* empty */
	|	T_ELSE statement
;

new_else_single:
		/* empty */
	|	T_ELSE ':' inner_statement_list
;

parameter_list:
		non_empty_parameter_list
	|	/* empty */
;


non_empty_parameter_list:
		optional_class_type T_VARIABLE														{ observers.ParametersListSetName($2, false); }
	|	optional_class_type '&' T_VARIABLE													{ observers.ParametersListSetName($3, true); }
	|	optional_class_type '&' T_VARIABLE '=' static_scalar								{ observers.ParametersListSetName($3, true);}
	|	optional_class_type T_VARIABLE '=' static_scalar									{ observers.ParametersListSetName($2, true); }
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE							{ observers.ParametersListSetName($4, false); } 
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE						{ observers.ParametersListSetName($5, true); }
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE	'=' static_scalar	{ observers.ParametersListSetName($5, true); }
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE '=' static_scalar		{ observers.ParametersListSetName($4, false); }
;


optional_class_type:
		/* empty */						{ observers.ParametersListCreate(); }
	|	fully_qualified_class_name		{ observers.CreateParameterWithOptionalClassName(); }
	|	T_ARRAY							{ observers.ParametersListCreateWithOptionalType($1); }
;

function_call_parameter_list:
		non_empty_function_call_parameter_list
	|	/* empty */
;

non_empty_function_call_parameter_list:
		expr_without_variable												{ observers.ExpressionAsCallArgument(); }
	|	variable															{ observers.ExpressionAsCallArgument(); }
	|	'&' w_variable														{ observers.ExpressionAsCallArgument(); }
	|	non_empty_function_call_parameter_list ',' expr_without_variable	{ observers.ExpressionAsCallArgument(); }
	|	non_empty_function_call_parameter_list ',' variable					{ observers.ExpressionAsCallArgument(); }
	|	non_empty_function_call_parameter_list ',' '&' w_variable			{ observers.ExpressionAsCallArgument(); }
;

global_var_list:
		global_var_list ',' global_var
	|	global_var
;

global_var:
		T_VARIABLE				{ observers.GlobalVariableFound($1); }
	|	'$' r_variable
	|	'$' '{' expr '}'
;

static_var_list:
		static_var_list ',' T_VARIABLE							{ observers.StaticVariableFound($3); }
	|	static_var_list ',' T_VARIABLE '=' static_scalar		{ observers.StaticVariableFound($3); }
	|	T_VARIABLE												{ observers.StaticVariableFound($1); }
	|	T_VARIABLE '=' static_scalar							{ observers.StaticVariableFound($1); }
;

class_statement_list:
		class_statement_list class_statement
	|	/* empty */
;

class_statement:
		variable_modifiers class_variable_declaration ';'	{ observers.ClassMemberClear(); }
	|	class_constant_declaration ';'						{ observers.ClassMemberClear(); }
	|	method_modifiers function is_reference T_STRING		{ observers.ClassMemberSetNameAndReturnReference($4, $3, $2); }
		'('	parameter_list  ')'								{ observers.ClassMemberFound(false); }
		method_body											{ observers.ClassMemberClear(); }
;

method_body:
		';' /* abstract method */			{ observers.ClassMethodEnd($1); }
	|	'{' inner_statement_list '}'		{ observers.ClassMethodEnd($3); }
;

variable_modifiers:
		non_empty_member_modifiers
	|	T_VAR						 { observers.ClassMemberSetAsPublic();  observers.ClassMemberAppendToComment($1); }
;

method_modifiers:
		/* empty */
	|	non_empty_member_modifiers
;

non_empty_member_modifiers:
		member_modifier
	|	non_empty_member_modifiers member_modifier
;

member_modifier:
		T_PUBLIC	 { observers.ClassMemberSetAsPublic(); observers.ClassMemberAppendToComment($1); }
	|	T_PROTECTED	 { observers.ClassMemberSetAsProtected(); observers.ClassMemberAppendToComment($1); }
	|	T_PRIVATE	 { observers.ClassMemberSetAsPrivate(); observers.ClassMemberAppendToComment($1);}
	|	T_STATIC	 { observers.ClassMemberSetAsStatic(); observers.ClassMemberAppendToComment($1); }
	|	T_ABSTRACT	 { observers.ClassMemberSetAsAbstract(); observers.ClassMemberAppendToComment($1); }
	|	T_FINAL		 { observers.ClassMemberSetAsFinal(); observers.ClassMemberAppendToComment($1); }
;

class_variable_declaration:
		class_variable_declaration ',' T_VARIABLE						{ observers.ClassMemberSetNameAndReturnReference($3, $3, $3); observers.ClassMemberFound(true); }
	|	class_variable_declaration ',' T_VARIABLE '=' static_scalar		{ observers.ClassMemberSetNameAndReturnReference($3, $3, $3); observers.ClassMemberFound(true); }
	|	T_VARIABLE														{ observers.ClassMemberSetNameAndReturnReference($1, $1, $1); observers.ClassMemberFound(true); }
	|	T_VARIABLE '=' static_scalar									{ observers.ClassMemberSetNameAndReturnReference($1, $1, $1); observers.ClassMemberFound(true); }
;

class_constant_declaration:
		class_constant_declaration ',' 
		T_STRING '=' static_scalar			{ observers.ClassMemberSetNameAndReturnReference($3, $3, $3); observers.ClassMemberFound(true); }
	|	T_CONST T_STRING '=' static_scalar  { observers.ClassMemberSetAsConst($2, $1); observers.ClassMemberFound(true); }
;

echo_expr_list:
		echo_expr_list ',' expr
	|	expr
;

for_expr:
		/* empty */
	|	non_empty_for_expr
;

non_empty_for_expr:
		non_empty_for_expr ',' expr
	|	expr
;

expr_without_variable:
		T_LIST '(' assignment_list ')' '=' expr						{  }
	|	variable '=' expr											{ observers.AssignmentExpressionFound(); }
	|	variable '=' '&' variable									{ observers.AssignmentExpressionFound(); }
	|	variable '=' '&' T_NEW class_name_reference ctor_arguments	{ observers.ExpressionPushNewInstanceCall(); observers.AssignmentExpressionFound(); }
	|	T_NEW class_name_reference ctor_arguments					{ observers.ExpressionPushNewInstanceCall(); }
	|	T_CLONE expr												{ observers.ExpressionPushNewVariable($1); }
	|	variable T_PLUS_EQUAL expr									{ observers.ExpressionPushNewScalar($1); }
	|	variable T_MINUS_EQUAL expr									{ observers.ExpressionPushNewScalar($1); }
	|	variable T_MUL_EQUAL expr									{ observers.ExpressionPushNewScalar($1); }
	|	variable T_DIV_EQUAL expr									{ observers.ExpressionPushNewScalar($1); }
	|	variable T_CONCAT_EQUAL expr								{ observers.ExpressionPushNewScalar($1); }
	|	variable T_MOD_EQUAL expr									{ observers.ExpressionPushNewScalar($1); }
	|	variable T_AND_EQUAL expr									{ observers.ExpressionPushNewScalar($1); }
	|	variable T_OR_EQUAL expr									{ observers.ExpressionPushNewScalar($1); }
	|	variable T_XOR_EQUAL expr 									{ observers.ExpressionPushNewScalar($1); }
	|	variable T_SL_EQUAL expr									{ observers.ExpressionPushNewScalar($1); }
	|	variable T_SR_EQUAL expr									{ observers.ExpressionPushNewScalar($1); }
	|	rw_variable T_INC 											{ observers.ExpressionPushNewScalar($1); }
	|	T_INC rw_variable 											{ observers.ExpressionPushNewScalar($1); }
	|	rw_variable T_DEC 											{ observers.ExpressionPushNewScalar($1); }
	|	T_DEC rw_variable 											{ observers.ExpressionPushNewScalar($1); }
	|	expr T_BOOLEAN_OR expr										{ observers.ExpressionPushNewScalar($1); }
	|	expr T_BOOLEAN_AND expr										{ observers.ExpressionPushNewScalar($1); }
	|	expr T_LOGICAL_OR expr 										{ observers.ExpressionPushNewScalar($1); }
	|	expr T_LOGICAL_AND expr										{ observers.ExpressionPushNewScalar($1); }
	|	expr T_LOGICAL_XOR expr										{ observers.ExpressionPushNewScalar($1); }
	|	expr '|' expr												{ observers.ExpressionPushNewScalar($1); }
	|	expr '&' expr												{ observers.ExpressionPushNewScalar($1); }
	|	expr '^' expr 												{ observers.ExpressionPushNewScalar($1); }
	|	expr '.' expr 												{ observers.ExpressionPushNewScalar($1); }
	|	expr '+' expr												{ observers.ExpressionPushNewScalar($1); }
	|	expr '-' expr												{ observers.ExpressionPushNewScalar($1); }
	|	expr '*' expr												{ observers.ExpressionPushNewScalar($1); }
	|	expr '/' expr												{ observers.ExpressionPushNewScalar($1); }
	|	expr '%' expr 												{ observers.ExpressionPushNewScalar($1); }
	| 	expr T_SL expr 												{ observers.ExpressionPushNewScalar($1); }
	|	expr T_SR expr												{ observers.ExpressionPushNewScalar($1); }
	|	'+' expr %prec T_INC										{ observers.ExpressionPushNewScalar($1); }
	|	'-' expr %prec T_INC										{ observers.ExpressionPushNewScalar($1); }
	|	'!' expr													{ observers.ExpressionPushNewScalar($1); }
	|	'~' expr													{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_IDENTICAL expr									{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_NOT_IDENTICAL expr 								{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_EQUAL expr										{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_NOT_EQUAL expr 									{ observers.ExpressionPushNewScalar($1); }
	|	expr '<' expr 												{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_SMALLER_OR_EQUAL expr								{ observers.ExpressionPushNewScalar($1); }
	|	expr '>' expr 												{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_GREATER_OR_EQUAL expr								{ observers.ExpressionPushNewScalar($1); }
	|	expr T_INSTANCEOF class_name_reference						{ observers.ExpressionPushNewScalar($1); }
	|	'(' expr ')'  												{ observers.ExpressionPushNewScalar($1); }
	|	expr '?' 
		expr ':' 
		expr														{ observers.ExpressionPushNewScalar($1); }
	|	expr '?' ':' 
		expr     													{ observers.ExpressionPushNewScalar($1); }
	|	internal_functions_in_yacc									{ observers.ExpressionPushNewScalar($1); }
	|	T_INT_CAST expr 											{ observers.ExpressionPushNewScalar($1); }
	|	T_DOUBLE_CAST expr  										{ observers.ExpressionPushNewScalar($1); }
	|	T_STRING_CAST expr 											{ observers.ExpressionPushNewScalar($1); }
	|	T_ARRAY_CAST expr  											{ observers.ExpressionPushNewArray($1); }
	|	T_OBJECT_CAST expr  										{ observers.ExpressionPushNewVariable($1); }
	|	T_BOOL_CAST expr											{ observers.ExpressionPushNewScalar($1); }
	|	T_UNSET_CAST expr
	|	T_EXIT exit_expr
	|	'@' expr
	|	scalar
	|	T_ARRAY '(' array_pair_list ')'								{ observers.ExpressionPushNewArray($1); }
	|	'`' backticks_expr '`'										{ observers.ExpressionPushNewScalar($1); /* results of backtick operator is a string */ }
	|	T_PRINT expr 
	|	function is_reference 
		'(' parameter_list ')' 
		lexical_vars '{' inner_statement_list '}'					{ observers.ExpressionPushNewScalar($1); }
;

function:
	T_FUNCTION
;

lexical_vars:
		/* empty */
	|	T_USE '(' lexical_var_list ')'
;

lexical_var_list:
		lexical_var_list ',' T_VARIABLE
	|	lexical_var_list ',' '&' T_VARIABLE
	|	T_VARIABLE
	|	'&' T_VARIABLE
;

function_call:
		namespace_name '('								{ observers.FunctionCallStart(); }
		function_call_parameter_list	')'				{ observers.FunctionCallEnd(); }
	|	T_NAMESPACE T_NS_SEPARATOR 
		namespace_name '(' 
		function_call_parameter_list ')' 
	|	T_NS_SEPARATOR namespace_name '(' 
				function_call_parameter_list ')' 
	|	class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING '(' 
			function_call_parameter_list')'
	|	class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects '('
			function_call_parameter_list ')'
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING '('
			function_call_parameter_list ')'
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects '('
			function_call_parameter_list ')'
	|	variable_without_objects  '('
			function_call_parameter_list ')'       
;

class_name:
		T_STATIC
	|	namespace_name
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name
	|	T_NS_SEPARATOR namespace_name
;

fully_qualified_class_name:
		namespace_name
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name
	|	T_NS_SEPARATOR namespace_name
;

class_name_reference:
		class_name
	|	dynamic_class_name_reference
;

dynamic_class_name_reference:
		base_variable T_OBJECT_OPERATOR
			object_property dynamic_class_name_variable_properties
	|	base_variable
;

dynamic_class_name_variable_properties:
		dynamic_class_name_variable_properties dynamic_class_name_variable_property
	|	/* empty */
;

dynamic_class_name_variable_property:
		T_OBJECT_OPERATOR object_property
;

exit_expr:
		/* empty */
	|	'(' ')'
	|	'(' expr ')'
;

backticks_expr:
		/* empty */
	|	T_ENCAPSED_AND_WHITESPACE
	|	encaps_list
;

ctor_arguments:
		/* empty */
	|	'(' function_call_parameter_list ')'
;

common_scalar:
		T_LNUMBER 													{ observers.ExpressionPushNewScalar($1); }
	|	T_DNUMBER 													{ observers.ExpressionPushNewScalar($1); }
	|	T_CONSTANT_ENCAPSED_STRING									{ observers.ExpressionPushNewScalar($1); }
	|	T_LINE 														{ observers.ExpressionPushNewScalar($1); }
	|	T_FILE 														{ observers.ExpressionPushNewScalar($1); }
	|	T_DIR   													{ observers.ExpressionPushNewScalar($1); }
	|	T_CLASS_C													{ observers.ExpressionPushNewScalar($1); }
	|	T_METHOD_C													{ observers.ExpressionPushNewScalar($1); }
	|	T_FUNC_C													{ observers.ExpressionPushNewScalar($1); }
	|	T_NS_C														{ observers.ExpressionPushNewScalar($1); }
	|	T_START_HEREDOC T_ENCAPSED_AND_WHITESPACE T_END_HEREDOC		{ observers.ExpressionPushNewScalar($1); }
	|	T_START_HEREDOC T_END_HEREDOC								{ observers.ExpressionPushNewScalar($1); }
;

static_scalar: /* compile-time evaluated scalars */
		common_scalar
	|	namespace_name
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name
	|	T_NS_SEPARATOR namespace_name
	|	'+' static_scalar
	|	'-' static_scalar
	|	T_ARRAY '(' static_array_pair_list ')'
	|	static_class_constant
;

static_class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING
;

scalar:
		T_STRING_VARNAME
	|	class_constant
	|	namespace_name
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name
	|	T_NS_SEPARATOR namespace_name
	|	common_scalar
	|	'"' encaps_list '"'
	|	T_START_HEREDOC encaps_list T_END_HEREDOC
;

static_array_pair_list:
		/* empty */
	|	non_empty_static_array_pair_list possible_comma
;

possible_comma:
		/* empty */
	|	','
;

non_empty_static_array_pair_list:
		non_empty_static_array_pair_list ',' static_scalar T_DOUBLE_ARROW static_scalar
	|	non_empty_static_array_pair_list ',' static_scalar
	|	static_scalar T_DOUBLE_ARROW static_scalar
	|	static_scalar
;

expr:
		r_variable							{ observers.ExpressionFound(); }
	|	expr_without_variable				{ observers.ExpressionFound(); }
;

r_variable:
	variable
;

w_variable:
	variable
;

rw_variable:
	variable
;

variable:
		base_variable_with_function_calls 
		T_OBJECT_OPERATOR object_property 
		method_or_not							{ observers.CurrentExpressionAppendToChain($2, $3, '(' == $4.Token); } 
		variable_properties
	|	base_variable_with_function_calls		
;

variable_properties:
		variable_properties variable_property
	|	/* empty */
;

variable_property:
		T_OBJECT_OPERATOR object_property
		method_or_not						{ observers.CurrentExpressionAppendToChain($1, $2, '(' == $3.Token);  }
;

method_or_not:
		'(' function_call_parameter_list ')'			{ $$ = $1; } 
	|	/* empty */										{ $$.Token = 0; } /* zero out the token; it seems to be persisted and it makes property chains not correct "$this->prop2->func3()->prop4" */
;

variable_without_objects:
		reference_variable
	|	simple_indirect_reference reference_variable
;

static_member:
		class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects					{ observers.CurrentExpressionAsStaticMember($2); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects
;

variable_class_name:
		reference_variable
;

base_variable_with_function_calls:
		base_variable
	|	function_call					{ observers.CurrentExpressionPushAsFunctionCall(); }
;

base_variable:
		reference_variable
	|	simple_indirect_reference reference_variable
	|	static_member
;

reference_variable:
		reference_variable '[' dim_offset ']'
	|	reference_variable '{' expr '}'
	|	compound_variable
;

compound_variable:
		T_VARIABLE			{ observers.CurrentExpressionPushAsVariable($1); }
	|	'$' '{' expr '}' 
;

dim_offset:
		/* empty */	
	|	expr
;

object_property:
		object_dim_list
	|	variable_without_objects
;

object_dim_list:
		object_dim_list '[' dim_offset ']'
	|	object_dim_list '{' expr '}'
	|	variable_name
;

variable_name:
		T_STRING
	|	'{' expr '}'
;

simple_indirect_reference:
		'$'
	|	simple_indirect_reference '$'
;

assignment_list:
		assignment_list ',' assignment_list_element
	|	assignment_list_element
;

assignment_list_element:
		variable										{ observers.ForeachVariableFound(); }
	|	T_LIST '(' {} assignment_list ')'
	|	/* empty */
;

array_pair_list:
		/* empty */
	|	non_empty_array_pair_list possible_comma
;

non_empty_array_pair_list:
		non_empty_array_pair_list ',' expr T_DOUBLE_ARROW expr
	|	non_empty_array_pair_list ',' expr
	|	expr T_DOUBLE_ARROW expr
	|	expr
	|	non_empty_array_pair_list ',' expr T_DOUBLE_ARROW '&' w_variable
	|	non_empty_array_pair_list ',' '&' w_variable
	|	expr T_DOUBLE_ARROW '&' w_variable
	|	'&' w_variable
;

encaps_list:
		encaps_list encaps_var
	|	encaps_list T_ENCAPSED_AND_WHITESPACE
	|	encaps_var
	|	T_ENCAPSED_AND_WHITESPACE encaps_var
;

encaps_var:
		T_VARIABLE
	|	T_VARIABLE '[' encaps_var_offset ']'
	|	T_VARIABLE T_OBJECT_OPERATOR T_STRING
	|	T_DOLLAR_OPEN_CURLY_BRACES expr '}'
	|	T_DOLLAR_OPEN_CURLY_BRACES T_STRING_VARNAME '[' expr ']' '}'
	|	T_CURLY_OPEN variable '}'
;

encaps_var_offset:
		T_STRING
	|	T_NUM_STRING
	|	T_VARIABLE
;


internal_functions_in_yacc:
		T_ISSET '(' isset_variables ')'
	|	T_EMPTY '(' variable ')'
	|	T_INCLUDE expr 
	|	T_INCLUDE_ONCE expr 
	|	T_EVAL '(' expr ')' 
	|	T_REQUIRE expr
	|	T_REQUIRE_ONCE expr
;

isset_variables:
		variable
	|	isset_variables ',' variable
;

class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING					{ observers.CurrentExpressionPushAsClassConstant($2, $3); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING
;

%%

int php53lex(YYSTYPE* value, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers) {
	int ret = analyzer.NextToken();
	observers.SemanticValueInit(*value);

	// ignore these token; there are no parse rules for them
	if (T_OPEN_TAG == ret) {
		ret = analyzer.NextToken();
	}
	
	// optimization: SemanticValueInit() method knows when we need to examine
	// comments and will allocate memory only when needed
	mvceditor::SemanticValueClass commentValue;
	observers.SemanticValueInit(commentValue);
	if (T_DOC_COMMENT == ret || T_COMMENT == ret) {
				
		// advance past all comments (there can be more than one consecutive)
		// keep /** and /* comments separate; we only want /* comments to 
		// get type hints for local varibles
		while (T_DOC_COMMENT == ret || T_COMMENT == ret) {
			if (T_DOC_COMMENT == ret && value->Comment) {
				analyzer.GetLexeme(*value->Comment);
			}
			else if (T_COMMENT == ret && commentValue.Comment) {
				analyzer.GetLexeme(*commentValue.Comment);
			}
			ret = analyzer.NextToken();
		}
	}
	if (commentValue.Comment && !commentValue.Comment->isEmpty()) {
		observers.NotifyLocalVariableTypeHint(*commentValue.Comment);
	}
	if (T_CLOSE_TAG == ret) {
		ret = ';';
	}
	value->Token = ret;
	if (value->Lexeme) {
		analyzer.GetLexeme(*value->Lexeme);	
	}
	value->Pos = analyzer.GetCharacterPosition();
	return ret;
}

void php53error(mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers, std::string msg) {
	int capacity = msg.length() + 1;
	int written = u_sprintf(analyzer.ParserError.getBuffer(capacity), "%s", msg.c_str());
	analyzer.ParserError.releaseBuffer(written);
	observers.SemanticValueFree();
}
