/**
 * This software is released under the terms of the MIT License
 * 
 * Permission is hereby granted free of charge to any person obtaining a copy
 * of this software and associated documentation files (the "Software") to deal
 * in the Software without restriction including without limitation the rights
 * to use copy modify merge publish distribute sublicense and/or sell
 * copies of the Software and to permit persons to whom the Software is
 * furnished to do so subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND EXPRESS OR
 * IMPLIED INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM DAMAGES OR OTHER
 * LIABILITY WHETHER IN AN ACTION OF CONTRACT TORT OR OTHERWISE ARISING FROM
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @copyright  2009-2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */
#ifndef TOKEN_CLASS_H
#define TOKEN_CLASS_H

#include <pelet/Api.h>
#include <pelet/UCharBufferedFileClass.h>
#include <unicode/unistr.h>

namespace pelet {

/**
 * These tokens will be 'shared' among the multiple PHP grammars. We want to use the
 * same numbers across all grammars, but when defining a grammar we cannot use
 * #defines or use our own enum.  Therefore, we must use numbers when defining the
 * token types. But, this also means we must be real careful and use the exact same
 * numbers. This list of #defines below was generated using this bit of scripting:
 * 
 * 
   cat ~/workspace/php-5.4.0/Zend/zend_language_parser.y \
	| grep "%token" | cut -d ' ' -f 1-2 | sort | uniq | awk '{ print "#define ", $2, " ", 500 + NR; }' | grep -v " END "
  
 * where we take all the original grammar files, keep only the token declarations, figure out all unique tokens,
 * and generate a #define with a unique number for each token (minus the END token, which bison requires to always be zero
 */	
enum Tokens {
	
	/*
	 * lexer errors; specific to pelet
	 */
	T_ERROR_UNTERMINATED_COMMENT = -1,
	T_ERROR_UNTERMINATED_STRING = -2,
	T_ERROR_UNTERMINATED_BACKTICK = -3,

	/**
	 * token the signifies the end of the input
	 */
	T_END = 0,
	
	/*
	 * tokens used by all PHP grammars; 
	 */
	T_ABSTRACT = 502,
	T_AND_EQUAL = 503,
	T_ARRAY = 504,
	T_ARRAY_CAST = 505,
	T_AS = 506,
	T_BAD_CHARACTER = 507,
	T_BOOL_CAST = 508,
	T_BOOLEAN_AND = 509,
	T_BOOLEAN_OR = 510,
	T_BREAK = 511,
	T_CALLABLE = 512,
	T_CASE = 513,
	T_CATCH = 514,
	T_CHARACTER = 515,
	T_CLASS = 516,
	T_CLASS_C = 517,
	T_CLONE = 518,
	T_CLOSE_TAG = 519,
	T_COMMENT = 520,
	T_CONCAT_EQUAL = 521,
	T_CONST = 522,
	T_CONSTANT_ENCAPSED_STRING = 523,
	T_CONTINUE = 524,
	T_CURLY_OPEN = 525,
	T_DEC = 526,
	T_DECLARE = 527,
	T_DEFAULT = 528,
	T_DIR = 529,
	T_DIV_EQUAL = 530,
	T_DNUMBER = 531,
	T_DO = 532,
	T_DOC_COMMENT = 533,
	T_DOLLAR_OPEN_CURLY_BRACES = 534,
	T_DOUBLE_ARROW = 535,
	T_DOUBLE_CAST = 536,
	T_ECHO = 537,
	T_ELSE = 538,
	T_ELSEIF = 539,
	T_EMPTY = 540,
	T_ENCAPSED_AND_WHITESPACE = 541,
	T_ENDDECLARE = 542,
	T_ENDFOR = 543,
	T_ENDFOREACH = 544,
	T_END_HEREDOC = 545,
	T_ENDIF = 546,
	T_ENDSWITCH = 547,
	T_ENDWHILE = 548,
	T_EVAL = 549,
	T_EXIT = 550,
	T_EXTENDS = 551,
	T_FILE = 552,
	T_FINAL = 553,
	T_FOR = 554,
	T_FOREACH = 555,
	T_FUNC_C = 556,
	T_FUNCTION = 557,
	T_GLOBAL = 558,
	T_GOTO = 559,
	T_HALT_COMPILER = 560,
	T_IF = 561,
	T_IMPLEMENTS = 562,
	T_INC = 563,
	T_INCLUDE = 564,
	T_INCLUDE_ONCE = 565,
	T_INLINE_HTML = 566,
	T_INSTANCEOF = 567,
	T_INSTEADOF = 568,
	T_INT_CAST = 569,
	T_INTERFACE = 570,
	T_IS_EQUAL = 571,
	T_IS_GREATER_OR_EQUAL = 572,
	T_IS_IDENTICAL = 573,
	T_IS_NOT_EQUAL = 574,
	T_IS_NOT_IDENTICAL = 575,
	T_ISSET = 576,
	T_IS_SMALLER_OR_EQUAL = 577,
	T_LINE = 578,
	T_LIST = 579,
	T_LNUMBER = 580,
	T_LOGICAL_AND = 581,
	T_LOGICAL_OR = 582,
	T_LOGICAL_XOR = 583,
	T_METHOD_C = 584,
	T_MINUS_EQUAL = 585,
	T_MOD_EQUAL = 586,
	T_MUL_EQUAL = 587,
	T_NAMESPACE = 588,
	T_NEW = 589,
	T_NS_C = 590,
	T_NS_SEPARATOR = 591,
	T_NUM_STRING = 592,
	T_OBJECT_CAST = 593,
	T_OBJECT_OPERATOR = 594,
	T_OPEN_TAG = 595,
	T_OPEN_TAG_WITH_ECHO = 596,
	T_OR_EQUAL = 597,
	T_PAAMAYIM_NEKUDOTAYIM = 598,
	T_PLUS_EQUAL = 599,
	T_PRINT = 600,
	T_PRIVATE = 601,
	T_PROTECTED = 602,
	T_PUBLIC = 603,
	T_REQUIRE = 604,
	T_REQUIRE_ONCE = 605,
	T_RETURN = 606,
	T_SL = 607,
	T_SL_EQUAL = 608,
	T_SR = 609,
	T_SR_EQUAL = 610,
	T_START_HEREDOC = 611,
	T_STATIC = 612,
	T_STRING = 613,
	T_STRING_CAST = 614,
	T_STRING_VARNAME = 615,
	T_SWITCH = 616,
	T_THROW = 617,
	T_TRAIT = 618,
	T_TRAIT_C = 619,
	T_TRY = 620,
	T_UNSET = 621,
	T_UNSET_CAST = 622,
	T_USE = 623,
	T_VAR = 624,
	T_VARIABLE = 625,
	T_WHILE = 626,
	T_WHITESPACE = 627,
	T_XOR_EQUAL = 628,

	// new tokens for php 5.5
	T_FINALLY = 629,
	T_YIELD = 630
};

/**
 * The lexer has different rules based on where in the source code a specific token is.
 * The various states are:
 * 
 * INLINE_HTML: in this state the lexer will skip over all tokens and stop (right before) 
 * the open tag
 * SCRIPT: in this state all of the php keywords and symbols are honored. For example "if" is 
 * an T_IF token and not an identifer.
 * LINE_COMMENT: single line comment
 * MULTI_LINE_COMMENT: multi line comments that do not start with "/" "*" "*"
 * DOC_COMMENT:  multi line comments that start with "/" "*" "*"
 * SINGLE_QUOTE_STRING: string constants enclosed with single quotes
 * DOUBLE_QUOTE_STRING: string constants enclosed with double quotes
 * DOUBLE_QUOTE_STRING_VARIABLE: a variable inside of a double-quoted string
 * HEREDOC: string constant
 * NOWDOC: string constant
 * PROPERTY: in this state keywords are NOT honored; any alphanumeric string will labeled as an
 * identifier.  For example; in php an object is allowed to have a property called "list"
 * BACKTICK: in this state the lexer will not honor any keywords or symbols.
 * Note that this is different than the PHP lexer; the PHP lexer handles embedded variables
 * but that functionality is not needed by the editor.
 * 
 */
enum YYCONDTYPE {
	yycSCRIPT,
	yycLINE_COMMENT,
	yycMULTI_LINE_COMMENT,
	yycDOC_COMMENT,
	yycSINGLE_QUOTE_STRING,
	yycDOUBLE_QUOTE_STRING,
	yycDOUBLE_QUOTE_STRING_VARIABLE,
	yycHEREDOC,
	yycNOWDOC,
	yycINLINE_HTML,
	yycPROPERTY,
	yycBACKTICK
};

/**
 * The lexical analyzer and Parser classes can handle multiple versions of PHP.
 * The caller can set which version of PHP to handle by calling SetVersion() method.
 * 
 * PHP_53: handle PHP 5.3 source code (namespaces)
 * PHP_54: handle PHP 5.4 source code (traits, callables, array dereferencing, array short syntax)
 */
enum PELET_API Versions {
	PHP_53,
	PHP_54,
	PHP_55
};

/**
 * small class to hold 'public' tokens (exported) tokens
 * 
 */
class PELET_API TokenClass {

public:

	/**
	 * The various visibility modifiers
	 */
	enum TokenIds {
		PUBLIC = 1,
		PROTECTED,
		PRIVATE
	}; 
};

/**
 * Returns TRUE if the given token signifies the end of tile. Unfortunately due to bison
 * insisting that all token be positive the only way to flag unterminating string
 * is to give it a positive token numberand this prevents us from doing easy
 * checks for end of file such as token > 0
 * @return bool if TRUE caller should stop lexing as there is no more input.
 */
bool PELET_API IsTerminatingToken(int token);

/**
 * This function will advance the current pointer of the buffer all the way until 
 * it encounters the given identifier on a line. (the end of a heredoc / nowdoc).
 *
 * @param buffer the content being lexed. This function will NOT own the pointer.
 * @param identifier the identifier to look for.
 * @return 0 for success; ERROR_UNTERMINATED_STRING if identifier was not found
 */
int SkipToIdentifier(BufferClass* buffer, UnicodeString identifier);

/**
 * This function will advance the current pointer of the buffer all the way until
 * it encounters the end of the heredoc. It will leave the ending semicolon in the stream to be consumed
 * next. 
 * 
 * @param buffer the content being lexed. This function will NOT own the pointer.
 * @return int token; could be ERROR_UNTERMINATED_STRING 
 */
int HandleNowdoc(BufferClass* buffer);

/**
 * This function will advance the current pointer of the buffer all the way until
 * it encounters the end of the nowdoc. It will leave the ending semicolon in the stream to be consumed
 * next. 
 * 
 * @param buffer the content being lexed. This function will NOT own the pointer.
 * @return int token; could be ERROR_UNTERMINATED_STRING 
 */
int HandleHeredoc(BufferClass* buffer);

}

#endif