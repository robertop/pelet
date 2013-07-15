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
 * @copyright  2009-2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/Php53LexicalAnalyzer.h>
#include <pelet/Php54LexicalAnalyzer.h>

pelet::LexicalAnalyzerClass::LexicalAnalyzerClass(const std::string& fileName) 
	: ParserError()
	, Buffer(NULL)
	, FileName()
	, Condition(yycINLINE_HTML)
	, Version(PHP_53) 
	, CaptureAllTokens(false) {
	OpenFile(fileName);
}

pelet::LexicalAnalyzerClass::LexicalAnalyzerClass()
	: ParserError()
	, Buffer(NULL)
	, FileName()
	, Condition(yycINLINE_HTML) 
	, Version(PHP_53) 
	, CaptureAllTokens(false) {
}

pelet::LexicalAnalyzerClass::~LexicalAnalyzerClass() {
	Close();
}

void pelet::LexicalAnalyzerClass::Close() {
	if (Buffer) {
		Buffer->Close();
		delete Buffer;
		Buffer = NULL;
	}
}

bool pelet::LexicalAnalyzerClass::OpenFile(const std::string& newFile) {
	Close();
	UCharBufferedFileClass* bufferFile =  new UCharBufferedFileClass();
	Buffer = bufferFile;
	FileName = newFile;
	Condition = yycINLINE_HTML;
	return bufferFile->OpenFile(newFile.c_str());
}

bool pelet::LexicalAnalyzerClass::OpenFile(FILE* file) {
	Close();
	UCharBufferedFileClass* bufferFile =  new UCharBufferedFileClass();
	Buffer = bufferFile;
	FileName = "";
	Condition = yycINLINE_HTML;
	return bufferFile->OpenFile(file);
}

bool pelet::LexicalAnalyzerClass::OpenString(const wxString& code) {
	Close();
	FileName = "";
	Condition = yycSCRIPT;
	pelet::UCharBufferClass* memBuffer = new UCharBufferClass();
	Buffer = memBuffer;
	return memBuffer->OpenString(code);
}

void pelet::LexicalAnalyzerClass::SetVersion(Versions version) {
	Version = version;
}
void pelet::LexicalAnalyzerClass::SetCaptureAllTokens(bool captureAllTokens) {
	CaptureAllTokens = captureAllTokens;
}

int pelet::LexicalAnalyzerClass::NextToken() {
	if (PHP_53 == Version) {
		return Buffer ? pelet::Next53Token(Buffer, CaptureAllTokens, Condition) : T_END;
	}
	else {
		return Buffer ? pelet::Next54Token(Buffer, CaptureAllTokens, Condition) : T_END;
	}
}

bool pelet::LexicalAnalyzerClass::GetLexeme(wxString& lexeme) {
	if (!Buffer) {
		return false;
	}
	lexeme.clear();
	const wxChar *start = Buffer->TokenStart;
	const wxChar *end =  Buffer->Current;
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
		int added = 0;
		for (int i = 0; i < len; i++) {
			wxChar c = start[i];
			wxChar next = 0;
			if (i < (len - 1)) {
				next = start[i + 1];
			}

			// for now, don't bother with escape sequences like \x41 => 'A' for double quoted strings and heredoc
			if (isSingleQuoteString && c == '\\' && next == '\'') {

				// a literal single quote
				lexeme.append(next);
				i++;
				added++;
			}
			else if (isSingleQuoteString && c == '\\' && next == '\\') {

				// a literal backslash
				lexeme.append(c);
				i++;
				added++;
			}
			else if (isDoubleQuoteString && c == '\\' && next == '"') {

				// a literal double quote
				lexeme.append(next);
				i++;
				added++;
			}
			else if (isDoubleQuoteString && c == '\\' && next == '\\') {

				// a literal backslash
				lexeme.append(c);
				i++;
				added++;
			}
			else {

				// any other token (identifier, keyword, symbol) just goes in as is
				lexeme.append(c);
				added++;
			}
		}
		if (added > 3 && start[0] == '<' && start[1] == '<' && start[2] == '<') {
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
			for (size_t i = 0; i < lexeme.length(); i++) {
				wxChar c = lexeme.at(i);
				lexeme.erase(lexeme.begin() + i);
				i--;
				if (c == '\n' || c == '\r') {
					break;
				}
			}

			// take care of the final newline
			lexeme.Trim();

			// take care of the newline and ending identifier
			for (size_t i = lexeme.length() - 1; i >= 0 && !lexeme.empty(); i--) {
				wxChar c = lexeme[i];
				lexeme.erase(lexeme.begin() + i);
				if (c == '\n' || c == '\r') {
						break;
				}
			}
		}
		ret = true;
	}
	return ret;
}

int pelet::LexicalAnalyzerClass::GetLineNumber() const {
	return Buffer ? Buffer->GetLineNumber() : 0;
}

int pelet::LexicalAnalyzerClass::GetCharacterPosition() const {
	return Buffer ? Buffer->GetCharacterPosition() : 0;
}

std::string pelet::LexicalAnalyzerClass::GetFileName() const {
	return FileName;
}

/**
 * @return TRUE if c is a character that can be in a PHP identifier
 */
static bool IsPhpIdentifierChar(wxChar c) {
	return isalnum(c) || '_' == c || (c >= 0x7f && c <= 0xff);
}

wxString pelet::LexicalAnalyzerClass::LastExpression(const wxString& code) const {
	bool done = false;

	// keep iterating backwards; if we used re2c lexer then we would have to iterate through the entire
	// string
	size_t index = code.length() - 1;

	// the resulting string will only keep non-space characters
	// we need to keep remove spacing because expression can have whitepace
	// like this  "$this->\nprop->\nprop"
	wxString expr;
	while (!done && index >= 0) {
		wxChar c = code[index];
		if (IsPhpIdentifierChar(c)) {

			// get the entire token
			while (IsPhpIdentifierChar(c) && index > 0) {

				// since we are iterating backwards, put char in the beginning
				expr = wxString(c) + expr;
				index--;
				c = code[index];
			}
		}
		else  if (isspace(c) && index > 0) {
			
			// skip whitespace entirely
			while(isspace(c) && index > 0) {
				index--;
				c = code[index];
			}

			// if we encounter an object operator then we can continue grabbing the expression
			// otherwise it means that we are done
			if (index > 1 && ':' == code[index] && ':' == code[index - 1]) {
				expr = code[index] + expr;
				expr = code[index - 1] + expr;
				index -= 2;
			}
			else if (index > 1 && '>' == code[index] && '-' == code[index - 1]) {
				expr = code[index] + expr;
				expr = code[index - 1] + expr;
				index -= 2;
			}
			else {
				done = true;
			}
		}
		else if ('$' == c) {
			expr = wxString(c) + expr;
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
			wxChar n = code[index];
			if (':' == n) {
				index--;
				expr = c + expr;
				expr = n + expr;

				// skip whitespace before the operator entirely
				c = code[index];
				while(isspace(c) && index > 0) {
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
			expr = c + expr;
			while (index > 0 && nestCount > 0) {
				index--;
				c = code[index];
				if (')' == c) {
					nestCount++;
				}
				else if ('(' == c) {
					nestCount--;
				}
				expr = c + expr;
			}
			index--;
		}
		else if (']' == c) {

			// skip all the way past the beginning '[', taking care to look for 2-D arrays
			int nestCount = 1;
			expr = c + expr;
			while (index > 0 && nestCount > 0) {
				index--;
				c = code[index];
				if (']' == c) {
					nestCount++;
				}
				else if ('[' == c) {
					nestCount--;
				}
				expr = c + expr;
			}
			index--;
		
		}
		else if ('>' == c && index > 1) {
			
			// check for a possible object operator; if not an object operator then we are done
			index--;
			wxChar n = code[index];
			if ('-' == n) {
				index--;
				expr = c + expr;
				expr = n + expr;

				// skip whitespace before the operator entirely
				c = code[index];
				while(isspace(c) && index > 0) {
					index--;
					c = code[index];
				}
			}
			else {
				done = true;
			}
		}
		else if ('\\' == c) {
			
			// namespace operator; keep it
			// since we are iterating backwards, put char in the beginning
			expr = c + expr;
			index--;
		}
		else {

			// anything else ignore
			// like semicolons or commas or other operators; these signal a new expression
			done = true;
		}
	}
	return expr;
}
