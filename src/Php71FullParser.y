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
#include <pelet/FullParserObserverClass.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE pelet::ParserType

// so that both bison parses call the same lex function
#define php71lex pelet::FullLex

// so that both bison parses call the same error function
#define php71error pelet::FullGrammarError

%}

%parse-param { pelet::LexicalAnalyzerClass &analyzer }
%parse-param { pelet::FullParserObserverClass &observers }
%lex-param  { pelet::LexicalAnalyzerClass &analyzer }
%lex-param { pelet::FullParserObserverClass &observers }

%define api.pure
%expect 0
%error-verbose
%name-prefix "php71"
%debug

%left T_INCLUDE T_INCLUDE_ONCE T_EVAL T_REQUIRE T_REQUIRE_ONCE
%left <semanticValue> ','
%left T_LOGICAL_OR
%left T_LOGICAL_XOR
%left T_LOGICAL_AND
%right T_PRINT
%right T_YIELD
%right T_DOUBLE_ARROW
%right T_YIELD_FROM
%left <semanticValue> '=' 
%left T_PLUS_EQUAL T_MINUS_EQUAL T_MUL_EQUAL T_DIV_EQUAL T_CONCAT_EQUAL T_MOD_EQUAL T_AND_EQUAL T_OR_EQUAL T_XOR_EQUAL T_SL_EQUAL T_SR_EQUAL T_POW_EQUAL
%left <semanticValue> '?' ':'
%right T_COALESCE
%left T_BOOLEAN_OR
%left T_BOOLEAN_AND
%left <semanticValue> '|'
%left <semanticValue> '^'
%left <semanticValue> '&'
%nonassoc T_IS_EQUAL T_IS_NOT_EQUAL T_IS_IDENTICAL T_IS_NOT_IDENTICAL T_SPACESHIP T_IS_SMALLER_OR_EQUAL T_IS_GREATER_OR_EQUAL
%nonassoc <semanticValue> '<'
%nonassoc <semanticValue> '>' 
%left T_SL T_SR
%left <semanticValue> '+' '-' '.'
%left <semanticValue> '*' '/' '%'
%right <semanticValue> '!'
%nonassoc T_INSTANCEOF
%right <semanticValue> '~' 
%right T_INC T_DEC T_INT_CAST T_DOUBLE_CAST T_STRING_CAST T_ARRAY_CAST T_OBJECT_CAST T_BOOL_CAST T_UNSET_CAST 
%right <semanticValue> '@'
%right T_POW
%right <semanticValue> '['
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

%type <semanticValue> reserved_non_modifiers
%type <semanticValue> semi_reserved
%type <semanticValue> identifier
%type <statementList> top_statement_list
%type <qualifiedName> namespace_name
%type <qualifiedName> name
%type <statementList> top_statement
%type <semanticValue> use_type
%type <statementList> group_use_declaration
%type <statementList> mixed_group_use_declaration
%type <statementList> inline_use_declarations
%type <unprefixedNameList> unprefixed_use_declarations
%type <statementList> use_declarations
%type <statementList> inline_use_declaration
%type <unprefixedName> unprefixed_use_declaration
%type <statementList> use_declaration
%type <statementList> const_list
%type <statementList> inner_statement_list
%type <statementList> inner_statement
%type <statementList> statement
%type <statementList> catch_list
%type <qualifiedNameList> catch_name_list
%type <statementList> finally_statement
%type <statementList> unset_variables
%type <variable> unset_variable
%type <statementList> function_declaration_statement
%type <isMethod> is_reference
%type <isVariadic> is_variadic
%type <statementList> class_declaration_statement
%type <classSymbol> class_modifiers
%type <classSymbol> class_modifier
%type <statementList> trait_declaration_statement
%type <statementList> interface_declaration_statement
%type <classSymbol> extends_from
%type <classSymbol> interface_extends_list
%type <classSymbol> implements_list
%type <expression> foreach_variable
%type <statementList> for_statement
%type <statementList> foreach_statement
%type <statementList> declare_statement
%type <statementList> switch_case_list
%type <statementList> case_list
%type <semanticValue> case_separator
%type <statementList> while_statement
%type <statementList> if_stmt_without_else
%type <statementList> if_stmt
%type <statementList> alt_if_stmt_without_else
%type <statementList> alt_if_stmt
%type <parametersList> parameter_list
%type <parametersList> non_empty_parameter_list
%type <parametersList> parameter
%type <typeHint> optional_type
%type <qualifiedName> type
%type <typeHint> return_type
%type <typeHint> type_expr
%type <statementList> argument_list
%type <statementList> non_empty_argument_list
%type <expression> argument
%type <statementList> global_var_list
%type <variable> global_var
%type <statementList> static_var_list
%type <expression> static_var
%type <statementList> class_statement_list
%type <statementList> class_statement
%type <qualifiedNameList> name_list
%type <statementList> trait_adaptations
%type <statementList> trait_adaptation_list
%type <statementList> trait_adaptation
%type <traitInsteadOf> trait_precedence
%type <traitAlias> trait_alias
%type <traitAlias> trait_method_reference
%type <traitAlias> absolute_trait_method_reference
%type <classMemberSymbol> method_body
%type <classMemberSymbol> variable_modifiers
%type <classMemberSymbol> method_modifiers
%type <classMemberSymbol> non_empty_member_modifiers
%type <semanticValue> member_modifier
%type <statementList> property_list
%type <classMemberSymbol> property
%type <statementList> class_const_list
%type <statementList> class_const_decl
%type <statementList> const_decl
%type <statementList> echo_expr_list
%type <expression> echo_expr
%type <statementList> for_exprs
%type <statementList> non_empty_for_exprs
%type <expression> anonymous_class
%type <expression> new_expr
%type <expression> expr_without_variable
%type <semanticValue> function
%type <semanticValue> backup_doc_comment
%type <semanticValue> backup_fn_flags
%type <isMethod> returns_ref
%type <statementList> lexical_vars
%type <statementList> lexical_var_list
%type <variable> lexical_var
%type <variable> function_call
%type <qualifiedName> class_name
%type <qualifiedName> class_name_reference
%type <expression> exit_expr
%type <expression> backticks_expr
%type <statementList> ctor_arguments
%type <expression> dereferencable_scalar
%type <expression> scalar
%type <expression> constant
%type <expression> expr
%type <expression> optional_expr
%type <variable> variable_class_name
%type <variable> dereferencable
%type <expression> callable_expr
%type <variable> callable_variable
%type <variable> variable
%type <variable> simple_variable
%type <variable> static_member
%type <variable> new_variable
%type <variable> member_name
%type <variable> property_name
%type <statementList> array_pair_list
%type <statementList> non_empty_array_pair_list
%type <statementList> array_pair
%type <statementList> possible_array_pair
%type <expression> encaps_list
%type <expression> encaps_var
%type <expression> encaps_var_offset
%type <expression> internal_functions_in_yacc
%type <expression> isset_variables
%type <expression> isset_variable

%% /* Rules */

start:
	top_statement_list	                  { observers.MakeAst($1); }
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
		top_statement_list top_statement            { $$ = observers.StatementListMerge($1, $2); }
	|	/* empty */                                 { $$ = observers.StatementListNil(); }
;

namespace_name:
		T_STRING								     { $$ = observers.QualifiedNameCreate($1); }
	|	namespace_name T_NS_SEPARATOR T_STRING	     { $$ = $1; $$->AppendName($3); }
;

name:
		namespace_name								 { $$ = $1; }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name	 { $$ = observers.QualifiedNameMakeFromDeclaredNamespace($3); }
	|	T_NS_SEPARATOR namespace_name				 { $$ = observers.QualifiedNameMakeAbsolute($2); }
;

top_statement:
		statement							         { $$ = $1; }
	|	function_declaration_statement		         { $$ = $1; }
	|	class_declaration_statement			     { $$ = $1; }
	|	trait_declaration_statement			     { $$ = $1; }
	|	interface_declaration_statement		     { $$ = $1; }
	|	T_HALT_COMPILER '(' ')' ';'                 { $$ = observers.StatementListNil(); }
	|	T_NAMESPACE namespace_name ';'              { $$ = observers.NamespaceDeclarationFound($2, $1); observers.SetDeclaredNamespace($2); }
	|	T_NAMESPACE namespace_name '{'              { observers.SetDeclaredNamespace($2); }
	    top_statement_list '}'                      { $$ = observers.NamespaceDeclarationFound($2, $1); $$ = observers.StatementListMerge($$, $5); }
	|	T_NAMESPACE  '{'                            { observers.SetDeclaredNamespace(NULL); }
	    top_statement_list '}'                      { $$ = observers.NamespaceGlobalDeclarationFound($1); $$ = observers.StatementListMerge($$, $4); } 
	|	T_USE mixed_group_use_declaration ';'	     { $$ = observers.NamespaceUseSetStartingPos($2, $1); }
	|	T_USE use_type group_use_declaration ';'    { $$ = observers.FunctionOrConstantImportSetStartingPos($3, $2, $1); }
	|	T_USE use_declarations ';'                  { $$ = observers.NamespaceUseSetStartingPos($2, $1); }
	|	T_USE use_type use_declarations ';'       	 { $$ = observers.FunctionOrConstantImportSetStartingPos($3, $2, $1); }
	|	T_CONST const_list ';'					     { $$ = $2; }
;

use_type:
	 	T_FUNCTION 		
	| 	T_CONST
;

group_use_declaration:
                namespace_name T_NS_SEPARATOR '{' unprefixed_use_declarations '}'                    { $$ = observers.NamespaceUseMake($1, $4); }
        |       T_NS_SEPARATOR namespace_name T_NS_SEPARATOR '{' unprefixed_use_declarations '}'     { $$ = observers.NamespaceUseMake($2, $5); }
;

mixed_group_use_declaration:
                namespace_name T_NS_SEPARATOR '{' inline_use_declarations '}'                         { $$ = observers.NamespaceUseQualify($1, $4); }
        |       T_NS_SEPARATOR namespace_name T_NS_SEPARATOR '{' inline_use_declarations '}'          { $$ = observers.NamespaceUseQualify($2, $5); }
;

inline_use_declarations:
		inline_use_declarations ',' inline_use_declaration      { $$ = observers.StatementListMerge($1, $3); }
	|	inline_use_declaration                                  { $$ = $1; }                           
;

unprefixed_use_declarations:
		unprefixed_use_declarations ',' unprefixed_use_declaration     { $$ = observers.UnprefixedNameListAppend($1, $3); }
	|	unprefixed_use_declaration                                     { $$ = observers.UnprefixedNameListMake($1); }                     
;

use_declarations:
		use_declarations ',' use_declaration      { $$ = observers.StatementListMerge($1, $3); }
	|	use_declaration                           { $$ = $1; }
;

inline_use_declaration:
		unprefixed_use_declaration					{ $$ = observers.NamespaceUseMake($1); }
	|	use_type unprefixed_use_declaration        { $$ = observers.FunctionOrConstantImportMake($1, $2); }
;

unprefixed_use_declaration:
		namespace_name                      { $$ = observers.UnprefixedNameMake($1); }
	|	namespace_name T_AS T_STRING        { $$ = observers.UnprefixedNameMakeAlias($1, $3); }
;

use_declaration:
		unprefixed_use_declaration                       { $$ = observers.NamespaceUseMake($1); }                                  
	|	T_NS_SEPARATOR unprefixed_use_declaration        { $$ = observers.NamespaceUseMakeAbsolute($2); }
;

const_list:
		const_list ',' const_decl         { $$ = observers.StatementListMerge($1, $3); }                                                 
	|	const_decl                        { $$ = $1; }
;

inner_statement_list:
		inner_statement_list inner_statement       { $$ = observers.StatementListMerge($1, $2); }
	|	/* empty */                                { $$ = observers.StatementListNil(); }
;

inner_statement:
		statement                                { $$ = $1; }
	|	function_declaration_statement 		  { $$ = $1; }
	|	class_declaration_statement 		      { $$ = $1; }
	|	trait_declaration_statement			  { $$ = $1; } 
	|	interface_declaration_statement		  { $$ = $1; }
	|	T_HALT_COMPILER '(' ')' ';'              { $$ = observers.StatementListNil(); } 
;

statement:
		'{' inner_statement_list '}'                                                 { $$ = $2; }
	|	if_stmt                                                                      { $$ = $1; }
	|	alt_if_stmt                                                                  { $$ = $1; }
	|	T_WHILE '(' expr ')' while_statement                                         { $$ = observers.StatementListMakeAndAppend($3); $$ = observers.StatementListMerge($$, $5); }
	|	T_DO statement T_WHILE '(' expr ')' ';'                                      { $$ = observers.StatementListAppend($2, $5); }
	|	T_FOR '(' for_exprs ';' for_exprs ';' for_exprs ')' for_statement            { $$ = observers.StatementListMerge($3, $5);
																					     $$ = observers.StatementListMerge($$, $7); 
																					     $$ = observers.StatementListMerge($$, $9);
																					   }
	|	T_SWITCH '(' expr ')' switch_case_list                                       { $$ = observers.StatementListMakeAndAppend($3); $$ = observers.StatementListMerge($$, $5); }
	|	T_BREAK optional_expr ';'		                                              { $$ = observers.StatementListMakeAndAppend($2); }
	|	T_CONTINUE optional_expr ';'	                                              { $$ = observers.StatementListMakeAndAppend($2); }
	|	T_RETURN optional_expr ';'		                                              { $$ = observers.StatementListMakeAndAppend($2); }
	|	T_GLOBAL global_var_list ';'	                                              { $$ = observers.GlobalVariablesStatementMake($2); }
	|	T_STATIC static_var_list ';'	                                              { $$ = observers.GlobalVariablesStatementMake($2); }
	|	T_ECHO echo_expr_list ';'		                                              { $$ = $2; }
	|	T_INLINE_HTML                                                                { $$ = observers.StatementListNil(); }
	|	expr ';'                                                                     { $$ = observers.StatementListMakeAndAppend($1); }
	|	T_UNSET '(' unset_variables ')' ';'                                          { $$ = observers.StatementListNil(); }
	|	T_FOREACH '(' expr T_AS foreach_variable ')' foreach_statement               { $$ = observers.StatementListMakeAndAppend($3); 
																						 $$ = observers.StatementListAppend($$, $5);
																						 $$ = observers.StatementListMerge($$, $7);
	                                                                                 }
	|	T_FOREACH '(' expr T_AS foreach_variable T_DOUBLE_ARROW foreach_variable ')' 
		foreach_statement                                                            { $$ = observers.StatementListMakeAndAppend($3); 
																						 $$ = observers.StatementListAppend($$, $5);
																						 $$ = observers.StatementListAppend($$, $7);
																						 $$ = observers.StatementListMerge($$, $9);
	                                                                                 }
	|	T_DECLARE '(' const_list ')'                                                      
		declare_statement                                                            { $$ = observers.StatementListMakeAndAppend(observers.DeclareDirectiveMake($3, $5)); }
	|	';'	/* empty statement */                                                    { $$ = observers.StatementListNil(); }
	|	T_TRY '{' inner_statement_list '}' catch_list finally_statement              { $$ = observers.StatementListMerge($3, $5);
																					     $$ = observers.StatementListMerge($$, $6);
																					   }
	|	T_THROW expr ';'                                                             { $$ = observers.StatementListMakeAndAppend($2);}
	|	T_GOTO T_STRING ';'                                                          { $$ = observers.StatementListNil(); }
	|	T_STRING ':'                                                                 { $$ = observers.StatementListNil(); }     
;

catch_list:
		/* empty */                                                              { $$ = observers.StatementListNil(); }
	|	catch_list T_CATCH '(' catch_name_list T_VARIABLE ')' 
	    '{' inner_statement_list '}'                                             { $$ = observers.StatementListMerge($1,
																					   observers.VariableMakeCatchedException($4, $5));
																					 $$ = observers.StatementListMerge($$, $8); }
;

catch_name_list:
		name                                     { $$ = observers.NamespaceNameListMake($1); }
	|	catch_name_list '|' name                 { $$ = observers.NamespaceNameListAppend($1, $3); }
;

finally_statement:
		/* empty */                                { $$ = observers.StatementListNil(); }                     
	|	T_FINALLY '{' inner_statement_list '}'     { $$ = $3; }                    
;

unset_variables:
		unset_variable                          { $$ = observers.StatementListMakeAndAppend($1); }                  
	|	unset_variables ',' unset_variable      { $$ = observers.StatementListAppend($1, $3); }
;

unset_variable:
		variable               { $$ = $1; }
;

function_declaration_statement:
	function returns_ref T_STRING backup_doc_comment
	'(' parameter_list ')'                                 { observers.SetCurrentMemberName($3); }
	return_type                                                
	backup_fn_flags 
	'{' inner_statement_list '}'                           
	backup_fn_flags                                        { $$ = observers.ClassMemberSymbolMakeFunction($3, $2, $1, $6, $12, $11, $13, $9);
											                  observers.SetCurrentMemberName(NULL);
															 }
;

is_reference:
		/* empty */	                { $$ = false; }
	|	'&'			                { $$ = true; }
;

is_variadic:
		/* empty */               { $$ = false; }
	|	T_ELLIPSIS                { $$ = true; }
;

class_declaration_statement:
		class_modifiers T_CLASS 
		T_STRING extends_from implements_list backup_doc_comment             { observers.SetCurrentClassName($3); }	
		'{' class_statement_list '}'                                         { $$ = observers.ClassSymbolMake($3, $1, $4, $5, $10);
																				 observers.DeclareAssignedPropertiesFromAssignments($9);
											                                    /*
											                                     * parse out property and method PHP docs
											                                     */
											                                   pelet::ClassSymbolClass* clazz = (pelet::ClassSymbolClass*) $$->At(0);
											                                   observers.CreateMagicMethodsAndProperties($$, clazz);
											                                   observers.StatementListMerge($$, $9);
																				observers.SetCurrentClassName(NULL);  
											                                  }
	|	T_CLASS 
		T_STRING extends_from implements_list backup_doc_comment             { observers.SetCurrentClassName($2); }
		'{' class_statement_list '}'                                         { $$ = observers.ClassSymbolMake($2,
																					observers.ClassSymbolStart($1, false, false, false, false),
																					$3, $4, $9);
																				 observers.DeclareAssignedPropertiesFromAssignments($8);
											                                    /*
											                                     * parse out property and method PHP docs
											                                     */
											                                    pelet::ClassSymbolClass* clazz = (pelet::ClassSymbolClass*) $$->At(0);
											                                    observers.CreateMagicMethodsAndProperties($$, clazz);
											                                    observers.StatementListMerge($$, $8);
																				 observers.SetCurrentClassName(NULL);  
											                                  }
;

class_modifiers:
		class_modifier 					    { $$ = $1; }
	|	class_modifiers class_modifier     { $$ = observers.ClassSymbolMergeModifiers($1, $2); }
;

class_modifier:
		T_ABSTRACT 		       { $$ = observers.ClassSymbolStart($1, true, false, false, false); }
	|	T_FINAL               { $$ = observers.ClassSymbolStart($1, false, true, false, false); }
;

trait_declaration_statement:
		T_TRAIT
		T_STRING backup_doc_comment '{'     { observers.SetCurrentClassName($2); }
		class_statement_list '}'            { $$ = observers.ClassSymbolMake($2, 
														observers.ClassSymbolStart($1, false, false, false, true),
														observers.ClassSymbolStart($1, false, false, false, true),
														observers.ClassSymbolStart($1, false, false, false, true),
														$7);
											  observers.DeclareAssignedPropertiesFromAssignments($6);
											   /*
											   * parse out property and method PHP docs
											   */
											  pelet::ClassSymbolClass* clazz = (pelet::ClassSymbolClass*) $$->At(0);
											  observers.CreateMagicMethodsAndProperties($$, clazz);
											  observers.StatementListMerge($$, $6);
											  observers.SetCurrentClassName(NULL);  
											}
			
;

interface_declaration_statement:
		T_INTERFACE 
		T_STRING interface_extends_list backup_doc_comment           { observers.SetCurrentClassName($2); }
		'{' class_statement_list '}'                                 { $$ = observers.ClassSymbolMake($2, 
																				observers.ClassSymbolStart($1, false, false, true, false),
																				observers.ClassSymbolStart($1, false, false, false, false),
																				$3, 
																				$8);
																		 observers.DeclareAssignedPropertiesFromAssignments($7);
																		 /*
																		 * parse out property and method PHP docs
																		 */
																		 pelet::ClassSymbolClass* clazz = (pelet::ClassSymbolClass*) $$->At(0);
																		 observers.CreateMagicMethodsAndProperties($$, clazz);
																		 observers.StatementListMerge($$, $7);
																		 observers.SetCurrentClassName(NULL);  
																	   }  
;

extends_from:
		/* empty */		           { $$ = observers.ClassSymbolStart(NULL, false, false, false, false); }
	|	T_EXTENDS name	           { $$ = observers.ClassSymbolExtends($2); }
;

interface_extends_list:
		/* empty */			      { $$ = observers.ClassSymbolStart(NULL, false, false, false, false); }
	|	T_EXTENDS name_list	      { $$ = observers.ClassSymbolAddToImplements($2); }   
;

implements_list:
		/* empty */				  { $$ = observers.ClassSymbolStart(NULL, false, false, false, false); }
	|	T_IMPLEMENTS name_list	  { $$ = observers.ClassSymbolAddToImplements($2); } 
;

foreach_variable:
		variable                          { $$ = observers.ExpressionMakeAsAssignmentExpression($1); }
	|	'&' variable                      { $$ = observers.ExpressionMakeAsAssignmentExpression($2); }
	|	T_LIST '(' array_pair_list ')'    { $$ = observers.ExpressionMakeAssignmentList($3, observers.ExpressionNil()); }
	|	'[' array_pair_list ']'           { $$ = observers.ExpressionMakeAssignmentList($2, observers.ExpressionNil()); }
;

for_statement:
		statement                                 { $$ = $1; }
	|	':' inner_statement_list T_ENDFOR ';'     { $$ = $2; }
;

foreach_statement:
		statement                                     { $$ = $1; }
	|	':' inner_statement_list T_ENDFOREACH ';'     { $$ = $2; }
;

declare_statement:
		statement                                    { $$ = $1; } 
	|	':' inner_statement_list T_ENDDECLARE ';'    { $$ = $2; } 
;

switch_case_list:
		'{' case_list '}'				        { $$ = $2; }
	|	'{' ';' case_list '}'			        { $$ = $3; }
	|	':' case_list T_ENDSWITCH ';'	        { $$ = $2; }
	|	':' ';' case_list T_ENDSWITCH ';'      { $$ = $3; }
;

case_list:
		/* empty */                                                  { $$ = observers.StatementListNil(); }
	|	case_list T_CASE expr case_separator inner_statement_list    { $$ = observers.StatementListAppend($1, $3); $$ = observers.StatementListMerge($$, $5); }
	|	case_list T_DEFAULT case_separator inner_statement_list      { $$ = observers.StatementListMerge($1, $4); }
;

case_separator:
		':'                        { $$ = $1; }
	|	';'                        { $$ = $1; }
;

while_statement:
		statement                                  { $$ = $1; }
	|	':' inner_statement_list T_ENDWHILE ';'    { $$ = $2; }  
;

if_stmt_without_else:
		T_IF '(' expr ')' statement                                { $$ = observers.StatementListMakeAndAppend($3); 
		                                                             $$ = observers.StatementListMerge($$, $5); }
	|	if_stmt_without_else T_ELSEIF '(' expr ')' statement       { $$ = observers.StatementListAppend($1, $4);
	                                                                 $$ = observers.StatementListMerge($$, $6); }
;

if_stmt:
		if_stmt_without_else %prec T_NOELSE          { $$ = $1; }
	|	if_stmt_without_else T_ELSE statement        { $$ = observers.StatementListMerge($1, $3); }
;

alt_if_stmt_without_else:
		T_IF '(' expr ')' ':' inner_statement_list                                   { $$ = observers.StatementListMakeAndAppend($3);
		                                                                               $$ = observers.StatementListMerge($$, $6); }
	|	alt_if_stmt_without_else T_ELSEIF '(' expr ')' ':' inner_statement_list      { $$ = observers.StatementListAppend($1, $4);
	                                                                                   $$ = observers.StatementListMerge($$, $7); }
;

alt_if_stmt:
		alt_if_stmt_without_else T_ENDIF ';'                                          { $$ = $1; }
	|	alt_if_stmt_without_else T_ELSE ':' inner_statement_list T_ENDIF ';'          { $$ = observers.StatementListMerge($1, $4); }
;

parameter_list:
		non_empty_parameter_list      { $$ = $1; }
	|	/* empty */	                  { $$ = observers.ParametersListNil(); }
;

non_empty_parameter_list:
		parameter                                  { $$ = $1; }
	|	non_empty_parameter_list ',' parameter     { $$ = observers.ParametersListAppend($1, $3); }
;

parameter:
		optional_type is_reference is_variadic T_VARIABLE              { $$ = observers.ParametersListAppend(observers.ParametersListNil(),
		                                                                        observers.ParametersListCreate($1, $4, $2, false, $3)); }
	|	optional_type is_reference is_variadic T_VARIABLE '=' expr     { $$ = observers.ParametersListAppend(observers.ParametersListNil(),
	                                                                            observers.ParametersListCreate($1, $4, $2, true, $3)); }    			
;


optional_type:
		/* empty */	     { $$ = observers.TypeHintMakeNil(); }
	|	type_expr		 { $$ = $1; }
;

type_expr:
		type             { $$ = observers.TypeHintMake($1, false); }
	| 	'?' type         { $$ = observers.TypeHintMake($2, true); }

type:
		T_ARRAY		     { $$ = observers.QualifiedNameCreate($1); }
	|	T_CALLABLE	     { $$ = observers.QualifiedNameCreate($1); }
	|	name		     { $$ = $1; }
;

return_type:
		/* empty */	    { $$ = observers.TypeHintMakeNil(); }
	|	':' type_expr	    { $$ = $2; }
;

argument_list:
		'(' ')'	                             { $$ = observers.StatementListNil(); }
	|	'(' non_empty_argument_list ')'      { $$ = $2; }
;

non_empty_argument_list:
		argument                                  { $$ = observers.StatementListMakeAndAppend($1); }     
	|	non_empty_argument_list ',' argument      { $$ = observers.StatementListAppend($1, $3); }     
;

argument:
		expr			      { $$ = $1; }    
	|	T_ELLIPSIS expr	      { $$ = $2; $$->IsUnpack = true; }   
;

global_var_list:
		global_var_list ',' global_var       { $$ = observers.StatementListAppend($1, $3); }
	|	global_var                           { $$ = observers.StatementListMakeAndAppend($1); }
;

global_var:
	simple_variable     { $$ = $1; }
;

static_var_list:
		static_var_list ',' static_var     { $$ = observers.StatementListAppend($1, $3); }
	|	static_var                         { $$ = observers.StatementListMakeAndAppend($1); }
;

static_var:
		T_VARIABLE			        { $$ = observers.ExpressionMakeStaticVariable($1); }       
	|	T_VARIABLE '=' expr	        { $$ = observers.ExpressionMakeStaticVariable($1); }       
;

class_statement_list:
		class_statement_list class_statement     { $$ = observers.StatementListMerge($1, $2); }
	|	/* empty */                              { $$ = observers.StatementListNil(); }
;


class_statement:
		variable_modifiers property_list ';'                    { $$ = observers.ClassMemberSymbolMakeVariables($2, $1); }
	|	method_modifiers T_CONST class_const_list ';'           { $$ = observers.ClassMemberSymbolSetModifiers($3, $1); }
	|	T_USE name_list trait_adaptations                       { $$ = observers.TraitUseMake($2, $3); }
	|	method_modifiers function returns_ref identifier        
	    backup_doc_comment '(' parameter_list ')'               { observers.SetCurrentMemberName($4); }
		return_type backup_fn_flags method_body backup_fn_flags { $$ = observers.ClassMemberSymbolMakeMethod($4, $1, $3, $2, $7, $12, $10);
																	observers.SetCurrentMemberName(NULL);
															      }
;

name_list:
		name                       { $$ = observers.NamespaceNameListMake($1); }
	|	name_list ',' name         { $$ = observers.NamespaceNameListAppend($1, $3); } 
;

trait_adaptations:
		';'								   { $$ = observers.StatementListNil(); }  
	|	'{' '}'							   { $$ = observers.StatementListNil(); } 
	|	'{' trait_adaptation_list '}'     { $$ = $2; }
;

trait_adaptation_list:
		trait_adaptation                            { $$ = $1; }
	|	trait_adaptation_list trait_adaptation      { $$ = observers.StatementListMerge($1, $2); }
;

trait_adaptation:
		trait_precedence ';'	       { $$ = observers.StatementListMakeAndAppend($1); }
	|	trait_alias ';'			       { $$ = observers.StatementListMakeAndAppend($1); }
;

trait_precedence:
	absolute_trait_method_reference T_INSTEADOF name_list             { $$ = observers.TraitInsteadOfMake($1, observers.TraitInsteadOfMakeReferenceList($3)); }
		
;

trait_alias:
		trait_method_reference T_AS T_STRING                         	{ $$ = observers.TraitAliasMake($1, observers.ClassMemberSymbolMake($3), $3); }
	|	trait_method_reference T_AS reserved_non_modifiers           	{ $$ = observers.TraitAliasMake($1, observers.ClassMemberSymbolMake($3), $3); }
	|	trait_method_reference T_AS member_modifier identifier       	{ $$ = observers.TraitAliasMake($1, observers.ClassMemberSymbolMake($3), $4); }
	|	trait_method_reference T_AS member_modifier                  	{ $$ = observers.TraitAliasMake($1, observers.ClassMemberSymbolMake($3)); }
;

trait_method_reference:
		identifier                            { $$ = observers.TraitAliasMakeMethodReferenceList($1); }
	|	absolute_trait_method_reference       { $$ = $1; }
;

absolute_trait_method_reference:
	name T_PAAMAYIM_NEKUDOTAYIM identifier    { $$ = observers.TraitAliasMakeMethodReferenceList($1, $3); }
;

method_body:
		';' /* abstract method */      { $$ = observers.ClassMemberMakeBody(observers.StatementListNil(), $1, $1); }
	|	'{' inner_statement_list '}'   { $$ = observers.ClassMemberMakeBody($2, $1, $3); }
;

variable_modifiers:
		non_empty_member_modifiers		{ $$ = $1; }
	|	T_VAR							{ $$ = observers.ClassMemberSymbolMakeAsPublicVariable($1); }
;

method_modifiers:
		/* empty */						{ $$ = observers.ClassMemberSymbolMake(NULL); }
	|	non_empty_member_modifiers     { $$ = $1; }
			
;

non_empty_member_modifiers:
		member_modifier			                              { $$ = observers.ClassMemberSymbolMake($1); }
	|	non_empty_member_modifiers member_modifier           { $$ = observers.ClassMemberSymbolSetModifier($1, $2); }
			
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
		property_list ',' property      { $$ = observers.StatementListAppend($1, $3); }
	|	property                        { $$ = observers.StatementListMakeAndAppend($1); }
;

property:
		T_VARIABLE backup_doc_comment                 { $$ = observers.ClassMemberSymbolMakeAsPublicVariable($1); }
	|	T_VARIABLE '=' expr backup_doc_comment        { $$ = observers.ClassMemberSymbolMakeAsPublicVariable($1); }
			
;

class_const_list:
		class_const_list ',' class_const_decl        { $$ = observers.StatementListMerge($1, $3); }
	|	class_const_decl                             { $$ = $1; }
;

class_const_decl:
	identifier '=' expr backup_doc_comment  { $$ = observers.ClassMemberSymbolMakeVariable($1, $1, true, analyzer.GetLineNumber()); }
;

const_decl:
	T_STRING '=' expr backup_doc_comment   { $$ = observers.ConstantMake($1, analyzer.GetLineNumber()); }
;

echo_expr_list:
		echo_expr_list ',' echo_expr   { $$ = observers.StatementListAppend($1, $3); }
	|	echo_expr                      { $$ = observers.StatementListMakeAndAppend($1); }
;

echo_expr:
	expr     { $$ = $1; }
;

for_exprs:
		/* empty */			           { $$ = observers.StatementListNil(); }
	|	non_empty_for_exprs	           { $$ = $1; }
;

non_empty_for_exprs:
		non_empty_for_exprs ',' expr         { $$ = observers.StatementListAppend($1, $3); }
	|	expr                                 { $$ = observers.StatementListMakeAndAppend($1); }
;

anonymous_class:
        T_CLASS  ctor_arguments
		extends_from implements_list backup_doc_comment '{'    
		class_statement_list '}'                               { $$ = observers.ExpressionMakeAnonymousClass($2, $3, $4, $7); }
;

new_expr:
		T_NEW class_name_reference ctor_arguments            { $$ = observers.ExpressionMakeNewInstanceCall($2, $3); }
	|	T_NEW anonymous_class                                { $$ = $2; }
			
;

expr_without_variable:
		T_LIST '(' array_pair_list ')' '=' expr                                               { $$ = observers.ExpressionMakeAssignmentList($3, $6); }
	|	'[' array_pair_list ']' '=' expr                                                      { $$ = observers.ExpressionMakeAssignmentList($2, $5); }
	|	variable '=' expr                                                                     { $$ = observers.AssignmentExpressionFromExpressionFound($1, $3); }
	|	variable '=' '&' variable                                                             { $$ = observers.AssignmentExpressionFromVariableFound($1, $4); }
	|	T_CLONE expr                                                                          { $$ = $2; }
	|	variable T_PLUS_EQUAL expr                                                            { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_MINUS_EQUAL expr                                                           { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_MUL_EQUAL expr                                                             { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_POW_EQUAL expr                                                             { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_DIV_EQUAL expr                                                             { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_CONCAT_EQUAL expr                                                          { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_MOD_EQUAL expr                                                             { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_AND_EQUAL expr                                                             { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_OR_EQUAL expr                                                              { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_XOR_EQUAL expr                                                             { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_SL_EQUAL expr                                                              { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_SR_EQUAL expr                                                              { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_INC                                                                        { $$ = observers.ExpressionUnaryVariableOperation($2->Token, $1); }
	|	T_INC variable                                                                        { $$ = observers.ExpressionUnaryVariableOperation($1->Token, $2); }
	|	variable T_DEC                                                                        { $$ = observers.ExpressionUnaryVariableOperation($2->Token, $1); }
	|	T_DEC variable                                                                        { $$ = observers.ExpressionUnaryVariableOperation($1->Token, $2); }
	|	expr T_BOOLEAN_OR expr                                                                { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_BOOLEAN_AND expr                                                               { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_LOGICAL_OR expr                                                                { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_LOGICAL_AND expr                                                               { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_LOGICAL_XOR expr                                                               { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '|' expr	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '&' expr	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '^' expr	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '.' expr 	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '+' expr 	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '-' expr 	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '*' expr	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_POW expr	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '/' expr	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '%' expr 	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	| 	expr T_SL expr	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_SR expr	                                                                      { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	'+' expr %prec T_INC                                                                  { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	'-' expr %prec T_INC                                                                  { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	'!' expr                                                                              { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	'~' expr                                                                              { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	expr T_IS_IDENTICAL expr                                                              { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_IS_NOT_IDENTICAL expr                                                          { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_IS_EQUAL expr                                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_IS_NOT_EQUAL expr                                                              { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '<' expr                                                                         { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_IS_SMALLER_OR_EQUAL expr                                                       { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '>' expr                                                                         { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_IS_GREATER_OR_EQUAL expr                                                       { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_SPACESHIP expr                                                                 { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_INSTANCEOF class_name_reference                                                { $$ = observers.ExpressionInstanceOfOperation($1, $3); }
	|	'(' expr ')'                                                                          { $$ = $2; }
	|	new_expr                                                                              { $$ = $1; }
	|	expr '?' expr ':' expr                                                                { $$ = observers.ExpressionTernaryOperation($1, $3, $5); }
	|	expr '?' ':' expr                                                                     { $$ = observers.ExpressionTernaryOperation($1, $4, NULL); }
	|	expr T_COALESCE expr                                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	internal_functions_in_yacc                                                            { $$ = $1; }
	|	T_INT_CAST expr		                                                                   { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_DOUBLE_CAST expr	                                                                   { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_STRING_CAST expr	                                                                   { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_ARRAY_CAST expr	                                                                   { $$ = observers.ExpressionMakeArray(observers.StatementListMakeAndAppend($2)); }
	|	T_OBJECT_CAST expr	                                                                   { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_BOOL_CAST expr	                                                                   { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_UNSET_CAST expr	                                                                   { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_EXIT exit_expr	                                                                   { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	'@' expr			                                                                   { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	scalar                                                                                { $$ = $1; } 
	|	'`' backticks_expr '`'                                                                { $$ = observers.ExpressionMakeScalar($2); /* results of backtick operator is a string */ }
	|	T_PRINT expr                                                                          { $$ = observers.ExpressionMakeScalar($2); }
	|	T_YIELD                                                                               { $$ = observers.ExpressionMakeScalar($1); }
	|	T_YIELD expr                                                                          { $$ = observers.ExpressionMakeScalar($2); }
	|	T_YIELD expr T_DOUBLE_ARROW expr                                                      { $$ = observers.ExpressionMakeScalar($2); /* TODO capture $4 */ }
	|	T_YIELD_FROM expr                                                                     { $$ = observers.ExpressionMakeScalar($2); }
	|	function returns_ref backup_doc_comment                                               
		'(' parameter_list ')'
		 lexical_vars return_type backup_fn_flags '{'                                        { observers.IncrementAnonymousFunctionCount(); }
		inner_statement_list '}'  backup_fn_flags                                            { $$ = observers.ExpressionMakeClosure($5, $7, $12, $10, $13, $8); 
																								   // end after we create the closure so that closure gets the correct scope
																								   // anonymous function count
																								   observers.EndAnonymousFunction(); 
																								 }
	|	T_STATIC function returns_ref backup_doc_comment                                      
		'(' parameter_list ')' lexical_vars
		return_type backup_fn_flags '{'                                                       { observers.IncrementAnonymousFunctionCount(); }
		inner_statement_list '}' backup_fn_flags                                              { $$ = observers.ExpressionMakeClosure($6, $8, $13, $11, $14, $9);  
																									// end after we create the closure so that closure gets the correct scope
																									// anonymous function count
																									observers.EndAnonymousFunction(); 
																								}
;

function:
	T_FUNCTION 
;

backup_doc_comment:
	/* empty */    { $$ = observers.SemanticValueNil(); }
;

backup_fn_flags:
	/* empty */    { $$ = observers.SemanticValueNil(); }
;

returns_ref:
		/* empty */	   { $$ = false; }
	|	'&'			   { $$ = true; }
;

lexical_vars:
		/* empty */                          { $$ = observers.StatementListNil(); }
	|	T_USE '(' lexical_var_list ')'       { $$ = $3; }
;

lexical_var_list:
		lexical_var_list ',' lexical_var      { $$ = observers.StatementListAppend($1, $3); }
	|	lexical_var                           { $$ = observers.StatementListMakeAndAppend($1); }
;

lexical_var:
		T_VARIABLE		    { $$ = observers.VariableStart($1); }
	|	'&' T_VARIABLE	    { $$ = observers.VariableStart($2, true); }
;

function_call:
		name argument_list                                                             { $$ = observers.VariableMakeFunctionCall($1,  $2, analyzer.GetLineNumber()); }
	|	class_name T_PAAMAYIM_NEKUDOTAYIM member_name argument_list                    { $$ = observers.VariableMakeStaticMethodCall($1, $3, $4, analyzer.GetLineNumber()); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM member_name argument_list           { $$ = observers.VariableMakeStaticMethodCall(observers.QualifiedNameNil(), $3, $4, analyzer.GetLineNumber()); }
	|	callable_expr argument_list                                                    { $$ = observers.VariableStartIndirectFunctionCall($1, $2); }
;

class_name:
		T_STATIC          { $$ = observers.QualifiedNameCreate($1); }
	|	name              { $$ = $1; }
;

class_name_reference:
		class_name		       { $$ = $1; }
	|	new_variable	       { $$ = observers.QualifiedNameNil(); }
;

exit_expr:
		/* empty */				     { $$ = observers.ExpressionNil(); }
	|	'(' optional_expr ')'	     { $$ = $2; }
;

backticks_expr:
		/* empty */                    { $$ = observers.ExpressionNil(); }
	|	T_ENCAPSED_AND_WHITESPACE      { $$ = observers.ExpressionMakeScalar($1); }
	|	encaps_list                    { $$ = observers.ExpressionMakeScalar($1); }
;

ctor_arguments:
		/* empty */	                { $$ = observers.StatementListNil(); }
	|	argument_list               { $$ = $1; }
;

dereferencable_scalar:
		T_ARRAY '(' array_pair_list ')'	{ $$ = observers.ExpressionMakeArray($3); }
	|	'[' array_pair_list ']'			{ $$ = observers.ExpressionMakeArray($2); }
	|	T_CONSTANT_ENCAPSED_STRING		    { $$ = observers.ExpressionMakeScalar($1); }
;

scalar:
		T_LNUMBER 	                                                    { $$ = observers.ExpressionMakeScalar($1); }
	|	T_DNUMBER 	                                                    { $$ = observers.ExpressionMakeScalar($1); }
	|	T_LINE 		                                                    { $$ = observers.ExpressionMakeScalar($1); }
	|	T_FILE 		                                                    { $$ = observers.ExpressionMakeScalar($1); }
	|	T_DIR   	                                                    { $$ = observers.ExpressionMakeScalar($1); }
	|	T_TRAIT_C	                                                    { $$ = observers.ExpressionMakeScalar($1); }
	|	T_METHOD_C	                                                    { $$ = observers.ExpressionMakeScalar($1); }
	|	T_FUNC_C	                                                    { $$ = observers.ExpressionMakeScalar($1); }
	|	T_NS_C		                                                    { $$ = observers.ExpressionMakeScalar($1); }
	|	T_CLASS_C	                                                    { $$ = observers.ExpressionMakeScalar($1); }
	|	T_START_HEREDOC T_ENCAPSED_AND_WHITESPACE T_END_HEREDOC         { $$ = observers.ExpressionMakeScalar($2); }
	|	T_START_HEREDOC T_END_HEREDOC                                   { $$ = observers.ExpressionMakeScalar($1); }
	|	'"' encaps_list '"' 	                                         { $$ = observers.ExpressionMakeScalar($2); }
	|	T_START_HEREDOC encaps_list T_END_HEREDOC                       { $$ = observers.ExpressionMakeScalar($2); }
	|	dereferencable_scalar	                                         { $$ = $1; }
	|	constant			                                            { $$ = $1; }
;

constant:
		name                                                        { $$ = observers.ExpressionMakeScalarFromConstant($1); }
	|	class_name T_PAAMAYIM_NEKUDOTAYIM identifier                { $$ = observers.VariableStartStaticMember($1, observers.VariableStart($3)); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM identifier       { $$ = observers.VariableStartStaticMember(observers.QualifiedNameNil(), observers.VariableStart($3)); }
;

expr:
		variable					 { $$ = $1; }
	|	expr_without_variable		 { $$ = $1; }
;

optional_expr:
		/* empty */	 { $$ = observers.ExpressionNil(); }
	|	expr		 { $$ = $1; }
;

variable_class_name:
	dereferencable            { $$ = $1; }
;

dereferencable:
		variable				           { $$ = $1; }
	|	'(' expr ')'			           { $$ = observers.VariableMakeFromExpression($2); }
	|	dereferencable_scalar	           { $$ = observers.VariableMakeFromExpression($1); }
;

callable_expr:
		callable_variable		          { $$ = $1; }
	|	'(' expr ')'			          { $$ = $2; }
	|	dereferencable_scalar	          { $$ = $1; }
;

callable_variable:
		simple_variable                                                       { $$ = $1; }
	|	dereferencable '[' optional_expr ']'                                  { $$ = observers.VariableAppendArrayOffset($1, $3); }
	|	constant '[' optional_expr ']'                                        { $$ = observers.VariableMakeFromExpression(observers.ExpressionAddOffset($1, $3)); }
	|	dereferencable '{' expr '}'                                           { $$ = observers.VariableAppendArrayOffset($1, $3); }
	|	dereferencable T_OBJECT_OPERATOR property_name argument_list          { $$ =  observers.VariableAppendToChain(
																							$1,
																						  observers.VariableAppendToChain($3, observers.VariableMakeAndAppendFunctionCall($4, true), $2)
																						);
																				}
	|	function_call                                                         { $$ = $1; }
;

variable:
		callable_variable                                       { $$ = $1; }
	|	static_member                                           { $$ = $1; }
	|	dereferencable T_OBJECT_OPERATOR property_name          { $$ = observers.VariableMake($1, $3, NULL, NULL); }
;

simple_variable:
		T_VARIABLE			       { $$ = observers.VariableStart($1); }
	|	'$' '{' expr '}'	       { $$ = observers.VariableNil(); /* TODO propagate expr to AST */ }
	|	'$' simple_variable	       { $$ = observers.VariableMakeIndirect($2); }
;

static_member:
		class_name T_PAAMAYIM_NEKUDOTAYIM simple_variable                     { $$ = observers.VariableStartStaticMember($1, $3); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM simple_variable            { $$ = observers.VariableAppendToChainStaticMember($1, $3); }
;

new_variable:
		simple_variable                                                    { $$ = $1; }
	|	new_variable '[' optional_expr ']'                                 { $$ = observers.VariableAppendArrayOffset($1, $3); }
	|	new_variable '{' expr '}'                                          { $$ = observers.VariableAppendArrayOffset($1, $3); }
	|	new_variable T_OBJECT_OPERATOR property_name                       { $$ = observers.VariableAppendToChain($1, $3); }
	|	class_name T_PAAMAYIM_NEKUDOTAYIM simple_variable                  { $$ = observers.VariableStartStaticMember($1, $3); }
	|	new_variable T_PAAMAYIM_NEKUDOTAYIM simple_variable                { $$ = observers.VariableAppendToChainStaticMember($1, $3); }
			
;

member_name:
		identifier                { $$ = observers.VariableStart($1); }
	|	'{' expr '}'	          { $$ = observers.VariableNil(); /* TODO propagate expr to AST */ }
	|	simple_variable	          { $$ = observers.VariableMakeIndirect($1); }
;

property_name:
		T_STRING                    { $$ = observers.VariableStart($1); }
	|	'{' expr '}'	            { $$ = observers.VariableNil(); /* TODO propagate expr to AST */ }
	|	simple_variable	            { $$ = observers.VariableMakeIndirect($1); }
;

array_pair_list:
		non_empty_array_pair_list  { $$ = $1; }
;

possible_array_pair:
		/* empty */ { $$ = NULL; }
	|	array_pair  { $$ = $1; }
;

non_empty_array_pair_list:
		non_empty_array_pair_list ',' possible_array_pair          { if ($3 == NULL) { $$ = $1; } else { $$ = observers.StatementListMerge($1, $3); } }
	|	possible_array_pair                                        { if ($1 == NULL) { $$ = observers.StatementListNil(); } else { $$ = $1; }  }
;

array_pair:
		expr T_DOUBLE_ARROW expr                                             { $$ = observers.ExpressionMakeArrayPair($1, $3); }
	|	expr                                                                 { $$ = observers.ExpressionMakeArrayPair(NULL, $1); }
	|	expr T_DOUBLE_ARROW '&' variable                                     { $$ = observers.ExpressionMakeArrayPair($1, $4); }
	|	'&' variable                                                         { $$ = observers.ExpressionMakeArrayPair(NULL, $2); }
	|	expr T_DOUBLE_ARROW T_LIST '(' array_pair_list ')'                   { $$ = observers.ExpressionMakeArrayPair($1, $5);}
	|	T_LIST '(' array_pair_list ')'                                       { $$ = observers.ExpressionMakeArrayPair(NULL, $3); }
;

encaps_list:
		encaps_list encaps_var                                 { $$ = $1; }
	|	encaps_list T_ENCAPSED_AND_WHITESPACE                  { $$ = $1; }
	|	encaps_var                                             { $$ = $1; }
	|	T_ENCAPSED_AND_WHITESPACE encaps_var                   { $$ = $2; }
			
;

encaps_var:
		T_VARIABLE                                                          { $$ = observers.ExpressionNil(); }
	|	T_VARIABLE '[' encaps_var_offset ']'                                { $$ = observers.ExpressionNil(); }
	|	T_VARIABLE T_OBJECT_OPERATOR T_STRING                               { $$ = observers.ExpressionNil(); }
	|	T_DOLLAR_OPEN_CURLY_BRACES expr '}'                                 { $$ = observers.ExpressionNil(); }
	|	T_DOLLAR_OPEN_CURLY_BRACES T_STRING_VARNAME '}'			          { $$ = observers.ExpressionNil(); }
	|	T_DOLLAR_OPEN_CURLY_BRACES T_STRING_VARNAME '[' expr ']' '}'        { $$ = observers.ExpressionNil(); }
	|	T_CURLY_OPEN variable '}'                                           { $$ = observers.ExpressionNil(); }
;

encaps_var_offset:
		T_STRING		                          { $$ = observers.ExpressionNil(); }
	|	T_NUM_STRING	                          { $$ = observers.ExpressionNil(); }
	|	'-' T_NUM_STRING	                      { $$ = observers.ExpressionNil(); }
	|	T_VARIABLE		                          { $$ = observers.ExpressionNil(); }
;


internal_functions_in_yacc:
		T_ISSET '(' isset_variables ')'                { $$ = $3; }
	|	T_EMPTY '(' expr ')'                           { $$ = observers.ExpressionNil(); }
	|	T_INCLUDE expr                                 { $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
	|	T_INCLUDE_ONCE expr                            { $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
	|	T_EVAL '(' expr ')'                            { $$ = observers.ExpressionEval($3); }
	|	T_REQUIRE expr                                 { $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
	|	T_REQUIRE_ONCE expr			                    { $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
;

isset_variables:
		isset_variable                           { $$ = observers.ExpressionIsset($1); }
	|	isset_variables ',' isset_variable		  { $$ = observers.ExpressionIssetMerge((pelet::IssetExpressionClass*)$1, $3); }
;

isset_variable:
		expr                    { $$ = $1; }
;

%%
