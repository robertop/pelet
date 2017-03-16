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
 * @copyright  2017 Roberto Perpuly
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
#define php71_lint_lex pelet::LintLex

// so that both bison parses call the same error function
#define php71_lint_error pelet::LintGrammarError

%}

%parse-param { pelet::LexicalAnalyzerClass &analyzer }
%lex-param  { pelet::LexicalAnalyzerClass &analyzer }

%define api.pure
%expect 0
%error-verbose
%name-prefix "php71_lint_"
%debug

%left T_INCLUDE T_INCLUDE_ONCE T_EVAL T_REQUIRE T_REQUIRE_ONCE
%left ','
%left T_LOGICAL_OR
%left T_LOGICAL_XOR
%left T_LOGICAL_AND
%right T_PRINT
%right T_YIELD
%right T_DOUBLE_ARROW
%right T_YIELD_FROM
%left '=' T_PLUS_EQUAL T_MINUS_EQUAL T_MUL_EQUAL T_DIV_EQUAL T_CONCAT_EQUAL T_MOD_EQUAL T_AND_EQUAL T_OR_EQUAL T_XOR_EQUAL T_SL_EQUAL T_SR_EQUAL T_POW_EQUAL
%left '?' ':'
%right T_COALESCE
%left T_BOOLEAN_OR
%left T_BOOLEAN_AND
%left '|'
%left '^'
%left '&'
%nonassoc T_IS_EQUAL T_IS_NOT_EQUAL T_IS_IDENTICAL T_IS_NOT_IDENTICAL T_SPACESHIP
%nonassoc '<' T_IS_SMALLER_OR_EQUAL '>' T_IS_GREATER_OR_EQUAL
%left T_SL T_SR
%left '+' '-' '.'
%left '*' '/' '%'
%right '!'
%nonassoc T_INSTANCEOF
%right '~' T_INC T_DEC T_INT_CAST T_DOUBLE_CAST T_STRING_CAST T_ARRAY_CAST T_OBJECT_CAST T_BOOL_CAST T_UNSET_CAST '@'
%right T_POW
%right '['
%nonassoc T_NEW T_CLONE
%left T_NOELSE
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

// new tokens for PHP 5.5
%token <semanticValue> T_FINALLY 629
%token <semanticValue> T_YIELD 630

// new tokens for PHP 5.6
%token <semanticValue> T_ELLIPSIS 631
%token <semanticValue> T_POW 632
%token <semanticValue> T_POW_EQUAL 633

// new tokens for PHP 7.0
%token <semanticValue> T_SPACESHIP 634
%token <semanticValue> T_COALESCE 635
%token <semanticValue> T_YIELD_FROM 636

%token <semanticValue> '{' '}' '(' ')' ';' '`'  '$' '"'

%% /* Rules */

start:
	top_statement_list	
;

reserved_non_modifiers:
	  T_INCLUDE | T_INCLUDE_ONCE | T_EVAL | T_REQUIRE | T_REQUIRE_ONCE | T_LOGICAL_OR | T_LOGICAL_XOR | T_LOGICAL_AND
	| T_INSTANCEOF | T_NEW | T_CLONE | T_EXIT | T_IF | T_ELSEIF | T_ELSE | T_ENDIF | T_ECHO | T_DO | T_WHILE | T_ENDWHILE
	| T_FOR | T_ENDFOR | T_FOREACH | T_ENDFOREACH | T_DECLARE | T_ENDDECLARE | T_AS | T_TRY | T_CATCH | T_FINALLY
	| T_THROW | T_USE | T_INSTEADOF | T_GLOBAL | T_VAR | T_UNSET | T_ISSET | T_EMPTY | T_CONTINUE | T_GOTO
	| T_FUNCTION | T_CONST | T_RETURN | T_PRINT | T_YIELD | T_LIST | T_SWITCH | T_ENDSWITCH | T_CASE | T_DEFAULT | T_BREAK
	| T_ARRAY | T_CALLABLE | T_EXTENDS | T_IMPLEMENTS | T_NAMESPACE | T_TRAIT | T_INTERFACE | T_CLASS
	| T_CLASS_C | T_TRAIT_C | T_FUNC_C | T_METHOD_C | T_LINE | T_FILE | T_DIR | T_NS_C
;

semi_reserved:
	  reserved_non_modifiers
	| T_STATIC | T_ABSTRACT | T_FINAL | T_PRIVATE | T_PROTECTED | T_PUBLIC
;

identifier:
		T_STRING 
	| 	semi_reserved  
;

top_statement_list:
		top_statement_list top_statement 
	|	/* empty */ 
;

namespace_name:
		T_STRING								
	|	namespace_name T_NS_SEPARATOR T_STRING	
;

name:
		namespace_name								
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name	
	|	T_NS_SEPARATOR namespace_name				
;

top_statement:
		statement							
	|	function_declaration_statement		
	|	class_declaration_statement			
	|	trait_declaration_statement			
	|	interface_declaration_statement		
	|	T_HALT_COMPILER '(' ')' ';'
			
	|	T_NAMESPACE namespace_name ';'
			
	|	T_NAMESPACE namespace_name 
		'{' top_statement_list '}'
			
	|	T_NAMESPACE 
		'{' top_statement_list '}'
			
	|	T_USE mixed_group_use_declaration ';'		
	|	T_USE use_type group_use_declaration ';'	
	|	T_USE use_declarations ';'					
	|	T_USE use_type use_declarations ';'			
	|	T_CONST const_list ';'						
;

use_type:
	 	T_FUNCTION 		
	| 	T_CONST 		
;

group_use_declaration:
		namespace_name T_NS_SEPARATOR '{' unprefixed_use_declarations '}'
			
	|	T_NS_SEPARATOR namespace_name T_NS_SEPARATOR '{' unprefixed_use_declarations '}'
			
;

mixed_group_use_declaration:
		namespace_name T_NS_SEPARATOR '{' inline_use_declarations '}'
			
	|	T_NS_SEPARATOR namespace_name T_NS_SEPARATOR '{' inline_use_declarations '}'
			
;

inline_use_declarations:
		inline_use_declarations ',' inline_use_declaration
			
	|	inline_use_declaration
			
;

unprefixed_use_declarations:
		unprefixed_use_declarations ',' unprefixed_use_declaration
			
	|	unprefixed_use_declaration
			
;

use_declarations:
		use_declarations ',' use_declaration
			
	|	use_declaration
			
;

inline_use_declaration:
		unprefixed_use_declaration 
	|	use_type unprefixed_use_declaration 
;

unprefixed_use_declaration:
		namespace_name
			
	|	namespace_name T_AS T_STRING
			
;

use_declaration:
		unprefixed_use_declaration                
	|	T_NS_SEPARATOR unprefixed_use_declaration 
;

const_list:
		const_list ',' const_decl 
	|	const_decl 
;

inner_statement_list:
		inner_statement_list inner_statement
			
	|	/* empty */
			
;


inner_statement:
		statement 
	|	function_declaration_statement 		
	|	class_declaration_statement 		
	|	trait_declaration_statement			
	|	interface_declaration_statement		
	|	T_HALT_COMPILER '(' ')' ';'
			
;


statement:
		'{' inner_statement_list '}' 
	|	if_stmt 
	|	alt_if_stmt 
	|	T_WHILE '(' expr ')' while_statement
			
	|	T_DO statement T_WHILE '(' expr ')' ';'
			
	|	T_FOR '(' for_exprs ';' for_exprs ';' for_exprs ')' for_statement
			
	|	T_SWITCH '(' expr ')' switch_case_list
			
	|	T_BREAK optional_expr ';'		
	|	T_CONTINUE optional_expr ';'	
	|	T_RETURN optional_expr ';'		
	|	T_GLOBAL global_var_list ';'	
	|	T_STATIC static_var_list ';'	
	|	T_ECHO echo_expr_list ';'		
	|	T_INLINE_HTML 
	|	expr ';' 
	|	T_UNSET '(' unset_variables ')' ';' 
	|	T_FOREACH '(' expr T_AS foreach_variable ')' foreach_statement
			
	|	T_FOREACH '(' expr T_AS foreach_variable T_DOUBLE_ARROW foreach_variable ')'
		foreach_statement
			
	|	T_DECLARE '(' const_list ')'
			
		declare_statement
			
	|	';'	/* empty statement */ 
	|	T_TRY '{' inner_statement_list '}' catch_list finally_statement
			
	|	T_THROW expr ';' 
	|	T_GOTO T_STRING ';' 
	|	T_STRING ':' 
;

catch_list:
		/* empty */
	|	catch_list T_CATCH '(' catch_name_list T_VARIABLE ')' '{' inner_statement_list '}'
;

catch_name_list:
		name
	|	catch_name_list '|' name
;

finally_statement:
		/* empty */ 
	|	T_FINALLY '{' inner_statement_list '}' 
;

unset_variables:
		unset_variable 
	|	unset_variables ',' unset_variable 
;

unset_variable:
		variable 
;

function_declaration_statement:
	function returns_ref T_STRING backup_doc_comment '(' parameter_list ')' return_type
	backup_fn_flags '{' inner_statement_list '}' backup_fn_flags
		
;

is_reference:
		/* empty */	
	|	'&'			
;

is_variadic:
		/* empty */ 
	|	T_ELLIPSIS  
;

class_declaration_statement:
		class_modifiers T_CLASS 
		T_STRING extends_from implements_list backup_doc_comment '{' class_statement_list '}'
			
	|	T_CLASS 
		T_STRING extends_from implements_list backup_doc_comment '{' class_statement_list '}'
			
;

class_modifiers:
		class_modifier 					
	|	class_modifiers class_modifier 	
;

class_modifier:
		T_ABSTRACT 		
	|	T_FINAL 		
;

trait_declaration_statement:
		T_TRAIT 
		T_STRING backup_doc_comment '{' class_statement_list '}'
			
;

interface_declaration_statement:
		T_INTERFACE 
		T_STRING interface_extends_list backup_doc_comment '{' class_statement_list '}'
			
;

extends_from:
		/* empty */		
	|	T_EXTENDS name	
;

interface_extends_list:
		/* empty */			
	|	T_EXTENDS name_list	
;

implements_list:
		/* empty */				
	|	T_IMPLEMENTS name_list	
;

foreach_variable:
		variable			
	|	'&' variable		
	|	T_LIST '(' array_pair_list ')'
	|	'[' array_pair_list ']'
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


if_stmt_without_else:
		T_IF '(' expr ')' statement
			
	|	if_stmt_without_else T_ELSEIF '(' expr ')' statement
			
;

if_stmt:
		if_stmt_without_else %prec T_NOELSE 
	|	if_stmt_without_else T_ELSE statement
			
;

alt_if_stmt_without_else:
		T_IF '(' expr ')' ':' inner_statement_list
			
	|	alt_if_stmt_without_else T_ELSEIF '(' expr ')' ':' inner_statement_list
			
;

alt_if_stmt:
		alt_if_stmt_without_else T_ENDIF ';' 
	|	alt_if_stmt_without_else T_ELSE ':' inner_statement_list T_ENDIF ';'
			
;

parameter_list:
		non_empty_parameter_list 
	|	/* empty */	
;


non_empty_parameter_list:
		parameter
			
	|	non_empty_parameter_list ',' parameter
			
;

parameter:
		optional_type is_reference is_variadic T_VARIABLE
			
	|	optional_type is_reference is_variadic T_VARIABLE '=' expr
			
;


optional_type:
		/* empty */	
	|	type_expr
;

type_expr:
		type
	|	'?' type
;

type:
		T_ARRAY		
	|	T_CALLABLE	
	|	name		
;

return_type:
		/* empty */	
	|	':' type_expr
;

argument_list:
		'(' ')'	
	|	'(' non_empty_argument_list ')' 
;

non_empty_argument_list:
		argument
			
	|	non_empty_argument_list ',' argument
			
;

argument:
		expr			
	|	T_ELLIPSIS expr	
;

global_var_list:
		global_var_list ',' global_var 
	|	global_var 
;

global_var:
	simple_variable
		
;


static_var_list:
		static_var_list ',' static_var 
	|	static_var 
;

static_var:
		T_VARIABLE			
	|	T_VARIABLE '=' expr	
;


class_statement_list:
		class_statement_list class_statement
			
	|	/* empty */
			
;


class_statement:
		variable_modifiers property_list ';'
			
	|	method_modifiers T_CONST class_const_list ';'
			
	|	T_USE name_list trait_adaptations
			
	|	method_modifiers function returns_ref identifier backup_doc_comment '(' parameter_list ')'
		return_type backup_fn_flags method_body backup_fn_flags
			
;

name_list:
		name 
	|	name_list ',' name 
;

trait_adaptations:
		';'								
	|	'{' '}'							
	|	'{' trait_adaptation_list '}'	
;

trait_adaptation_list:
		trait_adaptation
			
	|	trait_adaptation_list trait_adaptation
			
;

trait_adaptation:
		trait_precedence ';'	
	|	trait_alias ';'			
;

trait_precedence:
	absolute_trait_method_reference T_INSTEADOF name_list
		
;

trait_alias:
		trait_method_reference T_AS T_STRING
			
	|	trait_method_reference T_AS reserved_non_modifiers
			
	|	trait_method_reference T_AS member_modifier identifier
			
	|	trait_method_reference T_AS member_modifier
			
;

trait_method_reference:
		identifier
			
	|	absolute_trait_method_reference 
;

absolute_trait_method_reference:
	name T_PAAMAYIM_NEKUDOTAYIM identifier
		
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

property_list:
		property_list ',' property 
	|	property 
;

property:
		T_VARIABLE backup_doc_comment
			
	|	T_VARIABLE '=' expr backup_doc_comment
			
;

class_const_list:
		class_const_list ',' class_const_decl 
	|	class_const_decl 
;

class_const_decl:
	identifier '=' expr backup_doc_comment 
;

const_decl:
	T_STRING '=' expr backup_doc_comment
;

echo_expr_list:
		echo_expr_list ',' echo_expr 
	|	echo_expr 
;
echo_expr:
	expr 
;

for_exprs:
		/* empty */			
	|	non_empty_for_exprs	
;

non_empty_for_exprs:
		non_empty_for_exprs ',' expr 
	|	expr 
;

anonymous_class:
        T_CLASS  ctor_arguments
		extends_from implements_list backup_doc_comment '{' class_statement_list '}' 
;

new_expr:
		T_NEW class_name_reference ctor_arguments
			
	|	T_NEW anonymous_class
			
;

expr_without_variable:
		T_LIST '(' array_pair_list ')' '=' expr

	|   '[' array_pair_list ']' '=' expr

	|	variable '=' expr
			
	|	variable '=' '&' variable
			
	|	T_CLONE expr 
	|	variable T_PLUS_EQUAL expr
			
	|	variable T_MINUS_EQUAL expr
			
	|	variable T_MUL_EQUAL expr
			
	|	variable T_POW_EQUAL expr
			
	|	variable T_DIV_EQUAL expr
			
	|	variable T_CONCAT_EQUAL expr
			
	|	variable T_MOD_EQUAL expr
			
	|	variable T_AND_EQUAL expr
			
	|	variable T_OR_EQUAL expr
			
	|	variable T_XOR_EQUAL expr
			
	|	variable T_SL_EQUAL expr
			
	|	variable T_SR_EQUAL expr
			
	|	variable T_INC 
	|	T_INC variable 
	|	variable T_DEC 
	|	T_DEC variable 
	|	expr T_BOOLEAN_OR expr
			
	|	expr T_BOOLEAN_AND expr
			
	|	expr T_LOGICAL_OR expr
			
	|	expr T_LOGICAL_AND expr
			
	|	expr T_LOGICAL_XOR expr
			
	|	expr '|' expr	
	|	expr '&' expr	
	|	expr '^' expr	
	|	expr '.' expr 	
	|	expr '+' expr 	
	|	expr '-' expr 	
	|	expr '*' expr	
	|	expr T_POW expr	
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
			
	|	expr T_SPACESHIP expr
			
	|	expr T_INSTANCEOF class_name_reference
			
	|	'(' expr ')' 
	|	new_expr 
	|	expr '?' expr ':' expr
			
	|	expr '?' ':' expr
			
	|	expr T_COALESCE expr
			
	|	internal_functions_in_yacc 
	|	T_INT_CAST expr		
	|	T_DOUBLE_CAST expr	
	|	T_STRING_CAST expr	
	|	T_ARRAY_CAST expr	
	|	T_OBJECT_CAST expr	
	|	T_BOOL_CAST expr	
	|	T_UNSET_CAST expr	
	|	T_EXIT exit_expr	
	|	'@' expr			
	|	scalar 
	|	'`' backticks_expr '`' 
	|	T_PRINT expr 
	|	T_YIELD 
	|	T_YIELD expr 
	|	T_YIELD expr T_DOUBLE_ARROW expr 
	|	T_YIELD_FROM expr 
	|	function returns_ref backup_doc_comment '(' parameter_list ')' lexical_vars return_type
		backup_fn_flags '{' inner_statement_list '}' backup_fn_flags
			
	|	T_STATIC function returns_ref backup_doc_comment '(' parameter_list ')' lexical_vars
		return_type backup_fn_flags '{' inner_statement_list '}' backup_fn_flags
			
;

function:
	T_FUNCTION 
;

backup_doc_comment:
	/* empty */ 
;

backup_fn_flags:
	/* empty */ 
;

returns_ref:
		/* empty */	
	|	'&'			
;

lexical_vars:
		/* empty */ 
	|	T_USE '(' lexical_var_list ')' 
;

lexical_var_list:
		lexical_var_list ',' lexical_var 
	|	lexical_var 
;

lexical_var:
		T_VARIABLE		
	|	'&' T_VARIABLE	
;

function_call:
		name argument_list
			
	|	class_name T_PAAMAYIM_NEKUDOTAYIM member_name argument_list
			
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM member_name argument_list
			
	|	callable_expr argument_list
			
;

class_name:
		T_STATIC
			
	|	name 
;

class_name_reference:
		class_name		
	|	new_variable	
;

exit_expr:
		/* empty */				
	|	'(' optional_expr ')'	
;

backticks_expr:
		/* empty */
			
	|	T_ENCAPSED_AND_WHITESPACE 
	|	encaps_list 
;


ctor_arguments:
		/* empty */	
	|	argument_list 
;


dereferencable_scalar:
		T_ARRAY '(' array_pair_list ')'	
	|	'[' array_pair_list ']'			
	|	T_CONSTANT_ENCAPSED_STRING		
;

scalar:
		T_LNUMBER 	
	|	T_DNUMBER 	
	|	T_LINE 		
	|	T_FILE 		
	|	T_DIR   	
	|	T_TRAIT_C	
	|	T_METHOD_C	
	|	T_FUNC_C	
	|	T_NS_C		
	|	T_CLASS_C	
	|	T_START_HEREDOC T_ENCAPSED_AND_WHITESPACE T_END_HEREDOC 
	|	T_START_HEREDOC T_END_HEREDOC
			
	|	'"' encaps_list '"' 	
	|	T_START_HEREDOC encaps_list T_END_HEREDOC 
	|	dereferencable_scalar	
	|	constant			
;

constant:
		name 
	|	class_name T_PAAMAYIM_NEKUDOTAYIM identifier
			
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM identifier
			
;

expr:
		variable					
	|	expr_without_variable		
;

optional_expr:
		/* empty */	
	|	expr		
;

variable_class_name:
	dereferencable 
;

dereferencable:
		variable				
	|	'(' expr ')'			
	|	dereferencable_scalar	
;

callable_expr:
		callable_variable		
	|	'(' expr ')'			
	|	dereferencable_scalar	
;

callable_variable:
		simple_variable
			
	|	dereferencable '[' optional_expr ']'
			
	|	constant '[' optional_expr ']'
			
	|	dereferencable '{' expr '}'
			
	|	dereferencable T_OBJECT_OPERATOR property_name argument_list
			
	|	function_call 
;

variable:
		callable_variable
			
	|	static_member
			
	|	dereferencable T_OBJECT_OPERATOR property_name
			
;

simple_variable:
		T_VARIABLE			
	|	'$' '{' expr '}'	
	|	'$' simple_variable	
;

static_member:
		class_name T_PAAMAYIM_NEKUDOTAYIM simple_variable
			
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM simple_variable
			
;

new_variable:
		simple_variable
			
	|	new_variable '[' optional_expr ']'
			
	|	new_variable '{' expr '}'
			
	|	new_variable T_OBJECT_OPERATOR property_name
			
	|	class_name T_PAAMAYIM_NEKUDOTAYIM simple_variable
			
	|	new_variable T_PAAMAYIM_NEKUDOTAYIM simple_variable
			
;

member_name:
		identifier 
	|	'{' expr '}'	
	|	simple_variable	
;

property_name:
		T_STRING 
	|	'{' expr '}'	
	|	simple_variable	
;

array_pair_list:
		non_empty_array_pair_list
;

possible_array_pair:
		/* empty */
	|	array_pair
;

non_empty_array_pair_list:
		non_empty_array_pair_list ',' possible_array_pair
			
	|	possible_array_pair
			
;

array_pair:
		expr T_DOUBLE_ARROW expr
			
	|	expr 
	|	expr T_DOUBLE_ARROW '&' variable
			
	|	'&' variable

	|	T_LIST '(' array_pair_list ')'			
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
			
	|	T_DOLLAR_OPEN_CURLY_BRACES T_STRING_VARNAME '}'
			
	|	T_DOLLAR_OPEN_CURLY_BRACES T_STRING_VARNAME '[' expr ']' '}'
			
	|	T_CURLY_OPEN variable '}' 
;

encaps_var_offset:
		T_STRING		
	|	T_NUM_STRING	
	|	'-' T_NUM_STRING	
	|	T_VARIABLE		
;


internal_functions_in_yacc:
		T_ISSET '(' isset_variables ')' 
	|	T_EMPTY '(' expr ')' 
	|	T_INCLUDE expr
			
	|	T_INCLUDE_ONCE expr
			
	|	T_EVAL '(' expr ')'
			
	|	T_REQUIRE expr
			
	|	T_REQUIRE_ONCE expr
			
;

isset_variables:
		isset_variable 
	|	isset_variables ',' isset_variable
			
;

isset_variable:
		expr 
;

%%
