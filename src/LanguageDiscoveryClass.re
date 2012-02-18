/**
 * The MIT License
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
#include <language/LanguageDiscoveryClass.h>
#include <language/Php53LexicalAnalyzerImpl.h>
#include <language/Php53ParserImpl.hpp>

#define DISCOVERY_BUFFER_FILL(n) { Buffer.AppendToLexeme(n); }

#define DISCOVERY_GET_CONDITION() syntax

#define DISCOVERY_SET_CONDITION(c) syntax = c

mvceditor::LanguageDiscoveryClass::LanguageDiscoveryClass()
	: Buffer()
	, Code() {
}

void mvceditor::LanguageDiscoveryClass::Close() {
	Buffer.Close();
}

bool mvceditor::LanguageDiscoveryClass::Open(const UnicodeString& code) {
	bool ret = Buffer.OpenString(code);
	if (ret) {
		Code = code;
	}
	return ret;
}

mvceditor::LanguageDiscoveryClass::Syntax mvceditor::LanguageDiscoveryClass::at(int pos) {

	// need to reset the buffer back to the beginning of the source code
	Buffer.OpenString(Code);
	int currentPos = 0;
	
	// this variable is used because PHP can be embedded within any part of HTML (tag, attribute or 
	// value) and when we break out of the PHP we need to know what HTML condition we were in
	// for example this line:  < a href="<?php link_to('home'); ?>"
	// in this case when PHP ends we need to go back to the HTML_ATTRIBUTE_VALUE condition 
	mvceditor::LanguageDiscoveryClass::Syntax lastCondition = mvceditor::LanguageDiscoveryClass::SYNTAX_HTML;
	mvceditor::LanguageDiscoveryClass::Syntax syntax = mvceditor::LanguageDiscoveryClass::SYNTAX_HTML;
	
	// Note: the rules below are NOT the full PHP spec; they are only enough rules so that we can
	// properly tell what language we are in.  
	
discovery_start:
	int tokenLength = Buffer.Current - Buffer.TokenStart;
	currentPos += tokenLength;
	if (currentPos >= pos) {
		return syntax;
	}
	
	Buffer.MarkTokenStart();
	
discovery_next_char:
/*!re2c
 
re2c:define:YYCTYPE = UChar;
re2c:define:YYCURSOR = Buffer.Current;
re2c:define:YYLIMIT = Buffer.Limit;
re2c:define:YYMARKER = Buffer.Marker;
re2c:define:YYFILL = DISCOVERY_BUFFER_FILL;
re2c:define:YYCONDTYPE = mvceditor::LanguageDiscoveryClass::Syntax;
re2c:define:YYGETCONDITION = DISCOVERY_GET_CONDITION;
re2c:define:YYSETCONDITION = DISCOVERY_SET_CONDITION;
re2c:indent:top = 1;
re2c:labelprefix = discovery_;
re2c:condenumprefix = SYNTAX_;
re2c:condprefix = discovery_;
 
EOF = [\000];
ALL = [\000-\377];
ANY = ALL\EOF;
NEWLINE = [\r][\n] | [\r] | [\n];
IDENTIFIER = [a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*;
WHITESPACE = [ \t\v\f];

<*> EOF { return syntax; }

<HTML> '<?php' (WHITESPACE | NEWLINE) { lastCondition = SYNTAX_HTML; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; } 
<HTML> "<?=" { lastCondition = SYNTAX_HTML; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; } 
<HTML> "<?" { lastCondition = SYNTAX_HTML; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
<HTML> "<!--" { lastCondition = SYNTAX_HTML; syntax = SYNTAX_HTML_COMMENT; goto discovery_start; } 
<HTML> NEWLINE { Buffer.IncrementLine(); goto discovery_start; }
<HTML> "<" { syntax = SYNTAX_HTML_TAG; goto discovery_start; }
<HTML> "&" { syntax = SYNTAX_HTML_ENTITY; goto discovery_start; }
<HTML> ANY { goto discovery_start; }

/*!ignore:re2c
 * when inside an HTML tag a couple of things can happen
 * PHP can embedded  <a <?php echo "class='myclass'" ?>
 * An attribute can start     "<a href="
 * A tag can close   "<br/>" "<hr>"
 */
<HTML_TAG> '<?php' (WHITESPACE | NEWLINE) { lastCondition = SYNTAX_HTML_TAG; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; } 
<HTML_TAG> "<?=" { lastCondition = SYNTAX_HTML_TAG; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; } 
<HTML_TAG> "<?" { lastCondition = SYNTAX_HTML_TAG; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
<HTML_TAG> WHITESPACE { syntax = SYNTAX_HTML_ATTRIBUTE; goto discovery_start; } 
<HTML_TAG> NEWLINE { Buffer.IncrementLine(); syntax = SYNTAX_HTML_ATTRIBUTE; goto discovery_start; }
<HTML_TAG> "/>" { syntax = SYNTAX_HTML; goto discovery_start; }
<HTML_TAG> ">" { syntax = SYNTAX_HTML; goto discovery_start; }
<HTML_TAG> ANY { goto discovery_start; }

/*!ignore:re2c
 * when inside an HTML attribute a couple of things can happen
 * PHP can embedded  <a href=<?php echo link_to('MyController'); ?>
 * An attribute value can start     "<a href="
 * A tag can close   "<img src='img.jpg' />" "<li class='MyClass'>"
 */
<HTML_ATTRIBUTE> '<?php' (WHITESPACE | NEWLINE) { lastCondition = SYNTAX_HTML_ATTRIBUTE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; } 
<HTML_ATTRIBUTE> "<?=" { lastCondition = SYNTAX_HTML_ATTRIBUTE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; } 
<HTML_ATTRIBUTE> "<?" { lastCondition = SYNTAX_HTML_ATTRIBUTE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
<HTML_ATTRIBUTE> [=] (WHITESPACE | NEWLINE)* ["] { syntax = SYNTAX_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE; goto discovery_start; }
<HTML_ATTRIBUTE> [=] (WHITESPACE | NEWLINE)* ['] { syntax = SYNTAX_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE; goto discovery_start; }
<HTML_ATTRIBUTE> "/>" { syntax = SYNTAX_HTML; goto discovery_start; }
<HTML_ATTRIBUTE> ">" { syntax = SYNTAX_HTML; goto discovery_start; }
<HTML_ATTRIBUTE> ANY { goto discovery_start; }

/*!ignore:re2c
 * When inside a HTML attribute value the following can happen
 * PHP can be embedded <a href="<?= link_to('MyController'); ?>" (notice the double quotes)
 * value can be 'closed' <a href="home.php" or <a href='home.php'
 * quote can be escaped <a onclick="jsFunc(\"time\")" 
 */
<HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE> '<?php' (WHITESPACE | NEWLINE) { lastCondition = SYNTAX_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; } 
<HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE> "<?=" { lastCondition = SYNTAX_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; } 
<HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE> "<?" { lastCondition = SYNTAX_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
<HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE> [\\] ["] { goto discovery_start; }
<HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE> ["] { syntax = SYNTAX_HTML_ATTRIBUTE; goto discovery_start; }
<HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE> ANY { goto discovery_start; }

<HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE> '<?php' (WHITESPACE | NEWLINE) { lastCondition = SYNTAX_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; } 
<HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE> "<?=" { lastCondition = SYNTAX_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; } 
<HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE> "<?" { lastCondition = SYNTAX_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE; syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
<HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE> [\\] ['] { goto discovery_start; }
<HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE> ['] { syntax = SYNTAX_HTML_ATTRIBUTE; goto discovery_start; }
<HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE> ANY { goto discovery_start; }

<HTML_COMMENT> NEWLINE { Buffer.IncrementLine(); goto discovery_start; }
<HTML_COMMENT> "-->" {  syntax = SYNTAX_HTML; goto discovery_start; }
<HTML_COMMENT> ANY { goto discovery_start; }

/*!ignore:re2c 
 * HTML entity as soon as a whitespace is entered get out of this condition
 */
<HTML_ENTITY> (WHITESPACE | NEWLINE) { syntax = SYNTAX_HTML; goto discovery_start; }
<HTML_ENTITY> ANY { goto discovery_start; }
 
<PHP_SCRIPT> "?>" { syntax = lastCondition; goto discovery_start; }
<PHP_SCRIPT> [/][/]  { syntax = SYNTAX_PHP_LINE_COMMENT; goto discovery_start;}
<PHP_SCRIPT> [#]  { syntax = SYNTAX_PHP_LINE_COMMENT; goto discovery_start;}
<PHP_SCRIPT> [/][*]  { syntax = SYNTAX_PHP_MULTI_LINE_COMMENT; goto discovery_start;}
<PHP_SCRIPT> [']  { syntax = SYNTAX_PHP_SINGLE_QUOTE_STRING; goto discovery_start;}
<PHP_SCRIPT> ["]  { syntax = SYNTAX_PHP_DOUBLE_QUOTE_STRING; goto discovery_start;}
<PHP_SCRIPT> [`]  { syntax = SYNTAX_PHP_BACKTICK; goto discovery_start;}

/*!ignore:re2c
 * for heredoc and nowdoc it is VERY IMPORTANT that the angle brackets be left
 * in the stream. that is why we go to next_char label
 */
<PHP_SCRIPT> "<<<" WHITESPACE* ((["]IDENTIFIER["]) | (IDENTIFIER)) NEWLINE 
								{ Buffer.IncrementLine(); syntax = SYNTAX_PHP_HEREDOC; goto discovery_next_char; }
<PHP_SCRIPT> "<<<" WHITESPACE* "'" IDENTIFIER "'" NEWLINE 
								{ Buffer.IncrementLine(); syntax = SYNTAX_PHP_NOWDOC; goto discovery_next_char; }
<PHP_SCRIPT> ANY { goto discovery_start; }

/*!ignore:re2c
 * line comments: the close tag is honored
 * this is a valid line:
 *  <p><?php echo "hello"; // again ?></p>
 */
<PHP_LINE_COMMENT> NEWLINE { Buffer.IncrementLine(); syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
<PHP_LINE_COMMENT> "?>" { syntax = SYNTAX_HTML; goto discovery_start; }
<PHP_LINE_COMMENT> ANY { goto discovery_start; }

/*!ignore:re2c
 * Note: no need to differentiate between / * and / * * comments
 */
<PHP_MULTI_LINE_COMMENT> NEWLINE { Buffer.IncrementLine(); goto discovery_start; }
<PHP_MULTI_LINE_COMMENT> "*/" {  syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
<PHP_MULTI_LINE_COMMENT> ANY { goto discovery_start; }

/*!ignore:re2c
 * In single quoted strings, watch out for escaped single quotes and escaped backslashes
 */
<PHP_SINGLE_QUOTE_STRING> [\\]['] { goto discovery_start; }
<PHP_SINGLE_QUOTE_STRING> [\\][\\] { goto discovery_start; }
<PHP_SINGLE_QUOTE_STRING> "'" { syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
<PHP_SINGLE_QUOTE_STRING> NEWLINE { Buffer.IncrementLine(); goto discovery_start; }
<PHP_SINGLE_QUOTE_STRING> ANY { goto discovery_start; }

/*!ignore:re2c
 * In double quoted strings, watch out for escaped single quotes and escaped backslashes
 */
<PHP_DOUBLE_QUOTE_STRING> [\\]["] { goto discovery_start; }
<PHP_DOUBLE_QUOTE_STRING> [\\][\\] { goto discovery_start; }
<PHP_DOUBLE_QUOTE_STRING> '"' { syntax = SYNTAX_PHP_SCRIPT; }
<PHP_DOUBLE_QUOTE_STRING> NEWLINE { Buffer.IncrementLine(); goto discovery_start; }
<PHP_DOUBLE_QUOTE_STRING> ANY { goto discovery_start; }

/*!ignore:re2c
 * heredoc and nowdoc strings; all of the processing will be done by the function
 * check to see if we are past the wanted position and return immediately so that 
 * we give the correct condition to the caller
 */
<PHP_HEREDOC> ANY { if (mvceditor::HandleHeredoc(&Buffer) == T_ERROR_UNTERMINATED_STRING || (currentPos + (Buffer.Current - Buffer.TokenStart)) >= pos)  { return syntax ; } syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
<PHP_NOWDOC> ANY { if (mvceditor::HandleNowdoc(&Buffer) == T_ERROR_UNTERMINATED_STRING || (currentPos + (Buffer.Current - Buffer.TokenStart)) >= pos) { return syntax; } syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }


/*!ignore:re2c
 * backticks; for now anything inside of backticks treat like a constant string.
 * TODO: can backticks be escaped??
 */
<PHP_BACKTICK> [`] { syntax = SYNTAX_PHP_SCRIPT; goto discovery_start; }
<PHP_BACKTICK> NEWLINE { Buffer.IncrementLine(); goto discovery_start; }
<PHP_BACKTICK> ANY { goto discovery_start; }
*/

}