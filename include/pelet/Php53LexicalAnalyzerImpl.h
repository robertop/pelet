/*
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
 * @copyright  2009-2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */
#ifndef __php53lexicalanalyzerimpl_h__
#define __php53lexicalanalyzerimpl_h__
 
#include <pelet/UCharBufferedFileClass.h>

/**
\page LexerDetailsPage Lexer Details
The lexer is an re2c-generated state machine that will turn source code into
tokens. Knowledge of re2c is required for to modify the lexer code. You may
look at the re2 man page http://re2c.org/manual.html for the basics. Also,
a more in-depth example of using re2c can be found 
http://blog.mvceditor.com/2011/11/the-gritty-details-of-a-lexical-analyzer-in-c-using-re2c/

In Php53LexicalAnalyzerImpl.re you will find the source code for the lexer.  This a text
file that contains C++ code in addition to re2c rules (in the form of a comment "/*!re2c"). 
The lexer can be modified by updating the .re file, running the re2c program, which will
output the C++ code for the lexer rules.

The lexer uses the macros YYCURSOR, YYFILL, and YYLIMIT to iterate through a buffer that
contains the source code to be tokenized. The generated code will advance the YYCURSOR
until it finds a matching rule; when a rule is matched then its corresponding action 
is executed.

Each re2c rules looks like this:

\<SCRIPT\> 'and' { return T_LOGICAL_AND; }

There are 3 parts here:

1. The condition: in this case "<SCRIPT>".  Sometimes the same character may have different
   meaning depending on where it is; for example if a " (double quote) is inside of a 
   comment it has a different meaning than it has when it is inside of another double quote.
   Conditions help us treat the same character separately depending of the current condition.
   
2. The rule: in this case 'and'.  This represents the text to match.  The rule can be an exact
   match or a regular expression, see the re2c man page for more info.
 
3. The action: in this case  "{ return T_LOGICAL_AND; }". The action is a normal set of
   C++ source code that will be executed when the rule is matched.  In most cases, we will
   return the appropriate token when a rule is matched. (the token allows the parser to easily
   compare tokens).
   
By far the most important part to understand is the conditions.  Conditions are what allows
us to properly parse strings, comments, and variables. 

This lexer uses essentially the same tokens as the lexer that is included in the PHP source;
the main difference being that this lexer does not attempt to unescape strings ie turn
"\x0010" into "\n". 
*/

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

namespace pelet {
	 
/**
 * Get the next token from the given buffer. Checking for the end is not as simple as checking for T_EOF, you will
 * need to call pelet::TokenClass::IsTerminatingToken() to ensure that the end of stream
 * has been reached (since a lexer can end with EOF, an unterminated string, or an unterminated comment).
 * 
 * @param BufferClass* buffer contains the code to be tokenized. This function will NOT own the pointer.
 * @param YYCONDTYPE &condition the current state the the parser is in. this needs 
 * to be an argument to avoid global variables.
 * @return int the next token.
 */
int NextToken(BufferClass* buffer, YYCONDTYPE &condition);

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
 * @return int token; could be T_END_OF_FILE or T_ERROR_UNTERMINATED_STRING 
 */
int HandleNowdoc(BufferClass* buffer);

/**
 * This function will advance the current pointer of the buffer all the way until
 * it encounters the end of the nowdoc. It will leave the ending semicolon in the stream to be consumed
 * next. 
 * 
 * @param buffer the content being lexed. This function will NOT own the pointer.
 * @return int token; could be T_END_OF_FILE or T_ERROR_UNTERMINATED_STRING 
 */
int HandleHeredoc(BufferClass* buffer);

}

#endif
