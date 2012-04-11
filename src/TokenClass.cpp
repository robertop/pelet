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
#include <pelet/TokenClass.h>

bool pelet::IsTerminatingToken(int token) {
	return T_ERROR_UNTERMINATED_COMMENT == token ||
		T_ERROR_UNTERMINATED_STRING == token ||
		T_ERROR_UNTERMINATED_BACKTICK == token ||
		T_END == token;
}

int pelet::SkipToIdentifier(BufferClass *buffer, UnicodeString identifier) {
	bool end = false;
	
	// add semicolon to make checks easier
	identifier.append(';');
	UChar c = *buffer->Current;
	while (!end) {
	
		/*
		 * read one line at a time.  If the line is the identifier we'll stop. If we reach the
		 * end, then this heredoc in unterminated.
		 * be careful; do NOT store buffer->Current since it may change at any after buffer->AppendToLexeme
		 * is called
		 */
		UnicodeString line;
		while (c != 0 && c != '\n' && c != '\r') {
			line.append(c);
			
			// only fill buffer when we its close to being filled up; this will prevent
			// useless copying of the buffer to remove slack
			if ((buffer->Limit - buffer->Current) < 2) {
				buffer->AppendToLexeme(1);
			}
			c = *(++buffer->Current);
			
		}
		if (c == 0) {
			end = true;
			return T_ERROR_UNTERMINATED_STRING;
		}
		
		// since we are eating up a  newline, otherwise line numbering in lint errors
		// will be wrong
		buffer->IncrementLine();
		bool hasEndingSemicolon = true;
		if (!line.endsWith(UNICODE_STRING(";", 1))) {
			line.append(UNICODE_STRING(";", 1));
			hasEndingSemicolon = false;
		}
		if (line.compare(identifier) == 0) {
			end = true;
			
			// semicolons and newlines are NOT part of the nowdoc; the parser will look for semicolons
			// semicolon is OPTIONAL for heredoc / nowdoc
			if (hasEndingSemicolon) {
				buffer->Current--;
			}
		}
		else {
			if ((buffer->Limit - buffer->Current) < 2) {
				buffer->AppendToLexeme(1);
			}
			c = *(++buffer->Current);
		}
	}
	return 0;
}

int pelet::HandleHeredoc(BufferClass *buffer) {

	/*
	 * find out the stopping identifier. Since current is past the newline, the
	 * identifier is located past the "<<<" (3) and before the newline (trimming
	 * since newline can be more than 1 char)
	 *
	 * difference from PHP: we will treat single quoted strings and heredoc the same for now
	 * the PHP scanner scans the string and returns T_ENCAPSED_AND_WHITESPACE if string
	 * does not have embedded variables; since we don't care about embedded variables 
	 * we will always treat heredoc as singles quote strings
	 */
	UnicodeString identifier(buffer->TokenStart + 3, buffer->Current - buffer->TokenStart - 3 - 1);
	identifier.trim();
	
	// remove double quotes if they are there
	if (identifier.startsWith(UNICODE_STRING("\"", 1))) {
		identifier.remove(0, 1);
	}
	if (identifier.endsWith(UNICODE_STRING("\"", 1))) {
		identifier.remove(identifier.length() - 1, 1);
	}
	if ((buffer->Limit - buffer->Current) < 2) {
		buffer->AppendToLexeme(1);
	}
	int failed = pelet::SkipToIdentifier(buffer, identifier);
	if (!failed) {
		return T_CONSTANT_ENCAPSED_STRING;
	}
	return failed;
}

int pelet::HandleNowdoc(BufferClass *buffer) {
	
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
	UnicodeString identifier(buffer->TokenStart + 3, buffer->Current - buffer->TokenStart - 3 - 1);
	identifier.trim();
	
	// remove the single quotes
	identifier.remove(0, 1);
	identifier.remove(identifier.length() - 1, 1);
	if ((buffer->Limit - buffer->Current) < 2) {
		buffer->AppendToLexeme(1);
	}
	int failed = pelet::SkipToIdentifier(buffer, identifier);
	if (!failed) {
		return T_CONSTANT_ENCAPSED_STRING;
	}
	return failed;
}
 