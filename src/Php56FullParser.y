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
#define php56lex pelet::FullLex

// so that both bison parses call the same error function
#define php56error pelet::FullGrammarError

%}

%parse-param { pelet::LexicalAnalyzerClass &analyzer }
%parse-param { pelet::FullParserObserverClass &observers }
%lex-param  { pelet::LexicalAnalyzerClass &analyzer }
%lex-param { pelet::FullParserBufferClass &observers }

%define api.pure
%expect 3
%error-verbose
%name-prefix "php56"
%debug

%left T_INCLUDE T_INCLUDE_ONCE T_EVAL T_REQUIRE T_REQUIRE_ONCE
%left <semanticValue> ','
%left T_LOGICAL_OR
%left T_LOGICAL_XOR
%left T_LOGICAL_AND
%right T_PRINT
%right T_YIELD
%right T_POW
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
%nonassoc <semanticValue> '>' 
%nonassoc T_IS_SMALLER_OR_EQUAL T_IS_GREATER_OR_EQUAL
%nonassoc T_POW_EQUAL
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
%right T_STATIC T_ABSTRACT T_FINAL T_PRIVATE T_PROTECTED T_PUBLIC
%left T_ENDIF

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

%token <semanticValue> '{' '}' '(' ')' ';' '`'  '$' '"'

%type <statementList> top_statement_list
%type <qualifiedName> namespace_name
%type <statementList> top_statement
%type <statementList> use_declarations
%type <statementList> use_declaration
%type <statementList> use_function_declarations
%type <functionImport> use_function_declaration
%type <statementList> use_const_declarations
%type <constantImport> use_const_declaration
%type <statementList> constant_declaration
%type <statementList> inner_statement_list
%type <statementList> inner_statement
%type <statementList> statement
%type <statementList> unticked_statement
%type <statementList> catch_statement
%type <statementList> finally_statement
%type <statementList> additional_catches
%type <statementList> non_empty_additional_catches
%type <statementList> additional_catch
%type <statementList> unset_variables
%type <variable> unset_variable
%type <statementList> function_declaration_statement
%type <statementList> class_declaration_statement
%type <isMethod> is_reference
%type <isVariadic> is_variadic
%type <statementList> unticked_function_declaration_statement
%type <statementList> unticked_class_declaration_statement
%type <classSymbol> class_entry_type
%type <classSymbol> extends_from
%type <classSymbol> interface_entry
%type <classSymbol> interface_extends_list
%type <classSymbol> interface_list
%type <classSymbol> implements_list
%type <expression> foreach_optional_arg
%type <expression> foreach_variable
%type <statementList> for_statement
%type <statementList> foreach_statement
%type <statementList> declare_statement
%type <statementList> declare_list
%type <statementList> switch_case_list
%type <statementList> case_list
%type <semanticValue> case_separator
%type <statementList> while_statement
%type <statementList> elseif_list
%type <statementList> new_elseif_list
%type <statementList> else_single
%type <statementList> new_else_single
%type <parametersList> parameter_list
%type <parametersList> non_empty_parameter_list
%type <parametersList> parameter
%type <qualifiedName> optional_class_type
%type <statementList> function_call_parameter_list
%type <statementList> non_empty_function_call_parameter_list
%type <statementList> function_call_parameter
%type <statementList> global_var_list
%type <expression> global_var
%type <statementList> static_var_list
%type <statementList> class_statement_list
%type <statementList> class_statement
%type <statementList> trait_use_statement
%type <traitUse> trait_list
%type <statementList> trait_adaptations
%type <statementList> trait_adaptation_list
%type <statementList> non_empty_trait_adaptation_list
%type <statementList> trait_adaptation_statement
%type <traitInsteadOf> trait_precedence
%type <traitInsteadOf> trait_reference_list
%type <traitAlias> trait_method_reference
%type <traitAlias> trait_method_reference_fully_qualified
%type <traitAlias> trait_alias
%type <classMemberSymbol> trait_modifiers
%type <classMemberSymbol> method_body
%type <classMemberSymbol> variable_modifiers
%type <classMemberSymbol> method_modifiers
%type <classMemberSymbol> non_empty_member_modifiers
%type <semanticValue> member_modifier
%type <statementList> class_variable_declaration
%type <statementList> class_constant_declaration
%type <statementList> echo_expr_list
%type <statementList> for_expr
%type <statementList> non_empty_for_expr
%type <variable> chaining_method_or_property
%type <variable> chaining_dereference
%type <variable> chaining_instance_call
%type <variable> instance_call
%type <expression> new_expr
%type <expression> expr_without_variable
%type <expression> yield_expr
%type <expression> combined_scalar_offset
%type <expression> combined_scalar
%type <semanticValue> function
%type <statementList> lexical_vars
%type <statementList> lexical_var_list
%type <variable> function_call
%type <qualifiedName> class_name
%type <qualifiedName> fully_qualified_class_name
%type <qualifiedName> class_name_reference
%type <qualifiedName> dynamic_class_name_reference
%type <semanticValue> dynamic_class_name_variable_properties
%type <semanticValue> dynamic_class_name_variable_property
%type <expression> exit_expr
%type <expression> backticks_expr
%type <statementList> ctor_arguments
%type <expression> common_scalar
%type <expression> static_class_constant
%type <expression> static_scalar
%type <expression> static_scalar_value
%type <expression> static_operation
%type <expression> general_constant
%type <expression> scalar
%type <semanticValue> static_array_pair_list
%type <isComma> possible_comma
%type <semanticValue> non_empty_static_array_pair_list
%type <expression> expr
%type <expression> parenthesis_expr
%type <variable> r_variable
%type <variable> w_variable
%type <variable> rw_variable
%type <variable> variable
%type <variable> variable_properties
%type <variable> variable_property
%type <variable> array_method_dereference
%type <variable> method
%type <variable> method_or_not
%type <variable> variable_without_objects
%type <variable> static_member
%type <semanticValue> variable_class_name
%type <variable> array_function_dereference
%type <variable> base_variable_with_function_calls
%type <variable> base_variable
%type <variable> reference_variable
%type <variable> compound_variable
%type <expression> dim_offset
%type <variable> object_property
%type <variable> object_dim_list
%type <variable> variable_name
%type <semanticValue> simple_indirect_reference
%type <statementList> assignment_list
%type <statementList> assignment_list_element
%type <statementList> array_pair_list
%type <statementList> non_empty_array_pair_list
%type <expression> encaps_list
%type <expression> encaps_var
%type <expression> encaps_var_offset
%type <expression> internal_functions_in_yacc
%type <expression> isset_variables
%type <expression> isset_variable
%type <expression> class_constant
%type <expression> static_class_name_scalar
%type <expression> class_name_scalar

%% /* Rules */

start:
	top_statement_list	                              { observers.MakeAst($1); }
;

top_statement_list:
		top_statement_list   top_statement                 { $$ = observers.StatementListMerge($1, $2); }
	|	/* empty */                                        { $$ = observers.StatementListMake(); } 
;

namespace_name:
		T_STRING                                           { $$ = observers.NamespaceNameMake($1); }
	|	namespace_name T_NS_SEPARATOR T_STRING             { $$ = observers.NamespaceNameAppend($1, $3); }
;

top_statement:
		statement						                          { $$ = $1; }
	|	function_declaration_statement	                          { $$ = $1; }
	|	class_declaration_statement		                      { $$ = $1; }
	|	T_HALT_COMPILER '(' ')' ';'		                      { $$ = observers.StatementListMake(); }
	|	T_NAMESPACE namespace_name ';'	                          { $$ = observers.NamespaceDeclarationFound($2, $1); observers.SetDeclaredNamespace($2); }
	|	T_NAMESPACE namespace_name '{'	                          { observers.SetDeclaredNamespace($2); }
		top_statement_list '}'		                              { $$ = observers.NamespaceDeclarationFound($2, $1); $$ = observers.StatementListMerge($$, $5); }
	|	T_NAMESPACE '{'					                          { observers.SetDeclaredNamespace(NULL); }
		top_statement_list '}'			                          {  $$ = observers.NamespaceGlobalDeclarationFound($1); $$ = observers.StatementListMerge($$, $4); }
	|	T_USE use_declarations ';'                               { $$ = observers.NamespaceUseSetStartingPos($2, $1); }
	|	T_USE T_FUNCTION use_function_declarations ';'           { $$ = observers.NamespaceUseSetStartingPos($3, $1); }
	|	T_USE T_CONST use_const_declarations ';'                 { $$ = observers.NamespaceUseSetStartingPos($3, $1); }
	|	constant_declaration ';'		                          { $$ = $1; }
;

use_declarations:
		use_declarations ',' use_declaration                { $$ = observers.StatementListMerge($1, $3); }
	|	use_declaration                                     { $$ = $1; }
;

use_declaration:
		namespace_name 			                               { $$ = observers.NamespaceUse($1); }
	|	namespace_name T_AS T_STRING	                       { $$ = observers.NamespaceUseAlias($1, $3); }
	|	T_NS_SEPARATOR namespace_name                         { $$ = observers.NamespaceUseAbsolute($2); }
	|	T_NS_SEPARATOR namespace_name T_AS T_STRING           { $$ = observers.NamespaceUseAbsoluteAlias($2, $4); }
;

use_function_declarations:
		use_function_declarations ',' use_function_declaration     { $$ = observers.StatementListAppend($1, $3); }
	|	use_function_declaration                                   { $$ = observers.StatementListMakeAndAppend($1); }
;

use_function_declaration:
		namespace_name 			                                    { $$ = observers.FunctionImportMake($1, NULL); }
	|	namespace_name T_AS T_STRING	                            { $$ = observers.FunctionImportMake($1, $3); }
	|	T_NS_SEPARATOR namespace_name                              { $$ = observers.FunctionImportAbsoluteMake($2, NULL); }
	|	T_NS_SEPARATOR namespace_name T_AS T_STRING                { $$ = observers.FunctionImportAbsoluteMake($2, $4); }
;

use_const_declarations:
		use_const_declarations ',' use_const_declaration           { $$ = observers.StatementListAppend($1, $3); }
	|	use_const_declaration                                      { $$ = observers.StatementListMakeAndAppend($1); }
;

use_const_declaration:
		namespace_name 			                                    { $$ = observers.ConstantImportMake($1, NULL); }
	|	namespace_name T_AS T_STRING	                            { $$ = observers.ConstantImportMake($1, $3); }
	|	T_NS_SEPARATOR namespace_name                              { $$ = observers.ConstantImportAbsoluteMake($2, NULL); }
	|	T_NS_SEPARATOR namespace_name T_AS T_STRING                { $$ = observers.ConstantImportAbsoluteMake($2, $4); }
;

constant_declaration:
		constant_declaration ',' T_STRING '=' static_scalar	   { $$ = observers.StatementListMerge($1, observers.ConstantMake($3, analyzer.GetLineNumber())); }
	|	T_CONST T_STRING '=' static_scalar                       { $$ = observers.ConstantMake($2, analyzer.GetLineNumber()); }
;

inner_statement_list:
		inner_statement_list   inner_statement                  { $$ = observers.StatementListMerge($1, $2); }
	|	/* empty */                                             { $$ = observers.StatementListMake(); }
;


inner_statement:
		statement
	|	function_declaration_statement
	|	class_declaration_statement
	|	T_HALT_COMPILER '(' ')' ';'                         { $$ = observers.StatementListNil(); }
;


statement:
		unticked_statement 
	|	T_STRING ':'                                       { $$ = observers.StatementListNil(); }
;

unticked_statement:
		'{' inner_statement_list '}'                                                                            { $$ = $2; }
	|	T_IF parenthesis_expr  statement  elseif_list else_single                                               { $$ = observers.StatementListMakeAndAppend($2);
                                                                                                                    $$ = observers.StatementListMerge($$, $3); 
                                                                                                                    $$ = observers.StatementListMerge($$, $4);
                                                                                                                    $$ = observers.StatementListMerge($$, $5); }
	|	T_IF parenthesis_expr ':'  inner_statement_list  new_elseif_list new_else_single T_ENDIF ';'          { $$ = observers.StatementListMakeAndAppend($2);
																													   $$ = observers.StatementListMerge($$, $4);
																													   $$ = observers.StatementListMerge($$, $5);
																													   $$ = observers.StatementListMerge($$, $6); }
	|	T_WHILE  parenthesis_expr  while_statement                                                            { $$ = observers.StatementListMakeAndAppend($2);
																										               $$ = observers.StatementListMerge($$, $3); }
	|	T_DO  statement T_WHILE  parenthesis_expr ';'                                                         { $$ = observers.StatementListAppend($2, $4); }
	|	T_FOR
			'('
				for_expr
			';' 
				for_expr
			';' 
				for_expr
			')' 
			for_statement                                                                                     { $$ = observers.StatementListMerge($3, $5); 
																												   $$ = observers.StatementListMerge($$, $7); 
																												   $$ = observers.StatementListMerge($$, $9); 
																											     }
	|	T_SWITCH parenthesis_expr	 switch_case_list                                                          { $$ = observers.StatementListMakeAndAppend($2);
																												   $$ = observers.StatementListMerge($$, $3);
																												 }
	|	T_BREAK ';'				                                                                               { $$ = observers.StatementListNil(); };
	|	T_BREAK expr ';'		                                                                               { $$ = observers.StatementListMakeAndAppend($2); };
	|	T_CONTINUE ';'			                                                                               { $$ = observers.StatementListNil(); };
	|	T_CONTINUE expr ';'		                                                                               { $$ = observers.StatementListMakeAndAppend($2); };
	|	T_RETURN ';'						                                                                   { $$ = observers.StatementListNil(); };
	|	T_RETURN expr_without_variable ';'	                                                                   { $$ = observers.StatementListMakeAndAppend($2); };
	|	T_RETURN variable ';'				                                                                   { $$ = observers.StatementListMakeAndAppend($2); };
	|	yield_expr ';'                                                                                        { $$ = observers.StatementListMakeAndAppend($1); };
	|	T_GLOBAL global_var_list ';'                                                                          { $$ = observers.StaticVariablesStatementMake($2); }
	|	T_STATIC static_var_list ';'                                                                          { $$ = observers.StaticVariablesStatementMake($2); }
	|	T_ECHO echo_expr_list ';'                                                                             { $$ = $2; }
	|	T_INLINE_HTML			                                                                               { $$ = observers.StatementListNil(); }
	|	expr ';'				                                                                               { $$ = observers.StatementListMakeAndAppend($1); }
	|	T_UNSET '(' unset_variables ')' ';'                                                                   { $$ = observers.StatementListNil(); }
	|	T_FOREACH '(' variable T_AS
		foreach_variable foreach_optional_arg ')' 
		foreach_statement                                                                                      { $$ = observers.StatementListMake();
																													   $$ = observers.StatementListAppend($$, $3);
																													   $$ = observers.StatementListAppend($$, $5);
																													   $$ = observers.StatementListAppend($$, $6);
																													   $$ = observers.StatementListMerge($$, $8); }
	|	T_FOREACH '(' expr_without_variable T_AS
		foreach_variable foreach_optional_arg ')' 
		foreach_statement                                                                                     { $$ = observers.StatementListMake();
																													  $$ = observers.StatementListAppend($$, $3);
																													  $$ = observers.StatementListAppend($$, $5);
																													  $$ = observers.StatementListAppend($$, $6);
																													  $$ = observers.StatementListMerge($$, $8); }
	|	T_DECLARE  '(' declare_list ')' declare_statement                                                     { $$ = observers.StatementListMakeAndAppend(observers.DeclareDirectiveMake($3, $5)); }
	|	';'		/* empty statement */                                                                         { $$ = observers.StatementListNil(); }
	|	T_TRY  '{' inner_statement_list '}'
		catch_statement 
		finally_statement                                                                                     { $$ = observers.StatementListMake();
																													 $$ = observers.StatementListMerge($$, $3);
																									                 $$ = observers.StatementListMerge($$, $5);
																													 $$ = observers.StatementListMerge($$, $6); 
																												 }
	|	T_THROW expr ';'                                                                                      { $$ = observers.StatementListMakeAndAppend($2); }
	|	T_GOTO T_STRING ';'                                                                                   { $$ = observers.StatementListNil(); }
;

catch_statement:
		/* empty */                                                                                     { $$ = observers.StatementListMake(); }
	|	T_CATCH '('  
		fully_qualified_class_name 
		T_VARIABLE ')' 
		'{' inner_statement_list '}' 
	additional_catches                                                                                  { $$ = observers.StatementListMake();
																											 $$ = observers.StatementListAppend($$,
																											   observers.AssignmentExpressionFromNewFound(
																											   observers.VariableStart($4), 
																											   $3,
																											   NULL));
																											 $$ = observers.StatementListMerge($$, $7);
																											 $$ = observers.StatementListMerge($$, $9); }

finally_statement:
					/* empty */                                                                        { $$ = observers.StatementListNil(); }
	|	T_FINALLY  '{' inner_statement_list '}'                                                        { $$ = $3; }
;

additional_catches:
		non_empty_additional_catches                                                                   { $$ = $1; }
	|	/* empty */                                                                                    { $$ = observers.StatementListNil(); }
;

non_empty_additional_catches:
		additional_catch                                                                            { $$ = $1; }
	|	non_empty_additional_catches additional_catch                                               { observers.StatementListMerge($1, $2); $$ = $1;}
;

additional_catch:
	T_CATCH '(' fully_qualified_class_name  T_VARIABLE ')'  '{' inner_statement_list '}'                      { $$ = observers.StatementListMakeAndAppend(
																														observers.AssignmentExpressionFromNewFound(
																													 observers.VariableStart($4),
																													 $3,
																													NULL));
																												   observers.StatementListMerge($$, $7);
																												}
;

unset_variables:
		unset_variable                                                   { $$ = observers.StatementListNil(); }
	|	unset_variables ',' unset_variable                               { $$ = $1; }
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
		/* empty */	                                { $$ = false; }
	|	'&'			                                { $$ = true; }
;

is_variadic:
		/* empty */                                  { $$ = false; }
	|	T_ELLIPSIS                                   { $$ = true; }
;

unticked_function_declaration_statement:
		function is_reference T_STRING 
		'(' parameter_list ')'                             { observers.SetCurrentMemberName($3); }
		'{' inner_statement_list '}'                       { $$ = observers.ClassMemberSymbolMakeFunction($3, $2, $1, $5, $9, $8, $10);
											                  observers.SetCurrentMemberName(NULL);
															}
;

unticked_class_declaration_statement:
		class_entry_type T_STRING
		extends_from implements_list                   { observers.SetCurrentClassName($2); }	
		'{' class_statement_list '}'                   { $$ = observers.ClassSymbolMake($2, $1, $3, $4, $8);
														  observers.DeclareAssignedPropertiesFromAssignments($7);
														  /*
														  * parse out property and method PHP docs
														  */
														  pelet::ClassSymbolClass* clazz = (pelet::ClassSymbolClass*) $$->At(0);
														  observers.CreateMagicMethodsAndProperties($$, clazz);
														  observers.StatementListMerge($$, $7);
														  observers.SetCurrentClassName(NULL);  
													   }
	|	interface_entry T_STRING                     
		interface_extends_list                       { observers.SetCurrentClassName($2); }	
		'{' class_statement_list '}'                 { $$ = observers.ClassSymbolMake($2, $1, NULL, $3, $7);
										                   	  observers.StatementListMerge($$, $6); 
										                   	  observers.SetCurrentClassName(NULL);    
										              }     	
;


class_entry_type:
		T_CLASS			               { $$ = observers.ClassSymbolStart($1, false, false, false, false); }
	|	T_ABSTRACT T_CLASS            { $$ = observers.ClassSymbolStart($1, true, false, false, false); }
	|	T_TRAIT                       { $$ = observers.ClassSymbolStart($1, false, false, false, true); }
	|	T_FINAL T_CLASS               { $$ = observers.ClassSymbolStart($1, false, true, false, false); }
;

extends_from:
		/* empty */					                     { $$ = observers.ClassSymbolStart(NULL, false, false, false, false); }
	|	T_EXTENDS fully_qualified_class_name	         { $$ = observers.ClassSymbolExtends($2); }
;

interface_entry:
	T_INTERFACE		                                    { $$ = observers.ClassSymbolStart($1, false, false, true, false); }
;

interface_extends_list:
		/* empty */                                   { $$ = observers.ClassSymbolStart(NULL, false, false, false, false); }
	|	T_EXTENDS interface_list                      { $$ = $2; }
;

implements_list:
		/* empty */                                      { $$ = observers.ClassSymbolStart(NULL, false, false, false, false); }
	|	T_IMPLEMENTS interface_list                      { $$ = $2; }
;

interface_list:
		fully_qualified_class_name			                 { $$ = observers.ClassSymbolAddToImplements($1); }
	|	interface_list ',' fully_qualified_class_name       { $$ = observers.ClassSymbolAddToImplements($1, $3); }
;

foreach_optional_arg:
		/* empty */						               { $$ =  observers.ExpressionNil(); }
	|	T_DOUBLE_ARROW foreach_variable	           { $$ = $2; }
;

foreach_variable:
		variable			                         { $$ = observers.ExpressionMakeAsAssignmentExpression($1); }
	|	'&' variable		                         { $$ = observers.ExpressionMakeAsAssignmentExpression($2); }
	|	T_LIST '('  assignment_list ')'             { $$ = observers.ExpressionMakeAssignmentList($3, observers.ExpressionNil()); }
;

for_statement:
		statement                                        { $$ = $1; }
	|	':' inner_statement_list T_ENDFOR ';'            { $$ = $2; }
;


foreach_statement:
		statement                                       { $$ = $1; }
	|	':' inner_statement_list T_ENDFOREACH ';'       { $$ = $2; }
;


declare_statement:
		statement                                       { $$ = $1; }
	|	':' inner_statement_list T_ENDDECLARE ';'       { $$ = $2; }
;

declare_list:
		T_STRING '=' static_scalar						    { $$ = observers.ConstantMake($1, analyzer.GetLineNumber()); }
	|	declare_list ',' T_STRING '=' static_scalar		{ $$ = observers.StatementListMerge($1, observers.ConstantMake($3, analyzer.GetLineNumber())); }
;

switch_case_list:
		'{' case_list '}'					       { $$ = $2; }
	|	'{' ';' case_list '}'				       { $$ = $3; }
	|	':' case_list T_ENDSWITCH ';'		       { $$ = $2; }
	|	':' ';' case_list T_ENDSWITCH ';'	       { $$ = $3; }
;


case_list:
		/* empty */	                                                    { $$ = observers.StatementListNil(); } 
	|	case_list T_CASE expr case_separator  inner_statement_list      { $$ = $1;
																			observers.StatementListAppend($$, $3);
																			observers.StatementListMerge($$, $5); 
																		  }
	|	case_list T_DEFAULT case_separator  inner_statement_list       { $$ = $1; 
																			observers.StatementListMerge($$, $4);
																		  }
;


case_separator:
		':'
	|	';'
;


while_statement:
		statement                                      { $$ = $1; }
	|	':' inner_statement_list T_ENDWHILE ';'        { $$ = $2; }
;



elseif_list:
		/* empty */                                            { $$ = observers.StatementListNil(); }
	|	elseif_list T_ELSEIF parenthesis_expr  statement       { $$ = observers.StatementListMake(); 
																   observers.StatementListMerge($$, $1);
																   observers.StatementListAppend($$, $3);
																   observers.StatementListMerge($$, $4); }
;


new_elseif_list:
		/* empty */                                                                 { $$ = observers.StatementListNil(); }
	|	new_elseif_list T_ELSEIF parenthesis_expr ':'  inner_statement_list         { $$ = observers.StatementListMake(); 
																				          observers.StatementListMerge($$, $1);
																			  	          observers.StatementListAppend($$, $3); 
																				          observers.StatementListMerge($$, $5); }
;


else_single:
		/* empty */                       { $$ = observers.StatementListNil(); }
	|	T_ELSE statement                  { $$ = $2; }
;


new_else_single:
		/* empty */                            { $$ = observers.StatementListNil(); }
	|	T_ELSE ':' inner_statement_list        { $$ = $3; }
;


parameter_list:
		non_empty_parameter_list              { $$ = $1; }
	|	/* empty */                           { $$ = observers.ParametersListNil(); }
;


non_empty_parameter_list:
		parameter                                   { $$ = $1; }
	|	non_empty_parameter_list ',' parameter      { $$ = observers.ParametersListAppend($1, $3); }
;

parameter:
		optional_class_type is_reference is_variadic T_VARIABLE                             { $$ = observers.ParametersListCreate($1, $4, $2, false, $3); }
	|	optional_class_type is_reference is_variadic T_VARIABLE '=' static_scalar           { $$ = observers.ParametersListCreate($1, $4, $2, true, $3); }
			
;


optional_class_type:
		/* empty */					          { $$ = observers.QualifiedNameNil(); }
	|	T_ARRAY						          { $$ = observers.QualifiedNameCreate($1); }
	|	T_CALLABLE					          { $$ = observers.QualifiedNameCreate($1); }
	|	fully_qualified_class_name			  { $$ = $1; }
;


function_call_parameter_list:
		'(' ')'	                                                  { $$ =  observers.StatementListNil(); }
	|	'(' non_empty_function_call_parameter_list ')'	           { $$ = $2; }
	|	'(' yield_expr ')'	                                      { $$ = observers.StatementListMakeAndAppend($2); }
;


non_empty_function_call_parameter_list:
		function_call_parameter                                                    { $$ = $1; }
	|	non_empty_function_call_parameter_list ',' function_call_parameter         { $$ = observers.StatementListMerge($1, $3); }
;

function_call_parameter:
		expr_without_variable	                         { $$ = observers.StatementListMakeAndAppend($1); }
	|	variable				                         { $$ = observers.StatementListMakeAndAppend($1); }
	|	'&' w_variable 			                         { $$ = observers.StatementListMakeAndAppend($2); }
	|	T_ELLIPSIS expr			                         { $2->IsUnpack = true; $$ = observers.StatementListMakeAndAppend($2); }
;

global_var_list:
		global_var_list ',' global_var	              { $$ = observers.StatementListAppend($1, $3); }
	|	global_var						              { $$ = observers.StatementListMakeAndAppend($1); }
;


global_var:
		T_VARIABLE			                  { $$ = observers.ExpressionMakeGlobalVariable($1); }
	|	'$' r_variable		                  { $$ = observers.ExpressionNil(); }
	|	'$' '{' expr '}'	                  { $$ = observers.ExpressionNil(); }
;


static_var_list:
		static_var_list ',' T_VARIABLE                           { $$ = observers.StatementListAppend($1, observers.ExpressionMakeStaticVariable($3)); }
	|	static_var_list ',' T_VARIABLE '=' static_scalar         { $$ = observers.StatementListAppend($1, observers.ExpressionMakeStaticVariable($3)); }
	|	T_VARIABLE                                               { $$ = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable($1)); }
	|	T_VARIABLE '=' static_scalar                             { $$ = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable($1)); }

;


class_statement_list:
		class_statement_list class_statement                       { $$ = observers.StatementListMerge($1, $2); }
	|	/* empty */                                                { $$ = observers.StatementListMake(); }
;


class_statement:
		variable_modifiers  class_variable_declaration ';'        { $$ = observers.ClassMemberSymbolMakeVariables($2, $1); }
	|	class_constant_declaration ';'                            { $$ = $1; }
	|	trait_use_statement                                       { $$ = $1; }
	|	method_modifiers function is_reference T_STRING 
		'(' parameter_list ')'                                    { observers.SetCurrentMemberName($4); }
		method_body                                               { $$ = observers.ClassMemberSymbolMakeMethod($4, $1, $3, $2, $6, $9);
																	  observers.SetCurrentMemberName(NULL);
																	}
;

trait_use_statement:
		T_USE trait_list trait_adaptations                  { $$ = observers.TraitUseMake($2, $3); }
;

trait_list:
		fully_qualified_class_name						     { $$ = observers.TraitUseStart($1); }
	|	trait_list ',' fully_qualified_class_name		    { $$ = observers.TraitUseAppend($1, $3); }
;

trait_adaptations:
		';'                                           { $$ = observers.StatementListNil(); } 
	|	'{' trait_adaptation_list '}'                 { $$ = $2; }
;

trait_adaptation_list:
		/* empty */                                  { $$ = observers.StatementListNil(); } 
	|	non_empty_trait_adaptation_list              { $$ = $1; }
;

non_empty_trait_adaptation_list:
		trait_adaptation_statement                                      { $$ = $1; }
	|	non_empty_trait_adaptation_list trait_adaptation_statement      { $$ = observers.StatementListMerge($1, $2); }
;

trait_adaptation_statement:
		trait_precedence ';'           { $$ = observers.StatementListMakeAndAppend($1); }
	|	trait_alias ';'                { $$ = observers.StatementListMakeAndAppend($1); }
;

trait_precedence:
	trait_method_reference_fully_qualified T_INSTEADOF trait_reference_list	   { $$ =  observers.TraitInsteadOfMake($1, $3); }
;

trait_reference_list:
		fully_qualified_class_name									         { $$ = observers.TraitInsteadOfMakeReferenceList($1); }
	|	trait_reference_list ',' fully_qualified_class_name			     { $$ = observers.TraitInsteadOfAppendReferenceList($1, $3); }	
;

trait_method_reference:
		T_STRING													   { $$ = observers.TraitAliasMakeMethodReferenceList($1); }
	|	trait_method_reference_fully_qualified						   { $$ = $1; }
;

trait_method_reference_fully_qualified:
	fully_qualified_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING	{ $$ = observers.TraitAliasMakeMethodReferenceList($1, $3); }	
;

trait_alias:
		trait_method_reference T_AS trait_modifiers T_STRING	    { $$ = observers.TraitAliasMake($1, $3, $4); }	
	|	trait_method_reference T_AS member_modifier				{ $$ = observers.TraitAliasMake($1, observers.ClassMemberSymbolMake($3)); }	
;

trait_modifiers:
		/* empty */					 /* No change of methods visibility */                         { $$ = observers.ClassMemberSymbolMake(NULL); }
	|	member_modifier	 /* REM: Keep in mind, there are not only visibility modifiers */          { $$ = observers.ClassMemberSymbolMake($1); }
;

method_body:
		';' /* abstract method */		       { $$ = observers.ClassMemberMakeBody(observers.StatementListNil(), $1, $1); }
	|	'{' inner_statement_list '}'	       { $$ = observers.ClassMemberMakeBody($2, $1, $3); }
;

variable_modifiers:
		non_empty_member_modifiers		             { $$ = $1; }
	|	T_VAR							             { $$ = observers.ClassMemberSymbolMakeAsPublicVariable($1); }
;

method_modifiers:
		/* empty */							      { $$ = observers.ClassMemberSymbolMake(NULL); }
	|	non_empty_member_modifiers			      { $$ = $1; }
;

non_empty_member_modifiers:
		member_modifier						             { $$ = observers.ClassMemberSymbolMake($1); }
	|	non_empty_member_modifiers member_modifier	     { $$ = observers.ClassMemberSymbolSetModifier($1, $2); }
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
		class_variable_declaration ',' T_VARIABLE					       { $$ = observers.StatementListMerge($1, observers.ClassMemberSymbolMakeVariable($3, $3, false, analyzer.GetLineNumber())); }
	|	class_variable_declaration ',' T_VARIABLE '=' static_scalar	   { $$ = observers.StatementListMerge($1, observers.ClassMemberSymbolMakeVariable($3, $3, false, analyzer.GetLineNumber()));  }
	|	T_VARIABLE						                                  { $$ = observers.ClassMemberSymbolMakeVariable($1, $1, false, analyzer.GetLineNumber()); }
	|	T_VARIABLE '=' static_scalar	                                  { $$ = observers.ClassMemberSymbolMakeVariable($1, $1, false, analyzer.GetLineNumber()); }
;

class_constant_declaration:
		class_constant_declaration ',' T_STRING '=' static_scalar	     { $$ = observers.StatementListMerge($1, observers.ClassMemberSymbolMakeVariable($3, $3, true, analyzer.GetLineNumber())); }
	|	T_CONST T_STRING '=' static_scalar	                            { $$ = observers.ClassMemberSymbolMakeVariable($2, $1, true, analyzer.GetLineNumber()); }
;

echo_expr_list:
		echo_expr_list ',' expr              { $$ = observers.StatementListAppend($1, $3); }
	|	expr					              { $$ = observers.StatementListMakeAndAppend($1); }
;


for_expr:
		/* empty */			                { $$ = observers.StatementListNil(); }
	|	non_empty_for_expr	                { $$ = $1; }
;

non_empty_for_expr:
		non_empty_for_expr ','	 expr        { $$ =  observers.StatementListAppend($1, $3); }
	|	expr					             { $$ = observers.StatementListMakeAndAppend($1); }
;

chaining_method_or_property:
		chaining_method_or_property variable_property 	    { $$ = observers.VariableAppendToChain($1, $2); }
	|	variable_property 								    { $$ = $1; }
;

chaining_dereference:
		chaining_dereference '[' dim_offset ']'	       { $$ = $1; }
	|	'[' dim_offset ']'		                          { $$ = observers.VariableNil(); }
;

chaining_instance_call:
		chaining_dereference 		 chaining_method_or_property   { $$ = observers.VariableAppendToChain($1, $2); }
	|	chaining_dereference 		                               { $$ = $1; }
	|	chaining_method_or_property                               { $$ = $1; }
;

instance_call:
		/* empty */ 		                        { $$ = observers.VariableNil(); }
	|	chaining_instance_call	                    { $$ = $1; }
;

new_expr:
		T_NEW class_name_reference  ctor_arguments     { $$ = observers.ExpressionMakeNewInstanceCall($2, $3);  }
;

expr_without_variable:
		T_LIST '('  assignment_list ')' '=' expr                          { $$ = observers.ExpressionMakeAssignmentList($3, $6); }
	|	variable '=' expr		                                           { $$ = observers.AssignmentExpressionFromExpressionFound($1, $3); }
	|	variable '=' '&' variable                                         { $$ = observers.AssignmentExpressionFromVariableFound($1, $4); }
	|	variable '=' '&' T_NEW class_name_reference  ctor_arguments       { $$ = observers.AssignmentExpressionFromNewFound($1, $5, $6); }
	|	T_CLONE expr                                                       { $$ = $2; }
	|	variable T_PLUS_EQUAL expr 	                                   { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_MINUS_EQUAL expr	                                   { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_MUL_EQUAL expr		                                   { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_POW_EQUAL expr		                                   { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_DIV_EQUAL expr		                                   { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_CONCAT_EQUAL expr	                                   { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_MOD_EQUAL expr		                                   { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_AND_EQUAL expr		                                   { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_OR_EQUAL expr 		                                   { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_XOR_EQUAL expr 		                                   { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_SL_EQUAL expr	                                       { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	variable T_SR_EQUAL expr	                                       { $$ = observers.ExpressionAssignmentCompoundOperation($2->Token, $1, $3); }
	|	rw_variable T_INC                                                 { $$ = observers.ExpressionUnaryVariableOperation($2->Token, $1); }
	|	T_INC rw_variable                                                 { $$ = observers.ExpressionUnaryVariableOperation($1->Token, $2); }
	|	rw_variable T_DEC                                                 { $$ = observers.ExpressionUnaryVariableOperation($2->Token, $1); }
	|	T_DEC rw_variable                                                 { $$ = observers.ExpressionUnaryVariableOperation($1->Token, $2); }
	|	expr T_BOOLEAN_OR  expr                                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_BOOLEAN_AND  expr                                          { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); } 
	|	expr T_LOGICAL_OR  expr                                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_LOGICAL_AND  expr                                          { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); } 
	|	expr T_LOGICAL_XOR expr                                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '|' expr	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '&' expr	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '^' expr	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '.' expr 	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '+' expr 	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '-' expr 	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '*' expr	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_POW expr	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '/' expr	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '%' expr 	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	| 	expr T_SL expr	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_SR expr	                                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	'+' expr %prec T_INC                                             { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	'-' expr %prec T_INC                                             { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	'!' expr                                                         { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	'~' expr                                                         { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	expr T_IS_IDENTICAL expr		                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_IS_NOT_IDENTICAL expr	                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_IS_EQUAL expr			                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_IS_NOT_EQUAL expr 		                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr '<' expr 					                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_IS_SMALLER_OR_EQUAL expr                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); } 
	|	expr '>' expr 					                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	expr T_IS_GREATER_OR_EQUAL expr                                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); } 
	|	expr T_INSTANCEOF class_name_reference                           { $$ = observers.ExpressionInstanceOfOperation($1, $3); }
	|	parenthesis_expr 	                                              { $$ = $1; }
	|	new_expr		                                                  { $$ = $1; }
	|	'(' new_expr ')'  instance_call                                   { $$ = observers.NewInstanceAppendToChain($2, $4); }
	|	expr '?' 
		expr ':' 
		expr	                                                           { $$ = observers.ExpressionTernaryOperation($1, $3, $5); }
	|	expr '?' ':'                                                       
		expr                                                               { $$ = observers.ExpressionTernaryOperation($1, $4, NULL); }
	|	internal_functions_in_yacc                                         { $$ = $1; }
	|	T_INT_CAST expr 	                                                { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_DOUBLE_CAST expr 	                                                { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_STRING_CAST expr	                                                { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_ARRAY_CAST expr 	                                                { $$ = observers.ExpressionMakeArray(observers.StatementListMakeAndAppend($2)); }
	|	T_OBJECT_CAST expr 	                                                { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_BOOL_CAST expr	                                                { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_UNSET_CAST expr	                                                { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	T_EXIT exit_expr	                                                { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	'@'  expr                                                           { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	scalar				                                                { $$ = $1; }
	|	combined_scalar_offset                                             { $$ = $1; }
	|	combined_scalar                                                    { $$ = $1; }
	|	'`' backticks_expr '`'                                             { $$ = observers.ExpressionMakeScalar($2); /* results of backtick operator is a string */ }
	|	T_PRINT expr                                                       { $$ = observers.ExpressionMakeScalar($2); }	
	|	T_YIELD                                                            { $$ = observers.ExpressionMakeScalar($1); }	
	|	function is_reference 
		'(' parameter_list ')' lexical_vars '{'                            { observers.IncrementAnonymousFunctionCount(); }
		 inner_statement_list '}'                                          { $$ = observers.ExpressionMakeClosure($4, $6, $9, $7, $10); 
																	           // end after we create the closure so that closure gets the correct scope
																	           // anonymous function count
																	           observers.EndAnonymousFunction(); 
																	         }
	|	T_STATIC function is_reference 
		'(' parameter_list ')' lexical_vars '{'                            { observers.IncrementAnonymousFunctionCount(); }
		inner_statement_list '}'                                           { $$ = observers.ExpressionMakeClosure($5, $7, $10, $8, $11);  
																				// end after we create the closure so that closure gets the correct scope
																				// anonymous function count
																				observers.EndAnonymousFunction(); 
																			  }
;

yield_expr:
		T_YIELD expr_without_variable                                    { $$ = $2; }
	|	T_YIELD variable                                                 { $$ = $2; }
	|	T_YIELD expr T_DOUBLE_ARROW expr_without_variable                { $$ = $2; }
	|	T_YIELD expr T_DOUBLE_ARROW variable                             { $$ = $2; }
;

combined_scalar_offset:
		combined_scalar '[' dim_offset ']'                             { $$ = observers.ExpressionAddOffset($1, $3); }
	|	combined_scalar_offset '[' dim_offset ']'                      { $$ = observers.ExpressionAddOffset($1, $3); }
	|	T_CONSTANT_ENCAPSED_STRING '[' dim_offset ']'                  { $$ = observers.ExpressionAddOffset(observers.ExpressionMakeScalar($1), $3); }
	|	general_constant '[' dim_offset ']'                            { $$ = observers.ExpressionAddOffset($1, $3); }
;

combined_scalar:
		T_ARRAY '(' array_pair_list ')'                           { $$ = observers.ExpressionMakeArray($3); }
	|	'[' array_pair_list ']'                                   { $$ = observers.ExpressionMakeArray($2); }
;

function:
	T_FUNCTION 
;

lexical_vars:
		/* empty */                                          { $$ = observers.StatementListNil(); }
	|	T_USE '(' lexical_var_list ')'                       { $$ = $3; }
;

lexical_var_list:
		lexical_var_list ',' T_VARIABLE			          { $$ = observers.StatementListAppend($1, 
																   observers.VariableStart($3)
																  ); 
														      }
	|	lexical_var_list ',' '&' T_VARIABLE		         { $$ = observers.StatementListAppend($1, 
															     observers.VariableStart($4, true)
															   ); 
														     }
	|	T_VARIABLE								           { $$ = observers.StatementListMakeAndAppend(observers.VariableStart($1)); }
	|	'&' T_VARIABLE							           { $$ = observers.StatementListMakeAndAppend(observers.VariableStart($2, true)); }
;

function_call:
		namespace_name 
		function_call_parameter_list                                              { $$ = observers.VariableMakeFunctionCall($1, $2, analyzer.GetLineNumber()); }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name 
		function_call_parameter_list                                              { $$ = observers.VariableMakeFunctionCallFromDeclaredNamespace($3, $4, analyzer.GetLineNumber()); }
	|	T_NS_SEPARATOR namespace_name 
		function_call_parameter_list                                              { $$ = observers.VariableMakeFunctionCallFromAbsoluteNamespace($2, $3, analyzer.GetLineNumber()); }
	|	class_name T_PAAMAYIM_NEKUDOTAYIM variable_name 
		function_call_parameter_list                                              { $$ = observers.VariableMakeStaticMethodCall($1, $3, $4, analyzer.GetLineNumber()); }
	|	class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects 
		function_call_parameter_list                                              { $$ = observers.VariableNil(); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_name 
		function_call_parameter_list                                              { $$ = observers.VariableNil(); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects 
		function_call_parameter_list                                              { $$ = observers.VariableNil(); }
	|	variable_without_objects 
		function_call_parameter_list                                              { $$ = observers.VariableNil(); }
;

class_name:
		T_STATIC                                              { $$ = observers.QualifiedNameNil(); }
	|	namespace_name                                        { $$ = $1; }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name             { $$ = observers.QualifiedNameMakeFromDeclaredNamespace($3); }
	|	T_NS_SEPARATOR namespace_name                         { $$ = observers.QualifiedNameMakeAbsolute($2); }
;

fully_qualified_class_name:
		namespace_name                                         { $$ = $1; }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name              { $$ = observers.QualifiedNameMakeFromDeclaredNamespace($3); }
	|	T_NS_SEPARATOR namespace_name                          { $$ = observers.QualifiedNameMakeAbsolute($2); }
;



class_name_reference:
		class_name						      { $$ = $1; }
	|	dynamic_class_name_reference	      { $$ = $1; }
;


dynamic_class_name_reference:
		base_variable T_OBJECT_OPERATOR 
			object_property  dynamic_class_name_variable_properties      { $$ = observers.QualifiedNameNil(); }
			
	|	base_variable                                                    { $$ = observers.QualifiedNameNil(); }
;


dynamic_class_name_variable_properties:
		dynamic_class_name_variable_properties dynamic_class_name_variable_property        { $$ = $1; }
	|	/* empty */                                                                        { $$ = observers.SemanticValueNil(); }
;


dynamic_class_name_variable_property:
		T_OBJECT_OPERATOR object_property 
;

exit_expr:
		/* empty */	                    { $$ = observers.ExpressionNil(); }
	|	'(' ')'		                    { $$ = observers.ExpressionNil(); }
	|	parenthesis_expr	            { $$ = $1; }
;

backticks_expr:
		/* empty */	                   { $$ = observers.ExpressionNil(); }
	|	T_ENCAPSED_AND_WHITESPACE	    { $$ = observers.ExpressionNil(); }
	|	encaps_list	                   { $$ = observers.ExpressionNil(); }
;


ctor_arguments:
		/* empty */	                          { $$ = observers.StatementListNil(); }
	|	function_call_parameter_list 	      { $$ = $1; }
;


common_scalar:
		T_LNUMBER 					                                      { $$ = observers.ExpressionMakeScalar($1); }
	|	T_DNUMBER 					                                      { $$ = observers.ExpressionMakeScalar($1); } 
	|	T_CONSTANT_ENCAPSED_STRING	                                      { $$ = observers.ExpressionMakeScalar($1); }  
	|	T_LINE 						                                      { $$ = observers.ExpressionMakeScalar($1); }   
	|	T_FILE 						                                      { $$ = observers.ExpressionMakeScalar($1); }    
	|	T_DIR   					                                      { $$ = observers.ExpressionMakeScalar($1); }     
	|	T_TRAIT_C					                                      { $$ = observers.ExpressionMakeScalar($1); }      
	|	T_METHOD_C					                                      { $$ = observers.ExpressionMakeScalar($1); }       
	|	T_FUNC_C					                                      { $$ = observers.ExpressionMakeScalar($1); }        
	|	T_NS_C						                                      { $$ = observers.ExpressionMakeScalar($1); }         
	|	T_START_HEREDOC T_ENCAPSED_AND_WHITESPACE T_END_HEREDOC          { $$ = observers.ExpressionMakeScalar($1); }          
	|	T_START_HEREDOC T_END_HEREDOC                                    { $$ = observers.ExpressionMakeScalar($1); }           
;

static_class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING               { $$ = observers.ExpressionMakeClassConstant($1, $3); }
;

static_scalar: /* compile-time evaluated scalars */
	static_scalar_value 
;

static_scalar_value:
		common_scalar	                                        { $$ = observers.ExpressionNil(); }
	|	static_class_name_scalar	                             { $$ = $1; }
	|	namespace_name 		                                     { $$ = observers.ExpressionMakeScalarFromConstant($1); }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name               { $$ = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeFromDeclaredNamespace($3)); }
	|	T_NS_SEPARATOR namespace_name                           { $$ = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeAbsolute($2)); }
	|	T_ARRAY '(' static_array_pair_list ')'                  { $$ = observers.ExpressionMakeScalar($3); }
	|	'[' static_array_pair_list ']'                          { $$ = observers.ExpressionMakeScalar($2); }
	|	static_class_constant                                   { $$ = $1; }
	|	T_CLASS_C			                                     { $$ = observers.ExpressionMakeScalar($1); }
	|	static_operation                                         { $$ = $1; }
;

static_operation:
		static_scalar_value '[' static_scalar_value ']'                       { $$ = observers.ExpressionAddOffset($1, $3); }
	|	static_scalar_value '+' static_scalar_value                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value '-' static_scalar_value                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value '*' static_scalar_value                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_POW static_scalar_value                         { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value '/' static_scalar_value                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value '%' static_scalar_value                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	'!' static_scalar_value                                               { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	'~' static_scalar_value                                               { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	static_scalar_value '|' static_scalar_value                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value '&' static_scalar_value                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value '^' static_scalar_value                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_SL static_scalar_value                          { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_SR static_scalar_value                          { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value '.' static_scalar_value                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_LOGICAL_XOR static_scalar_value                 { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_LOGICAL_AND static_scalar_value                 { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_LOGICAL_OR static_scalar_value                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_BOOLEAN_AND static_scalar_value                 { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_BOOLEAN_OR static_scalar_value                  { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_IS_IDENTICAL static_scalar_value                { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); } 
	|	static_scalar_value T_IS_NOT_IDENTICAL static_scalar_value            { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_IS_EQUAL static_scalar_value                    { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_IS_NOT_EQUAL static_scalar_value                { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value '<' static_scalar_value                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value '>' static_scalar_value                           { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_IS_SMALLER_OR_EQUAL static_scalar_value         { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value T_IS_GREATER_OR_EQUAL static_scalar_value         { $$ = observers.ExpressionBinaryOperation($2->Token, $1, $3); }
	|	static_scalar_value '?' ':' static_scalar_value                       { $$ = observers.ExpressionTernaryOperation($1, $4, NULL); }
	|	static_scalar_value '?' static_scalar_value ':' static_scalar_value   { $$ = observers.ExpressionTernaryOperation($1, $3, $5); }
	|	'+' static_scalar_value                                               { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	'-' static_scalar_value                                               { $$ = observers.ExpressionUnaryOperation($1->Token, $2); }
	|	'(' static_scalar_value ')'                                           { $$ = $2; }
;

general_constant:
		class_constant                                                         { $$ = $1; }
	|	namespace_name	                                                       { $$ = observers.ExpressionMakeScalarFromConstant($1); }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name                              { $$ = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeFromDeclaredNamespace($3)); }
	|	T_NS_SEPARATOR namespace_name                                          { $$ = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeAbsolute($2)); }
;

scalar:
		T_STRING_VARNAME                                                      { $$ = observers.ExpressionMakeScalar($1); }
	|	general_constant                                                      { $$ = $1; }
	|	class_name_scalar                                                     { $$ = $1; }
	|	common_scalar                                                         { $$ = $1; } 
	|	'"' encaps_list '"'                                                   { $$ = observers.ExpressionMakeScalar($2); }
	|	T_START_HEREDOC encaps_list T_END_HEREDOC                             { $$ = observers.ExpressionMakeScalar($1); }
	|	T_CLASS_C                                                             { $$ = observers.ExpressionMakeScalar($1); }
;

static_array_pair_list:
		/* empty */                                                         { $$ = observers.SemanticValueNil(); }
	|	non_empty_static_array_pair_list possible_comma	
;

possible_comma:
		/* empty */               { $$ = false; }
	|	','                       { $$ = true; }
;

non_empty_static_array_pair_list:
		non_empty_static_array_pair_list ',' static_scalar_value T_DOUBLE_ARROW static_scalar_value   { $$ = observers.SemanticValueNil(); }
	|	non_empty_static_array_pair_list ',' static_scalar_value                                      { $$ = observers.SemanticValueNil(); }
	|	static_scalar_value T_DOUBLE_ARROW static_scalar_value                                        { $$ = observers.SemanticValueNil(); }
	|	static_scalar_value                                                                           { $$ = observers.SemanticValueNil(); }
;

expr:
		r_variable					     { $$ = $1; }
	|	expr_without_variable		
;

parenthesis_expr:
		'(' expr ')'		          { $$ = $2; }
	|	'(' yield_expr ')'	          { $$ = $2; }
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
		method_or_not variable_properties	  { $$ = observers.VariableMake($1, $3, $4, $5); }
	|	base_variable_with_function_calls    { $$ = observers.VariableMake($1, NULL, NULL, NULL); }
;

variable_properties:
		variable_properties variable_property      { $$ = observers.VariableAppendToChain($1, $2); }
	|	/* empty */                                { $$ = observers.VariableNil(); }
;


variable_property:
		T_OBJECT_OPERATOR object_property  method_or_not         { $$ = observers.VariableAppendToChain($2, $3, $1);  }
;

array_method_dereference:
		array_method_dereference '[' dim_offset ']'              { $$ = observers.VariableAppendArrayOffset($1, $3);}
	|	method '[' dim_offset ']'                                { $$ = observers.VariableAppendArrayOffset($1, $3); }
;

method:
		function_call_parameter_list                           { $$ = observers.VariableMakeAndAppendFunctionCall($1, true); } 
;

method_or_not:
		method						             { $$ = $1; }
	|	array_method_dereference	             { $$ = $1; }
	|	/* empty */                             { $$ = observers.VariableNil(); }
;

variable_without_objects:
		reference_variable 
	|	simple_indirect_reference reference_variable           { $$ = observers.VariableMakeIndirect($2); }
;

static_member:
		class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects                 { $$ = observers.VariableStartStaticMember($1, $3); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects        { $$ = observers.VariableNil(); }

;

variable_class_name:
		reference_variable       { $$ = observers.SemanticValueNil(); }
;

array_function_dereference:
		array_function_dereference '[' dim_offset ']'          { $$ = observers.VariableAppendArrayOffset($1, $3); }
	|	function_call '[' dim_offset ']'                       { $$ = observers.VariableAppendArrayOffset($1, $3); }
;

base_variable_with_function_calls:
		base_variable				
	|	array_function_dereference	             { $$ = $1; }
	|	function_call                           { $$ = $1; }
;


base_variable:
		reference_variable 
	|	simple_indirect_reference reference_variable         { $$ = observers.VariableMakeIndirect($2); }
	|	static_member 
;

reference_variable:
		reference_variable '[' dim_offset ']'	       { $$ = observers.VariableAppendArrayOffset($1, $3); }
	|	reference_variable '{' expr '}'		       { $$ = observers.VariableNil(); }
	|	compound_variable			
;


compound_variable:
		T_VARIABLE			         { $$ = observers.VariableStart($1); }
	|	'$' '{' expr '}'	         { $$ = observers.VariableNil(); }
;

dim_offset:
		/* empty */		        { $$ = observers.ExpressionNil(); }
	|	expr			        { $$ = $1; }
;


object_property:
		object_dim_list               { $$ = $1; }
	|	variable_without_objects      { $$ = $1; }
;

object_dim_list:
		object_dim_list '[' dim_offset ']'	   { $$ = observers.VariableAppendArrayOffset($1, $3); }
	|	object_dim_list '{' expr '}'		   { $$ = observers.VariableNil(); }
	|	variable_name                         { $$ = $1; }
;

variable_name:
		T_STRING		                      {  $$ = observers.VariableStart($1); }
	|	'{' expr '}'	                      { $$ = observers.VariableNil(); }
;

simple_indirect_reference:
		'$' 
	|	simple_indirect_reference '$' 
;

assignment_list:
		assignment_list ',' assignment_list_element        { $$ = observers.StatementListMerge($1, $3); }
	|	assignment_list_element                            { $$ = $1; }
;

assignment_list_element:
		variable								      { $$ = observers.StatementListMakeAndAppend($1); }
	|	T_LIST '('  assignment_list ')'	          { $$ = $3; }
	|	/* empty */							          { $$ = observers.StatementListMake(); }
;


array_pair_list:
		/* empty */                                 { $$ = observers.StatementListMake(); }
	|	non_empty_array_pair_list possible_comma	 { $$ = $1; }
;

non_empty_array_pair_list:
		non_empty_array_pair_list ',' expr T_DOUBLE_ARROW expr	                      { $$ = observers.StatementListMerge($1, 
                                                                                         observers.ExpressionMakeArrayPair($3, $5)
                                                                                       ); 
																					  }
	|	non_empty_array_pair_list ',' expr			                                 { $$ = observers.StatementListMerge($1, 
                                                                                         observers.ExpressionMakeArrayPair(NULL, $3)
                                                                                       ); 
                                                                                    }
	|	expr T_DOUBLE_ARROW expr	                                                 { $$ = observers.ExpressionMakeArrayPair($1, $3); }
	|	expr 				                                                         { $$ = observers.ExpressionMakeArrayPair(NULL, $1); }
	|	non_empty_array_pair_list ',' expr T_DOUBLE_ARROW '&' w_variable            { $$ = observers.StatementListMerge($1, 
                                                                                         observers.ExpressionMakeArrayPair($3, $6)
                                                                                       ); 
																					  }
	|	non_empty_array_pair_list ',' '&' w_variable                                { $$ = observers.StatementListMerge($1, 
                                                                                         observers.ExpressionMakeArrayPair(NULL, $4)
                                                                                       ); 
                                                                                    }
	|	expr T_DOUBLE_ARROW '&' w_variable	                                        { $$ = observers.ExpressionMakeArrayPair($1, $4); }	
	|	'&' w_variable 			                                                   { $$ = observers.ExpressionMakeArrayPair(NULL, $2); }
;

encaps_list:
		encaps_list encaps_var                       { $$ = $1; }
	|	encaps_list T_ENCAPSED_AND_WHITESPACE	      { $$ = $1; }
	|	encaps_var                                   { $$ = $1; }
	|	T_ENCAPSED_AND_WHITESPACE encaps_var	      { $$ = $2; }
;



encaps_var:
		T_VARIABLE                                                                 { $$ = observers.ExpressionNil(); }
	|	T_VARIABLE '['  encaps_var_offset ']'	                                    { $$ = observers.ExpressionNil(); }
	|	T_VARIABLE T_OBJECT_OPERATOR T_STRING                                      { $$ = observers.ExpressionNil(); }
	|	T_DOLLAR_OPEN_CURLY_BRACES expr '}'                                        { $$ = observers.ExpressionNil(); }
	|	T_DOLLAR_OPEN_CURLY_BRACES T_STRING_VARNAME '[' expr ']' '}'               { $$ = observers.ExpressionNil(); }
	|	T_CURLY_OPEN variable '}'                                                  { $$ = observers.ExpressionNil(); }
;


encaps_var_offset:
		T_STRING		     { $$ = observers.ExpressionNil(); }
	|	T_NUM_STRING	     { $$ = observers.ExpressionNil(); }
	|	T_VARIABLE		     { $$ = observers.ExpressionNil(); }
;


internal_functions_in_yacc:
		T_ISSET '(' isset_variables ')'          { $$ = $3; }
	|	T_EMPTY '(' variable ')'	              { $$ = observers.ExpressionNil(); }
	|	T_EMPTY '(' expr_without_variable ')'    { $$ = observers.ExpressionNil(); }
	|	T_INCLUDE expr 			                 { $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
	|	T_INCLUDE_ONCE expr 	                 { $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
	|	T_EVAL '(' expr ')' 	                 { $$ = observers.ExpressionEval($3); }
	|	T_REQUIRE expr			                 { $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
	|	T_REQUIRE_ONCE expr		                 { $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
;

isset_variables:
		isset_variable			                { $$ = observers.ExpressionIsset($1); }
	|	isset_variables ','  isset_variable    { $$ = observers.ExpressionIssetMerge((pelet::IssetExpressionClass*)$1, $3); }
;

isset_variable:
		variable				        { $$ = $1; }
	|	expr_without_variable	        { $$ = $1; }
;

class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING              { $$ = observers.ExpressionMakeClassConstant($1, $3); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING     { $$ = observers.ExpressionNil(); }
;

static_class_name_scalar:
	class_name T_PAAMAYIM_NEKUDOTAYIM T_CLASS           { $$ = observers.ExpressionMakeScalarFromConstant($1); }
;

class_name_scalar:
	class_name T_PAAMAYIM_NEKUDOTAYIM T_CLASS      { $$ = observers.ExpressionMakeScalarFromConstant($1); }
;

%%
