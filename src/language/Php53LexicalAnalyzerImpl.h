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
#ifndef __php53lexicalanalyzerimpl_h__
#define __php53lexicalanalyzerimpl_h__
 
#include <language/UCharBufferedFileClass.h>

/**
 * The lexer has different rules based on where in the source code a specific token is.
 * The various states are:
 * 
 * INLINE_HTML: in this state the lexer will skip over all tokens and stop (right before) 
 * the open tag
 * SCRIPT: in this state all of the php keywords and symbols are honored. For example "if" is 
 * an T_IF token and not an identifer.
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
	yycHEREDOC,
	yycNOWDOC,
	yycINLINE_HTML,
	yycPROPERTY,
	yycBACKTICK,
};

namespace mvceditor {
	 
/**
 * Get the next token from the given buffer. Checking for the end is not as simple as checking for T_EOF, you will
 * need to call mvceditor::TokenClass::IsTerminatingToken() to ensure that the end of stream
 * has been reached (since a lexer can end with EOF, an unterminated string, or an unterminated comment).
 * 
 * @param UCharBufferedFileClass &buffer contains the code to be tokenized
 * @param YYCONDTYPE &condition the current state the the parser is in. this needs 
 * to be an argument to avoid global variables.
 * @return int the next token.
 */
int NextToken(UCharBufferedFileClass &buffer, YYCONDTYPE &condition);

/**
 * This function will advance the current pointer of the buffer all the way until 
 * it encounters the given identifier on a line. (the end of a heredoc / nowdoc).
 *
 * @param buffer the content being lexed
 * @param identifier the identifier to look for.
 * @return 0 for success; ERROR_UNTERMINATED_STRING if identifier was not found
 */
int SkipToIdentifier(UCharBufferedFileClass &buffer, UnicodeString identifier);

/**
 * This function will advance the current pointer of the buffer all the way until
 * it encounters the end of the heredoc. It will leave the ending semicolon in the stream to be consumed
 * next. 
 * 
 * @param buffer the content being lexed
 * @return int token; could be T_END_OF_FILE or T_ERROR_UNTERMINATED_STRING 
 */
int HandleNowdoc(UCharBufferedFileClass &buffer);

/**
 * This function will advance the current pointer of the buffer all the way until
 * it encounters the end of the nowdoc. It will leave the ending semicolon in the stream to be consumed
 * next. 
 * 
 * @param buffer the content being lexed
 * @return int token; could be T_END_OF_FILE or T_ERROR_UNTERMINATED_STRING 
 */
int HandleHeredoc(UCharBufferedFileClass &buffer);

}

#endif