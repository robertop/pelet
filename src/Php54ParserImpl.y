%{
	
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/ParserObserverClass.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
 
#define YYSTYPE pelet::SemanticValueClass

// so that both bison parses call the same lex function
#define php54lex NextSemanticValue

// so that both bison parses call the same error function
#define php54error GrammarError

%}

%define api.pure
%expect 3
%error-verbose
%name-prefix "php54"
%debug

%parse-param { pelet::LexicalAnalyzerClass &analyzer }
%parse-param { pelet::ObserverQuadClass& observers }
%lex-param  { pelet::LexicalAnalyzerClass &analyzer }
%lex-param { pelet::ObserverQuadClass& observers }
%destructor { observers.SemanticValueFree($$); } <*>

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
%left T_ELSEIF
%left T_ELSE 
%left T_ENDIF 
%right T_STATIC T_ABSTRACT T_FINAL T_PRIVATE T_PROTECTED T_PUBLIC

%token  T_END 0
%token  T_ABSTRACT 502
%token  T_AND_EQUAL 503
%token  T_ARRAY 504
%token  T_ARRAY_CAST 505
%token  T_AS 506
%token  T_BAD_CHARACTER 507
%token  T_BOOL_CAST 508
%token  T_BOOLEAN_AND 509
%token  T_BOOLEAN_OR 510
%token  T_BREAK 511
%token  T_CALLABLE 512
%token  T_CASE 513
%token  T_CATCH 514
%token  T_CHARACTER 515
%token  T_CLASS 516
%token  T_CLASS_C 517
%token  T_CLONE 518
%token  T_CLOSE_TAG 519
%token  T_COMMENT 520
%token  T_CONCAT_EQUAL 521
%token  T_CONST 522
%token  T_CONSTANT_ENCAPSED_STRING 523
%token  T_CONTINUE 524
%token  T_CURLY_OPEN 525
%token  T_DEC 526
%token  T_DECLARE 527
%token  T_DEFAULT 528
%token  T_DIR 529
%token  T_DIV_EQUAL 530
%token  T_DNUMBER 531
%token  T_DO 532
%token  T_DOC_COMMENT 533
%token  T_DOLLAR_OPEN_CURLY_BRACES 534
%token  T_DOUBLE_ARROW 535
%token  T_DOUBLE_CAST 536
%token  T_ECHO 537
%token  T_ELSE 538
%token  T_ELSEIF 539
%token  T_EMPTY 540
%token  T_ENCAPSED_AND_WHITESPACE 541
%token  T_ENDDECLARE 542
%token  T_ENDFOR 543
%token  T_ENDFOREACH 544
%token  T_END_HEREDOC 545
%token  T_ENDIF 546
%token  T_ENDSWITCH 547
%token  T_ENDWHILE 548
%token  T_EVAL 549
%token  T_EXIT 550
%token  T_EXTENDS 551
%token  T_FILE 552
%token  T_FINAL 553
%token  T_FOR 554
%token  T_FOREACH 555
%token  T_FUNC_C 556
%token  T_FUNCTION 557
%token  T_GLOBAL 558
%token  T_GOTO 559
%token  T_HALT_COMPILER 560
%token  T_IF 561
%token  T_IMPLEMENTS 562
%token  T_INC 563
%token  T_INCLUDE 564
%token  T_INCLUDE_ONCE 565
%token  T_INLINE_HTML 566
%token  T_INSTANCEOF 567
%token  T_INSTEADOF 568
%token  T_INT_CAST 569
%token  T_INTERFACE 570
%token  T_IS_EQUAL 571
%token  T_IS_GREATER_OR_EQUAL 572
%token  T_IS_IDENTICAL 573
%token  T_IS_NOT_EQUAL 574
%token  T_IS_NOT_IDENTICAL 575
%token  T_ISSET 576
%token  T_IS_SMALLER_OR_EQUAL 577
%token  T_LINE 578
%token  T_LIST 579
%token  T_LNUMBER 580
%token  T_LOGICAL_AND 581
%token  T_LOGICAL_OR 582
%token  T_LOGICAL_XOR 583
%token  T_METHOD_C 584
%token  T_MINUS_EQUAL 585
%token  T_MOD_EQUAL 586
%token  T_MUL_EQUAL 587
%token  T_NAMESPACE 588
%token  T_NEW 589
%token  T_NS_C 590
%token  T_NS_SEPARATOR 591
%token  T_NUM_STRING 592
%token  T_OBJECT_CAST 593
%token  T_OBJECT_OPERATOR 594
%token  T_OPEN_TAG 595
%token  T_OPEN_TAG_WITH_ECHO 596
%token  T_OR_EQUAL 597
%token  T_PAAMAYIM_NEKUDOTAYIM 598
%token  T_PLUS_EQUAL 599
%token  T_PRINT 600
%token  T_PRIVATE 601
%token  T_PROTECTED 602
%token  T_PUBLIC 603
%token  T_REQUIRE 604
%token  T_REQUIRE_ONCE 605
%token  T_RETURN 606
%token  T_SL 607
%token  T_SL_EQUAL 608
%token  T_SR 609
%token  T_SR_EQUAL 610
%token  T_START_HEREDOC 611
%token  T_STATIC 612
%token  T_STRING 613
%token  T_STRING_CAST 614
%token  T_STRING_VARNAME 615
%token  T_SWITCH 616
%token  T_THROW 617
%token  T_TRAIT 618
%token  T_TRAIT_C 619
%token  T_TRY 620
%token  T_UNSET 621
%token  T_UNSET_CAST 622
%token  T_USE 623
%token  T_VAR 624
%token  T_VARIABLE 625
%token  T_WHILE 626
%token  T_WHITESPACE 627
%token  T_XOR_EQUAL 628


%% /* Rules */

start:
	top_statement_list
;

top_statement_list:
		top_statement_list top_statement
	|	/* empty */
;

namespace_name:
		T_STRING 								{ observers.QualifiedNameGrabNameAndComment($1); }
	|	namespace_name T_NS_SEPARATOR T_STRING 	{ observers.QualifiedNameAddName($3); }
;

top_statement:
		statement								{ observers.ClearExpressions(); }
	|	function_declaration_statement	
	|	class_declaration_statement		
	|	T_HALT_COMPILER '(' ')' ';'		
	|	T_NAMESPACE namespace_name ';'			{ observers.NamespaceSetCurrent(); observers.QualifiedNameClear(); observers.NamespaceAliasClear(); }
	|	T_NAMESPACE namespace_name '{'			{ observers.NamespaceSetCurrent(); observers.QualifiedNameClear(); observers.NamespaceAliasClear(); }
		top_statement_list '}'		    
	|	T_NAMESPACE '{'							{ observers.NamespaceSetToGlobal(); observers.QualifiedNameClear(); observers.NamespaceAliasClear(); }
		top_statement_list '}'			
	|	T_USE use_declarations ';'      
	|	constant_declaration ';'
;

use_declarations:
		use_declarations 						{ observers.QualifiedNameClear(); }
		',' use_declaration						{ observers.QualifiedNameClear(); }
	|	use_declaration							{ observers.QualifiedNameClear(); }
;

use_declaration:
		namespace_name											{ observers.NamespaceUse(); }
	|	namespace_name T_AS T_STRING							{ observers.NamespaceUseAlias($3); }
	|	T_NS_SEPARATOR namespace_name							{ observers.NamespaceUseAbsolute(); }
	|	T_NS_SEPARATOR namespace_name T_AS T_STRING				{ observers.NamespaceUseAbsoluteAlias($3); }
;

constant_declaration:
		constant_declaration ',' T_STRING '=' static_scalar
	|	T_CONST T_STRING '=' static_scalar
;

inner_statement_list:
		inner_statement_list  inner_statement
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
	|	T_IF '(' expr ')'  statement elseif_list else_single
	|	T_IF '(' expr ')' ':' inner_statement_list new_elseif_list new_else_single T_ENDIF ';'
	|	T_WHILE '(' {} expr  ')'  while_statement
	|	T_DO {} statement T_WHILE '('  expr ')' ';' 
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
		T_VARIABLE ')'							{ observers.ExceptionCatchFound($8); }
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
	T_CATCH '(' fully_qualified_class_name  T_VARIABLE ')' 	{ observers.ExceptionCatchFound($4); }
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
		/* empty */				{ $$.Token = 0; }
	|	'&'						{ $$ = $1; }
;


unticked_function_declaration_statement:
	function is_reference T_STRING		{ observers.FunctionStart($3, $2, $1); }
	'(' parameter_list ')'				{ observers.FunctionFound(analyzer.GetLineNumber()); }
	'{' inner_statement_list '}'		{ observers.FunctionEnd($11); }
;

unticked_class_declaration_statement:
		class_entry_type T_STRING			{ observers.ClassSetName($2); }
		extends_from implements_list		{ observers.ClassFound(analyzer.GetLineNumber()); }
		'{' class_statement_list '}'		{ observers.ClassEnd(analyzer.GetLineNumber()); }
	|	interface_entry T_STRING			{ observers.ClassSetName($2); }
		interface_extends_list				{ observers.ClassFound(analyzer.GetLineNumber()); }
		'{' class_statement_list '}'		{ observers.ClassEnd(analyzer.GetLineNumber()); }
;

class_entry_type:
		T_CLASS					{ observers.ClassStart($1, false, false, false, false); }
	|	T_ABSTRACT T_CLASS		{ observers.ClassStart($1, true, false, false, false); }
	|	T_TRAIT					{ observers.ClassStart($1, false, false, false, true); }
	|	T_FINAL T_CLASS			{ observers.ClassStart($1, false, true, false, false); }
;

extends_from:
		/* empty */
	|	T_EXTENDS						{ observers.QualifiedNameClear(); }
		fully_qualified_class_name 		{ observers.ClassSetExtends(); }
;

interface_entry:
	T_INTERFACE		{ observers.ClassStart($1, false, false, true, false); }
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
		optional_class_type T_VARIABLE														{ observers.ParametersListSetName($2, false); }
	|	optional_class_type '&' T_VARIABLE													{ observers.ParametersListSetName($3, true); }
	|	optional_class_type '&' T_VARIABLE '=' static_scalar								{ observers.ParametersListSetName($3, true);}
	|	optional_class_type T_VARIABLE '=' static_scalar									{ observers.ParametersListSetName($2, false); }
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE							{ observers.ParametersListSetName($4, false); } 
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE						{ observers.ParametersListSetName($5, true); }
	|	non_empty_parameter_list ',' optional_class_type '&' T_VARIABLE	'=' static_scalar	{ observers.ParametersListSetName($5, true); }
	|	non_empty_parameter_list ',' optional_class_type T_VARIABLE '=' static_scalar		{ observers.ParametersListSetName($4, false); }
;

optional_class_type:
		/* empty */						{ observers.ParametersListCreate(); }
	|	T_ARRAY							{ observers.ParametersListCreateWithOptionalType($1); }
	|	T_CALLABLE						{ observers.ParametersListCreateWithOptionalType($1); }
	|	fully_qualified_class_name		{ observers.CreateParameterWithOptionalClassName(); }
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
	|	trait_use_statement
	|	method_modifiers function is_reference T_STRING		{ observers.ClassMemberSetNameAndReturnReference($4, $3, $2); }
		'('	parameter_list  ')'								{ observers.ClassMemberFound(false, analyzer.GetLineNumber()); }
		method_body											{ observers.ClassMemberClear(); }
;

trait_use_statement:
		T_USE												{ observers.QualifiedNameClear(); }
		trait_list trait_adaptations
;

trait_list:
		fully_qualified_class_name							{ observers.TraitUseFound(); }
	|	trait_list ','										{ observers.QualifiedNameClear(); }
		fully_qualified_class_name							{ observers.TraitUseFound(); }
;

trait_adaptations:
		';'
	|	'{'													{ observers.QualifiedNameClear(); } 
		trait_adaptation_list 
		'}'
;

trait_adaptation_list:
		/* empty */
	|	non_empty_trait_adaptation_list
;

non_empty_trait_adaptation_list:
		trait_adaptation_statement										{ observers.TraitClearAdaptation(); observers.QualifiedNameClear(); }
	|	non_empty_trait_adaptation_list trait_adaptation_statement		{ observers.TraitClearAdaptation(); observers.QualifiedNameClear(); }
;

trait_adaptation_statement:
		trait_precedence ';'
	|	trait_alias ';'
;

trait_precedence:
	trait_method_reference_fully_qualified T_INSTEADOF trait_reference_list			{ observers.TraitPrecedenceFound(); }
;

trait_reference_list:
		fully_qualified_class_name									
	|	trait_reference_list ',' fully_qualified_class_name			
;

trait_method_reference:
		T_STRING													{ observers.TraitAliasMethod($1); }
	|	trait_method_reference_fully_qualified						
;

trait_method_reference_fully_qualified:
	fully_qualified_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING		{ observers.TraitAliasMethodFromQualifiedName($3); }
;

trait_alias:
		trait_method_reference T_AS trait_modifiers T_STRING		{ observers.TraitAliasFound(&$4); }
	|	trait_method_reference T_AS member_modifier					{ observers.TraitAliasFound(NULL); }
;

trait_modifiers:
		/* empty */					 /* No change of methods visibility */
	|	member_modifier	 /* REM: Keep in mind, there are not only visibility modifiers */
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
		class_variable_declaration ',' T_VARIABLE						{ observers.ClassMemberSetNameAndReturnReference($3, $3, $3); observers.ClassMemberFound(true, analyzer.GetLineNumber()); }
	|	class_variable_declaration ',' T_VARIABLE '=' static_scalar		{ observers.ClassMemberSetNameAndReturnReference($3, $3, $3); observers.ClassMemberFound(true, analyzer.GetLineNumber()); }
	|	T_VARIABLE														{ observers.ClassMemberSetNameAndReturnReference($1, $1, $1); observers.ClassMemberFound(true, analyzer.GetLineNumber()); }
	|	T_VARIABLE '=' static_scalar									{ observers.ClassMemberSetNameAndReturnReference($1, $1, $1); observers.ClassMemberFound(true, analyzer.GetLineNumber()); }
;

class_constant_declaration:
		class_constant_declaration ',' 
		T_STRING '=' static_scalar			{ observers.ClassMemberSetNameAndReturnReference($3, $3, $3); observers.ClassMemberFound(true, analyzer.GetLineNumber()); }
	|	T_CONST T_STRING '=' static_scalar  { observers.ClassMemberSetAsConst($2, $1); observers.ClassMemberFound(true, analyzer.GetLineNumber()); }
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

chaining_method_or_property:
		chaining_method_or_property variable_property 	
	|	variable_property
;

chaining_dereference:
		chaining_dereference '[' dim_offset ']'	
	|	'[' dim_offset ']'		
;

chaining_instance_call:
		chaining_dereference 		 chaining_method_or_property 
	|	chaining_dereference 		
	|	chaining_method_or_property 
;

instance_call:
		/* empty */ 		
	|	chaining_instance_call
;

new_expr:
		T_NEW class_name_reference ctor_arguments									{ observers.ExpressionPushNewInstanceCall(); }
;

expr_without_variable:
		T_LIST '(' assignment_list ')' '=' expr
	|	variable '=' expr															{ observers.AssignmentExpressionFound(); }
	|	variable '=' '&' variable													{ observers.AssignmentExpressionFound(); }
	|	variable '=' '&' T_NEW class_name_reference ctor_arguments 					{ observers.ExpressionPushNewInstanceCall(); observers.AssignmentExpressionFound(); }
	|	T_CLONE expr																{ observers.ExpressionPushNewVariable($1); }
	|	variable T_PLUS_EQUAL expr 													{ observers.ExpressionPushNewScalar($1); }
	|	variable T_MINUS_EQUAL expr													{ observers.ExpressionPushNewScalar($1); }
	|	variable T_MUL_EQUAL expr													{ observers.ExpressionPushNewScalar($1); }
	|	variable T_DIV_EQUAL expr													{ observers.ExpressionPushNewScalar($1); }
	|	variable T_CONCAT_EQUAL expr												{ observers.ExpressionPushNewScalar($1); }
	|	variable T_MOD_EQUAL expr													{ observers.ExpressionPushNewScalar($1); }
	|	variable T_AND_EQUAL expr													{ observers.ExpressionPushNewScalar($1); }
	|	variable T_OR_EQUAL expr													{ observers.ExpressionPushNewScalar($1); }
	|	variable T_XOR_EQUAL expr													{ observers.ExpressionPushNewScalar($1); }
	|	variable T_SL_EQUAL expr													{ observers.ExpressionPushNewScalar($1); }
	|	variable T_SR_EQUAL expr													{ observers.ExpressionPushNewScalar($1); }
	|	rw_variable T_INC															{ observers.ExpressionPushNewScalar($1); }
	|	T_INC rw_variable 															{ observers.ExpressionPushNewScalar($1); }
	|	rw_variable T_DEC															{ observers.ExpressionPushNewScalar($1); }
	|	T_DEC rw_variable															{ observers.ExpressionPushNewScalar($1); }
	|	expr T_BOOLEAN_OR expr														{ observers.ExpressionPushNewScalar($1); }
	|	expr T_BOOLEAN_AND expr														{ observers.ExpressionPushNewScalar($1); }
	|	expr T_LOGICAL_OR expr														{ observers.ExpressionPushNewScalar($1); }
	|	expr T_LOGICAL_AND expr 													{ observers.ExpressionPushNewScalar($1); }
	|	expr T_LOGICAL_XOR expr 													{ observers.ExpressionPushNewScalar($1); } 
	|	expr '|' expr																{ observers.ExpressionPushNewScalar($1); }
	|	expr '&' expr																{ observers.ExpressionPushNewScalar($1); }
	|	expr '^' expr																{ observers.ExpressionPushNewScalar($1); }
	|	expr '.' expr 																{ observers.ExpressionPushNewScalar($1); }
	|	expr '+' expr			 													{ observers.ExpressionPushNewScalar($1); }
	|	expr '-' expr 																{ observers.ExpressionPushNewScalar($1); }
	|	expr '*' expr																{ observers.ExpressionPushNewScalar($1); }
	|	expr '/' expr																{ observers.ExpressionPushNewScalar($1); }
	|	expr '%' expr 																{ observers.ExpressionPushNewScalar($1); }
	| 	expr T_SL expr																{ observers.ExpressionPushNewScalar($1); }
	|	expr T_SR expr																{ observers.ExpressionPushNewScalar($1); }
	|	'+' expr %prec T_INC 														{ observers.ExpressionPushNewScalar($1); }
	|	'-' expr %prec T_INC														{ observers.ExpressionPushNewScalar($1); }
	|	'!' expr 																	{ observers.ExpressionPushNewScalar($1); }
	|	'~' expr 																	{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_IDENTICAL expr													{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_NOT_IDENTICAL expr												{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_EQUAL expr														{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_NOT_EQUAL expr 													{ observers.ExpressionPushNewScalar($1); }
	|	expr '<' expr																{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_SMALLER_OR_EQUAL expr												{ observers.ExpressionPushNewScalar($1); }
	|	expr '>' expr 																{ observers.ExpressionPushNewScalar($1); }
	|	expr T_IS_GREATER_OR_EQUAL expr												{ observers.ExpressionPushNewScalar($1); }
	|	expr T_INSTANCEOF class_name_reference 										{ observers.ExpressionPushNewScalar($1); }
	|	'(' expr ')' 																{ /* no need to push here as this is recursive */ }
	|	new_expr
	|	'(' new_expr ')' instance_call
	|	expr '?'
		expr ':'
		expr																		{ observers.ExpressionPushNewScalar($1); }
	|	expr '?' ':' 																
		expr																		{ observers.ExpressionPushNewScalar($1); }
	|	internal_functions_in_yacc													{ observers.ExpressionPushNewScalar($1); }
	|	T_INT_CAST expr																{ observers.ExpressionPushNewScalar($1); }
	|	T_DOUBLE_CAST expr 															{ observers.ExpressionPushNewScalar($1); }
	|	T_STRING_CAST expr															{ observers.ExpressionPushNewScalar($1); }
	|	T_ARRAY_CAST expr 															{ observers.ExpressionPushNewScalar($1); }
	|	T_OBJECT_CAST expr															{ observers.ExpressionPushNewScalar($1); }	
	|	T_BOOL_CAST expr															{ observers.ExpressionPushNewScalar($1); }
	|	T_UNSET_CAST expr
	|	T_EXIT exit_expr
	|	'@' expr
	|	scalar
	|	T_ARRAY '(' array_pair_list ')'												{ observers.ExpressionPushNewArray($1); }
 	|	'[' array_pair_list ']'														{ observers.ExpressionPushNewArray($1); }
	|	'`' backticks_expr '`' 														{ observers.ExpressionPushNewScalar($1); /* results of backtick operator is a string */ }
	|	T_PRINT expr
	|	function is_reference '(' 
			parameter_list ')' lexical_vars '{' inner_statement_list '}'			{ observers.ExpressionPushNewScalar($1); }
	|	T_STATIC function is_reference '(' 
			parameter_list ')' lexical_vars '{' inner_statement_list '}'			{ observers.ExpressionPushNewScalar($1); } /* TODO what statements are these? */
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
		namespace_name '('																{ observers.FunctionCallStart(); }
		function_call_parameter_list	')'												{ observers.FunctionCallEnd(analyzer.GetLineNumber()); }
	|	T_NAMESPACE T_NS_SEPARATOR 														
		namespace_name '(' 																{ observers.FunctionCallStart(); }
		function_call_parameter_list ')' 												{ observers.FunctionCallEnd(analyzer.GetLineNumber()); }
	|	T_NS_SEPARATOR namespace_name '(' 												{ observers.QualifiedNameMakeAbsolute(); observers.FunctionCallStart(); }
				function_call_parameter_list ')'										{ observers.FunctionCallEnd(analyzer.GetLineNumber()); } 
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
	|	T_NS_SEPARATOR namespace_name								{ observers.QualifiedNameMakeAbsolute(); }
;

fully_qualified_class_name:
		namespace_name
	|	T_NAMESPACE T_NS_SEPARATOR namespace_name
	|	T_NS_SEPARATOR namespace_name								{ observers.QualifiedNameMakeAbsolute(); }
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
		T_LNUMBER 													{ observers.ExpressionPushNewScalar($1); }
	|	T_DNUMBER 													{ observers.ExpressionPushNewScalar($1); }
	|	T_CONSTANT_ENCAPSED_STRING									{ observers.ExpressionPushNewScalar($1); }
	|	T_LINE 														{ observers.ExpressionPushNewScalar($1); }
	|	T_FILE 														{ observers.ExpressionPushNewScalar($1); }
	|	T_DIR   													{ observers.ExpressionPushNewScalar($1); }
	|	T_TRAIT_C													{ observers.ExpressionPushNewScalar($1); }
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
	|	'[' static_array_pair_list ']' 
	|	static_class_constant 
	|	T_CLASS_C											{ observers.ExpressionPushNewScalar($1); }
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
	|	T_CLASS_C				
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
		r_variable					{ observers.ExpressionFound(); }
	|	expr_without_variable		{ observers.ExpressionFound(); }
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

array_method_dereference:
		array_method_dereference '[' dim_offset ']'				{ observers.ExpressionPop(); }
	|	method '[' dim_offset ']'								{ observers.ExpressionPop(); }
;

method:
		'(' function_call_parameter_list ')'					{ $$ = $1; } 
;

method_or_not:
		method						{ $$ = $1; } 
	|	array_method_dereference	{ $$.Token = 0; }
	|	/* empty */ 				{ $$.Token = 0; }
;

variable_without_objects:
		reference_variable 
	|	simple_indirect_reference reference_variable 
;

static_member:
		class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects 								{ observers.CurrentExpressionAsStaticMember($2); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM variable_without_objects 
;

variable_class_name:
		reference_variable 
;

array_function_dereference:
		array_function_dereference '[' dim_offset ']'				{ observers.ExpressionPop(); }
	|	function_call '[' dim_offset ']'							{ observers.ExpressionPop(); }
;

base_variable_with_function_calls:
		base_variable
	|	array_function_dereference		{ observers.CurrentExpressionPushAsFunctionCall(); }
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
		variable							{ observers.ForeachVariableFound(); }
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
	|	T_INCLUDE expr 			{ observers.IncludeFound(analyzer.GetLineNumber()); } 
	|	T_INCLUDE_ONCE expr		{ observers.IncludeFound(analyzer.GetLineNumber()); } 
	|	T_EVAL '(' expr ')' 	
	|	T_REQUIRE expr			{ observers.IncludeFound(analyzer.GetLineNumber()); } 
	|	T_REQUIRE_ONCE expr		{ observers.IncludeFound(analyzer.GetLineNumber()); } 
;

isset_variables:
		variable 				
	|	isset_variables ','  variable 
;

class_constant:
		class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING			{ observers.CurrentExpressionPushAsClassConstant($2, $3); }
	|	variable_class_name T_PAAMAYIM_NEKUDOTAYIM T_STRING 
;

%%