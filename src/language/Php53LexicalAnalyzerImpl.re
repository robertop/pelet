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
 * @copyright  2009-2011 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */
 
#include <language/Php53LexicalAnalyzerImpl.h>
#include <language/Php53ParserImpl.hpp>
#include <unicode/unistr.h>

// tell re2c we will use Unicode chars
#define YYCTYPE UChar

// this is the pointer to the current position; 
#define YYCURSOR buffer.Current

#define YYMARKER buffer.Marker

// this is the pointer that signals the end of the buffered content
// when Current >= Limit YYFILL will be called
#define YYLIMIT buffer.Limit

// we will use the file buffer to fill the lexer buffer
#define YYFILL(n) { buffer.AppendToLexeme(n); }

// condition is actually a variable (reference) that is passed into the nextToken() function
#define YYGETCONDITION() condition

// condition is actually a variable (reference) that is passed into the nextToken() function
#define YYSETCONDITION(c)  condition = c


int mvceditor::SkipToIdentifier(UCharBufferedFileClass &buffer, UnicodeString identifier) {
	bool end = false;
	
	// add semicolon to make checks easier
	identifier.append(';');
	UChar c = *buffer.Current;
	while (!end) {
	
		/*
		 * read one line at a time.  If the line is the identifier we'll stop. If we reach the
		 * end, then this heredoc in unterminated.
		 * be careful; do NOT store buffer.Current since it may change at any after buffer.AppendToLexeme
		 * is called
		 */
		UnicodeString line;
		while (c != 0 && c != '\n' && c != '\r') {
			line.append(c);
			YYFILL(1);
			c = *(++buffer.Current);
			
		}
		if (c == 0) {
			end = true;
			return T_ERROR_UNTERMINATED_STRING;
		}
		if (!line.endsWith(UNICODE_STRING(";", 1))) {
			line.append(UNICODE_STRING(";", 1));
		}
		if (line.compare(identifier) == 0) {
			end = true;
			
			// semicolons and newlines are NOT part of the nowdoc; the parser will look for semicolons
			buffer.Current--;
		}
		else {
			YYFILL(1);
			c = *(++buffer.Current);
		}
	}
	return 0;
}

int mvceditor::HandleHeredoc(UCharBufferedFileClass &buffer) {

	/*
	 * find out the stopping identifier. Since current is past the newline, the
	 * identifier is located past the "<<<" (3) and before the newline (trimming
	 * since newline can be more than 1 char)
	 *
	 * difference from PHP: we will treat single quoted strings and heredoc the same for now
	 * the PHP scanner scans the string and returns T_CONSTANT_ENCAPSED_STRING if string
	 * does not have embedded variables; since we don't care about embedded variables 
	 * we will always treat heredoc as singles quote strings
	 */
	UnicodeString identifier(buffer.TokenStart + 3, buffer.Current - buffer.TokenStart - 3 - 1);
	identifier.trim();
	
	// remove double quotes if they are there
	if (identifier.startsWith(UNICODE_STRING("\"", 1))) {
		identifier.remove(0, 1);
	}
	if (identifier.endsWith(UNICODE_STRING("\"", 1))) {
		identifier.remove(identifier.length() - 1, 1);
	}
	YYFILL(1);
	int failed = mvceditor::SkipToIdentifier(buffer, identifier);
	if (!failed) {
		return T_CONSTANT_ENCAPSED_STRING;
	}
	return failed;
}

int mvceditor::HandleNowdoc(UCharBufferedFileClass &buffer) {
	
	/*
	 * find out the stopping identifier. Since current is past the newline, the
	 * identifier is located past the "<<<'" (3) and before the newline (trimming
	 * since newline can be more than 1 char)
	 *
	 * difference from PHP: we will treat single quoted strings and nowdoc the same for now
	 * the PHP scanner scans the string and returns T_CONSTANT_ENCAPSED_STRING if string
	 * does not have embedded variables; since we don't care about embedded variables 
	 * we will always treat nowdoc as singles quote strings
	 */
	UnicodeString identifier(buffer.TokenStart + 3, buffer.Current - buffer.TokenStart - 3 - 1);
	identifier.trim();
	
	// remove the single quotes
	identifier.remove(0, 1);
	identifier.remove(identifier.length() - 1, 1);
	YYFILL(1);
	int failed = mvceditor::SkipToIdentifier(buffer, identifier);
	if (!failed) {
		return T_CONSTANT_ENCAPSED_STRING;
	}
	return failed;
}

int mvceditor::NextToken(UCharBufferedFileClass &buffer, YYCONDTYPE &condition) {
	buffer.ResetBuffer();
	UChar *start = buffer.TokenStart;
	
// goto this label when we want to advance to the next character but DISCARD the previous
// lexeme.	
php_5_3_lexical_analyzer_next_token_start:
	buffer.ResetBuffer();

// goto this label when we want to advance to the next character but KEEP ACCUMULATING the previous
// lexeme.
php_5_3_lexical_analyzer_next_char:

/*!ignore:re2c ********************************
NOTE: CHANGES HERE WILL MOST LIKELY AFFECT THE PARSERCLASS AND THE TOKENCLASS TOKEN 
IDS.  WHEN MAKING CHANGES MAKE SURE TO MAKE UPDATES TO THOSE FILES TOO.
*********************************/


/*!re2c
re2c:indent:top = 1;
re2c:labelprefix = php_5_3_lexical_analyzer_;
	
IDENTIFIER = [a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*;
LNUM =[0-9]+;
DNUM = ([0-9]*"."[0-9]+)|([0-9]+"."[0-9]*);
EXPONENT_DNUM = ((LNUM|DNUM)[eE][+-]?LNUM);
HNUM = "0x"[0-9a-fA-F]+;

EOF = [\000];
ALL = [\000-\377];
ANY = ALL\EOF;
NONPRINTABLE = [\001-\037];
WHITESPACE = [ \t\v\f];
NEWLINE = ([\r][\n])|([\n])|([\r]);
SINGLE_SYMBOLS = [;:,.\[\]()|^&+-/*=%!~$<>?@{}`];

/*!ignore:re2c
 * keywords. note the use of single quotes to make the lookups case-insensitive
 */
<SCRIPT> 'and' { return T_LOGICAL_AND; }
<SCRIPT> 'as' { return T_AS; }
<SCRIPT> 'break' { return T_BREAK; }
<SCRIPT> 'case' { return T_CASE; }
<SCRIPT> 'class' { return T_CLASS; }
<SCRIPT> 'continue' { return T_CONTINUE; }
<SCRIPT> 'declare' { return T_DECLARE; }
<SCRIPT> 'default' { return T_DEFAULT; }
<SCRIPT> 'die' { return T_EXIT; }
<SCRIPT> 'exit' { return T_EXIT; }
<SCRIPT> 'do' { return T_DO; }
<SCRIPT> 'echo' { return T_ECHO; }
<SCRIPT> 'else' { return T_ELSE; }
<SCRIPT> 'elseif' { return T_ELSEIF; }
<SCRIPT> 'empty' { return T_EMPTY; }
<SCRIPT> 'enddeclare' { return T_ENDDECLARE; }
<SCRIPT> 'endfor' { return T_ENDFOR; }
<SCRIPT> 'endforeach' { return T_ENDFOREACH; }
<SCRIPT> 'endif' { return T_ENDIF; }
<SCRIPT> 'endswitch' { return T_ENDSWITCH; }
<SCRIPT> 'endwhile' { return T_ENDWHILE; }
<SCRIPT> 'eval' { return T_EVAL; }
<SCRIPT> 'extends' { return T_EXTENDS; }
<SCRIPT> 'for' { return T_FOR; }
<SCRIPT> 'foreach' { return T_FOREACH; }
<SCRIPT> 'function' { return T_FUNCTION; }
<SCRIPT> 'if' { return T_IF; }
<SCRIPT> 'include' { return T_INCLUDE; }
<SCRIPT> 'include_once' { return T_INCLUDE_ONCE; }
<SCRIPT> 'global' { return T_GLOBAL; }
<SCRIPT> 'list' { return T_LIST; }
<SCRIPT> 'new' { return T_NEW; }
<SCRIPT> 'not' { return '!'; }
<SCRIPT> 'or' { return T_LOGICAL_OR; }
<SCRIPT> 'print' { return T_PRINT; }
<SCRIPT> 'require' { return T_REQUIRE; }
<SCRIPT> 'require_once' { return T_REQUIRE_ONCE; }
<SCRIPT> 'return' { return T_RETURN; }
<SCRIPT> 'static' { return T_STATIC; }
<SCRIPT> 'switch' { return T_SWITCH; }
<SCRIPT> 'var' { return T_VAR; }
<SCRIPT> 'while' { return T_WHILE; }
<SCRIPT> 'xor' { return T_LOGICAL_XOR; }
<SCRIPT> '__FILE__' { return T_FILE; }
<SCRIPT> '__LINE__' { return T_LINE; }
<SCRIPT> '__DIR__' { return T_DIR; }
<SCRIPT> '__NAMESPACE__' { return T_NS_C; }
<SCRIPT> '__CLASS__' { return T_CLASS_C; }
<SCRIPT> '__METHOD__' { return T_METHOD_C; }
<SCRIPT> '__FUNCTION__' { return T_FUNC_C; }
<SCRIPT> '__halt_compiler' { return T_HALT_COMPILER; }
<SCRIPT> 'implements' { return T_IMPLEMENTS; }
<SCRIPT> 'interface' { return T_INTERFACE; }
<SCRIPT> 'instanceof' { return T_INSTANCEOF; }
<SCRIPT> 'private' { return T_PRIVATE; }
<SCRIPT> 'public' { return T_PUBLIC; }
<SCRIPT> 'protected' { return T_PROTECTED; }
<SCRIPT> 'const' { return T_CONST; }
<SCRIPT> 'abstract' { return T_ABSTRACT; }
<SCRIPT> 'final' { return T_FINAL; }
<SCRIPT> 'goto' { return T_GOTO; }
<SCRIPT> 'try' { return T_TRY; }
<SCRIPT> 'catch' { return T_CATCH; }
<SCRIPT> 'throw' { return T_THROW; }
<SCRIPT> 'declare' { return T_DECLARE; }
<SCRIPT> 'use' { return T_USE; }
<SCRIPT> 'unset' { return T_UNSET; }
<SCRIPT> 'isset' { return T_ISSET; }
<SCRIPT> 'clone' { return T_CLONE; }
<SCRIPT> 'array' { return T_ARRAY; }
<SCRIPT> 'namespace' { return T_NAMESPACE; }
<SCRIPT> '(' WHITESPACE* 'integer' WHITESPACE* ')' { return T_INT_CAST; }
<SCRIPT> '(' WHITESPACE* 'int' WHITESPACE* ')' { return T_INT_CAST; }
<SCRIPT> '(' WHITESPACE* 'float' WHITESPACE* ')' { return T_DOUBLE_CAST; } 
<SCRIPT> '(' WHITESPACE* 'real' WHITESPACE* ')' { return T_DOUBLE_CAST; } 
<SCRIPT> '(' WHITESPACE* 'double' WHITESPACE* ')' { return T_DOUBLE_CAST; } 
<SCRIPT> '(' WHITESPACE* 'string' WHITESPACE* ')' { return T_STRING_CAST; }
<SCRIPT> '(' WHITESPACE* 'array' WHITESPACE* ')' { return T_ARRAY_CAST; }
<SCRIPT> '(' WHITESPACE* 'object' WHITESPACE* ')' { return T_OBJECT_CAST; }
<SCRIPT> '(' WHITESPACE* 'boolean' WHITESPACE* ')' { return T_BOOL_CAST; }
<SCRIPT> '(' WHITESPACE* 'bool' WHITESPACE* ')' { return T_BOOL_CAST; }
<SCRIPT> '(' WHITESPACE* 'unset' WHITESPACE* ')' { return T_UNSET_CAST; }


/*!ignore:re2c
 * longest symbols first; because they need to take precedence when consuming
 */
<SCRIPT> "<<<" WHITESPACE* ((["]IDENTIFIER["]) | (IDENTIFIER)) NEWLINE { buffer.IncrementLine(); condition = yycHEREDOC; goto php_5_3_lexical_analyzer_next_char; }
<SCRIPT> "<<<" WHITESPACE* "'" IDENTIFIER "'" NEWLINE { buffer.IncrementLine(); condition = yycNOWDOC; goto php_5_3_lexical_analyzer_next_char; }
<SCRIPT> "<<=" { return T_SL_EQUAL; }
<SCRIPT> ">>=" { return T_SR_EQUAL; }
<SCRIPT> "===" { return T_IS_IDENTICAL; }
<SCRIPT> "!==" { return T_IS_NOT_IDENTICAL; }
<SCRIPT> "<?=" { return T_OPEN_TAG_WITH_ECHO; }
<SCRIPT> "/**" { condition = yycDOC_COMMENT; goto php_5_3_lexical_analyzer_next_char; }
<SCRIPT> "::" { return T_PAAMAYIM_NEKUDOTAYIM; }
<SCRIPT> "->" { condition = yycPROPERTY; return T_OBJECT_OPERATOR; }
<SCRIPT> '<?php' (WHITESPACE) { return T_OPEN_TAG; }
<SCRIPT> '<?php' (NEWLINE) { buffer.IncrementLine(); return T_OPEN_TAG; }
<SCRIPT> "<?" { return T_OPEN_TAG; }
<SCRIPT> '<?' (WHITESPACE) { return T_OPEN_TAG; }
<SCRIPT> '<?' (NEWLINE) { buffer.IncrementLine(); return T_OPEN_TAG; }
<SCRIPT> "||" { return T_BOOLEAN_OR; }
<SCRIPT> "&&" { return T_BOOLEAN_AND; }
<SCRIPT> "++" { return T_INC; }
<SCRIPT> "--" { return T_DEC; }
<SCRIPT> "<<" { return T_SL; }
<SCRIPT> ">>" { return T_SR; }
<SCRIPT> "<=" { return T_IS_SMALLER_OR_EQUAL; }
<SCRIPT> ">=" { return T_IS_GREATER_OR_EQUAL; }
<SCRIPT> "==" { return T_IS_EQUAL; } 
<SCRIPT> "!=" { return T_IS_NOT_EQUAL; }
<SCRIPT> "<>" { return T_IS_NOT_EQUAL; }
<SCRIPT> "+=" { return T_PLUS_EQUAL; }
<SCRIPT> "-=" { return T_MINUS_EQUAL; }
<SCRIPT> "*=" { return T_MUL_EQUAL; }
<SCRIPT> "/=" { return T_DIV_EQUAL; }
<SCRIPT> ".=" { return T_CONCAT_EQUAL; }
<SCRIPT> "%=" { return T_MOD_EQUAL; }
<SCRIPT> "&=" { return T_AND_EQUAL; }
<SCRIPT> "|=" { return T_OR_EQUAL; }
<SCRIPT> "^=" { return T_XOR_EQUAL; }
<SCRIPT> "/*" { condition = yycMULTI_LINE_COMMENT; goto php_5_3_lexical_analyzer_next_token_start; }
<SCRIPT> "//" { condition = yycLINE_COMMENT; goto php_5_3_lexical_analyzer_next_token_start; }
<SCRIPT> "?>" { condition = yycINLINE_HTML; return T_CLOSE_TAG; }
<SCRIPT> "=>" { return T_DOUBLE_ARROW; }

/*!ignore:re2c
 * 1 char long symbols go last they need to have the lowest precedence in order
 * to give the rest of the symbols a chance to match
 */
<SCRIPT> "\\" { return T_NS_SEPARATOR; }
<SCRIPT> "`" { condition = yycBACKTICK; goto php_5_3_lexical_analyzer_next_token_start; }
<SCRIPT> SINGLE_SYMBOLS { return *buffer.TokenStart; }
<SCRIPT> "#" { condition = yycLINE_COMMENT; goto php_5_3_lexical_analyzer_next_token_start; }
<SCRIPT> "'" { condition = yycSINGLE_QUOTE_STRING; goto php_5_3_lexical_analyzer_next_char; }
<SCRIPT> "\"" { condition = yycDOUBLE_QUOTE_STRING; goto php_5_3_lexical_analyzer_next_char; }

<SCRIPT> NEWLINE { buffer.IncrementLine(); goto php_5_3_lexical_analyzer_next_token_start; }
<SCRIPT> WHITESPACE { goto php_5_3_lexical_analyzer_next_token_start; }
<SCRIPT> NONPRINTABLE { goto php_5_3_lexical_analyzer_next_token_start; }
<SCRIPT> EOF { return T_END_OF_FILE; }
<SCRIPT> "$" IDENTIFIER { return T_VARIABLE; }

/*!ignore:re2c 
 * put this last so that any keyword is hit first
 */
<SCRIPT> IDENTIFIER { return T_STRING; }
<SCRIPT> LNUM { return T_LNUMBER; }
<SCRIPT> DNUM { return T_DNUMBER; }
<SCRIPT> EXPONENT_DNUM { return T_DNUMBER; }
<SCRIPT> HNUM { return T_DNUMBER; }
<SCRIPT> ANY  { goto php_5_3_lexical_analyzer_next_token_start; }


/*!ignore:re2c
 * line comments: the close tag is honored
 * this is a valid line:
 *  <p><?php echo "hello"; // again ?></p>
 * when the close tag is encountered; put it back so that it can be tokenized
 */
<LINE_COMMENT> NEWLINE { buffer.IncrementLine(); condition = yycSCRIPT; goto php_5_3_lexical_analyzer_next_token_start; }
<LINE_COMMENT> EOF { return T_END_OF_FILE; }
<LINE_COMMENT> "?>" { condition = yycINLINE_HTML; buffer.TokenStart = buffer.Current - 2; return T_CLOSE_TAG; }
<LINE_COMMENT> ANY { goto php_5_3_lexical_analyzer_next_token_start; }

/*!ignore:re2c
 * by going to next_token_start the lexeme is discarded; comments are treated like whitespace
 */
<MULTI_LINE_COMMENT> EOF { buffer.TokenStart = buffer.Current; return T_ERROR_UNTERMINATED_COMMENT; }
<MULTI_LINE_COMMENT> NEWLINE { buffer.IncrementLine(); goto php_5_3_lexical_analyzer_next_token_start; }
<MULTI_LINE_COMMENT> "*/" {  condition = yycSCRIPT; goto php_5_3_lexical_analyzer_next_token_start; }
<MULTI_LINE_COMMENT> ANY { goto php_5_3_lexical_analyzer_next_token_start; }

/*!ignore:re2c
 * by going to next_char the lexeme is KEPT; DOC comments are treated special
 */
<DOC_COMMENT> "*/" { condition = yycSCRIPT; return T_DOC_COMMENT; }
<DOC_COMMENT> EOF { buffer.TokenStart = buffer.Limit; return T_ERROR_UNTERMINATED_COMMENT; }
<DOC_COMMENT> NEWLINE { buffer.IncrementLine(); goto php_5_3_lexical_analyzer_next_char; }
<DOC_COMMENT> ANY { goto php_5_3_lexical_analyzer_next_char; }

/*!ignore:re2c
 * for single quoted strings; read until the closing tick; making sure to eat the
 * escaped ticks ("\'").  we must also watch out for escaped backslashes "\\\"
 * by going to next_char the lexeme is KEPT; we want the string contents
 */
<SINGLE_QUOTE_STRING> [\\]['] { goto php_5_3_lexical_analyzer_next_char; }
<SINGLE_QUOTE_STRING> [\\][\\] { goto php_5_3_lexical_analyzer_next_char; }
<SINGLE_QUOTE_STRING> "'" { condition = yycSCRIPT; return T_CONSTANT_ENCAPSED_STRING; }
<SINGLE_QUOTE_STRING> EOF { return T_ERROR_UNTERMINATED_STRING; }
<SINGLE_QUOTE_STRING> NEWLINE { buffer.IncrementLine(); goto php_5_3_lexical_analyzer_next_char; }
<SINGLE_QUOTE_STRING> ANY { goto php_5_3_lexical_analyzer_next_char; }

/*!ignore:re2c
 * difference from PHP: we will treat single and double quote strings the same for now
 * the 'real' PHP scanner scans the string and returns T_CONSTANT_ENCAPSED_STRING if string
 * does not have embedded variables and returns T_ENCAPSED_WHITESPACE when string has 
 * embedded variable; since we don't care about embedded variables 
 * we will always treat double quotes as singles quotes.
 * Also watch out for escaped ticks ("\"") and escaped backslashes "\\\"
 * by going to next_char the lexeme is KEPT; we want the string contents
 */
<DOUBLE_QUOTE_STRING> [\\]["] { goto php_5_3_lexical_analyzer_next_char; }
<DOUBLE_QUOTE_STRING> [\\][\\] { goto php_5_3_lexical_analyzer_next_char; } 
<DOUBLE_QUOTE_STRING> '"' { condition = yycSCRIPT; return T_CONSTANT_ENCAPSED_STRING; }
<DOUBLE_QUOTE_STRING> EOF { return T_ERROR_UNTERMINATED_STRING; }
<DOUBLE_QUOTE_STRING> NEWLINE { buffer.IncrementLine(); goto php_5_3_lexical_analyzer_next_char; }
<DOUBLE_QUOTE_STRING> ANY { goto php_5_3_lexical_analyzer_next_char; }

/*!ignore:re2c
 * heredoc and nowdoc strings; all of the processing will be done by the function
 */
<HEREDOC> ANY { condition = yycSCRIPT; return mvceditor::HandleHeredoc(buffer); }
<NOWDOC> ANY { condition = yycSCRIPT; return mvceditor::HandleNowdoc(buffer); }

/*!ignore:re2c 
 * ingore anything that is inline html until we find the start tag
 * when we find the start tag; put it back in the stream; the parser needs it
 * there was some html before the open tag. tell the caller about it.
 * no need to send the T_INLINE_HTML when open tag is at the beginning.
 * return token;
 */
<INLINE_HTML> '<?php' WHITESPACE { condition = yycSCRIPT; if (buffer.TokenStart != start) return T_INLINE_HTML; else return T_OPEN_TAG;}
<INLINE_HTML> '<?php' NEWLINE { buffer.IncrementLine(); condition = yycSCRIPT; if (buffer.TokenStart != start) return T_INLINE_HTML; else return T_OPEN_TAG;}
<INLINE_HTML> '<?' WHITESPACE { condition = yycSCRIPT; if (buffer.TokenStart != start) return T_INLINE_HTML; return T_OPEN_TAG; }
<INLINE_HTML> '<?' NEWLINE { buffer.IncrementLine(); condition = yycSCRIPT; if (buffer.TokenStart != start) return T_INLINE_HTML; return T_OPEN_TAG; }
<INLINE_HTML> NEWLINE { buffer.IncrementLine(); goto php_5_3_lexical_analyzer_next_token_start; }
<INLINE_HTML> EOF { return T_END_OF_FILE; }
<INLINE_HTML> ANY { goto php_5_3_lexical_analyzer_next_token_start; }

/*!ignore:re2c
 * properties can be any valid identifier; including keywords; this is why they are 
 * separate. for example, $obj->list is valid
 * if we are in this state and we hit something other than an identifer; re-process
 * that token
 */
<PROPERTY> IDENTIFIER { condition = yycSCRIPT; return T_STRING; }
<PROPERTY> EOF { return T_END_OF_FILE; }
<PROPERTY> ANY { condition = yycSCRIPT; buffer.Current = buffer.TokenStart; goto php_5_3_lexical_analyzer_next_char; }

/*!ignore:re2c
 * backticks; for now anything inside of backticks treat like a constant string.
 * PHP parser handles the embedded variables but we won't need to do so
 * for now  just eat all of the contents of the backtick expression.
 * TODO: can backticks be escaped??
 */
<BACKTICK> [`] { condition = yycSCRIPT; return '`'; }
<BACKTICK> NEWLINE { buffer.IncrementLine(); goto php_5_3_lexical_analyzer_next_token_start; }
<BACKTICK> EOF { return T_ERROR_UNTERMINATED_BACKTICK; }
<BACKTICK> ANY { goto php_5_3_lexical_analyzer_next_token_start; }
*/

}