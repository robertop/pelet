%{
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
 * @copyright  2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */	
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/LintParserFunctions.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE int

// so that both bison parses call the same lex function
#define php53_lint_lex pelet::LintLex

// so that both bison parses call the same error function
#define php53_lint_error pelet::LintGrammarError

%}

%parse-param { pelet::LexicalAnalyzerClass &analyzer }
%lex-param  { pelet::LexicalAnalyzerClass &analyzer }

%define api.pure
%expect 2
%error-verbose
%name-prefix "php53_lint_"
%debug

%left T_INCLUDE T_INCLUDE_ONCE T_EVAL T_REQUIRE T_REQUIRE_ONCE
%left <semanticValue> ','
%left T_LOGICAL_OR
%left T_LOGICAL_XOR
%left T_LOGICAL_AND
%right T_PRINT
%left <semanticValue> '=' 
%left T_PLUS_EQUAL T_MINUS_EQUAL T_MUL_EQUAL T_DIV_EQUAL T_CONCAT_EQUAL T_MOD_EQUAL T_AND_EQUAL T_OR_EQUAL T_XOR_EQUAL T_SL_EQUAL T_SR_EQUAL
%left <semanticValue> '?' ':'
%left T_BOOLEAN_OR
%left T_BOOLEAN_AND
%left <semanticValue> '|'
%left <semanticValue> '^'
%left <semanticValue> '&'
%nonassoc T_IS_EQUAL T_IS_NOT_EQUAL T_IS_IDENTICAL T_IS_NOT_IDENTICAL
%nonassoc <semanticValue> '<' 
%nonassoc T_IS_SMALLER_OR_EQUAL '>' T_IS_GREATER_OR_EQUAL
%left T_SL T_SR
%left <semanticValue> '+' '-' '.'
%left <semanticValue> '*' '/' '%'
%right <semanticValue> '!'
%nonassoc T_INSTANCEOF
%right <semanticValue>  '~' 
%right T_INC T_DEC T_INT_CAST T_DOUBLE_CAST T_STRING_CAST T_ARRAY_CAST T_OBJECT_CAST T_BOOL_CAST T_UNSET_CAST 
%right <semanticValue> '@'
%right <semanticValue> '['
%nonassoc T_NEW T_CLONE
%left T_ELSEIF
%left T_ELSE
%left T_ENDIF
%right T_STATIC T_ABSTRACT T_FINAL T_PRIVATE T_PROTECTED T_PUBLIC

/*
 * we want to share the same tokens across the multiple grammars and lexers, but we cannot use
 * #defines in the %token declaration. These %token declarations were re-constructed
 * by parsing all tokens out of the original zend_language_parser.y, adding a 'T_', sorting the tokens,
 * then using the join [linux] program to get the #defines from the TokenClass.h file.
 */ 
%token <semanticValue> T_END 0
%token <semanticValue> T_ABSTRACT 502
%token <semanticValue> T_AND_EQUAL 503
%token <semanticValue> T_ARRAY 504
%token <semanticValue> T_ARRAY_CAST 505
%token <semanticValue> T_AS 506
%token <semanticValue> T_BAD_CHARACTER 507
%token <semanticValue> T_BOOL_CAST 508
%token <semanticValue> T_BOOLEAN_AND 509
%token <semanticValue> T_BOOLEAN_OR 510
%token <semanticValue> T_BREAK 511
%token <semanticValue> T_CALLABLE 512
%token <semanticValue> T_CASE 513
%token <semanticValue> T_CATCH 514
%token <semanticValue> T_CHARACTER 515
%token <semanticValue> T_CLASS 516
%token <semanticValue> T_CLASS_C 517
%token <semanticValue> T_CLONE 518
%token <semanticValue> T_CLOSE_TAG 519
%token <semanticValue> T_COMMENT 520
%token <semanticValue> T_CONCAT_EQUAL 521
%token <semanticValue> T_CONST 522
%token <semanticValue> T_CONSTANT_ENCAPSED_STRING 523
%token <semanticValue> T_CONTINUE 524
%token <semanticValue> T_CURLY_OPEN 525
%token <semanticValue> T_DEC 526
%token <semanticValue> T_DECLARE 527
%token <semanticValue> T_DEFAULT 528
%token <semanticValue> T_DIR 529
%token <semanticValue> T_DIV_EQUAL 530
%token <semanticValue> T_DNUMBER 531
%token <semanticValue> T_DO 532
%token <semanticValue> T_DOC_COMMENT 533
%token <semanticValue> T_DOLLAR_OPEN_CURLY_BRACES 534
%token <semanticValue> T_DOUBLE_ARROW 535
%token <semanticValue> T_DOUBLE_CAST 536
%token <semanticValue> T_ECHO 537
%token <semanticValue> T_ELSE 538
%token <semanticValue> T_ELSEIF 539
%token <semanticValue> T_EMPTY 540
%token <semanticValue> T_ENCAPSED_AND_WHITESPACE 541
%token <semanticValue> T_ENDDECLARE 542
%token <semanticValue> T_ENDFOR 543
%token <semanticValue> T_ENDFOREACH 544
%token <semanticValue> T_END_HEREDOC 545
%token <semanticValue> T_ENDIF 546
%token <semanticValue> T_ENDSWITCH 547
%token <semanticValue> T_ENDWHILE 548
%token <semanticValue> T_EVAL 549
%token <semanticValue> T_EXIT 550
%token <semanticValue> T_EXTENDS 551
%token <semanticValue> T_FILE 552
%token <semanticValue> T_FINAL 553
%token <semanticValue> T_FOR 554
%token <semanticValue> T_FOREACH 555
%token <semanticValue> T_FUNC_C 556
%token <semanticValue> T_FUNCTION 557
%token <semanticValue> T_GLOBAL 558
%token <semanticValue> T_GOTO 559
%token <semanticValue> T_HALT_COMPILER 560
%token <semanticValue> T_IF 561
%token <semanticValue> T_IMPLEMENTS 562
%token <semanticValue> T_INC 563
%token <semanticValue> T_INCLUDE 564
%token <semanticValue> T_INCLUDE_ONCE 565
%token <semanticValue> T_INLINE_HTML 566
%token <semanticValue> T_INSTANCEOF 567
%token <semanticValue> T_INSTEADOF 568
%token <semanticValue> T_INT_CAST 569
%token <semanticValue> T_INTERFACE 570
%token <semanticValue> T_IS_EQUAL 571
%token <semanticValue> T_IS_GREATER_OR_EQUAL 572
%token <semanticValue> T_IS_IDENTICAL 573
%token <semanticValue> T_IS_NOT_EQUAL 574
%token <semanticValue> T_IS_NOT_IDENTICAL 575
%token <semanticValue> T_ISSET 576
%token <semanticValue> T_IS_SMALLER_OR_EQUAL 577
%token <semanticValue> T_LINE 578
%token <semanticValue> T_LIST 579
%token <semanticValue> T_LNUMBER 580
%token <semanticValue> T_LOGICAL_AND 581
%token <semanticValue> T_LOGICAL_OR 582
%token <semanticValue> T_LOGICAL_XOR 583
%token <semanticValue> T_METHOD_C 584
%token <semanticValue> T_MINUS_EQUAL 585
%token <semanticValue> T_MOD_EQUAL 586
%token <semanticValue> T_MUL_EQUAL 587
%token <semanticValue> T_NAMESPACE 588
%token <semanticValue> T_NEW 589
%token <semanticValue> T_NS_C 590
%token <semanticValue> T_NS_SEPARATOR 591
%token <semanticValue> T_NUM_STRING 592
%token <semanticValue> T_OBJECT_CAST 593
%token <semanticValue> T_OBJECT_OPERATOR 594
%token <semanticValue> T_OPEN_TAG 595
%token <semanticValue> T_OPEN_TAG_WITH_ECHO 596
%token <semanticValue> T_OR_EQUAL 597
%token <semanticValue> T_PAAMAYIM_NEKUDOTAYIM 598
%token <semanticValue> T_PLUS_EQUAL 599
%token <semanticValue> T_PRINT 600
%token <semanticValue> T_PRIVATE 601
%token <semanticValue> T_PROTECTED 602
%token <semanticValue> T_PUBLIC 603
%token <semanticValue> T_REQUIRE 604
%token <semanticValue> T_REQUIRE_ONCE 605
%token <semanticValue> T_RETURN 606
%token <semanticValue> T_SL 607
%token <semanticValue> T_SL_EQUAL 608
%token <semanticValue> T_SR 609
%token <semanticValue> T_SR_EQUAL 610
%token <semanticValue> T_START_HEREDOC 611
%token <semanticValue> T_STATIC 612
%token <semanticValue> T_STRING 613
%token <semanticValue> T_STRING_CAST 614
%token <semanticValue> T_STRING_VARNAME 615
%token <semanticValue> T_SWITCH 616
%token <semanticValue> T_THROW 617
%token <semanticValue> T_TRAIT 618
%token <semanticValue> T_TRAIT_C 619
%token <semanticValue> T_TRY 620
%token <semanticValue> T_UNSET 621
%token <semanticValue> T_UNSET_CAST 622
%token <semanticValue> T_USE 623
%token <semanticValue> T_VAR 624
%token <semanticValue> T_VARIABLE 625
%token <semanticValue> T_WHILE 626
%token <semanticValue> T_WHITESPACE 627
%token <semanticValue> T_XOR_EQUAL 628

%token <semanticValue> '{' '}' '(' ')' ';' '`'  '$' '"'

%% /* Rules */

start:
	top_statement_list	
;

top_statement_list:
		top_statement_list   top_statement 
	|	/* empty */
;

namespace_name:
		T_STRING 
	|	namespace_name T_NS_SEPARATOR T_STRING 
;

top_statement:
		statement						
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
		inner_statement_list   inner_statement 
	|	/* empty */
;


inner_statement:
		statement
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
	|	T_IF '(' expr ')'  statement  elseif_list else_single 
	|	T_IF '(' expr ')' ':'  inner_statement_list  new_elseif_list new_else_single T_ENDIF ';' 
	|	T_WHILE '('  expr  ')'  while_statement 
	|	T_DO  statement T_WHILE '('  expr ')' ';' 
	|	T_FOR
			'('
				for_expr
			';' 
				for_expr
			';' 
				for_expr
			')' 
			for_statement 
	|	T_SWITCH '(' expr ')'	 switch_case_list 
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
	|	T_DECLARE  '(' declare_list ')' declare_statement 
	|	';'		/* empty statement */
	|	T_TRY  '{' inner_statement_list '}'
		T_CATCH '(' 
		fully_qualified_class_name 
		T_VARIABLE ')' 
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
	T_CATCH '(' fully_qualified_class_name  T_VARIABLE ')'  '{' inner_statement_list '}' 
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
		/* empty */	
	|	'&'			
;


unticked_function_declaration_statement:
		function is_reference T_STRING 
			'(' parameter_list ')' '{' inner_statement_list '}' 
;

unticked_class_declaration_statement:
		class_entry_type T_STRING extends_from
			
			implements_list
			'{'
				class_statement_list
			'}' 
	|	interface_entry T_STRING
			
			interface_extends_list
			'{'
				class_statement_list
			'}' 
;


class_entry_type:
		T_CLASS			
	|	T_ABSTRACT T_CLASS 
	|	T_FINAL T_CLASS 
;

extends_from:
		/* empty */					
	|	T_EXTENDS fully_qualified_class_name	
;

interface_entry:
	T_INTERFACE		
;

interface_extends_list:
		/* empty */
	|	T_EXTENDS interface_list
;

implements_list:
		/* empty */
	|	T_IMPLEMENTS interface_list
;

interface_list:
		fully_qualified_class_name			
	|	interface_list ',' fully_qualified_class_name 
;

foreach_optional_arg:
		/* empty */						
	|	T_DOUBLE_ARROW foreach_variable	
;


foreach_variable:
		variable			
	|	'&' variable		
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
	|	case_list T_CASE expr case_separator  inner_statement_list 
	|	case_list T_DEFAULT case_separator  inner_statement_list 
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
	|	elseif_list T_ELSEIF '(' expr ')'  statement 
;


new_elseif_list:
		/* empty */
	|	new_elseif_list T_ELSEIF '(' expr ')' ':'  inner_statement_list 
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
		optional_class_type T_VARIABLE				
	|	optional_class_type '&' T_VARIABLE			
	|	optional_class_type '&' T_VARIABLE '=' static_scalar			
	|	optional_class_type T_VARIABLE '=' static_scalar				
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE 	
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE	
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE	 '=' static_scalar 
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE '=' static_scalar 	
;


optional_class_type:
		/* empty */					
	|	fully_qualified_class_name	
	|	T_ARRAY						
;


function_call_parameter_list:
		non_empty_function_call_parameter_list	
	|	/* empty */				
;


non_empty_function_call_parameter_list:
		expr_without_variable	
	|	variable				
	|	'&' w_variable 				
	|	non_empty_function_call_parameter_list ',' expr_without_variable	
	|	non_empty_function_call_parameter_list ',' variable					
	|	non_empty_function_call_parameter_list ',' '&' w_variable			
;

global_var_list:
		global_var_list ',' global_var	
	|	global_var						
;


global_var:
		T_VARIABLE			
	|	'$' r_variable		
	|	'$' '{' expr '}'	
;


static_var_list:
		static_var_list ',' T_VARIABLE 
	|	static_var_list ',' T_VARIABLE '=' static_scalar 
	|	T_VARIABLE  
	|	T_VARIABLE '=' static_scalar 

;


class_statement_list:
		class_statement_list class_statement
	|	/* empty */
;


class_statement:
		variable_modifiers  class_variable_declaration ';'
	|	class_constant_declaration ';'
	|	method_modifiers function is_reference T_STRING  '('
			parameter_list ')' method_body 
;


method_body:
		';' /* abstract method */		
	|	'{' inner_statement_list '}'	
;

variable_modifiers:
		non_empty_member_modifiers		
	|	T_VAR							
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
		T_PUBLIC				
	|	T_PROTECTED				
	|	T_PRIVATE				
	|	T_STATIC				
	|	T_ABSTRACT				
	|	T_FINAL					
;

class_variable_declaration:
		class_variable_declaration ',' T_VARIABLE					
	|	class_variable_declaration ',' T_VARIABLE '=' static_scalar	
	|	T_VARIABLE						
	|	T_VARIABLE '=' static_scalar	
;

class_constant_declaration:
		class_constant_declaration ',' T_STRING '=' static_scalar	
	|	T_CONST T_STRING '=' static_scalar	
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
		non_empty_for_expr ','	 expr 
	|	expr					
;

expr_without_variable:
		T_LIST '('  assignment_list ')' '=' expr 
	|	variable '=' expr		
	|	variable '=' '&' variable 
	|	variable '=' '&' T_NEW class_name_reference  ctor_arguments 
	|	T_NEW class_name_reference  ctor_arguments 
	|	T_CLONE expr 
	|	variable T_PLUS_EQUAL expr 	
	|	variable T_MINUS_EQUAL expr	
	|	variable T_MUL_EQUAL expr		
	|	variable T_DIV_EQUAL expr		
	|	variable T_CONCAT_EQUAL expr	
	|	variable T_MOD_EQUAL expr		
	|	variable T_AND_EQUAL expr		
	|	variable T_OR_EQUAL expr 		
	|	variable T_XOR_EQUAL expr 		
	|	variable T_SL_EQUAL expr	
	|	variable T_SR_EQUAL expr	
	|	rw_variable T_INC 
	|	T_INC rw_variable 
	|	rw_variable T_DEC 
	|	T_DEC rw_variable 
	|	expr T_BOOLEAN_OR  expr 
	|	expr T_BOOLEAN_AND  expr 
	|	expr T_LOGICAL_OR  expr 
	|	expr T_LOGICAL_AND  expr 
	|	expr T_LOGICAL_XOR expr 
	|	expr '|' expr	
	|	expr '&' expr	
	|	expr '^' expr	
	|	expr '.' expr 	
	|	expr '+' expr 	
	|	expr '-' expr 	
	|	expr '*' expr	
	|	expr '/' expr	
	|	expr '%' expr 	
	| 	expr T_SL expr	
	|	expr T_SR expr	
	|	'+' expr %prec T_INC
	|	'-' expr %prec T_INC
	|	'!' expr 
	|	'~' expr 
	|	expr T_IS_IDENTICAL expr		
	|	expr T_IS_NOT_IDENTICAL expr	
	|	expr T_IS_EQUAL expr			
	|	expr T_IS_NOT_EQUAL expr 		
	|	expr '<' expr 					
	|	expr T_IS_SMALLER_OR_EQUAL expr 
	|	expr '>' expr 					
	|	expr T_IS_GREATER_OR_EQUAL expr 
	|	expr T_INSTANCEOF class_name_reference 
	|	'(' expr ')' 	
	|	expr '?' 
		expr ':' 
		expr	 
	|	expr '?' ':' 
		expr     
	|	internal_functions_in_yacc 
	|	T_INT_CAST expr 	
	|	T_DOUBLE_CAST expr 	
	|	T_STRING_CAST expr	
	|	T_ARRAY_CAST expr 	
	|	T_OBJECT_CAST expr 	
	|	T_BOOL_CAST expr	
	|	T_UNSET_CAST expr	
	|	T_EXIT exit_expr	
	|	'@'  expr 
	|	scalar				
	|	T_ARRAY '(' array_pair_list ')' 
	|	'`' backticks_expr '`' 
	|	T_PRINT expr  
	|	function is_reference '(' 
			parameter_list ')' lexical_vars '{' inner_statement_list '}' 
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
		namespace_name '(' 
				function_call_parameter_list
				')' 
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name '(' 
				function_call_parameter_list
				')' 
	|	T_NS_SEPARATOR namespace_name '(' 
				function_call_parameter_list
				')' 
	|	class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING '(' 
			function_call_parameter_list
			')' 
	|	class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects '(' 
			function_call_parameter_list
			')' 
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING '(' 
			function_call_parameter_list
			')' 
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects '(' 
			function_call_parameter_list
			')' 
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
			object_property  dynamic_class_name_variable_properties
			
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
		T_LNUMBER 					
	|	T_DNUMBER 					
	|	T_CONSTANT_ENCAPSED_STRING	
	|	T_LINE 						
	|	T_FILE 						
	|	T_DIR   					
	|	T_CLASS_C					
	|	T_METHOD_C					
	|	T_FUNC_C					
	|	T_NS_C						
	|	T_START_HEREDOC T_ENCAPSED_AND_WHITESPACE T_END_HEREDOC 
	|	T_START_HEREDOC T_END_HEREDOC 
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
		r_variable					
	|	expr_without_variable		
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
		base_variable_with_function_calls T_OBJECT_OPERATOR 
			object_property  method_or_not variable_properties
			
	|	base_variable_with_function_calls 
;

variable_properties:
		variable_properties variable_property 
	|	/* empty */ 
;


variable_property:
		T_OBJECT_OPERATOR object_property  method_or_not 
;

method_or_not:
		'(' 
				function_call_parameter_list ')'
			
	|	/* empty */ 
;

variable_without_objects:
		reference_variable 
	|	simple_indirect_reference reference_variable 
;

static_member:
		class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects 
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects 

;

variable_class_name:
		reference_variable 
;

base_variable_with_function_calls:
		base_variable		
	|	function_call 
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
		T_VARIABLE			
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
		variable								
	|	T_LIST '('  assignment_list ')'	
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
	|	T_VARIABLE '['  encaps_var_offset ']'	
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
	|	isset_variables ','  variable 
;

class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING 
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING 
;

%%
