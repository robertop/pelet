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
#include <pelet/ResourceParserObserverClass.h>
#include <pelet/LintParserFunctions.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE pelet::ResourceParserTypeClass

// so that both bison parses call the same lex function
#define php53_resource_lex pelet::ResourceLex

// so that both bison parses call the same error function
#define php53_resource_error pelet::ResourceGrammarError

%}

%parse-param { pelet::LexicalAnalyzerClass &analyzer }
%parse-param { pelet::ResourceParserObserverClass &observers }
%lex-param  { pelet::LexicalAnalyzerClass &analyzer }
%lex-param { pelet::ResourceParserBufferClass &observers }

%define api.pure
%expect 2
%error-verbose
%name-prefix "php53_resource_"
%debug

%left T_INCLUDE T_INCLUDE_ONCE T_EVAL T_REQUIRE T_REQUIRE_ONCE
%left <token> ','
%left T_LOGICAL_OR
%left T_LOGICAL_XOR
%left T_LOGICAL_AND
%right T_PRINT
%left <token> '=' 
%left T_PLUS_EQUAL T_MINUS_EQUAL T_MUL_EQUAL T_DIV_EQUAL T_CONCAT_EQUAL T_MOD_EQUAL T_AND_EQUAL T_OR_EQUAL T_XOR_EQUAL T_SL_EQUAL T_SR_EQUAL
%left <token> '?' ':'
%left T_BOOLEAN_OR
%left T_BOOLEAN_AND
%left <token> '|'
%left <token> '^'
%left <token> '&'
%nonassoc T_IS_EQUAL T_IS_NOT_EQUAL T_IS_IDENTICAL T_IS_NOT_IDENTICAL
%nonassoc <token> '<' 
%nonassoc T_IS_SMALLER_OR_EQUAL '>' T_IS_GREATER_OR_EQUAL
%left T_SL T_SR
%left <token> '+' '-' '.'
%left <token> '*' '/' '%'
%right <token> '!'
%nonassoc T_INSTANCEOF
%right <token>  '~' 
%right T_INC T_DEC T_INT_CAST T_DOUBLE_CAST T_STRING_CAST T_ARRAY_CAST T_OBJECT_CAST T_BOOL_CAST T_UNSET_CAST 
%right <token> '@'
%right <token> '['
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
%token <token> T_END 0
%token <lexeme> T_ABSTRACT 502
%token <token> T_AND_EQUAL 503
%token <token> T_ARRAY 504
%token <token> T_ARRAY_CAST 505
%token <token> T_AS 506
%token <token> T_BAD_CHARACTER 507
%token <token> T_BOOL_CAST 508
%token <token> T_BOOLEAN_AND 509
%token <token> T_BOOLEAN_OR 510
%token <token> T_BREAK 511
%token <token> T_CALLABLE 512
%token <token> T_CASE 513
%token <token> T_CATCH 514
%token <token> T_CHARACTER 515
%token <lexeme> T_CLASS 516
%token <token> T_CLASS_C 517
%token <token> T_CLONE 518
%token <token> T_CLOSE_TAG 519
%token <lexeme> T_COMMENT 520
%token <token> T_CONCAT_EQUAL 521
%token <lexeme> T_CONST 522
%token <lexeme> T_CONSTANT_ENCAPSED_STRING 523
%token <token> T_CONTINUE 524
%token <token> T_CURLY_OPEN 525
%token <token> T_DEC 526
%token <token> T_DECLARE 527
%token <token> T_DEFAULT 528
%token <token> T_DIR 529
%token <token> T_DIV_EQUAL 530
%token <lexeme> T_DNUMBER 531
%token <token> T_DO 532
%token <lexeme> T_DOC_COMMENT 533
%token <token> T_DOLLAR_OPEN_CURLY_BRACES 534
%token <token> T_DOUBLE_ARROW 535
%token <token> T_DOUBLE_CAST 536
%token <token> T_ECHO 537
%token <token> T_ELSE 538
%token <token> T_ELSEIF 539
%token <token> T_EMPTY 540
%token <lexeme> T_ENCAPSED_AND_WHITESPACE 541
%token <token> T_ENDDECLARE 542
%token <token> T_ENDFOR 543
%token <token> T_ENDFOREACH 544
%token <token> T_END_HEREDOC 545
%token <token> T_ENDIF 546
%token <token> T_ENDSWITCH 547
%token <token> T_ENDWHILE 548
%token <token> T_EVAL 549
%token <token> T_EXIT 550
%token <token> T_EXTENDS 551
%token <token> T_FILE 552
%token <lexeme> T_FINAL 553
%token <token> T_FOR 554
%token <token> T_FOREACH 555
%token <token> T_FUNC_C 556
%token <lexeme> T_FUNCTION 557
%token <token> T_GLOBAL 558
%token <token> T_GOTO 559
%token <token> T_HALT_COMPILER 560
%token <token> T_IF 561
%token <token> T_IMPLEMENTS 562
%token <token> T_INC 563
%token <token> T_INCLUDE 564
%token <token> T_INCLUDE_ONCE 565
%token <token> T_INLINE_HTML 566
%token <token> T_INSTANCEOF 567
%token <token> T_INSTEADOF 568
%token <token> T_INT_CAST 569
%token <lexeme> T_INTERFACE 570
%token <token> T_IS_EQUAL 571
%token <token> T_IS_GREATER_OR_EQUAL 572
%token <token> T_IS_IDENTICAL 573
%token <token> T_IS_NOT_EQUAL 574
%token <token> T_IS_NOT_IDENTICAL 575
%token <token> T_ISSET 576
%token <token> T_IS_SMALLER_OR_EQUAL 577
%token <token> T_LINE 578
%token <token> T_LIST 579
%token <lexeme> T_LNUMBER 580
%token <token> T_LOGICAL_AND 581
%token <token> T_LOGICAL_OR 582
%token <token> T_LOGICAL_XOR 583
%token <token> T_METHOD_C 584
%token <token> T_MINUS_EQUAL 585
%token <token> T_MOD_EQUAL 586
%token <token> T_MUL_EQUAL 587
%token <token> T_NAMESPACE 588
%token <token> T_NEW 589
%token <token> T_NS_C 590
%token <token> T_NS_SEPARATOR 591
%token <token> T_NUM_STRING 592
%token <token> T_OBJECT_CAST 593
%token <token> T_OBJECT_OPERATOR 594
%token <token> T_OPEN_TAG 595
%token <token> T_OPEN_TAG_WITH_ECHO 596
%token <token> T_OR_EQUAL 597
%token <token> T_PAAMAYIM_NEKUDOTAYIM 598
%token <token> T_PLUS_EQUAL 599
%token <token> T_PRINT 600
%token <lexeme> T_PRIVATE 601
%token <lexeme> T_PROTECTED 602
%token <lexeme> T_PUBLIC 603
%token <token> T_REQUIRE 604
%token <token> T_REQUIRE_ONCE 605
%token <token> T_RETURN 606
%token <token> T_SL 607
%token <token> T_SL_EQUAL 608
%token <token> T_SR 609
%token <token> T_SR_EQUAL 610
%token <token> T_START_HEREDOC 611
%token <lexeme> T_STATIC 612
%token <lexeme> T_STRING 613
%token <token> T_STRING_CAST 614
%token <lexeme> T_STRING_VARNAME 615
%token <token> T_SWITCH 616
%token <token> T_THROW 617
%token <lexeme> T_TRAIT 618
%token <token> T_TRAIT_C 619
%token <token> T_TRY 620
%token <token> T_UNSET 621
%token <token> T_UNSET_CAST 622
%token <token> T_USE 623
%token <lexeme> T_VAR 624
%token <lexeme> T_VARIABLE 625
%token <token> T_WHILE 626
%token <token> T_WHITESPACE 627
%token <token> T_XOR_EQUAL 628

%token <token> '{' '}' '(' ')' ';' '`'  '$' '"'


%type <statementList> top_statement_list
%type <qualifiedName> namespace_name
%type <statementList> top_statement
%type <statementList> use_declarations
%type <namespaceUse> use_declaration
%type <statementList> constant_declaration
%type <statementList> inner_statement_list
%type <statementList> inner_statement
%type <statementList> statement
%type <statementList> unticked_statement
%type <statementList> additional_catches
%type <statementList> non_empty_additional_catches
%type <statementList> additional_catch
%type <unused> unset_variables
%type <unused> unset_variable
%type <statementList> function_declaration_statement
%type <statementList> class_declaration_statement
%type <isReference> is_reference
%type <statementList> unticked_function_declaration_statement
%type <statementList> unticked_class_declaration_statement
%type <classSymbol> class_entry_type
%type <classSymbol> extends_from
%type <classSymbol> interface_entry
%type <classSymbol> interface_extends_list
%type <classSymbol> implements_list
%type <classSymbol> interface_list
%type <unused> foreach_optional_arg
%type <statement> foreach_variable
%type <statementList> for_statement
%type <statementList> foreach_statement
%type <statementList> declare_statement
%type <unused> declare_list
%type <statementList> switch_case_list
%type <statementList> case_list
%type <unused> case_separator
%type <statementList> while_statement
%type <statementList> elseif_list
%type <statementList> new_elseif_list
%type <statementList> else_single
%type <statementList> new_else_single
%type <parametersList> parameter_list
%type <parametersList> non_empty_parameter_list
%type <qualifiedName> optional_class_type
%type <statementList> function_call_parameter_list
%type <statementList> non_empty_function_call_parameter_list
%type <unused> global_var_list
%type <unused> global_var
%type <unused> static_var_list
%type <statementList> class_statement_list
%type <statementList> class_statement
%type <classMemberSymbol> method_body
%type <classMemberSymbol> variable_modifiers
%type <classMemberSymbol> method_modifiers
%type <classMemberSymbol> non_empty_member_modifiers
%type <lexeme> member_modifier
%type <statementList> class_variable_declaration
%type <statementList> class_constant_declaration
%type <statementList> echo_expr_list
%type <statementList> for_expr
%type <statementList> non_empty_for_expr
%type <statement> expr_without_variable
%type <lexeme> function
%type <unused> lexical_vars
%type <unused> lexical_var_list
%type <statement> function_call
%type <qualifiedName> class_name
%type <qualifiedName> fully_qualified_class_name
%type <qualifiedName> class_name_reference
%type <qualifiedName> dynamic_class_name_reference
%type <unused> dynamic_class_name_variable_properties
%type <unused> dynamic_class_name_variable_property
%type <unused> exit_expr
%type <unused> backticks_expr
%type <unused> ctor_arguments
%type <statement> common_scalar
%type <unused> static_scalar
%type <unused> static_class_constant
%type <statement> scalar
%type <unused> static_array_pair_list
%type <isComma> possible_comma
%type <unused> non_empty_static_array_pair_list
%type <statement> expr
%type <statement> r_variable
%type <statement> w_variable
%type <statement> rw_variable
%type <statement> variable
%type <unused> variable_properties
%type <unused> variable_property
%type <unused> method_or_not
%type <lexeme> variable_without_objects
%type <unused> static_member
%type <unused> variable_class_name
%type <statement> base_variable_with_function_calls
%type <lexeme> base_variable
%type <lexeme> reference_variable
%type <lexeme> compound_variable
%type <unused> dim_offset
%type <lexeme> object_property
%type <lexeme> object_dim_list
%type <lexeme> variable_name
%type <unused> simple_indirect_reference
%type <unused> assignment_list
%type <unused> assignment_list_element
%type <statementList> array_pair_list
%type <statementList> non_empty_array_pair_list
%type <unused> encaps_list
%type <unused> encaps_var
%type <unused> encaps_var_offset
%type <statement> internal_functions_in_yacc
%type <unused> isset_variables
%type <unused> class_constant

%% /* Rules */

start:
	top_statement_list							{ observers.MakeAst($1); }
;

top_statement_list:
		top_statement_list top_statement		{ $$ = $1->PushAll($2); }
	|	/* empty */								{ AST_INIT($$, pelet::StatementListClass); }
;

namespace_name:
		T_STRING								{ AST_INIT_ARGS($$, pelet::QualifiedNameClass, $1); }
	|	namespace_name T_NS_SEPARATOR T_STRING	{ $$ = $1->AppendName($3); }
;

top_statement:
		statement								{ $$ = $1; }
	|	function_declaration_statement			{ $$ = $1; }
	|	class_declaration_statement				{ $$ = $1; }
	|	T_HALT_COMPILER '(' ')' ';'				{ $$ = 0; }
	|	T_NAMESPACE namespace_name ';'			{ pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, $2, $1);  
												  AST_INIT_ARGS($$, pelet::StatementListClass, decl);
												  observers.SetDeclaredNamespace($2); 
												}
	|	T_NAMESPACE namespace_name '{'			{ observers.SetDeclaredNamespace($2); }
		top_statement_list '}'					{ pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, $2, $1);
												  $$ = $5->PushFront(decl);
												}
	|	T_NAMESPACE '{'							{ observers.SetDeclaredNamespace(NULL); }
		top_statement_list '}'					{ 
												  pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, $1);
												  $$ = $4->PushFront(decl);
												}
	|	T_USE use_declarations ';'				{ $$ = pelet::NamespaceUseClass::SetStartingPos($2, $1); }
	|	constant_declaration ';'				{ AST_INIT_ARGS($$, pelet::StatementListClass, $1); }
;

use_declarations:
		use_declarations ',' 									
		use_declaration											{ $$ = $1->Push($3); }
	|	use_declaration											{ AST_INIT_ARGS($$, pelet::StatementListClass, $1); }
;

use_declaration:
		namespace_name											{ AST_INIT_ARGS($$, pelet::NamespaceUseClass, $1, NULL); 
																  observers.NamespaceUseAddScope($$);
																}
	|	namespace_name T_AS T_STRING							{ AST_INIT_ARGS($$, pelet::NamespaceUseClass, $1, $3); 
																  observers.NamespaceUseAddScope($$);
																}
	|	T_NS_SEPARATOR namespace_name							{ AST_INIT_ARGS($$, pelet::NamespaceUseClass, $2, NULL); 
																  observers.NamespaceUseAddScope($$);
																}
	|	T_NS_SEPARATOR namespace_name T_AS T_STRING				{ AST_INIT_ARGS($$, pelet::NamespaceUseClass, $2, $4); 
																  observers.NamespaceUseAddScope($$);
																}
;

constant_declaration:
		constant_declaration ',' T_STRING '=' static_scalar		{ pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																	$3, analyzer.GetLineNumber(), 
																	observers.GetDeclaredNamespace());
																  $$ = $1->Push(constStmt);
																}
	|	T_CONST T_STRING '=' static_scalar						{ pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																    $2, analyzer.GetLineNumber(),
																    observers.GetDeclaredNamespace());
																  AST_INIT_ARGS($$, pelet::StatementListClass, constStmt);																	
																}
;

inner_statement_list:
		inner_statement_list inner_statement			{ $$ = $1->PushAll($2); }
	|	/* empty */										{ AST_INIT($$, pelet::StatementListClass); }
;

inner_statement:
		statement							
	|	function_declaration_statement
	|	class_declaration_statement
	|	T_HALT_COMPILER '(' ')' ';'			{ $$ = 0; }
;

statement:
		unticked_statement				{ $$ = $1; }
	|	T_STRING ':'					{ AST_INIT($$, pelet::StatementListClass); }
;

unticked_statement:
		'{' inner_statement_list '}'																{ $$ = $2; }
	|	T_IF '(' expr ')' statement elseif_list else_single											{ AST_INIT_ARGS($$, pelet::StatementListClass, $5);
																									  $$->PushAll($6);
																									  $$->PushAll($7);
																									}
	|	T_IF '(' expr ')' ':' inner_statement_list new_elseif_list new_else_single T_ENDIF ';'		{ AST_INIT_ARGS($$, pelet::StatementListClass, $6);
																									  $$->PushAll($7);
																									  $$->PushAll($8);
																									}
	|	T_WHILE '(' expr  ')' while_statement														{ $$ = $5; }
	|	T_DO statement T_WHILE '(' expr ')' ';'														{ $$ = $2; }
	|	T_FOR
			'('
				for_expr
			';'
				for_expr
			';'
				for_expr
			')'
			for_statement																			{ $$ = $9; }
	|	T_SWITCH '(' expr ')' switch_case_list														{ $$ = $5; }
	|	T_BREAK ';'																					{ $$ = 0; };
	|	T_BREAK expr ';'																			{ $$ = 0; };
	|	T_CONTINUE ';'																				{ $$ = 0; };
	|	T_CONTINUE expr ';'																			{ $$ = 0; };
	|	T_RETURN ';'																				{ $$ = 0; };
	|	T_RETURN expr_without_variable ';'															{ $$ = 0; };
	|	T_RETURN variable ';'																		{ $$ = 0; };
	|	T_GLOBAL global_var_list ';'																{ $$ = 0; }
	|	T_STATIC static_var_list ';'																{ $$ = 0; }
	|	T_ECHO echo_expr_list ';'																	{ $$ = $2; }
	|	T_INLINE_HTML																				{ $$ = 0; }
	|	expr ';'																					{ AST_INIT_ARGS($$, pelet::StatementListClass, $1); }
	|	T_UNSET '(' unset_variables ')' ';'															{ $$ = 0; }
	|	T_FOREACH '(' variable T_AS								
		foreach_variable foreach_optional_arg ')'
		foreach_statement																			{ $$ = $8; }
	|	T_FOREACH '(' expr_without_variable T_AS
		variable foreach_optional_arg ')'
		foreach_statement																			{ $$ = $8; }
	|	T_DECLARE '(' declare_list ')' declare_statement											{ $$ = 0; }
	|	';'		/* empty statement */																{ $$ = 0; }
	|	T_TRY '{' inner_statement_list '}'															
		T_CATCH '(' fully_qualified_class_name T_VARIABLE ')'										
		'{' inner_statement_list '}'
		additional_catches																			{ AST_PUSH_ALL_MERGE($$, $3, $11);
																									  AST_PUSH_ALL_MERGE($$, $$, $13);
																									}
	|	T_THROW expr ';'																			{ AST_INIT_ARGS($$, pelet::StatementListClass, $2); }
	|	T_GOTO T_STRING ';'																			{ $$ = 0; }
;

additional_catches:
		non_empty_additional_catches				{ $$ = $1; }
	|	/* empty */									{ $$ = 0; }
;

non_empty_additional_catches:
		additional_catch												{ $$ = $1; }
	|	non_empty_additional_catches additional_catch					{ AST_PUSH_ALL_MERGE($$, $1, $2); }
;

additional_catch:
	T_CATCH '(' fully_qualified_class_name T_VARIABLE ')'				
	'{' inner_statement_list '}'										{ $$ =  $7; }
;

unset_variables:
		unset_variable							{ $$ = 0; }
	|	unset_variables ',' unset_variable		{ $$ = 0; }
;

unset_variable:
		variable								{ $$ = 0; }
;

function_declaration_statement:
		unticked_function_declaration_statement
;

class_declaration_statement:
		unticked_class_declaration_statement	
;

is_reference:
		/* empty */  						{ $$ = false; }
	|	'&'									{ $$ = true; }
;

unticked_function_declaration_statement:
		function is_reference T_STRING
		'(' parameter_list ')'				{ observers.SetCurrentClassName(NULL); observers.SetCurrentMemberName($3); }
		'{' inner_statement_list '}'		{ pelet::ClassMemberSymbolClass* member;
											  AST_INIT(member, pelet::ClassMemberSymbolClass);
											  member->MakeFunction($3, $2, $1, $5, $8, $10,
												observers.GetScope(), observers.GetDeclaredNamespace());
											  $$ = $9;
											  $$->PushFront(member);
											  observers.SetCurrentMemberName(NULL);
											}
;

unticked_class_declaration_statement:
		class_entry_type T_STRING			
		extends_from implements_list		{ observers.SetCurrentClassName($2); }	
		'{' class_statement_list '}'		{ pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll($2, $1, $3, $4, $8, observers.GetDeclaredNamespace());
											  $$ = $7->PushFront(clazz);
											  
											   /* at the end of a class, see if any assigned properties were not explicitly
											    * defined and it so make them as defined
											    * very important to use $$ as we want the returned to list to be modified
											    */
											  observers.DeclareAssignedProperties($$);
											  
																		  
											/*
											 * parse out property and method PHP docs
											 */
											observers.CreateMagicMethodsAndProperties($$, clazz);
											  
											  observers.SetCurrentClassName(NULL);
											}
	|	interface_entry T_STRING			
		interface_extends_list				{ observers.SetCurrentClassName($2); }	
		'{' class_statement_list '}'		{ pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll($2, $1, NULL, $3, $7, observers.GetDeclaredNamespace());
											  $$ = $6->PushFront(clazz);
											  observers.SetCurrentClassName(NULL);
											}
;

class_entry_type:
		T_CLASS					{ AST_INIT($$, pelet::ClassSymbolClass); $$->SetFlags($1, false, false, false, false); }
	|	T_ABSTRACT T_CLASS		{ AST_INIT($$, pelet::ClassSymbolClass); $$->SetFlags($1, true, false, false, false); }
	|	T_FINAL T_CLASS			{ AST_INIT($$, pelet::ClassSymbolClass); $$->SetFlags($1, false, true, false, false); }
;

extends_from:
		/* empty */						{ $$ = 0; }
	|	T_EXTENDS
		fully_qualified_class_name 		{ AST_INIT($$, pelet::ClassSymbolClass);
										  $$->SetExtends($2, observers.GetScope(), observers.GetDeclaredNamespace()); 
										}
;

interface_entry:
	T_INTERFACE				{ AST_INIT($$, pelet::ClassSymbolClass); $$->SetFlags($1, false, false, true, false); }
;

interface_extends_list:
		/* empty */			{ $$ = 0; }
	|	T_EXTENDS			
		interface_list		{ $$ = $2; }
;

implements_list:
		/* empty */			{ AST_INIT($$, pelet::ClassSymbolClass); $$->SetFlags(NULL, false, false, false, false); }
	|	T_IMPLEMENTS
		interface_list		{ $$ = $2; }
;

interface_list:
		fully_qualified_class_name							{ AST_INIT($$, pelet::ClassSymbolClass); 
															  $$->AddToImplements($1, observers.GetScope(), observers.GetDeclaredNamespace()); 
															}
	|	interface_list ','	fully_qualified_class_name		{ $$ = $1->AddToImplements($3, observers.GetScope(), observers.GetDeclaredNamespace()); }
;

foreach_optional_arg:
		/* empty */							{ $$ = 0; }
	|	T_DOUBLE_ARROW foreach_variable		{ $$ = 0; }
;

foreach_variable:
		variable			{ $$ = $1; }
	|	'&' variable		{ $$ = $2; }
;

for_statement:
		statement									{ $$ = $1; }
	|	':' inner_statement_list T_ENDFOR ';'		{ $$ = $2; }
;

foreach_statement:
		statement									{ $$ = $1; }
	|	':' inner_statement_list T_ENDFOREACH ';'	{ $$ = $2; }
;

declare_statement:
		statement									{ $$ = $1; }
	|	':' inner_statement_list T_ENDDECLARE ';'	{ $$ = $2; }
;

declare_list:
		T_STRING '=' static_scalar					{ $$ = 0; }
	|	declare_list ',' T_STRING '=' static_scalar	{ $$ = 0; }
;

switch_case_list:
		'{' case_list '}'									{ $$ = $2; }
	|	'{' ';' case_list '}'								{ $$ = $3; }
	|	':' case_list T_ENDSWITCH ';'						{ $$ = $2; }
	|	':' ';' case_list T_ENDSWITCH ';'					{ $$ = $3; }
;

case_list:
		/* empty */															{ $$ = 0; } 
	|	case_list T_CASE expr case_separator inner_statement_list			{ $$ = $5; }
	|	case_list T_DEFAULT case_separator inner_statement_list				{ $$ = $4; }
;

case_separator:
		':'		{ $$ = 0; }
	|	';'		{ $$ = 0; }
;

while_statement:
		statement											{ $$ = $1; }
	|	':' inner_statement_list T_ENDWHILE ';'				{ $$ = $2; }
;

elseif_list:
		/* empty */											{ $$ = 0; }
	|	elseif_list T_ELSEIF '(' expr ')' statement			{ AST_INIT($$, pelet::StatementListClass);
															  $$->PushAll($1)->Push($4)->PushAll($6);
															}
;

new_elseif_list:
		/* empty */																{ $$ = 0; }
	|	new_elseif_list T_ELSEIF '(' expr ')' ':' inner_statement_list			{ AST_INIT($$, pelet::StatementListClass);
																				  $$->PushAll($1)->Push($4)->PushAll($7);
																			  	}
;

else_single:
		/* empty */								{ $$ = 0; }
	|	T_ELSE statement						{ $$ = $2; }
;

new_else_single:
		/* empty */								{ $$ = 0; }
	|	T_ELSE ':' inner_statement_list			{ $$ = $3; }						
;

parameter_list:
		non_empty_parameter_list			{ $$ = $1; }
	|	/* empty */							{ $$ = 0; }
;

non_empty_parameter_list:
		optional_class_type T_VARIABLE														{ AST_INIT_ARGS($$, pelet::ParametersListClass, $1, $2, false, observers.GetScope(), observers.GetDeclaredNamespace()); }
	|	optional_class_type '&' T_VARIABLE													{ AST_INIT_ARGS($$, pelet::ParametersListClass, $1, $3, true, observers.GetScope(), observers.GetDeclaredNamespace()); }
	|	optional_class_type '&' T_VARIABLE '=' static_scalar								{ AST_INIT_ARGS($$, pelet::ParametersListClass, $1, $3, true, observers.GetScope(), observers.GetDeclaredNamespace()); }
	|	optional_class_type T_VARIABLE '=' static_scalar									{ AST_INIT_ARGS($$, pelet::ParametersListClass, $1, $2, false, observers.GetScope(), observers.GetDeclaredNamespace()); }
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE							{ $$ = $1->Append($3, $4, false, observers.GetScope(), observers.GetDeclaredNamespace()); } 
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE						{ $$ = $1->Append($3, $5, true, observers.GetScope(), observers.GetDeclaredNamespace()); }
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE	'=' static_scalar	{ $$ = $1->Append($3, $5, true, observers.GetScope(), observers.GetDeclaredNamespace()); }
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE '=' static_scalar		{ $$ = $1->Append($3, $4, false, observers.GetScope(), observers.GetDeclaredNamespace()); }
;

optional_class_type:
		/* empty */						{ $$ = 0; }
	|	fully_qualified_class_name		{ $$ = $1; }
	|	T_ARRAY							{ AST_INIT_ARGS($$, pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("array")); }
;

function_call_parameter_list:
		non_empty_function_call_parameter_list		{ $$ = $1; }
	|	/* empty */									{ $$ =  0; }
;

non_empty_function_call_parameter_list:
		expr_without_variable												{  if (observers.DoCaptureCallArguments) { 
																				 AST_INIT_ARGS($$, pelet::StatementListClass, $1); 
																			   }
																			   else {
																				 $$ = 0;
																			   }
																			}
	|	variable															{ if (observers.DoCaptureCallArguments) { 
																				 AST_INIT_ARGS($$, pelet::StatementListClass, $1); 
																			   }
																			   else {
																				 $$ = 0;
																			   }
																			}
	|	'&' w_variable														{ if (observers.DoCaptureCallArguments) { 
																				 AST_INIT_ARGS($$, pelet::StatementListClass, $2); 
																			   }
																			   else {
																				 $$ = 0;
																			   }
																			}
	|	non_empty_function_call_parameter_list ',' expr_without_variable	{ $$ = $1 ? $1->Push($3) : 0; }
	|	non_empty_function_call_parameter_list ',' variable					{ $$ = $1 ? $1->Push($3) : 0; }
	|	non_empty_function_call_parameter_list ',' '&' w_variable			{ $$ = $1 ? $1->Push($4) : 0; }
;

global_var_list:
		global_var_list ',' global_var	
	|	global_var						
;

global_var:
		T_VARIABLE			{ $$ = 0; }
	|	'$' r_variable		{ $$ = 0; }
	|	'$' '{' expr '}'	{ $$ = 0; }
;

static_var_list:
		static_var_list ',' T_VARIABLE							{ $$ = 0; }
	|	static_var_list ',' T_VARIABLE '=' static_scalar		{ $$ = 0; }
	|	T_VARIABLE												{ $$ = 0; }
	|	T_VARIABLE '=' static_scalar							{ $$ = 0; }
;

class_statement_list:
		class_statement_list class_statement				{ AST_PUSH_ALL_MERGE($$, $1, $2); }
	|	/* empty */											{ AST_INIT($$, pelet::StatementListClass); }
;
											
class_statement:
		variable_modifiers class_variable_declaration ';'	{ $$ = pelet::ClassMemberSymbolClass::MakeVariables($2, $1, observers.GetScope(), observers.GetDeclaredNamespace()); }
	|	class_constant_declaration ';'						{ $$ = $1; }
	|	method_modifiers function is_reference T_STRING
		'('	parameter_list  ')'								{ observers.SetCurrentMemberName($4); }
		method_body											{ pelet::ClassMemberSymbolClass* memberSymbol;
															  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
															  memberSymbol->MakeMethod($4, $1, $3, $2, $6, $9,
															    observers.GetScope(), observers.GetDeclaredNamespace()); 															  
															  AST_INIT($$, pelet::StatementListClass);
															  $$->PushFront(memberSymbol);
															  $$->PushAll(&($9->MethodStatements));
															  observers.SetCurrentMemberName(NULL);
															}
;

method_body:
		';' /* abstract method */			{ AST_INIT($$, pelet::ClassMemberSymbolClass); $$->MakeBody(0, $1, $1); }
	|	'{' inner_statement_list '}'		{ AST_INIT($$, pelet::ClassMemberSymbolClass); $$->MakeBody($2, $1, $3); }
;

variable_modifiers:
		non_empty_member_modifiers		{ $$ = $1; }
	|	T_VAR						 	{ AST_INIT($$, pelet::ClassMemberSymbolClass);
										  $$->MakeAsPublicVariable($1, observers.GetScope(), observers.GetDeclaredNamespace()); 
										}
;

method_modifiers:
		/* empty */						{ AST_INIT($$, pelet::ClassMemberSymbolClass); $$->Make(NULL, observers.GetScope(), observers.GetDeclaredNamespace()); }
	|	non_empty_member_modifiers		{ $$ = $1; }
;

non_empty_member_modifiers:
		member_modifier									{ AST_INIT($$, pelet::ClassMemberSymbolClass); $$->Make($1, observers.GetScope(), observers.GetDeclaredNamespace()); }
	|	non_empty_member_modifiers member_modifier		{ $$ = $1->SetModifier($2); }
;

member_modifier:
		T_PUBLIC				
	|	T_PROTECTED				
	|	T_PRIVATE				
	|	T_STATIC		{ $$ = $1; }		
	|	T_ABSTRACT				
	|	T_FINAL					
;

class_variable_declaration:
		class_variable_declaration ',' T_VARIABLE						{ pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable($3, $3, false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  $$ = $1->Push(memberSymbol);
																		}
	|	class_variable_declaration ',' T_VARIABLE '=' static_scalar		{ pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable($3, $3, false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  $$ = $1->Push(memberSymbol);
																		}
	|	T_VARIABLE														{ pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable($1, $1, false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS($$, pelet::StatementListClass, memberSymbol);
																		}
	|	T_VARIABLE '=' static_scalar									{ pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable($1, $1, false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS($$, pelet::StatementListClass, memberSymbol);
																		}
;

class_constant_declaration:
		class_constant_declaration ',' 
		T_STRING '=' static_scalar			{ pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable($3, $3, true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  $$ = $1->Push(memberSymbol);
											}
	|	T_CONST T_STRING '=' static_scalar  { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable($2, $1, true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  AST_INIT_ARGS($$, pelet::StatementListClass, memberSymbol);
											}
;

echo_expr_list:
		echo_expr_list ',' expr		{ $$ = $1->Push($3); }
	|	expr						{ AST_INIT_ARGS($$, pelet::StatementListClass, $1); }
;

for_expr:
		/* empty */					{ $$ = 0; }
	|	non_empty_for_expr			{ $$ = $1; }
;

non_empty_for_expr:
		non_empty_for_expr ',' expr		{ $$ = $1->Push($3); }
	|	expr							{ AST_INIT_ARGS($$, pelet::StatementListClass, $1); }
;

expr_without_variable:
		T_LIST '('  assignment_list ')' '=' expr							{ $$ = $6; }
	|	variable '=' expr													{ 
																			  /* 
																			   * since this parser only looks for defines or property assignments
																			   * and there could never be both in one expression we can return
																			   * just one
																			   */
																			  if ($1 && pelet::StatementClass::PROPERTY_DECLARATION == $1->Type) {
																				$$ = $1;
																			  }
																			  else {
																				$$ = $3;
																			  }
																			 }
	|	variable '=' '&' variable											{ $$ = 0; 
																			  if ($1 && pelet::StatementClass::PROPERTY_DECLARATION == $1->Type) {
																				$$ = $1;
																			  }
																			}
	|	variable '=' '&' T_NEW class_name_reference  ctor_arguments			{ $$ = 0; 
																			  if ($1 && pelet::StatementClass::PROPERTY_DECLARATION == $1->Type) {
																				$$ = $1;
																			  }	
																			}
	|	T_NEW class_name_reference  ctor_arguments							{ $$ = 0; }
	|	T_CLONE expr														{ $$ = 0; }
	|	variable T_PLUS_EQUAL expr 											{ $$ = 0; }
	|	variable T_MINUS_EQUAL expr											{ $$ = 0; }
	|	variable T_MUL_EQUAL expr											{ $$ = 0; }
	|	variable T_DIV_EQUAL expr											{ $$ = 0; }
	|	variable T_CONCAT_EQUAL expr										{ $$ = 0; }
	|	variable T_MOD_EQUAL expr											{ $$ = 0; }
	|	variable T_AND_EQUAL expr											{ $$ = 0; }
	|	variable T_OR_EQUAL expr 											{ $$ = 0; }
	|	variable T_XOR_EQUAL expr 											{ $$ = 0; }
	|	variable T_SL_EQUAL expr											{ $$ = 0; }
	|	variable T_SR_EQUAL expr											{ $$ = 0; }
	|	rw_variable T_INC													{ $$ = 0; }
	|	T_INC rw_variable													{ $$ = 0; }
	|	rw_variable T_DEC													{ $$ = 0; }
	|	T_DEC rw_variable													{ $$ = 0; }
	|	expr T_BOOLEAN_OR  expr												{ $$ = 0; }
	|	expr T_BOOLEAN_AND  expr											{ $$ = 0; }
	|	expr T_LOGICAL_OR  expr												{ $$ = 0; }
	|	expr T_LOGICAL_AND  expr											{ $$ = 0; }
	|	expr T_LOGICAL_XOR expr												{ $$ = 0; }
	|	expr '|' expr														{ $$ = 0; }
	|	expr '&' expr														{ $$ = 0; }
	|	expr '^' expr														{ $$ = 0; }
	|	expr '.' expr 														{ $$ = 0; }
	|	expr '+' expr 														{ $$ = 0; }
	|	expr '-' expr 														{ $$ = 0; }
	|	expr '*' expr														{ $$ = 0; }
	|	expr '/' expr														{ $$ = 0; }
	|	expr '%' expr 														{ $$ = 0; }
	| 	expr T_SL expr														{ $$ = 0; }
	|	expr T_SR expr														{ $$ = 0; }
	|	'+' expr %prec T_INC												{ $$ = 0; }
	|	'-' expr %prec T_INC												{ $$ = 0; }
	|	'!' expr															{ $$ = 0; }
	|	'~' expr															{ $$ = 0; }
	|	expr T_IS_IDENTICAL expr											{ $$ = 0; }
	|	expr T_IS_NOT_IDENTICAL expr										{ $$ = 0; }
	|	expr T_IS_EQUAL expr												{ $$ = 0; }
	|	expr T_IS_NOT_EQUAL expr 											{ $$ = 0; }
	|	expr '<' expr 														{ $$ = 0; }
	|	expr T_IS_SMALLER_OR_EQUAL expr										{ $$ = 0; }
	|	expr '>' expr 														{ $$ = 0; }
	|	expr T_IS_GREATER_OR_EQUAL expr										{ $$ = 0; }
	|	expr T_INSTANCEOF class_name_reference								{ $$ = 0; }
	|	'(' expr ')' 														{ $$ = $2; }
	|	expr '?' 
		expr ':' 
		expr																{ $$ = 0; }
	|	expr '?' ':' 
		expr																{ $$ = 0; }
	|	internal_functions_in_yacc											{ $$ = $1; }
	|	T_INT_CAST expr 													{ $$ = 0; }
	|	T_DOUBLE_CAST expr 													{ $$ = 0; }
	|	T_STRING_CAST expr													{ $$ = 0; }
	|	T_ARRAY_CAST expr 													{ $$ = 0; }
	|	T_OBJECT_CAST expr 													{ $$ = 0; }
	|	T_BOOL_CAST expr													{ $$ = 0; }
	|	T_UNSET_CAST expr													{ $$ = 0; }
	|	T_EXIT exit_expr													{ $$ = 0; }
	|	'@'  expr															{ $$ = $2; }
	|	scalar																{ $$ = $1; }
	|	T_ARRAY '(' array_pair_list ')'										{ $$ = 0; }
	|	'`' backticks_expr '`'												{ $$ = 0; }
	|	T_PRINT expr														{ $$ = 0; }
	|	function is_reference '(' 
			parameter_list ')' lexical_vars '{' inner_statement_list '}'	{ $$ = 0; }
;

function:
	T_FUNCTION 
;

lexical_vars:
		/* empty */								{ $$ = 0; }
	|	T_USE '(' lexical_var_list ')'			{ $$ = 0; }
;

lexical_var_list:
		lexical_var_list ',' T_VARIABLE			{ $$ = 0; }
	|	lexical_var_list ',' '&' T_VARIABLE		{ $$ = 0; }
	|	T_VARIABLE								{ $$ = 0; }
	|	'&' T_VARIABLE							{ $$ = 0; }
;

function_call:
		namespace_name '('																{ if ($1->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true;
																							observers.DoCaptureCallArguments = true;
																						  }
																						}
		function_call_parameter_list	')'												{ /* this parser is only interested in calls to the define function */
																						  if ($1->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
																							pelet::ConstantStatementClass* constStmt;
																							AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, $1, $4, analyzer.GetLineNumber());
																							$$ = constStmt;
																						  }
																						  else {
																							$$ = 0;
																						  }
																						  observers.DoCaptureScalars = false;	
																						  observers.DoCaptureCallArguments = false;
																						}
	|	T_NAMESPACE T_NS_SEPARATOR 														
		namespace_name '(' 																
		function_call_parameter_list ')' 												{ $$ = 0; }
	|	T_NS_SEPARATOR namespace_name '(' 												{ if ($2->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true; 
																							observers.DoCaptureCallArguments = true;
																						  }
																						}
				function_call_parameter_list ')'										{ /* this parser is only interested in calls to the define function */
																						  if ($2->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
																							pelet::ConstantStatementClass* constStmt;
																							AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, $2, $5, analyzer.GetLineNumber());
																							$$ = constStmt;
																						  }
																						  else {
																							$$ = 0;
																						  }	
																						  observers.DoCaptureScalars = false;
																						  observers.DoCaptureCallArguments = false;
																						}
	|	class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING '(' 
			function_call_parameter_list')'												{ $$ = 0; }
	|	class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects '('
			function_call_parameter_list ')'											{ $$ = 0; }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING '('
			function_call_parameter_list ')'											{ $$ = 0; }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects '('
			function_call_parameter_list ')'											{ $$ = 0; }
	|	variable_without_objects  '('
			function_call_parameter_list ')'											{ $$ = 0; }       
;

class_name:
		T_STATIC													{ $$ = 0; }
	|	namespace_name												{ $$ = $1; }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name					{ $$ = $3->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); }
	|	T_NS_SEPARATOR namespace_name								{ $$ = $2->MakeAbsolute(); }
;

fully_qualified_class_name:
		namespace_name												{ $$ = $1; }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name					{ $$ = $3->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); }
	|	T_NS_SEPARATOR namespace_name								{ $$ = $2->MakeAbsolute(); }
;

class_name_reference:
		class_name													{ $$ = $1; }
	|	dynamic_class_name_reference								{ $$ = $1; }
;

dynamic_class_name_reference:
		base_variable T_OBJECT_OPERATOR
			object_property dynamic_class_name_variable_properties		{ $$ = 0; }
	|	base_variable													{ $$ = 0; }
;


dynamic_class_name_variable_properties:
		dynamic_class_name_variable_properties dynamic_class_name_variable_property		{ $$ = 0; }
	|	/* empty */																		{ $$ = 0; }
;

dynamic_class_name_variable_property:
		T_OBJECT_OPERATOR object_property		{ $$ = 0; }
;

exit_expr:
		/* empty */			{ $$ = 0; }
	|	'(' ')'				{ $$ = 0; }
	|	'(' expr ')'		{ $$ = 0; }
;

backticks_expr:
		/* empty */						{ $$ = 0; }
	|	T_ENCAPSED_AND_WHITESPACE		{ $$ = 0; }
	|	encaps_list						{ $$ = 0; }
;


ctor_arguments:
		/* empty */									{ $$ = 0; }
	|	'(' function_call_parameter_list ')'		{ $$ = 0; }
;


common_scalar:
		T_LNUMBER 															{ if (observers.DoCaptureScalars) {
																				pelet::ScalarStatementClass* scalarStmt;
																				AST_INIT_ARGS(scalarStmt, pelet::ScalarStatementClass, $1);
																				$$ = scalarStmt;
																			  }
																			  else { 
																			    $$ = 0; 
																			  }
																			}
	|	T_DNUMBER 															{ 
																			  if (observers.DoCaptureScalars) {
																				pelet::ScalarStatementClass* scalarStmt;
																				AST_INIT_ARGS(scalarStmt, pelet::ScalarStatementClass, $1);
																				$$ = scalarStmt;
																			  }
																			  else { 
																			    $$ = 0; 
																			  }
																			}
	|	T_CONSTANT_ENCAPSED_STRING											{ if (observers.DoCaptureScalars) {
																				pelet::ScalarStatementClass* scalarStmt;
																				AST_INIT_ARGS(scalarStmt, pelet::ScalarStatementClass, $1);
																				$$ = scalarStmt;
																			  }
																			  else { 
																			    $$ = 0; 
																			  }
																			}
	|	T_LINE 																{ $$ = 0; }
	|	T_FILE 																{ $$ = 0; }
	|	T_DIR   															{ $$ = 0; }
	|	T_CLASS_C															{ $$ = 0; }
	|	T_METHOD_C															{ $$ = 0; }
	|	T_FUNC_C															{ $$ = 0; }
	|	T_NS_C																{ $$ = 0; }
	|	T_START_HEREDOC T_ENCAPSED_AND_WHITESPACE T_END_HEREDOC				{ $$ = 0; }
	|	T_START_HEREDOC T_END_HEREDOC										{ $$ = 0; }
;


static_scalar: /* compile-time evaluated scalars */
		common_scalar									{ $$ = 0; }
	|	namespace_name 									{ $$ = 0; }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name		{ $$ = 0; }
	|	T_NS_SEPARATOR namespace_name					{ $$ = 0; }
	|	'+' static_scalar								{ $$ = 0; }
	|	'-' static_scalar								{ $$ = 0; }
	|	T_ARRAY '(' static_array_pair_list ')'			{ $$ = 0; }
	|	static_class_constant							{ $$ = 0; }
;

static_class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING	{ $$ = 0; }
;

scalar:
		T_STRING_VARNAME							{ $$ = 0; }	
	|	class_constant								{ $$ = 0; }
	|	namespace_name								{ $$ = 0; }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name	{ $$ = 0; }
	|	T_NS_SEPARATOR namespace_name				{ $$ = 0; }
	|	common_scalar								{ $$ = $1; }
	|	'"' encaps_list '"' 						{ $$ = 0; }
	|	T_START_HEREDOC encaps_list T_END_HEREDOC	{ $$ = 0; }
;


static_array_pair_list:
		/* empty */												{ $$ = 0; }
	|	non_empty_static_array_pair_list possible_comma			{ $$ = 0; }
;

possible_comma:
		/* empty */			{ $$ = 0; }
	|	','					{ $$ = 0; }
;

non_empty_static_array_pair_list:
		non_empty_static_array_pair_list ',' static_scalar T_DOUBLE_ARROW static_scalar	
	|	non_empty_static_array_pair_list ',' static_scalar 
	|	static_scalar T_DOUBLE_ARROW static_scalar 
	|	static_scalar 
;

expr:
		r_variable					{ $$ = $1; }
	|	expr_without_variable		{ $$ = $1; }
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
		T_OBJECT_OPERATOR						{ if ($1 && pelet::StatementClass::PROPERTY_DECLARATION == $1->Type) {
													observers.DoCaptureProperties = true;	
												  }
												}
		object_property
		method_or_not							{ observers.DoCaptureProperties = false; }
		variable_properties						{ 
													if ($1 && pelet::StatementClass::PROPERTY_DECLARATION == $1->Type && $4) {
														AST_INIT($$, pelet::ClassMemberSymbolClass);
														
														/* need to cast because we are returning a statement pointer from this rule */
														(( pelet::ClassMemberSymbolClass*)$$)->MakeVariable($4, $4, false, $4->Pos, 
														observers.GetScope(), observers.GetDeclaredNamespace());
													}
													else {
														$$ = 0; 
													}													
												}
	|	base_variable_with_function_calls		{ $$ = $1; }
;

variable_properties:
		variable_properties variable_property	{ $$ = 0; }
	|	/* empty */								{ $$ = 0; }
;


variable_property:
		T_OBJECT_OPERATOR object_property  method_or_not		{ $$ = 0; }
;

method_or_not:
		'(' function_call_parameter_list ')'		{ $$ = 0; }
	|	/* empty */									{ $$ = 0; }
;

variable_without_objects:
		reference_variable								
	|	simple_indirect_reference reference_variable	{ $$ = 0; }
;

static_member:
		class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects				{ $$ = 0; }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects		{ $$ = 0; }

;

variable_class_name:
		reference_variable			{ $$ = 0; }
;

base_variable_with_function_calls:
		base_variable				{ if ($1 && $1->Lexeme.caseCompare(UNICODE_STRING_SIMPLE("$this"), 0) == 0) {
										AST_INIT($$, pelet::ClassMemberSymbolClass);
										
										/* need to cast because we are returning a statement pointer from this rule */
										(( pelet::ClassMemberSymbolClass*)$$)->MakeAsPublicVariable($1, observers.GetScope(), observers.GetDeclaredNamespace());
									  }
									  else {
										$$ = 0; 
									  }
									}
	|	function_call				{ $$ = $1; }
;

base_variable:
		reference_variable									{ $$ = $1; }
	|	simple_indirect_reference reference_variable		{ $$ = 0; }
	|	static_member										{ $$ = 0; }
;

reference_variable:
		reference_variable '[' dim_offset ']'		{ $$ = $1; }
	|	reference_variable '{' expr '}'				{ $$ = $1; }
	|	compound_variable							{ $$ = $1; }


compound_variable:
		T_VARIABLE				{ $$ = $1;	}
	|	'$' '{' expr '}'		{ $$ = 0; }
;

dim_offset:
		/* empty */			{ $$ = 0; }
	|	expr				{ $$ = 0; }
;

object_property:
		object_dim_list						{ $$ = $1; }
	|	variable_without_objects			{ $$ = $1; }
;

object_dim_list:
		object_dim_list '[' dim_offset ']'	 { $$ = $1; }
	|	object_dim_list '{' expr '}'		 { $$ = $1; }
	|	variable_name						 { $$ = $1; }
;

variable_name:
		T_STRING			{ $$ = observers.DoCaptureProperties ? ($1) : 0; }
	|	'{' expr '}'		{ $$ = 0; }
;

simple_indirect_reference:
		'$'									{ $$ = 0; }
	|	simple_indirect_reference '$'		{ $$ = 0; }
;

assignment_list:
		assignment_list ',' assignment_list_element
	|	assignment_list_element
;


assignment_list_element:
		variable								{ $$ = 0; }
	|	T_LIST '('  assignment_list ')'			{ $$ = 0; }
	|	/* empty */								{ $$ = 0; }
;

array_pair_list:
		/* empty */									{ $$ = 0; }
	|	non_empty_array_pair_list possible_comma	{ $$ = 0; }
;

non_empty_array_pair_list:
		non_empty_array_pair_list ',' expr T_DOUBLE_ARROW expr					{ $$ = 0; }
	|	non_empty_array_pair_list ',' expr										{ $$ = 0; }
	|	expr T_DOUBLE_ARROW expr												{ $$ = 0; }
	|	expr 																	{ $$ = 0; }
	|	non_empty_array_pair_list ',' expr T_DOUBLE_ARROW '&' w_variable		{ $$ = 0; }
	|	non_empty_array_pair_list ',' '&' w_variable							{ $$ = 0; }
	|	expr T_DOUBLE_ARROW '&' w_variable										{ $$ = 0; }
	|	'&' w_variable 															{ $$ = 0; }
;

encaps_list:
		encaps_list encaps_var								{ $$ = 0; }
	|	encaps_list T_ENCAPSED_AND_WHITESPACE				{ $$ = 0; }
	|	encaps_var											{ $$ = 0; }
	|	T_ENCAPSED_AND_WHITESPACE encaps_var				{ $$ = 0; }
;

encaps_var:
		T_VARIABLE														{ $$ = 0; }
	|	T_VARIABLE '['  encaps_var_offset ']'							{ $$ = 0; }
	|	T_VARIABLE T_OBJECT_OPERATOR T_STRING							{ $$ = 0; }
	|	T_DOLLAR_OPEN_CURLY_BRACES expr '}'								{ $$ = 0; }
	|	T_DOLLAR_OPEN_CURLY_BRACES T_STRING_VARNAME '[' expr ']' '}'	{ $$ = 0; }
	|	T_CURLY_OPEN variable '}'										{ $$ = 0; }
;

encaps_var_offset:
		T_STRING			{ $$ = 0; }
	|	T_NUM_STRING		{ $$ = 0; }
	|	T_VARIABLE			{ $$ = 0; }
;

internal_functions_in_yacc:
		T_ISSET '(' isset_variables ')'			{ $$ = 0; }
	|	T_EMPTY '(' variable ')'				{ $$ = 0; }
	|	T_INCLUDE								{ observers.DoCaptureScalars = true; }
		expr  									{ pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, $3, analyzer.GetLineNumber());
												  $$ = includeStmt;
												  observers.DoCaptureScalars = false;  
												} 
	|	T_INCLUDE_ONCE							{ observers.DoCaptureScalars = true; }
		expr 									{ pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, $3, analyzer.GetLineNumber());
												  $$ = includeStmt;
												  observers.DoCaptureScalars = false;  
												} 
	|	T_EVAL '(' expr ')' 					{ $$ = 0; }
	|	T_REQUIRE								{ observers.DoCaptureScalars = true; }
		expr  									{ pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, $3, analyzer.GetLineNumber());
												  $$ = includeStmt;
												  observers.DoCaptureScalars = false;  
												} 
	|	T_REQUIRE_ONCE							{ observers.DoCaptureScalars = true; }
		expr 									{ pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, $3, analyzer.GetLineNumber());
												  $$ = includeStmt;
												  observers.DoCaptureScalars = false;  
												}	 
;

isset_variables:
		variable 							{ $$ = 0; }
	|	isset_variables ','  variable		{ $$ = 0; }
;

class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING					{ $$ = 0; }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING			{ $$ = 0; }
;

%%
