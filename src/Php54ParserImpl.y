%{
	
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/ParserObserverClass.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE pelet::ParserType

// so that both bison parses call the same lex function
#define php54lex NextSemanticValue

// so that both bison parses call the same error function
#define php54error GrammarError

%}

%parse-param { pelet::LexicalAnalyzerClass &analyzer }
%parse-param { pelet::ObserverQuadClass& observers }
%lex-param  { pelet::LexicalAnalyzerClass &analyzer }
%lex-param { pelet::ObserverQuadClass& observers }

%define api.pure
%expect 3
%error-verbose
%name-prefix "php54"
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

%type <statementList> top_statement_list
%type <qualifiedName> namespace_name
%type <statementList> top_statement
%type <statementList> use_declarations
%type <statementList> use_declaration
%type <statementList> constant_declaration
%type <statementList> inner_statement_list
%type <statementList> inner_statement
%type <statementList> statement
%type <statementList> unticked_statement
%type <statementList> additional_catches
%type <statementList> non_empty_additional_catches
%type <statementList> additional_catch
%type <statementList> unset_variables
%type <variable> unset_variable
%type <statementList> function_declaration_statement
%type <statementList> class_declaration_statement
%type <isMethod> is_reference
%type <statementList> unticked_function_declaration_statement
%type <statementList> unticked_class_declaration_statement
%type <classSymbol> class_entry_type
%type <classSymbol> extends_from
%type <classSymbol> interface_entry
%type <classSymbol> interface_extends_list
%type <classSymbol> implements_list
%type <classSymbol> interface_list
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
%type <qualifiedName> optional_class_type
%type <statementList> function_call_parameter_list
%type <statementList> non_empty_function_call_parameter_list
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
%type <expression> chaining_method_or_property
%type <expression> chaining_dereference
%type <expression> chaining_instance_call
%type <expression> instance_call
%type <expression> new_expr
%type <expression> expr_without_variable
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
%type <semanticValue> ctor_arguments
%type <expression> common_scalar
%type <expression> static_scalar
%type <expression> static_class_constant
%type <expression> scalar
%type <semanticValue> static_array_pair_list
%type <isComma> possible_comma
%type <semanticValue> non_empty_static_array_pair_list
%type <expression> expr
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
%type <expression> class_constant

%% /* Rules */

start:
	top_statement_list						{ observers.MakeAst($1); }
;

top_statement_list:
		top_statement_list top_statement	{ $$ = observers.StatementListMerge($1, $2); }
	|	/* empty */							{ $$ = observers.StatementListMake(); }
;

namespace_name:
		T_STRING 								{ $$ = observers.NamespaceNameMake($1); }
	|	namespace_name T_NS_SEPARATOR T_STRING 	{ $$ = observers.NamespaceNameAppend($1, $3); }
;

top_statement:
		statement								{ $$ = $1; }
	|	function_declaration_statement			{ $$ = $1; }
	|	class_declaration_statement				{ $$ = $1; }
	|	T_HALT_COMPILER '(' ')' ';'				{ $$ = observers.StatementListMake(); }
	|	T_NAMESPACE namespace_name ';'			{ $$ = observers.NamespaceDeclarationFound($2, $1); observers.SetCurrentNamespace($2); }
	|	T_NAMESPACE namespace_name '{'			{ observers.SetCurrentNamespace($2); }
		top_statement_list '}'					{ $$ = observers.NamespaceDeclarationFound($2, $1); $$ = observers.StatementListMerge($$, $5); }
	|	T_NAMESPACE '{'							{ observers.SetCurrentNamespace(NULL); }
		top_statement_list '}'					{  $$ = observers.NamespaceGlobalDeclarationFound($1); $$ = observers.StatementListMerge($$, $4); }
	|	T_USE use_declarations ';'				{ $$ = observers.NamespaceUseSetStartingPos($2, $1); }
	|	constant_declaration ';'				{ $$ = $1; }
;

use_declarations:
		use_declarations ',' 									
		use_declaration											{ $$ = observers.StatementListMerge($1, $3); }
	|	use_declaration											{ $$ = $1; }
;

use_declaration:
		namespace_name											{ $$ = observers.NamespaceUse($1); }
	|	namespace_name T_AS T_STRING							{ $$ = observers.NamespaceUseAlias($1, $3); }
	|	T_NS_SEPARATOR namespace_name							{ $$ = observers.NamespaceUseAbsolute($2); }
	|	T_NS_SEPARATOR namespace_name T_AS T_STRING				{ $$ = observers.NamespaceUseAbsoluteAlias($2, $4); }
;

constant_declaration:
		constant_declaration ',' T_STRING '=' static_scalar		{ $$ = observers.StatementListMerge($1, observers.ConstantMake($3, analyzer.GetLineNumber())); }
	|	T_CONST T_STRING '=' static_scalar						{ $$ = observers.ConstantMake($2, analyzer.GetLineNumber()); }
;

inner_statement_list:
		inner_statement_list inner_statement			{ $$ = observers.StatementListMerge($1, $2); }
	|	/* empty */										{ $$ = observers.StatementListMake(); }
;

inner_statement:
		statement							
	|	function_declaration_statement
	|	class_declaration_statement
	|	T_HALT_COMPILER '(' ')' ';'			{ $$ = observers.StatementListNil(); }
;

statement:
		unticked_statement
	|	T_STRING ':'				{ $$ = observers.StatementListNil(); }
;

unticked_statement:
		'{' inner_statement_list '}'																{ $$ = $2; }
	|	T_IF '(' expr ')' statement elseif_list else_single											{ $$ = observers.StatementListMakeAndAppend($3);
																									  $$ = observers.StatementListMerge($$, $5); 
																									  $$ = observers.StatementListMerge($$, $6);
																									  $$ = observers.StatementListMerge($$, $7); }
	|	T_IF '(' expr ')' ':' inner_statement_list new_elseif_list new_else_single T_ENDIF ';'		{ $$ = observers.StatementListMakeAndAppend($3);
																									  $$ = observers.StatementListMerge($$, $6);
																									  $$ = observers.StatementListMerge($$, $7);
																									  $$ = observers.StatementListMerge($$, $8); }
	|	T_WHILE '(' expr  ')' while_statement														{ $$ = observers.StatementListAppend($5, $3); }
	|	T_DO statement T_WHILE '(' expr ')' ';'														{ $$ = observers.StatementListAppend($2, $5); }
	|	T_FOR
			'('
				for_expr
			';'
				for_expr
			';'
				for_expr
			')'
			for_statement																			{ $$ = observers.StatementListMerge($3, $9); }
	|	T_SWITCH '(' expr ')' switch_case_list														{ $$ = observers.StatementListAppend($5, $3); }
	|	T_BREAK ';'																					{ $$ = observers.StatementListNil(); };
	|	T_BREAK expr ';'																			{ $$ = observers.StatementListMakeAndAppend($2); };
	|	T_CONTINUE ';'																				{ $$ = observers.StatementListNil(); };
	|	T_CONTINUE expr ';'																			{ $$ = observers.StatementListMakeAndAppend($2); };
	|	T_RETURN ';'																				{ $$ = observers.StatementListNil(); };
	|	T_RETURN expr_without_variable ';'															{ $$ = observers.StatementListMakeAndAppend($2); };
	|	T_RETURN variable ';'																		{ $$ = observers.StatementListMakeAndAppend($2); };
	|	T_GLOBAL global_var_list ';'																{ $$ = $2; }
	|	T_STATIC static_var_list ';'																{ $$ = $2; }
	|	T_ECHO echo_expr_list ';'																	{ $$ = $2; }
	|	T_INLINE_HTML																				{ $$ = observers.StatementListNil(); }
	|	expr ';'																					{ $$ = observers.StatementListMakeAndAppend($1); }
	|	T_UNSET '(' unset_variables ')' ';'															{ $$ = observers.StatementListNil(); }
	|	T_FOREACH '(' variable T_AS								
		foreach_variable foreach_optional_arg ')'
		foreach_statement																			{ $$ = observers.StatementListMake();
																									  $$ = observers.StatementListAppend($$, $5);
																									  $$ = observers.StatementListAppend($$, $6);
																									  $$ = observers.StatementListMerge($$, $8); }
	|	T_FOREACH '(' expr_without_variable T_AS
		variable foreach_optional_arg ')'
		foreach_statement																			{ $$ = observers.StatementListMake();
																									  $$ = observers.StatementListAppend($$, observers.ExpressionMakeAsAssignmentExpression($5));
																									  $$ = observers.StatementListAppend($$, $6);
																									  $$ = observers.StatementListMerge($$, $8); }
	|	T_DECLARE '(' declare_list ')' declare_statement											{ $$ = observers.StatementListNil(); }
	|	';'		/* empty statement */																{ $$ = observers.StatementListNil(); }
	|	T_TRY '{' inner_statement_list '}'															
		T_CATCH '(' fully_qualified_class_name T_VARIABLE ')'										
		'{' inner_statement_list '}'
		additional_catches																			{ $$ = observers.StatementListAppend($3, 
																											observers.AssignmentExpressionFromNewFound(
																											observers.VariableStart($8), 
																											$7));
																									  $$ = observers.StatementListMerge($$, $11);
																									  $$ = observers.StatementListMerge($$, $13); }
	|	T_THROW expr ';'																			{ $$ = observers.StatementListMakeAndAppend($2); }
	|	T_GOTO T_STRING ';'																			{ $$ = observers.StatementListNil(); }
;

additional_catches:
		non_empty_additional_catches				{ $$ = $1; }
	|	/* empty */									{ $$ = observers.StatementListNil(); }
;

non_empty_additional_catches:
		additional_catch												{ $$ = $1; }
	|	non_empty_additional_catches additional_catch					{ observers.StatementListMerge($1, $2); $$ = $1; }
;

additional_catch:
	T_CATCH '(' fully_qualified_class_name T_VARIABLE ')'				
	'{' inner_statement_list '}'										{ $$ = observers.StatementListMakeAndAppend(observers.AssignmentExpressionFromNewFound(
																			   observers.VariableStart($4), 
																			   $3));
																		  observers.StatementListMerge($$, $7); }
;

unset_variables:
		unset_variable									{ $$ = observers.StatementListNil(); }
	|	unset_variables ',' unset_variable				{ $$ = $1; }
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
		/* empty */  						{ $$ = false; }
	|	'&'									{ $$ = true; }
;

unticked_function_declaration_statement:
		function is_reference T_STRING
		'(' parameter_list ')'				{ observers.SetCurrentMemberName($3); }
		'{' inner_statement_list '}'		{ $$ = observers.ClassMemberSymbolMakeFunction($3, $2, $1, $5, $8, $10);
											  observers.StatementListMerge($$, $9); 
											  observers.SetCurrentMemberName(NULL);
											}
;

unticked_class_declaration_statement:
		class_entry_type T_STRING			
		extends_from implements_list		{ observers.SetCurrentClassName($2); }	
		'{' class_statement_list '}'		{ $$ = observers.ClassSymbolMake($2, $1, $3, $4, $8);
											  observers.StatementListMerge($$, $7); 
											  observers.SetCurrentClassName(NULL);  
											}
	|	interface_entry T_STRING			
		interface_extends_list				{ observers.SetCurrentClassName($2); }	
		'{' class_statement_list '}'		{ $$ = observers.ClassSymbolMake($2, $1, NULL, $3, $7);
											  observers.StatementListMerge($$, $6); 
											  observers.SetCurrentClassName(NULL);    
											}
;

class_entry_type:
		T_CLASS					{ $$ = observers.ClassSymbolStart($1, false, false, false, false); }
	|	T_ABSTRACT T_CLASS		{ $$ = observers.ClassSymbolStart($1, true, false, false, false); }
	|	T_TRAIT					{ $$ = observers.ClassSymbolStart($1, false, false, false, true); }
	|	T_FINAL T_CLASS			{ $$ = observers.ClassSymbolStart($1, false, true, false, false); }
;

extends_from:
		/* empty */						{ $$ = observers.ClassSymbolStart(NULL, false, false, false, false); }
	|	T_EXTENDS
		fully_qualified_class_name 		{ $$ = observers.ClassSymbolExtends($2); }
;

interface_entry:
	T_INTERFACE				{ $$ = observers.ClassSymbolStart($1, false, false, true, false); }
;

interface_extends_list:
		/* empty */			{ $$ = observers.ClassSymbolStart(NULL, false, false, false, false); }
	|	T_EXTENDS			
		interface_list		{ $$ = $2; }
;

implements_list:
		/* empty */			{ $$ = observers.ClassSymbolStart(NULL, false, false, false, false); }
	|	T_IMPLEMENTS
		interface_list		{ $$ = $2; }
;

interface_list:
		fully_qualified_class_name							{ $$ = observers.ClassSymbolAddToImplements($1); }
	|	interface_list ','	fully_qualified_class_name		{ $$ = observers.ClassSymbolAddToImplements($1, $3); }
;

foreach_optional_arg:
		/* empty */									{ $$ =  observers.ExpressionNil(); }
	|	T_DOUBLE_ARROW foreach_variable				{ $$ = $2; }
;

foreach_variable:
		variable									{ $$ = observers.ExpressionMakeAsAssignmentExpression($1); }
	|	'&' variable								{ $$ = observers.ExpressionMakeAsAssignmentExpression($2); }
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
		T_STRING '=' static_scalar						{ $$ = observers.StatementListNil(); }
	|	declare_list ',' T_STRING '=' static_scalar		{ $$ = observers.StatementListNil(); }
;

switch_case_list:
		'{' case_list '}'									{ $$ = $2; }
	|	'{' ';' case_list '}'								{ $$ = $3; }
	|	':' case_list T_ENDSWITCH ';'						{ $$ = $2; }
	|	':' ';' case_list T_ENDSWITCH ';'					{ $$ = $3; }
;

case_list:
		/* empty */															{ $$ = observers.StatementListNil(); } 
	|	case_list T_CASE expr case_separator inner_statement_list			{ $$ = observers.StatementListMakeAndAppend($3); 
																			  observers.StatementListMerge($$, $5); }
	|	case_list T_DEFAULT case_separator inner_statement_list				{ $$ = $4; }
;

case_separator:
		':'
	|	';'
;

while_statement:
		statement											{ $$ = $1; }
	|	':' inner_statement_list T_ENDWHILE ';'				{ $$ = $2; }
;

elseif_list:
		/* empty */											{ $$ = observers.StatementListNil(); }
	|	elseif_list T_ELSEIF '(' expr ')' statement			{ $$ = observers.StatementListMake(); 
															  observers.StatementListMerge($$, $1);
															  observers.StatementListMerge($$, observers.StatementListMakeAndAppend($4)); 
															  observers.StatementListMerge($$, $6); }
;

new_elseif_list:
		/* empty */																{ $$ = observers.StatementListNil(); }
	|	new_elseif_list T_ELSEIF '(' expr ')' ':' inner_statement_list			{ $$ = observers.StatementListMake(); 
																				  observers.StatementListMerge($$, $1);
																			  	  observers.StatementListMerge($$, observers.StatementListMakeAndAppend($4)); 
																				  observers.StatementListMerge($$, $7); }
;

else_single:
		/* empty */								{ $$ = observers.StatementListNil(); }
	|	T_ELSE statement						{ $$ = $2; }
;

new_else_single:
		/* empty */								{ $$ = observers.StatementListNil(); }
	|	T_ELSE ':' inner_statement_list			{ $$ = $3; }						
;

parameter_list:
		non_empty_parameter_list			{ $$ = $1; }
	|	/* empty */							{ $$ = observers.ParametersListNil(); }
;


non_empty_parameter_list:
		optional_class_type T_VARIABLE														{ $$ = observers.ParametersListCreate($1, $2, false); }
	|	optional_class_type '&' T_VARIABLE													{ $$ = observers.ParametersListCreate($1, $3, true); }
	|	optional_class_type '&' T_VARIABLE '=' static_scalar								{ $$ = observers.ParametersListCreate($1, $3, true);}
	|	optional_class_type T_VARIABLE '=' static_scalar									{ $$ = observers.ParametersListCreate($1, $2, false); }
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE							{ $$ = observers.ParametersListAppend($1, $3, $4, false); } 
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE						{ $$ = observers.ParametersListAppend($1, $3, $5, true); }
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE	'=' static_scalar	{ $$ = observers.ParametersListAppend($1, $3, $5, true); }
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE '=' static_scalar		{ $$ = observers.ParametersListAppend($1, $3, $4, false); }
;

optional_class_type:
		/* empty */						{ $$ = observers.QualifiedNameNil(); }
	|	T_ARRAY							{ $$ = observers.QualifiedNameCreate($1); }
	|	T_CALLABLE						{ $$ = observers.QualifiedNameCreate($1); }
	|	fully_qualified_class_name		{ $$ = $1; }
;

function_call_parameter_list:
		non_empty_function_call_parameter_list		{ $$ = $1; }
	|	/* empty */									{ $$ =  observers.StatementListNil(); }
;

non_empty_function_call_parameter_list:
		expr_without_variable												{ $$ = observers.StatementListMakeAndAppend($1); }
	|	variable															{ $$ = observers.StatementListMakeAndAppend($1); }
	|	'&' w_variable														{ $$ = observers.StatementListMakeAndAppend($2); }
	|	non_empty_function_call_parameter_list ',' expr_without_variable	{ $$ = observers.StatementListAppend($1, $3); }
	|	non_empty_function_call_parameter_list ',' variable					{ $$ = observers.StatementListAppend($1, $3); }
	|	non_empty_function_call_parameter_list ',' '&' w_variable			{ $$ = observers.StatementListAppend($1, $4); }
;

global_var_list:
		global_var_list ',' global_var				{ $$ = observers.StatementListAppend($1, $3); }
	|	global_var									{ $$ = observers.StatementListMakeAndAppend($1); }
;

global_var:
		T_VARIABLE				{ $$ = observers.ExpressionMakeGlobalVariable($1); }
	|	'$' r_variable			{ $$ = observers.ExpressionNil(); }
	|	'$' '{' expr '}'		{ $$ = observers.ExpressionNil(); }
;

static_var_list:
		static_var_list ',' T_VARIABLE							{ $$ = observers.StatementListAppend($1, observers.ExpressionMakeStaticVariable($3)); }
	|	static_var_list ',' T_VARIABLE '=' static_scalar		{ $$ = observers.StatementListAppend($1, observers.ExpressionMakeStaticVariable($3)); }
	|	T_VARIABLE												{ $$ = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable($1)); }
	|	T_VARIABLE '=' static_scalar							{ $$ = observers.StatementListMakeAndAppend(observers.ExpressionMakeStaticVariable($1)); }
;

class_statement_list:
		class_statement_list class_statement				{ $$ = observers.StatementListMerge($1, $2); }
	|	/* empty */											{ $$ = observers.StatementListMake(); }
;

class_statement:
		variable_modifiers class_variable_declaration ';'	{ $$ = observers.ClassMemberSymbolMakeVariables($2, $1); }
	|	class_constant_declaration ';'						{ $$ = $1; }
	|	trait_use_statement									{ $$ = $1; }
	|	method_modifiers function is_reference T_STRING
		'('	parameter_list  ')'								{ observers.SetCurrentMemberName($4); }
		method_body											{ $$ = observers.ClassMemberSymbolMakeMethod($4, $1, $3, $2, $6, $9);
															  observers.SetCurrentMemberName(NULL);
															}
;

trait_use_statement:
		T_USE												
		trait_list trait_adaptations						{ $$ = observers.TraitUseMake($2, $3); }
;

trait_list:
		fully_qualified_class_name							{ $$ = observers.TraitUseStart($1); }
	|	trait_list ','										
		fully_qualified_class_name							{ $$ = observers.TraitUseAppend($1, $3); }
;

trait_adaptations:
		';'													{ $$ = observers.StatementListNil(); } 
	|	'{'													 
		trait_adaptation_list 						
		'}'													{ $$ = $2; }
;

trait_adaptation_list:
		/* empty */											{ $$ = observers.StatementListNil(); } 
	|	non_empty_trait_adaptation_list						{ $$ = $1; }
;

non_empty_trait_adaptation_list:
		trait_adaptation_statement										{ $$ = $1; }
	|	non_empty_trait_adaptation_list trait_adaptation_statement		{ $$ = observers.StatementListMerge($1, $2); }
;

trait_adaptation_statement:
		trait_precedence ';'			{ $$ = observers.StatementListMakeAndAppend($1); }
	|	trait_alias ';'					{ $$ = observers.StatementListMakeAndAppend($1); }
;

trait_precedence:
	trait_method_reference_fully_qualified T_INSTEADOF
	trait_reference_list												{ $$ =  observers.TraitInsteadOfMake($1, $3); }
;

trait_reference_list:
		fully_qualified_class_name										{ $$ = observers.TraitInsteadOfMakeReferenceList($1); }
	|	trait_reference_list ',' fully_qualified_class_name				{ $$ = observers.TraitInsteadOfAppendReferenceList($1, $3); }	
;

trait_method_reference:
		T_STRING														{ $$ = observers.TraitAliasMakeMethodReferenceList($1); }
	|	trait_method_reference_fully_qualified							{ $$ = $1; }
;

trait_method_reference_fully_qualified:
	fully_qualified_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING			{ $$ = observers.TraitAliasMakeMethodReferenceList($1, $3); }
;

trait_alias:
		trait_method_reference T_AS trait_modifiers T_STRING			{ $$ = observers.TraitAliasMake($1, $3, $4); }
	|	trait_method_reference T_AS member_modifier						{ $$ = observers.TraitAliasMake($1, observers.ClassMemberSymbolMake($3)); }
;

trait_modifiers:
		/* empty */					 /* No change of methods visibility */ { $$ = observers.ClassMemberSymbolMake(NULL); }
	|	member_modifier	 /* REM: Keep in mind, there are not only visibility modifiers */ { $$ = observers.ClassMemberSymbolMake($1); }
;

method_body:
		';' /* abstract method */			{ $$ = observers.ClassMemberMakeBody(observers.StatementListNil(), $1, $1); }
	|	'{' inner_statement_list '}'		{ $$ = observers.ClassMemberMakeBody($2, $1, $3); }
;

variable_modifiers:
		non_empty_member_modifiers		{ $$ = $1; }
	|	T_VAR						 	{ $$ = observers.ClassMemberSymbolMakeAsPublicVariable($1); }
;

method_modifiers:
		/* empty */						{ $$ = observers.ClassMemberSymbolMake(NULL); }
	|	non_empty_member_modifiers		{ $$ = $1; }
;

non_empty_member_modifiers:
		member_modifier									{ $$ = observers.ClassMemberSymbolMake($1); }
	|	non_empty_member_modifiers member_modifier		{ $$ = observers.ClassMemberSymbolSetModifier($1, $2); }
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
		class_variable_declaration ',' T_VARIABLE						{ $$ = observers.StatementListMerge($1, observers.ClassMemberSymbolMakeVariable($3, $3, false, analyzer.GetLineNumber())); }
	|	class_variable_declaration ',' T_VARIABLE '=' static_scalar		{ $$ = observers.StatementListMerge($1, observers.ClassMemberSymbolMakeVariable($3, $3, false, analyzer.GetLineNumber()));  }
	|	T_VARIABLE														{ $$ = observers.ClassMemberSymbolMakeVariable($1, $1, false, analyzer.GetLineNumber()); }
	|	T_VARIABLE '=' static_scalar									{ $$ = observers.ClassMemberSymbolMakeVariable($1, $1, false, analyzer.GetLineNumber()); }
;

class_constant_declaration:
		class_constant_declaration ',' 
		T_STRING '=' static_scalar			{ $$ = observers.StatementListMerge($1, observers.ClassMemberSymbolMakeVariable($3, $3, true, analyzer.GetLineNumber())); }
	|	T_CONST T_STRING '=' static_scalar  { $$ = observers.ClassMemberSymbolMakeVariable($2, $1, true, analyzer.GetLineNumber()); }
;

echo_expr_list:
		echo_expr_list ',' expr		{ $$ = observers.StatementListAppend($1, $3); }
	|	expr						{ $$ = observers.StatementListMakeAndAppend($1); }
;

for_expr:
		/* empty */					{ $$ = observers.StatementListNil(); }
	|	non_empty_for_expr			{ $$ = $1; }
;

non_empty_for_expr:
		non_empty_for_expr ',' expr		{ $$ =  observers.StatementListAppend($1, $3); }
	|	expr							{ $$ = observers.StatementListMakeAndAppend($1); }
;

chaining_method_or_property:
		chaining_method_or_property variable_property 			{ $$ = observers.ExpressionAppendToChain($1, $2); }
	|	variable_property										{ $$ = observers.ExpressionMakeFromVariable($1); }
;

chaining_dereference:
		chaining_dereference '[' dim_offset ']'					{ $$ = $1; }
	|	'[' dim_offset ']'										{ $$ = observers.ExpressionNil(); }
;

chaining_instance_call:
		chaining_dereference chaining_method_or_property 				{ $$ = $2; }
	|	chaining_dereference 											{ $$ = $1; }
	|	chaining_method_or_property 									{ $$ = $1; }
;

instance_call:
		/* empty */ 													{ $$ = observers.ExpressionNil(); }
	|	chaining_instance_call											{ $$ = $1; }
;

new_expr:
		T_NEW class_name_reference ctor_arguments									{ $$ = observers.ExpressionMakeNewInstanceCall($2);  }
;

expr_without_variable:
		T_LIST '(' assignment_list ')' '=' expr						{ $$ = observers.ExpressionMakeAssignmentList($3); }
	|	variable '=' expr											{ $$ = observers.AssignmentExpressionFromExpressionFound($1, $3); }
	|	variable '=' '&' variable									{ $$ = observers.AssignmentExpressionFromVariableFound($1, $4); }
	|	variable '=' '&' T_NEW class_name_reference ctor_arguments	{ $$ = observers.AssignmentExpressionFromNewFound($1, $5); }
	|	T_CLONE expr												{ $$ = $2; }
	|	variable T_PLUS_EQUAL expr									{ $$ = observers.ExpressionNil(); }
	|	variable T_MINUS_EQUAL expr									{ $$ = observers.ExpressionNil(); }
	|	variable T_MUL_EQUAL expr									{ $$ = observers.ExpressionNil(); }
	|	variable T_DIV_EQUAL expr									{ $$ = observers.ExpressionNil(); }
	|	variable T_CONCAT_EQUAL expr								{ $$ = observers.ExpressionNil(); }
	|	variable T_MOD_EQUAL expr									{ $$ = observers.ExpressionNil(); }
	|	variable T_AND_EQUAL expr									{ $$ = observers.ExpressionNil(); }
	|	variable T_OR_EQUAL expr									{ $$ = observers.ExpressionNil(); }
	|	variable T_XOR_EQUAL expr 									{ $$ = observers.ExpressionNil(); }
	|	variable T_SL_EQUAL expr									{ $$ = observers.ExpressionNil(); }
	|	variable T_SR_EQUAL expr									{ $$ = observers.ExpressionNil(); }
	|	rw_variable T_INC 											{ $$ = observers.ExpressionNil(); }
	|	T_INC rw_variable 											{ $$ = observers.ExpressionNil(); }
	|	rw_variable T_DEC 											{ $$ = observers.ExpressionNil(); }
	|	T_DEC rw_variable 											{ $$ = observers.ExpressionNil(); }
	|	expr T_BOOLEAN_OR expr										{ $$ = observers.ExpressionNil(); }
	|	expr T_BOOLEAN_AND expr										{ $$ = observers.ExpressionNil(); }
	|	expr T_LOGICAL_OR expr 										{ $$ = observers.ExpressionNil(); }
	|	expr T_LOGICAL_AND expr										{ $$ = observers.ExpressionNil(); }
	|	expr T_LOGICAL_XOR expr										{ $$ = observers.ExpressionNil(); }
	|	expr '|' expr												{ $$ = observers.ExpressionNil(); }
	|	expr '&' expr												{ $$ = observers.ExpressionNil(); }
	|	expr '^' expr 												{ $$ = observers.ExpressionNil(); }
	|	expr '.' expr 												{ $$ = observers.ExpressionNil(); }
	|	expr '+' expr												{ $$ = observers.ExpressionNil(); }
	|	expr '-' expr												{ $$ = observers.ExpressionNil(); }
	|	expr '*' expr												{ $$ = observers.ExpressionNil(); }
	|	expr '/' expr												{ $$ = observers.ExpressionNil(); }
	|	expr '%' expr 												{ $$ = observers.ExpressionNil(); }
	| 	expr T_SL expr 												{ $$ = observers.ExpressionNil(); }
	|	expr T_SR expr												{ $$ = observers.ExpressionNil(); }
	|	'+' expr %prec T_INC										{ $$ = observers.ExpressionNil(); }
	|	'-' expr %prec T_INC										{ $$ = observers.ExpressionNil(); }
	|	'!' expr													{ $$ = observers.ExpressionNil(); }
	|	'~' expr													{ $$ = observers.ExpressionNil(); }
	|	expr T_IS_IDENTICAL expr									{ $$ = observers.ExpressionNil(); }
	|	expr T_IS_NOT_IDENTICAL expr 								{ $$ = observers.ExpressionNil(); }
	|	expr T_IS_EQUAL expr										{ $$ = observers.ExpressionNil(); }
	|	expr T_IS_NOT_EQUAL expr 									{ $$ = observers.ExpressionNil(); }
	|	expr '<' expr 												{ $$ = observers.ExpressionNil(); }
	|	expr T_IS_SMALLER_OR_EQUAL expr								{ $$ = observers.ExpressionNil(); }
	|	expr '>' expr 												{ $$ = observers.ExpressionNil(); }
	|	expr T_IS_GREATER_OR_EQUAL expr								{ $$ = observers.ExpressionNil(); }
	|	expr T_INSTANCEOF class_name_reference						{ $$ = observers.ExpressionNil(); }
	|	'(' expr ')'  												{ $$ = $2; }
	|	new_expr													{ $$ = $1; }
	|	'(' new_expr ')' instance_call								{ $$ = observers.ExpressionAppendToChain($2, $4); }
	|	expr '?' 
		expr ':' 
		expr														{ $$ = observers.ExpressionNil(); }
	|	expr '?' ':' 
		expr     													{ $$ = observers.ExpressionNil(); }
	|	internal_functions_in_yacc									{ $$ = $1; }
	|	T_INT_CAST expr 											{ $$ = observers.ExpressionMakeScalar($2); }
	|	T_DOUBLE_CAST expr  										{ $$ = observers.ExpressionMakeScalar($2); }
	|	T_STRING_CAST expr 											{ $$ = observers.ExpressionMakeScalar($2); }
	|	T_ARRAY_CAST expr  											{ $$ = observers.ExpressionMakeArray(observers.StatementListMakeAndAppend($2)); }
	|	T_OBJECT_CAST expr  										{ $$ = observers.ExpressionMakeObject($2); }
	|	T_BOOL_CAST expr											{ $$ = observers.ExpressionMakeScalar($2); }
	|	T_UNSET_CAST expr											{ $$ = $2; }
	|	T_EXIT exit_expr											{ $$ = observers.ExpressionNil(); }
	|	'@' expr													{ $$ = $2; }
	|	scalar														{ $$ = $1;}
	|	T_ARRAY '(' array_pair_list ')'								{ $$ = observers.ExpressionMakeArray($3); }
 	|	'[' array_pair_list ']'										{ $$ = observers.ExpressionMakeArray($2); }
	|	'`' backticks_expr '`'										{ $$ = observers.ExpressionMakeScalar($2); /* results of backtick operator is a string */ }
	|	T_PRINT expr 												{ $$ = observers.ExpressionMakeScalar($2); }	
	|	function is_reference 
		'(' parameter_list ')' 
		lexical_vars '{' inner_statement_list '}'					{ $$ = observers.ExpressionNil();  }
	|	T_STATIC function is_reference '(' 
			parameter_list ')' lexical_vars '{' inner_statement_list '}'			{ $$ = observers.ExpressionNil(); } /* TODO what statements are these? */
;

function:
	T_FUNCTION 
;

lexical_vars:
		/* empty */									{ $$ = observers.StatementListNil(); }
	|	T_USE '(' lexical_var_list ')'				{ $$ = observers.StatementListNil(); }
;

lexical_var_list:
		lexical_var_list ',' T_VARIABLE				{ $$ = $1; }
	|	lexical_var_list ',' '&' T_VARIABLE			{ $$ = $1; }
	|	T_VARIABLE									{ $$ = observers.StatementListNil(); }
	|	'&' T_VARIABLE								{ $$ = observers.StatementListNil(); }
;

function_call:
		namespace_name '('															
		function_call_parameter_list	')'												{ $$ = observers.VariableMakeFunctionCall($1, $3, analyzer.GetLineNumber()); }
	|	T_NAMESPACE T_NS_SEPARATOR 														
		namespace_name '(' 																
		function_call_parameter_list ')' 												{ $$ = observers.VariableMakeFunctionCallFromCurrentNamespace($3, $5, analyzer.GetLineNumber()); }
	|	T_NS_SEPARATOR namespace_name '(' 												
				function_call_parameter_list ')'										{ $$ = observers.VariableMakeFunctionCallFromAbsoluteNamespace($2, $4, analyzer.GetLineNumber()); }
	|	class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING '(' 
			function_call_parameter_list')'												{ $$ = observers.VariableMakeStaticMethodCall($1, $3, $5, analyzer.GetLineNumber()); }
	|	class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects '('
			function_call_parameter_list ')'											{ $$ = observers.VariableNil(); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING '('
			function_call_parameter_list ')'											{ $$ = observers.VariableNil(); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects '('
			function_call_parameter_list ')'											{ $$ = observers.VariableNil(); }
	|	variable_without_objects  '('
			function_call_parameter_list ')'											{ $$ = observers.VariableNil(); }       
;

class_name:
		T_STATIC													{ $$ = observers.QualifiedNameNil(); }
	|	namespace_name												{ $$ = $1; }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name					{ $$ = observers.QualifiedNameMakeFromCurrentNamespace($3); }
	|	T_NS_SEPARATOR namespace_name								{ $$ = observers.QualifiedNameMakeAbsolute($2); }
;

fully_qualified_class_name:
		namespace_name												{ $$ = $1; }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name					{ $$ = observers.QualifiedNameMakeFromCurrentNamespace($3); }
	|	T_NS_SEPARATOR namespace_name								{ $$ = observers.QualifiedNameMakeAbsolute($2); }
;

class_name_reference:
		class_name													{ $$ = $1; }
	|	dynamic_class_name_reference								{ $$ = $1; }
;

dynamic_class_name_reference:
		base_variable T_OBJECT_OPERATOR
			object_property dynamic_class_name_variable_properties		{ $$ = observers.QualifiedNameNil(); }
	|	base_variable													{ $$ = observers.QualifiedNameNil(); }
;

dynamic_class_name_variable_properties:
		dynamic_class_name_variable_properties dynamic_class_name_variable_property			{ $$ = $1; }
	|	/* empty */																			{ $$ = observers.SemanticValueNil(); }
;

dynamic_class_name_variable_property:
		T_OBJECT_OPERATOR object_property 
;

exit_expr:
		/* empty */						{ $$ = observers.ExpressionNil(); }
	|	'(' ')'							{ $$ = observers.ExpressionNil(); }
	|	'(' expr ')'					{ $$ = $2; }
;

backticks_expr:
		/* empty */						{ $$ = observers.ExpressionNil(); }
	|	T_ENCAPSED_AND_WHITESPACE		{ $$ = observers.ExpressionNil(); }
	|	encaps_list						{ $$ = observers.ExpressionNil(); }
;

ctor_arguments:
		/* empty */									{ $$ = observers.SemanticValueNil(); }
	|	'(' function_call_parameter_list ')'
;

common_scalar:
		T_LNUMBER 													{ $$ = observers.ExpressionMakeScalar($1); }
	|	T_DNUMBER 													{ $$ = observers.ExpressionMakeScalar($1); }
	|	T_CONSTANT_ENCAPSED_STRING									{ $$ = observers.ExpressionMakeScalar($1); }
	|	T_LINE 														{ $$ = observers.ExpressionMakeScalar($1); }
	|	T_FILE 														{ $$ = observers.ExpressionMakeScalar($1); }
	|	T_DIR   													{ $$ = observers.ExpressionMakeScalar($1); }
	|	T_TRAIT_C													{ $$ = observers.ExpressionMakeScalar($1); }
	|	T_METHOD_C													{ $$ = observers.ExpressionMakeScalar($1); }
	|	T_FUNC_C													{ $$ = observers.ExpressionMakeScalar($1); }
	|	T_NS_C														{ $$ = observers.ExpressionMakeScalar($1); }
	|	T_START_HEREDOC T_ENCAPSED_AND_WHITESPACE T_END_HEREDOC		{ $$ = observers.ExpressionMakeScalar($2); }
	|	T_START_HEREDOC T_END_HEREDOC								{ $$ = observers.ExpressionMakeScalar($1); }
;

static_scalar: /* compile-time evaluated scalars */
		common_scalar										{ $$ = observers.ExpressionNil(); }
	|	namespace_name										{ $$ = observers.ExpressionNil(); }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name			{ $$ = observers.ExpressionNil(); }
	|	T_NS_SEPARATOR namespace_name						{ $$ = observers.ExpressionNil(); }
	|	'+' static_scalar									{ $$ = observers.ExpressionNil(); }
	|	'-' static_scalar									{ $$ = observers.ExpressionNil(); }
	|	T_ARRAY '(' static_array_pair_list ')'				{ $$ = observers.ExpressionMakeScalar($3); }
	|	'[' static_array_pair_list ']' 						{ $$ = observers.ExpressionMakeScalar($2); }
	|	static_class_constant								{ $$ = $1; }
	|	T_CLASS_C											{ $$ = observers.ExpressionMakeScalar($1); }
;

static_class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING		{ $$ = observers.ExpressionMakeClassConstant($1, $3); }
;

scalar:
		T_STRING_VARNAME								{ $$ = observers.ExpressionMakeScalar($1); }
	|	class_constant									{ $$ = $1; }
	|	namespace_name									{ $$ = observers.ExpressionMakeScalarFromConstant($1); }
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name		{ $$ = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeFromCurrentNamespace($3)); }
	|	T_NS_SEPARATOR namespace_name					{ $$ = observers.ExpressionMakeScalarFromConstant(observers.QualifiedNameMakeAbsolute($2)); }
	|	common_scalar
	|	'"' encaps_list '"'								{ $$ = observers.ExpressionMakeScalar($2); }
	|	T_START_HEREDOC encaps_list T_END_HEREDOC		{ $$ = observers.ExpressionMakeScalar($1); }
	|	T_CLASS_C										{ $$ = observers.ExpressionMakeScalar($1); }
;

static_array_pair_list:
		/* empty */												{ $$ = observers.SemanticValueNil(); }
	|	non_empty_static_array_pair_list possible_comma
;

possible_comma:
		/* empty */									{ $$ = false; }
	|	','											{ $$ = true; }
;

non_empty_static_array_pair_list:
		non_empty_static_array_pair_list ',' static_scalar T_DOUBLE_ARROW static_scalar			{ $$ = observers.SemanticValueNil(); }
	|	non_empty_static_array_pair_list ',' static_scalar										{ $$ = observers.SemanticValueNil(); }
	|	static_scalar T_DOUBLE_ARROW static_scalar												{ $$ = observers.SemanticValueNil(); }
	|	static_scalar																			{ $$ = observers.SemanticValueNil(); }
;

expr:
		r_variable						 { $$ = observers.ExpressionMakeFromVariable($1); }
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
		base_variable_with_function_calls 
		T_OBJECT_OPERATOR object_property 
		method_or_not							
		variable_properties						{ $$ = observers.VariableMake($1, $3, $4, $5); }
	|	base_variable_with_function_calls		{ $$ = observers.VariableMake($1, NULL, false, NULL); }
;

variable_properties:
		variable_properties variable_property		{ $$ = observers.VariableAppendToChain($1, $2); }
	|	/* empty */									{ $$ = observers.VariableNil(); }
;

variable_property:
		T_OBJECT_OPERATOR object_property
		method_or_not								{ $$ = observers.VariableAppendToChain($2, $3, $1);  }
;

array_method_dereference:
		array_method_dereference '[' dim_offset ']'				{ $$ = observers.VariableNil();}
	|	method '[' dim_offset ']'								{ $$ = observers.VariableNil(); }
;

method:
		'(' function_call_parameter_list ')'					{ $$ = observers.VariableMakeAndAppendFunctionCall($2, true); } 
;

method_or_not:
		method						{ $$ = $1; } 
	|	array_method_dereference	{ $$ = observers.VariableNil(); }
	|	/* empty */ 				{ $$ = observers.VariableNil(); }
;

variable_without_objects:
		reference_variable								
	|	simple_indirect_reference reference_variable		{ $$ = $2; }
;

static_member:
		class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects					{ $$ = observers.VariableStartStaticMember($1, $3); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects			{ $$ = observers.VariableNil(); }
;

variable_class_name:
		reference_variable			{ $$ = observers.SemanticValueNil(); }
;

array_function_dereference:
		array_function_dereference '[' dim_offset ']'				{ $$ = $1; }
	|	function_call '[' dim_offset ']'							{ $$ = $1; }
;

base_variable_with_function_calls:
		base_variable
	|	array_function_dereference		{ $$ = $1; }
	|	function_call					{ $$ = $1; }
;

base_variable:
		reference_variable
	|	simple_indirect_reference reference_variable	{ $$ = $2; }
	|	static_member
;

reference_variable:
		reference_variable '[' dim_offset ']'		{ $$ = $$ = observers.VariableAppendArrayOffset($1, $3); }
	|	reference_variable '{' expr '}'				{ $$ = observers.VariableNil(); }
	|	compound_variable
;

compound_variable:
		T_VARIABLE			{ $$ = observers.VariableStart($1); }
	|	'$' '{' expr '}' 	{ $$ = observers.VariableNil(); }
;

dim_offset:
		/* empty */		{ $$ = observers.ExpressionNil(); }
	|	expr			{ $$ = $1; }
;

object_property:
		object_dim_list					{ $$ = $1; }
	|	variable_without_objects		{ $$ = $1; }
;

object_dim_list:
		object_dim_list '[' dim_offset ']'			{ $$ = observers.VariableNil(); }
	|	object_dim_list '{' expr '}'				{ $$ = observers.VariableNil(); }
	|	variable_name								{ $$ = $1; }
;

variable_name:
		T_STRING					{  $$ = observers.VariableStart($1); }
	|	'{' expr '}'				{ $$ = observers.VariableNil(); }
;

simple_indirect_reference:
		'$'
	|	simple_indirect_reference '$'
;

assignment_list:
		assignment_list ',' assignment_list_element		{ $$ = observers.StatementListMerge($1, $3); }
	|	assignment_list_element							{ $$ = $1; }
;

assignment_list_element:
		variable										{ $$ = observers.StatementListMakeAndAppend($1); }
	|	T_LIST '(' assignment_list ')'					{ $$ = $3; }
	|	/* empty */										{ $$ = observers.StatementListMake(); }
;

array_pair_list:
		/* empty */										{ $$ = observers.StatementListMake(); }
	|	non_empty_array_pair_list possible_comma		{ $$ = $1; }
;

non_empty_array_pair_list:
		non_empty_array_pair_list ',' expr T_DOUBLE_ARROW expr					{ $$ = observers.StatementListAppend($1, $3); }
	|	non_empty_array_pair_list ',' expr										{ $$ = $1; }
	|	expr T_DOUBLE_ARROW expr												{ $$ = observers.StatementListMakeAndAppend($1); }
	|	expr																	{ $$ = observers.StatementListMake(); }
	|	non_empty_array_pair_list ',' expr T_DOUBLE_ARROW '&' w_variable		{ $$ = observers.StatementListAppend($1, $3); }
	|	non_empty_array_pair_list ',' '&' w_variable							{ $$ = $1; }
	|	expr T_DOUBLE_ARROW '&' w_variable										{ $$ = observers.StatementListMakeAndAppend($1); }	
	|	'&' w_variable															{ $$ = observers.StatementListMake(); }
;

encaps_list:
		encaps_list encaps_var								{ $$ = $1; }
	|	encaps_list T_ENCAPSED_AND_WHITESPACE				{ $$ = $1; }
	|	encaps_var											{ $$ = $1; }
	|	T_ENCAPSED_AND_WHITESPACE encaps_var				{ $$ = $2; }
;

encaps_var:
		T_VARIABLE														{ $$ = observers.ExpressionNil(); }
	|	T_VARIABLE '[' encaps_var_offset ']'							{ $$ = observers.ExpressionNil(); }
	|	T_VARIABLE T_OBJECT_OPERATOR T_STRING							{ $$ = observers.ExpressionNil(); }
	|	T_DOLLAR_OPEN_CURLY_BRACES expr '}'								{ $$ = observers.ExpressionNil(); }
	|	T_DOLLAR_OPEN_CURLY_BRACES T_STRING_VARNAME '[' expr ']' '}'	{ $$ = observers.ExpressionNil(); }
	|	T_CURLY_OPEN variable '}'										{ $$ = observers.ExpressionNil(); }
;

encaps_var_offset:
		T_STRING					{ $$ = observers.ExpressionNil(); }
	|	T_NUM_STRING				{ $$ = observers.ExpressionNil(); }
	|	T_VARIABLE					{ $$ = observers.ExpressionNil(); }
;

internal_functions_in_yacc:
		T_ISSET '(' isset_variables ')'			{ $$ = observers.ExpressionNil(); }
	|	T_EMPTY '(' variable ')'				{ $$ = observers.ExpressionNil(); }
	|	T_INCLUDE expr  						{ $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
	|	T_INCLUDE_ONCE expr 					{ $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
	|	T_EVAL '(' expr ')' 					{ $$ = observers.ExpressionNil(); }
	|	T_REQUIRE expr  						{ $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
	|	T_REQUIRE_ONCE expr 					{ $$ = observers.IncludeFound($2, analyzer.GetLineNumber()); } 
;

isset_variables:
		variable							{ $$ = observers.ExpressionNil(); }
	|	isset_variables ',' variable		{ $$ = observers.ExpressionNil(); }
;

class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING					{ $$ = observers.ExpressionMakeClassConstant($1, $3); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING			{ $$ = observers.ExpressionNil(); }
;

%%