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
 
int php53lex(YYSTYPE* value, mvceditor::LexicalAnalyzerClass &analyzer);
void php53error(mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers, std::string msg);

%}

%parse-param { mvceditor::LexicalAnalyzerClass &analyzer }
%parse-param { mvceditor::ObserverQuadClass& observers }
%lex-param  { mvceditor::LexicalAnalyzerClass &analyzer }
%destructor { $$.Free(); } <*>

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
	top_statement_list	{ }
;

top_statement_list:
		top_statement_list  {} top_statement {}
	|	/* empty */
;

namespace_name:
		T_STRING { observers.CurrentQualifiedName.AddName($1); observers.CurrentQualifiedName.GrabComment($1); }
	|	namespace_name T_NS_SEPARATOR T_STRING { observers.CurrentQualifiedName.AddName($3); }
;

top_statement:
		statement						{}
	|	function_declaration_statement	{}
	|	class_declaration_statement		{}
	|	T_HALT_COMPILER '(' ')' ';'		{}
	|	T_NAMESPACE namespace_name ';'	{}
	|	T_NAMESPACE namespace_name '{'	{}
		top_statement_list '}'		    {}
	|	T_NAMESPACE '{'					{}
		top_statement_list '}'			{}
	|	T_USE use_declarations ';'      {}
	|	constant_declaration ';'		{}
;

use_declarations:
		use_declarations ',' use_declaration
	|	use_declaration
;

use_declaration:
		namespace_name 			{}
	|	namespace_name T_AS T_STRING	{}
	|	T_NS_SEPARATOR namespace_name {}
	|	T_NS_SEPARATOR namespace_name T_AS T_STRING {}
;

constant_declaration:
		constant_declaration ',' T_STRING '=' static_scalar	{}
	|	T_CONST T_STRING '=' static_scalar {}
;

inner_statement_list:
		inner_statement_list  {} inner_statement {}
	|	/* empty */
;


inner_statement:
		statement
	|	function_declaration_statement
	|	class_declaration_statement
	|	T_HALT_COMPILER '(' ')' ';'   {}
;


statement:
		unticked_statement {}
	|	T_STRING ':' {}
;

unticked_statement:
		'{' inner_statement_list '}'
	|	T_IF '(' expr ')'{} statement {} elseif_list else_single {}
	|	T_IF '(' expr ')' ':' {} inner_statement_list {} new_elseif_list new_else_single T_ENDIF ';' {}
	|	T_WHILE '(' {} expr  ')' {} while_statement {}
	|	T_DO {} statement T_WHILE '(' {} expr ')' ';' {}
	|	T_FOR
			'('
				for_expr
			';' {}
				for_expr
			';' {}
				for_expr
			')' {}
			for_statement {}
	|	T_SWITCH '(' expr ')' {} switch_case_list {}
	|	T_BREAK ';'			 {}
	|	T_BREAK expr ';'	 {}
	|	T_CONTINUE ';'		 {}
	|	T_CONTINUE expr ';'	 {}
	|	T_RETURN ';'					 {}
	|	T_RETURN expr_without_variable ';' {}
	|	T_RETURN variable ';'			 {}
	|	T_GLOBAL global_var_list ';'
	|	T_STATIC static_var_list ';'
	|	T_ECHO echo_expr_list ';'
	|	T_INLINE_HTML		 {}
	|	expr ';'			 {}
	|	T_UNSET '(' unset_variables ')' ';'
	|	T_FOREACH '(' variable T_AS
	 {}
		foreach_variable foreach_optional_arg ')' {}
		foreach_statement {}
	|	T_FOREACH '(' expr_without_variable T_AS
	 {}
		variable foreach_optional_arg ')' {}
		foreach_statement {}
	|	T_DECLARE {} '(' declare_list ')' declare_statement {}
	|	';'		/* empty statement */
	|	T_TRY {} '{' inner_statement_list '}'
		T_CATCH '(' {}
		fully_qualified_class_name {}
		T_VARIABLE ')' {}
		'{' inner_statement_list '}' {}
		additional_catches {}
	|	T_THROW expr ';' {}
	|	T_GOTO T_STRING ';' {}
;


additional_catches:
		non_empty_additional_catches {}
	|	/* empty */ {}
;

non_empty_additional_catches:
		additional_catch {}
	|	non_empty_additional_catches additional_catch {}
;


additional_catch:
	T_CATCH '(' fully_qualified_class_name {} T_VARIABLE ')' {} '{' inner_statement_list '}' {}
;


unset_variables:
		unset_variable
	|	unset_variables ',' unset_variable
;

unset_variable:
		variable {}
;

function_declaration_statement:
		unticked_function_declaration_statement {}
;

class_declaration_statement:
		unticked_class_declaration_statement {}
;


is_reference:
		/* empty */ {}
	|	'&'		 {}
;


unticked_function_declaration_statement:
		function is_reference T_STRING 
		{
			if ('&' == $2.Token) {
				observers.CurrentMember.AppendToSignature($2);
			}
			observers.CurrentMember.GrabMemberName($3);
			observers.CurrentMember.AppendToSignature($3);
			observers.CurrentParametersList.Clear();
		}
		'('
		parameter_list 
		')' 
		{
			observers.CurrentMember.AppendToSignature(observers.CurrentParametersList.ToSignature());
			observers.FunctionFound(observers.CurrentMember);		
		}
		'{' inner_statement_list '}' 
		{
			observers.CurrentMember.Clear();
		}
;

unticked_class_declaration_statement:
		class_entry_type
		T_STRING 
		{
			observers.CurrentClass.GrabClassName($2);
			observers.CurrentClass.AppendToSignature($2);
		}
		extends_from 
		{
		}
		implements_list 
		{
			observers.ClassFound(observers.CurrentClass);
			observers.CurrentMember.Clear();
		}
		'{' class_statement_list '}' 
		{
			observers.ClassEnd();
		}
		
	|	interface_entry T_STRING 
		{
			observers.CurrentClass.GrabClassName($2);
			observers.CurrentClass.AppendToSignature($2);
		}
		interface_extends_list 
		{
			
			observers.ClassFound(observers.CurrentClass);
			observers.CurrentMember.Clear();
		}
		'{' class_statement_list '}' 
		{
			observers.ClassEnd();
		}
;


class_entry_type:
		T_CLASS		 { observers.CurrentClass.AppendToSignature($1); observers.CurrentClass.AppendToComment($1); }
	|	T_ABSTRACT T_CLASS { observers.CurrentClass.AppendToSignature($1, $2); observers.CurrentClass.AppendToComment($1); }
	|	T_FINAL T_CLASS { observers.CurrentClass.AppendToSignature($1, $2); observers.CurrentClass.AppendToComment($1); }
;

extends_from:
		/* empty */				 {}
	|	T_EXTENDS 
		{
			observers.CurrentQualifiedName.Clear();
		}
		fully_qualified_class_name 
		{ 
			observers.CurrentClass.AppendToSignature($1);
			observers.CurrentClass.AppendToSignature(observers.CurrentQualifiedName.ToSignature());
		}
;

interface_entry:
	T_INTERFACE	 { observers.CurrentClass.AppendToSignature($1); }
;

interface_extends_list:
		/* empty */
	|	T_EXTENDS 
		{
			observers.CurrentClass.AppendToSignature($1);
			observers.CurrentQualifiedName.Clear();
			
		}
		interface_list
		{
		}
;

implements_list:
		/* empty */
	|	T_IMPLEMENTS 
		{
			observers.CurrentClass.AppendToSignature($1);
			observers.CurrentQualifiedName.Clear();
		}
		interface_list 
		{
		}
;

interface_list:
		fully_qualified_class_name		 
		{
			observers.CurrentClass.AppendToSignature(observers.CurrentQualifiedName.ToSignature());
			observers.CurrentQualifiedName.Clear();
		}
	|	interface_list ',' 
		{
			observers.CurrentClass.AppendToSignature(UNICODE_STRING_SIMPLE(","));
		}
		fully_qualified_class_name 
		{
		}
;

foreach_optional_arg:
		/* empty */					 {}
	|	T_DOUBLE_ARROW foreach_variable {}
;


foreach_variable:
		variable		 {}
	|	'&' variable	 {}
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
		T_STRING '=' static_scalar				 {}
	|	declare_list ',' T_STRING '=' static_scalar {}
;


switch_case_list:
		'{' case_list '}'				 {}
	|	'{' ';' case_list '}'			 {}
	|	':' case_list T_ENDSWITCH ';'	 {}
	|	':' ';' case_list T_ENDSWITCH ';' {}
;


case_list:
		/* empty */ {}
	|	case_list T_CASE expr case_separator {} inner_statement_list {}
	|	case_list T_DEFAULT case_separator {} inner_statement_list {}
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
	|	elseif_list T_ELSEIF '(' expr ')' {} statement {}
;


new_elseif_list:
		/* empty */
	|	new_elseif_list T_ELSEIF '(' expr ')' ':' {} inner_statement_list {}
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
		optional_class_type T_VARIABLE			 { observers.CurrentParametersList.SetName($2, false); }
	|	optional_class_type '&' T_VARIABLE		 { observers.CurrentParametersList.SetName($3, true); }
	|	optional_class_type '&' T_VARIABLE '=' static_scalar		 { observers.CurrentParametersList.SetName($3, true);}
	|	optional_class_type T_VARIABLE '=' static_scalar			 { observers.CurrentParametersList.SetName($2, true); }
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE { observers.CurrentParametersList.SetName($4, false); } 
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE  { observers.CurrentParametersList.SetName($5, true); }
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE	'=' static_scalar { observers.CurrentParametersList.SetName($5, true); }
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE '=' static_scalar   { observers.CurrentParametersList.SetName($4, false); }
;


optional_class_type:
		/* empty */				 
		{ 
			observers.CurrentParametersList.Create(); 
		}
	|	fully_qualified_class_name 
		{ 
			observers.CurrentParametersList.Create(); 
			observers.CurrentParametersList.SetOptionalType(observers.CurrentQualifiedName.ToSignature()); 
		}
	|	T_ARRAY
		{ 
			observers.CurrentParametersList.Create(); 
			observers.CurrentParametersList.SetOptionalType($1); 
		}
;


function_call_parameter_list:
		non_empty_function_call_parameter_list {}
	|	/* empty */			 {}
;


non_empty_function_call_parameter_list:
		expr_without_variable {}
	|	variable			 {}
	|	'&' w_variable 			 {}
	|	non_empty_function_call_parameter_list ',' expr_without_variable {}
	|	non_empty_function_call_parameter_list ',' variable				 {}
	|	non_empty_function_call_parameter_list ',' '&' w_variable		 {}
;

global_var_list:
		global_var_list ',' global_var {}
	|	global_var					 {}
;


global_var:
		T_VARIABLE		 {}
	|	'$' r_variable	 {}
	|	'$' '{' expr '}' {}
;


static_var_list:
		static_var_list ',' T_VARIABLE {}
	|	static_var_list ',' T_VARIABLE '=' static_scalar {}
	|	T_VARIABLE  {}
	|	T_VARIABLE '=' static_scalar {}

;


class_statement_list:
		class_statement_list class_statement
	|	/* empty */
;


class_statement:
		variable_modifiers class_variable_declaration ';'
		{
			observers.CurrentMember.Clear();
		}
	|	class_constant_declaration ';'
		{
			observers.CurrentMember.Clear();
		}
	|	method_modifiers function is_reference T_STRING 
		{
			if ('&' == $3.Token) {
				observers.CurrentMember.AppendToSignature($3);
			}
			observers.CurrentMember.GrabMemberName($4);
			observers.CurrentMember.AppendToSignature($4);
			observers.CurrentParametersList.Clear();
		} 
		'('
		{
			observers.CurrentParametersList.Clear();
		}
		parameter_list 
		')' 
		{
			observers.CurrentMember.AppendToSignature(observers.CurrentParametersList.ToSignature());
			observers.ClassMemberFound(observers.CurrentMember, false);
		}
		method_body 
		{
			observers.CurrentMember.Clear();
		}
;


method_body:
		';' /* abstract method */	 {}
	|	'{' inner_statement_list '}' {}
;

variable_modifiers:
		non_empty_member_modifiers	 { }
	|	T_VAR						 { observers.CurrentMember.AppendToSignature($1); }
;

method_modifiers:
		/* empty */						 {}
	|	non_empty_member_modifiers		 {}
;

non_empty_member_modifiers:
		member_modifier					 { }
	|	non_empty_member_modifiers member_modifier {  }
;

member_modifier:
		T_PUBLIC			 { observers.CurrentMember.IsPublicMember = true; observers.CurrentMember.AppendToSignature($1); observers.CurrentMember.AppendToComment($1); }
	|	T_PROTECTED			 { observers.CurrentMember.IsProtectedMember = true; observers.CurrentMember.AppendToSignature($1); observers.CurrentMember.AppendToComment($1); }
	|	T_PRIVATE			 { observers.CurrentMember.IsPrivateMember = true; observers.CurrentMember.AppendToSignature($1); observers.CurrentMember.AppendToComment($1);}
	|	T_STATIC			 { observers.CurrentMember.IsStaticMember = true; observers.CurrentMember.AppendToSignature($1); observers.CurrentMember.AppendToComment($1); }
	|	T_ABSTRACT			 { observers.CurrentMember.AppendToSignature($1); observers.CurrentMember.AppendToComment($1); }
	|	T_FINAL				 { observers.CurrentMember.AppendToSignature($1); observers.CurrentMember.AppendToComment($1); }
;

class_variable_declaration:
		class_variable_declaration ',' T_VARIABLE				 
		{
			observers.CurrentMember.GrabMemberName($3);
			observers.ClassMemberFound(observers.CurrentMember, true);
		}
	|	class_variable_declaration ',' T_VARIABLE '=' static_scalar 
		{
			observers.CurrentMember.GrabMemberName($3);
			observers.ClassMemberFound(observers.CurrentMember, true);
		}
	|	T_VARIABLE					 
		{
			observers.CurrentMember.GrabMemberName($1);
			UnicodeString oldSignature = observers.CurrentMember.Signature;
			observers.CurrentMember.AppendToSignature($1);			
			observers.ClassMemberFound(observers.CurrentMember, true);
			observers.CurrentMember.Signature = oldSignature;
			
		}
	|	T_VARIABLE '=' static_scalar 
		{
			observers.CurrentMember.GrabMemberName($1);
			UnicodeString oldSignature = observers.CurrentMember.Signature;
			observers.CurrentMember.AppendToSignature($1);
			observers.ClassMemberFound(observers.CurrentMember, true);
			observers.CurrentMember.Signature = oldSignature;
		}
;

class_constant_declaration:
		class_constant_declaration ',' T_STRING '=' static_scalar 
		{
			observers.CurrentMember.GrabMemberName($3);
			observers.CurrentMember.AppendToSignature($3);
			observers.CurrentMember.IsPublicMember = true;
			observers.CurrentMember.IsConstMember = true;
			observers.CurrentMember.IsStaticMember = true; 
			observers.ClassMemberFound(observers.CurrentMember, true);
		}
	|	T_CONST T_STRING '=' static_scalar 
		{
			observers.CurrentMember.AppendToComment($1);
			observers.CurrentMember.GrabMemberName($2);
			observers.CurrentMember.AppendToSignature($1, $2);
			observers.CurrentMember.IsPublicMember = true;
			observers.CurrentMember.IsConstMember = true;
			observers.CurrentMember.IsStaticMember = true; 
			observers.ClassMemberFound(observers.CurrentMember, true);
			
			// leave the "const" in the signature for any other constants
			observers.CurrentMember.Signature = *$1.Lexeme;
		}
;

echo_expr_list:
		echo_expr_list ',' expr {}
	|	expr				 {}
;


for_expr:
		/* empty */		 {}
	|	non_empty_for_expr {}
;

non_empty_for_expr:
		non_empty_for_expr ',' {} expr {}
	|	expr				 {}
;

expr_without_variable:
		T_LIST '(' {} assignment_list ')' '=' expr { observers.CreateUnknown(); }
	|	variable '=' expr	 { observers.CreateUnknown(); }
	|	variable '=' '&' variable { observers.CreateUnknown(); }
	|	variable '=' '&' T_NEW class_name_reference {} ctor_arguments { observers.CreateUnknown(); }
	|	T_NEW class_name_reference {} ctor_arguments 
		{ 
			observers.CreateUnknown();
		}
	|	T_CLONE expr  { observers.CreateObject($1); }
	|	variable T_PLUS_EQUAL expr  { observers.CreateUnknown(); }
	|	variable T_MINUS_EQUAL expr { observers.CreateUnknown(); }
	|	variable T_MUL_EQUAL expr	 { observers.CreateUnknown(); }
	|	variable T_DIV_EQUAL expr	 { observers.CreateUnknown(); }
	|	variable T_CONCAT_EQUAL expr { observers.CreateUnknown(); }
	|	variable T_MOD_EQUAL expr	 { observers.CreateUnknown(); }
	|	variable T_AND_EQUAL expr	 { observers.CreateUnknown(); }
	|	variable T_OR_EQUAL expr 	 { observers.CreateUnknown(); }
	|	variable T_XOR_EQUAL expr 	 { observers.CreateUnknown(); }
	|	variable T_SL_EQUAL expr { observers.CreateUnknown(); }
	|	variable T_SR_EQUAL expr { observers.CreateUnknown(); }
	|	rw_variable T_INC { observers.CreateUnknown(); }
	|	T_INC rw_variable { observers.CreateUnknown(); }
	|	rw_variable T_DEC {observers.CreateUnknown(); }
	|	T_DEC rw_variable {observers.CreateUnknown(); }
	|	expr T_BOOLEAN_OR {} expr { observers.CreateUnknown(); }
	|	expr T_BOOLEAN_AND {} expr { observers.CreateUnknown(); }
	|	expr T_LOGICAL_OR {} expr { observers.CreateUnknown(); }
	|	expr T_LOGICAL_AND {} expr {observers.CreateUnknown(); }
	|	expr T_LOGICAL_XOR expr { observers.CreateUnknown(); }
	|	expr '|' expr { observers.CreateUnknown(); }
	|	expr '&' expr { observers.CreateUnknown(); }
	|	expr '^' expr { observers.CreateUnknown(); }
	|	expr '.' expr  { observers.CreateUnknown(); }
	|	expr '+' expr  { observers.CreateUnknown(); }
	|	expr '-' expr  { observers.CreateUnknown(); }
	|	expr '*' expr { observers.CreateUnknown(); }
	|	expr '/' expr { observers.CreateUnknown(); }
	|	expr '%' expr  { observers.CreateUnknown(); }
	| 	expr T_SL expr { observers.CreateUnknown(); }
	|	expr T_SR expr { observers.CreateUnknown(); }
	|	'+' expr %prec T_INC { observers.CreateUnknown(); }
	|	'-' expr %prec T_INC { observers.CreateUnknown(); }
	|	'!' expr { observers.CreateUnknown(); }
	|	'~' expr { observers.CreateUnknown(); }
	|	expr T_IS_IDENTICAL expr	 { observers.CreateUnknown(); }
	|	expr T_IS_NOT_IDENTICAL expr { observers.CreateUnknown(); }
	|	expr T_IS_EQUAL expr		 { observers.CreateUnknown(); }
	|	expr T_IS_NOT_EQUAL expr 	 { observers.CreateUnknown(); }
	|	expr '<' expr 				 { observers.CreateUnknown(); }
	|	expr T_IS_SMALLER_OR_EQUAL expr { observers.CreateUnknown(); }
	|	expr '>' expr 				 {observers.CreateUnknown(); }
	|	expr T_IS_GREATER_OR_EQUAL expr { observers.CreateUnknown(); }
	|	expr T_INSTANCEOF class_name_reference { observers.CreateUnknown(); }
	|	'(' expr ')'  { observers.CreateUnknown(); }
	|	expr '?' {  }
		expr ':' { }
		expr	 { observers.CreateUnknown(); }
	|	expr '?' ':' {  }
		expr     { observers.CreateUnknown(); }
	|	internal_functions_in_yacc { observers.CreateUnknown(); }
	|	T_INT_CAST expr  { observers.CreatePrimitive(); }
	|	T_DOUBLE_CAST expr  { observers.CreatePrimitive(); }
	|	T_STRING_CAST expr { observers.CreatePrimitive(); }
	|	T_ARRAY_CAST expr  { observers.CreateArray(); }
	|	T_OBJECT_CAST expr  { observers.CreateObject(); }
	|	T_BOOL_CAST expr { observers.CreatePrimitive(); }
	|	T_UNSET_CAST expr { }
	|	T_EXIT exit_expr { }
	|	'@' {} expr { }
	|	scalar			 {  }
	|	T_ARRAY '(' array_pair_list ')' { observers.CreateArray(); }
	|	'`' backticks_expr '`' { observers.CreatePrimitive(); /* results of backtick operator is a string */ }
	|	T_PRINT expr  { }
	|	function is_reference '(' 
			parameter_list ')' lexical_vars '{' inner_statement_list '}' { observers.CreateUnknown(); }
;

function:
	T_FUNCTION { observers.CurrentMember.AppendToSignature($1); observers.CurrentMember.AppendToComment($1); }
;

lexical_vars:
		/* empty */
	|	T_USE '(' lexical_var_list ')'
;

lexical_var_list:
		lexical_var_list ',' T_VARIABLE		 {}
	|	lexical_var_list ',' '&' T_VARIABLE	 {}
	|	T_VARIABLE							 {}
	|	'&' T_VARIABLE						 {}
;

function_call:
		namespace_name '(' 
		{
			observers.CurrentVariablesList.Clear();
		}
		function_call_parameter_list	')' 
		{
			if (observers.CurrentVariablesList.Variables.size() == (size_t)2) {
				if (observers.CurrentQualifiedName.ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
					observers.DefineFound(observers.CurrentVariablesList.Variables[0], 
						observers.CurrentVariablesList.Variables[1], 
						observers.CurrentQualifiedName.Comment);
				}
			}
		}
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name '(' {}
				function_call_parameter_list
				')' {}
	|	T_NS_SEPARATOR namespace_name '(' {}
				function_call_parameter_list
				')' {}
	|	class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING '(' {}
			function_call_parameter_list
			')' {}
	|	class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects '(' {}
			function_call_parameter_list
			')' {}
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING '(' {}
			function_call_parameter_list
			')' {}
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects '(' {}
			function_call_parameter_list
			')' {}
	|	variable_without_objects  '(' {}
			function_call_parameter_list ')'
		 { }
;

class_name:
		T_STATIC {}
	|	namespace_name {}
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name {}
	|	T_NS_SEPARATOR namespace_name {}
;

fully_qualified_class_name:
		namespace_name { }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name { }
	|	T_NS_SEPARATOR namespace_name  { }
;



class_name_reference:
		class_name					 {}
	|	dynamic_class_name_reference {}
;


dynamic_class_name_reference:
		base_variable T_OBJECT_OPERATOR {}
			object_property {} dynamic_class_name_variable_properties
		 {}
	|	base_variable {}
;


dynamic_class_name_variable_properties:
		dynamic_class_name_variable_properties dynamic_class_name_variable_property
	|	/* empty */
;


dynamic_class_name_variable_property:
		T_OBJECT_OPERATOR object_property {}
;

exit_expr:
		/* empty */ {}
	|	'(' ')'	 {}
	|	'(' expr ')' {}
;

backticks_expr:
		/* empty */ {}
	|	T_ENCAPSED_AND_WHITESPACE {}
	|	encaps_list {}
;


ctor_arguments:
		/* empty */ {}
	|	'(' function_call_parameter_list ')' {}
;


common_scalar:
		T_LNUMBER 				 { observers.CreatePrimitive($1); }
	|	T_DNUMBER 				 { observers.CreatePrimitive($1); }
	|	T_CONSTANT_ENCAPSED_STRING { observers.CreatePrimitive($1); }
	|	T_LINE 					 { observers.CreatePrimitive($1); }
	|	T_FILE 					 { observers.CreatePrimitive($1); }
	|	T_DIR   				 { observers.CreatePrimitive($1); }
	|	T_CLASS_C				 { observers.CreatePrimitive($1); }
	|	T_METHOD_C				 { observers.CreatePrimitive($1); }
	|	T_FUNC_C				 { observers.CreatePrimitive($1); }
	|	T_NS_C					 { observers.CreatePrimitive($1); }
	|	T_START_HEREDOC T_ENCAPSED_AND_WHITESPACE T_END_HEREDOC { observers.CreatePrimitive($1); }
	|	T_START_HEREDOC T_END_HEREDOC { observers.CreatePrimitive($1); }
;


static_scalar: /* compile-time evaluated scalars */
		common_scalar	 {}
	|	namespace_name 	 {}
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name {}
	|	T_NS_SEPARATOR namespace_name {}
	|	'+' static_scalar {}
	|	'-' static_scalar {}
	|	T_ARRAY '(' static_array_pair_list ')' {}
	|	static_class_constant {}
;

static_class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING {}
;

scalar:
		T_STRING_VARNAME	 {}
	|	class_constant	 {}
	|	namespace_name {}
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name {}
	|	T_NS_SEPARATOR namespace_name {}
	|	common_scalar		 {}
	|	'"' encaps_list '"'  {} 
	|	T_START_HEREDOC encaps_list T_END_HEREDOC {}
;


static_array_pair_list:
		/* empty */ {}
	|	non_empty_static_array_pair_list possible_comma {}
;

possible_comma:
		/* empty */
	|	','
;

non_empty_static_array_pair_list:
		non_empty_static_array_pair_list ',' static_scalar T_DOUBLE_ARROW static_scalar {}
	|	non_empty_static_array_pair_list ',' static_scalar {}
	|	static_scalar T_DOUBLE_ARROW static_scalar {}
	|	static_scalar {}
;

expr:
		r_variable				 {}
	|	expr_without_variable	 {}
;


r_variable:
	variable {}
;


w_variable:
	variable {}
;

rw_variable:
	variable {}
;

variable:
		base_variable_with_function_calls 
		T_OBJECT_OPERATOR
		object_property 
		method_or_not 
			{ 
		
			} 
		variable_properties 
			{ 
			
			}
	|	base_variable_with_function_calls 
			{
			}
;

variable_properties:
		variable_properties variable_property { }
	|	/* empty */ {}
;


variable_property:
		T_OBJECT_OPERATOR 
		object_property 
		method_or_not 
		{
		
		}
;

method_or_not:
		'(' {}
				function_call_parameter_list ')'
		 { }
	|	/* empty */ { }
;

variable_without_objects:
		reference_variable {}
	|	simple_indirect_reference reference_variable {}
;

static_member:
		class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects {}
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects {}

;

variable_class_name:
		reference_variable {}
;

base_variable_with_function_calls:
		base_variable	 {}
	|	function_call {}
;


base_variable:
		reference_variable {}
	|	simple_indirect_reference reference_variable {}
	|	static_member {}
;

reference_variable:
		reference_variable '[' dim_offset ']' {}
	|	reference_variable '{' expr '}'	 {}
	|	compound_variable		 {}
;


compound_variable:
		T_VARIABLE		 { observers.CurrentSymbol.Fill($1); }
	|	'$' '{' expr '}' {}
;

dim_offset:
		/* empty */	 {}
	|	expr		 {}
;


object_property:
		object_dim_list {}
	|	variable_without_objects {} {}
;

object_dim_list:
		object_dim_list '[' dim_offset ']' {}
	|	object_dim_list '{' expr '}'	 {}
	|	variable_name {}
;

variable_name:
		T_STRING	 {}
	|	'{' expr '}' {}
;

simple_indirect_reference:
		'$' {}
	|	simple_indirect_reference '$' {}
;

assignment_list:
		assignment_list ',' assignment_list_element
	|	assignment_list_element
;


assignment_list_element:
		variable							 {}
	|	T_LIST '(' {} assignment_list ')' {}
	|	/* empty */						 {}
;


array_pair_list:
		/* empty */ {}
	|	non_empty_array_pair_list possible_comma {}
;

non_empty_array_pair_list:
		non_empty_array_pair_list ',' expr T_DOUBLE_ARROW expr {}
	|	non_empty_array_pair_list ',' expr		 {}
	|	expr T_DOUBLE_ARROW expr {}
	|	expr 			 {}
	|	non_empty_array_pair_list ',' expr T_DOUBLE_ARROW '&' w_variable {}
	|	non_empty_array_pair_list ',' '&' w_variable {}
	|	expr T_DOUBLE_ARROW '&' w_variable {}
	|	'&' w_variable 		 {}
;

encaps_list:
		encaps_list encaps_var {}
	|	encaps_list T_ENCAPSED_AND_WHITESPACE {}
	|	encaps_var {}
	|	T_ENCAPSED_AND_WHITESPACE encaps_var {}
;



encaps_var:
		T_VARIABLE { }
	|	T_VARIABLE '[' {} encaps_var_offset ']' {}
	|	T_VARIABLE T_OBJECT_OPERATOR T_STRING {}
	|	T_DOLLAR_OPEN_CURLY_BRACES expr '}' {}
	|	T_DOLLAR_OPEN_CURLY_BRACES T_STRING_VARNAME '[' expr ']' '}' {}
	|	T_CURLY_OPEN variable '}' {}
;


encaps_var_offset:
		T_STRING	 {}
	|	T_NUM_STRING {}
	|	T_VARIABLE	 {}
;


internal_functions_in_yacc:
		T_ISSET '(' isset_variables ')' {}
	|	T_EMPTY '(' variable ')' {}
	|	T_INCLUDE expr 		 {}
	|	T_INCLUDE_ONCE expr  {}
	|	T_EVAL '(' expr ')'  {}
	|	T_REQUIRE expr		 {}
	|	T_REQUIRE_ONCE expr	 {}
;

isset_variables:
		variable 			 {}
	|	isset_variables ',' {} variable {}
;

class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING {}
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING {}
;


%%

int php53lex(YYSTYPE* value, mvceditor::LexicalAnalyzerClass &analyzer) {
	int ret = analyzer.NextToken();
	value->Init();
	
	// ignore these token; there are no parse rules for them
	if (T_OPEN_TAG == ret) {
		ret = analyzer.NextToken();	
	}
	if (T_DOC_COMMENT == ret) {
			
		value->Comment = new UnicodeString();
		// advance past all DOC comments (there can be more than one consecutive)
		while (T_DOC_COMMENT == ret) {
			analyzer.GetLexeme(*value->Comment);
			ret = analyzer.NextToken();
		}
	}
	if (T_CLOSE_TAG == ret) {
		ret = ';';
	}
	
	value->Lexeme = new UnicodeString();
	analyzer.GetLexeme(*value->Lexeme);	
	value->Pos = analyzer.GetCharacterPosition();
		
	//UFILE* f = u_finit(stdout, NULL, NULL);
	//u_fprintf(f, "lex=%S\n", value->Lexeme->getTerminatedBuffer());
	//u_fclose(f);
	return ret;
}

void php53error(mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers, std::string msg) {
	int capacity = msg.length() + 1;
	int written = u_sprintf(analyzer.ParserError.getBuffer(capacity), "%s", msg.c_str());
	analyzer.ParserError.releaseBuffer(written);
}