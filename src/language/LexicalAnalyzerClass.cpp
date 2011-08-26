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
 * @author     $Author: robertop2004@gmail.com $
 * @date       $Date: 2011-08-13 20:31:56 -0700 (Sat, 13 Aug 2011) $
 * @version    $Rev: 596 $ 
 */
#include <language/LexicalAnalyzerClass.h>
#include <language/Php53LexicalAnalyzerImpl.h>
#include <windows/StringHelperClass.h>
#include <unicode/uchar.h>
#include <unicode/ustring.h>
#include <unicode/ucnv.h>

mvceditor::LexicalAnalyzerClass::LexicalAnalyzerClass(const wxString& fileName) 
	: ParserError()
	, UCharBufferedFile()
	, FileName()
	, Condition(yycINLINE_HTML) {
	OpenFile(fileName);
}

mvceditor::LexicalAnalyzerClass::LexicalAnalyzerClass()
	: ParserError()
	, UCharBufferedFile()
	, FileName()
	, Condition(yycINLINE_HTML) {
}

mvceditor::LexicalAnalyzerClass::~LexicalAnalyzerClass() {
}

bool mvceditor::LexicalAnalyzerClass::OpenFile(const wxString& newFile) {
	 FileName = newFile;
	 Condition = yycINLINE_HTML;
	 
	// ATTN: fn_str() would not compile in MSW
	// what about unicode file names?
	return UCharBufferedFile.OpenFile(newFile.ToAscii());
}

bool mvceditor::LexicalAnalyzerClass::OpenString(const UnicodeString& code) {
	FileName = wxT("");
	Condition = yycSCRIPT;
	return UCharBufferedFile.OpenString(code);
}

int mvceditor::LexicalAnalyzerClass::NextToken() {
	return mvceditor::NextToken(UCharBufferedFile, Condition);
}

bool mvceditor::LexicalAnalyzerClass::GetLexeme(UnicodeString& lexeme) {
	// TODO: escape sequences \x41 to 'A' for double quoted strings and heredoc

	lexeme.remove();
	UChar *start = UCharBufferedFile.TokenStart;
	UChar *end =  UCharBufferedFile.Current;
	bool ret = false;
	bool isSingleQuoteString = false;
	bool isDoubleQuoteString = false;
	bool isHeredoc = false;
	bool isNowdoc = false;
	if ((end - start) > 0) {
	
		// the lexer may ask for too much when the last token is an identifier
		// in this case current will point to past the null character
		if (UCharBufferedFile.Current > UCharBufferedFile.Limit) {
			end = UCharBufferedFile.Limit;
		}
		if (start[0] == '\'') {
			isSingleQuoteString = true;
			start++;
			end--;
		}
		if (start[0] == '"') {
			isDoubleQuoteString = true;
			start++;
			end--;
		}
		int len = (end - start);
		for (int i = 0; i < len; i++) {
			UChar c = start[i];
			UChar next = 0;
			if (i < (len - 1)) {
				next = start[i + 1];
			}
			if (isSingleQuoteString && c == '\\' && next == '\'') {

				// a literal single quote
				lexeme.append(next);
				i++;
			}
			else if (isSingleQuoteString && c == '\\' && next == '\\') {

				// a literal backslash
				lexeme.append(c);
				i++;
			}
			else if (isDoubleQuoteString && c == '\\' && next == '"') {

				// a literal double quote
				lexeme.append(next);
				i++;
			}
			else if (isDoubleQuoteString && c == '\\' && next == '\\') {

				// a literal backslash
				lexeme.append(c);
				i++;
			}
			else {

				// any other token (identifier, keyword, symbol) just goes in as is
				lexeme.append(c);
			}
		}
		if (lexeme.length() > 3 && start[0] == '<' && start[1] == '<' && start[2] == '<') {
			if (start[3] == '\'') {
				isNowdoc = true;
			}
			else {
				isHeredoc = true;
			}
		}
		if (isHeredoc || isNowdoc) {
			// remove the "<<<" and identifier from the heredoc start.
			// and the identifier from the end.  we don't need to actually check
			// for the identifier here; nextToken() already makes sure that the 
			// beginning and ending identifiers are the same
			for (int i = 0; i < lexeme.length(); i++) {
				UChar c = lexeme.charAt(i);
				lexeme.remove(0, 1);
				i--;
				if (c == '\n' || c == '\r') {	
					break;
				}			
			}

			// take care of the final newline
			lexeme.trim();

			// take care of the newline and endind identifier
			for (int i = lexeme.length() - 1; i >= 0 && !lexeme.isEmpty(); i--) {
				UChar c = lexeme.charAt(i);
				lexeme.remove(i, 1);
				if (c == '\n' || c == '\r') {	
						break;
				}
			}
		}
		ret = true;
	}
	return ret;
}

int mvceditor::LexicalAnalyzerClass::GetLineNumber() const {
	return UCharBufferedFile.GetLineNumber();
}

int mvceditor::LexicalAnalyzerClass::GetColumnNumber() const {
	return UCharBufferedFile.GetColumnNumber();
}

int mvceditor::LexicalAnalyzerClass::GetCharacterPosition() const {
	return UCharBufferedFile.GetCharacterPosition();
}

wxString mvceditor::LexicalAnalyzerClass::GetFileName() const {
	return FileName;
}