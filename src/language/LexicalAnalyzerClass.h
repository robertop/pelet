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
#ifndef LEXICALANALYZER_H
#define LEXICALANALYZER_H

#include <wx/string.h>
#include <unicode/unistr.h>
#include <language/UCharBufferedFileClass.h>
#include <language/Php53LexicalAnalyzerImpl.h>
#include <language/Php53ParserImpl.hpp>

namespace mvceditor {


/* 
 * This class represents the lexical analyzer.  It returns tokens from
 * the globals include file representing what the source file contains
 */
class LexicalAnalyzerClass {
	public :
	
	/**
	 * Any parse error is stored here. This is read by the ParserClass::LintFile and 
	 * ParserClass::LintCode methods and written by php53error function.
	 */
	 UnicodeString ParserError;

	/**
	 * constructor: opens the file with the name given
	 * 
	 * @param const wxString& file to be analyzed.
	 */
	LexicalAnalyzerClass(const wxString& filename);

	/**
	 * default constructor
	 */
	LexicalAnalyzerClass();
	
	~LexicalAnalyzerClass();
	
	/**
	 * prepares file to be analyzed. If another file is currently opened it 
	 * will be closed.
	 * 
	 * @param const wxString& newFile to open
	 * @return bool true if file can be opened for reading
	 */
	bool OpenFile(const wxString& newFile);
	
	/**
	 * prepares the given code to be analyzed. If another file/buffer is currently
	 * opened it will be closed. The lexer will assume that code start with
	 * pure PHP code.
	 * 
	 * @param wxString& code to analyze
	 * @return bool true if source could be successfully turned to utf-16
	 */
	bool OpenString(const UnicodeString& code);
	
	/**
	 * Clean up any resources after lexing
	 */
	 // TODO: this needs to get called by the Parsers
	void Close();

	/**
	 * gets the next token. Checking for the end is not as simple as checking for T_EOF, you will
	 * need to call mvceditor::TokenClass::IsTerminatingToken() to ensure that the end of stream
	 * has been reached (since a lexer can end with EOF, an unterminated string, or an unterminated comment).
	 * 
	 * @return int token ID
	 * @see mvceditor::TokenClass::TokenIds
	 */
	int NextToken();

	/**
	 * Get the current lexeme, which is set during NextToken() method.
	 * This method is way faster than GetLexeme(wxString) because no
	 * conversion needs to be done.
	 *
	 * @param wxString& lexeme will be set with the lexeme
	 * @return bool true if successful, false on error
	 */
	bool GetLexeme(UnicodeString& lexeme);

	/**
	 * returns the line number of the source file that the
	 * Lexical Analyzer is currently working on. Handles various line endings correctly.
	 * This number is 1-based (starts at 1)
	 * 
	 * @return int line number
	 */
	int GetLineNumber() const;
	
	/**
	 * The current column number (characters after the newline).
	 * This number is 1-based (starts at 1)
	 * 
	 * 	@return int 
	 */
	int GetColumnNumber() const;

	/**
	 * Returns the position of Current in the context of this buffer
	 * (the number of characters that have been consumed since the Open() call)
	 * This number is zero based
	 * @return int
	 */
	int GetCharacterPosition() const;
	
	/**
	 * Returns the name of the file being parsed.
	 * 
	 * @return wxString  file name given to OpenFile() method. This will be empty string if OpenCode()
	 * is used; will never be NULL
	 */
	wxString GetFileName() const;
	
private:	
	
	/**
	 * The file buffer
	 * 
	 * @var BufferClass
	 */
	BufferClass* Buffer;
	
	/**
	 * The file being parsed. Exactly what was given to OpenFile().
	 * @var String
	 */
	wxString FileName;
	
	/**
	 * Lexical analyzer to keep track of its "context" to execute some of its
	 * rules properly.
	 * 
	 * @var YYCONDTYPE
	 * @see YYCONDTYPE
	 */
	YYCONDTYPE Condition;
	
};

}
#endif
