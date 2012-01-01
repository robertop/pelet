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
#include <language/LexicalAnalyzerClass.h>
#include <language/Php53LexicalAnalyzerImpl.h>
#include <windows/StringHelperClass.h>
#include <unicode/uchar.h>
#include <unicode/ustring.h>
#include <unicode/ucnv.h>

mvceditor::LexicalAnalyzerClass::LexicalAnalyzerClass(const wxString& fileName) 
	: ParserError()
	, Buffer(NULL)
	, FileName()
	, Condition(yycINLINE_HTML) {
	OpenFile(fileName);
}

mvceditor::LexicalAnalyzerClass::LexicalAnalyzerClass()
	: ParserError()
	, Buffer(NULL)
	, FileName()
	, Condition(yycINLINE_HTML) {
}

mvceditor::LexicalAnalyzerClass::~LexicalAnalyzerClass() {
	Close();
}

void mvceditor::LexicalAnalyzerClass::Close() {
	if (Buffer) {
		Buffer->Close();
		delete Buffer;
		Buffer = NULL;
	}
}

bool mvceditor::LexicalAnalyzerClass::OpenFile(const wxString& newFile) {
	Close();
	UCharBufferedFileClass* bufferFile =  new UCharBufferedFileClass();
	Buffer = bufferFile;
	FileName = newFile;
	Condition = yycINLINE_HTML;
	 
	// ATTN: fn_str() would not compile in MSW
	// what about unicode file names?
	return bufferFile->OpenFile(newFile.ToAscii());
}

bool mvceditor::LexicalAnalyzerClass::OpenString(const UnicodeString& code) {
	Close();
	FileName = wxT("");
	Condition = yycSCRIPT;
	mvceditor::UCharBufferClass* memBuffer = new UCharBufferClass();
	Buffer = memBuffer;
	return memBuffer->OpenString(code);
}

int mvceditor::LexicalAnalyzerClass::NextToken() {
	return Buffer ? mvceditor::NextToken(Buffer, Condition) : T_END_OF_FILE;
}

bool mvceditor::LexicalAnalyzerClass::GetLexeme(UnicodeString& lexeme) {
	if (!Buffer) {
		return false;
	}
	lexeme.remove();
	const UChar *start = Buffer->TokenStart;
	const UChar *end =  Buffer->Current;
	bool ret = false;
	bool isSingleQuoteString = false;
	bool isDoubleQuoteString = false;
	bool isHeredoc = false;
	bool isNowdoc = false;
	
	// be careful, take Limit into account too... we dont want to read past what is allowed
	if ((end - start) > 0 && Buffer->Current <= Buffer->Limit) {
	
		// the lexer may ask for too much when the last token is an identifier
		// in this case current will point to past the null character
		if (Buffer->Current > Buffer->Limit) {
			end = Buffer->Limit;
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

			// for now, don't bother with escape sequences like \x41 => 'A' for double quoted strings and heredoc
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
	return Buffer ? Buffer->GetLineNumber() : 0;
}

int mvceditor::LexicalAnalyzerClass::GetCharacterPosition() const {
	return Buffer ? Buffer->GetCharacterPosition() : 0;
}

wxString mvceditor::LexicalAnalyzerClass::GetFileName() const {
	return FileName;
}

/**
 * @return TRUE if c is a character that can be in a PHP identifier
 */
static bool IsPhpIdentifierChar(UChar c) {
	return u_isalnum(c) || '_' == c || (c >= 0x7f && c <= 0xff);
}

UnicodeString mvceditor::LexicalAnalyzerClass::LastExpression(const UnicodeString& code) const {
	bool done = false;

	// keep iterating backwards; if we used re2c lexer then we would have to iterate through the entire
	// string
	int32_t index = code.length() - 1;

	// the resulting string will only keep non-space characters
	// we need to keep remove spacing because expression can have whitepace
	// like this  "$this->\nprop->\nprop"
	UnicodeString expr;
	while (!done && index >= 0) {
		UChar32 c = code[index];
		if (IsPhpIdentifierChar(c)) {

			// get the entire token
			while (IsPhpIdentifierChar(c) && index > 0) {

				// since we are iterating backwards, put char in the beginning
				expr.insert(0, c);
				index--;
				c = code[index];
			}
		}
		else  if (u_isspace(c) && index > 0) {
			
			// skip whitespace entirely
			while(u_isspace(c) && index > 0) {
				index--;
				c = code[index];
			}

			// if we encounter an object operator then we can continue grabbing the expression
			// otherwise it means that we are done
			if (index > 1 && ':' == code[index] && ':' == code[index - 1]) {
				expr.insert(0, code[index]);
				expr.insert(0, code[index - 1]);
				index -= 2;
			}
			else if (index > 1 && '>' == code[index] && '-' == code[index - 1]) {
				expr.insert(0, code[index]);
				expr.insert(0, code[index - 1]);
				index -= 2;
			}
			else {
				done = true;
			}
		}
		else if ('$' == c) {
			expr.insert(0, c);
			index--;

			// indirect variables means we are done ("$$expr")
			if (index >= 0 && '$' == code[index]) {
				done = true;
			}

			// indirect properties means we are done ("$this->$expr")
			if (index >= 1 && '>' == code[index] && '-' == code[index - 1]) {
				done = true;
			}
		}
		else if (':' == c && index > 1) {

			// check for a possible static object operator; if not an object operator then we are done
			index--;
			UChar32 n = code[index];
			if (':' == n) {
				index--;
				expr.insert(0, c);
				expr.insert(0, n);

				// skip whitespace before the operator entirely
				c = code[index];
				while(u_isspace(c) && index > 0) {
					index--;
					c = code[index];
				}
			}
			else {
				done = true;
			}
		}
		else if (')' == c) {

			// skip all the way past the beginning '(', taking care to look for nested function calls
			int nestCount = 1;
			expr.insert(0, c);
			while (index > 0 && nestCount > 0) {
				index--;
				c = code[index];
				if (')' == c) {
					nestCount++;
				}
				else if ('(' == c) {
					nestCount--;
				}
				expr.insert(0, c);
			}
			index--;
		}
		else if (']' == c) {

			// skip all the way past the beginning '[', taking care to look for 2-D arrays
			int nestCount = 1;
			expr.insert(0, c);
			while (index > 0 && nestCount > 0) {
				index--;
				c = code[index];
				if (']' == c) {
					nestCount++;
				}
				else if ('[' == c) {
					nestCount--;
				}
				expr.insert(0, c);
			}
			index--;
		
		}
		else if ('>' == c && index > 1) {
			
			// check for a possible object operator; if not an object operator then we are done
			index--;
			UChar32 n = code[index];
			if ('-' == n) {
				index--;
				expr.insert(0, c);
				expr.insert(0, n);

				// skip whitespace before the operator entirely
				c = code[index];
				while(u_isspace(c) && index > 0) {
					index--;
					c = code[index];
				}
			}
			else {
				done = true;
			}		
		}
		else {

			// anything else ignore
			// like semicolons or commas or other operators; these signal a new expression
			done = true;
		}
	}
	return expr;
}