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
#ifndef LEXICALANALYZER_H
#define LEXICALANALYZER_H

#include <string>
#include <wx/string.h>
#include <pelet/UCharBufferedFileClass.h>
#include <pelet/TokenClass.h>
#include <pelet/Api.h>

namespace pelet {


/** 
 * This class represents the lexical analyzer.  It turns source code into
 * tokens that can be used to analyze PHP code.
 */
class PELET_API LexicalAnalyzerClass {
	
	public :
	
	/**
	 * Any parse error is stored here. This is read by the ParserClass::LintFile and 
	 * ParserClass::LintCode methods and written by php53error function.
	 */
	 wxString ParserError;

	/**
	 * constructor: opens the file with the name given, using PHP_53 as the version
	 * 
	 * @param file full path of the file to be analyzed.
	 */
	LexicalAnalyzerClass(const std::string& filename);

	/**
	 * default constructor, using PHP_53 as the version
	 */
	LexicalAnalyzerClass();
	
	~LexicalAnalyzerClass();
	
	/**
	 * prepares file to be analyzed. If another file is currently opened it 
	 * will be closed. This is a convenience method, this method does not handle unicode
	 * filenames.
	 * 
	 * @param const std::string& newFile to open
	 * @return bool true if file can be opened for reading
	 */
	bool OpenFile(const std::string& newFile);

	/**
	 * prepares file to be analyzed. If another file is currently opened it 
	 * will be closed. The caller can, for example, open a file with a unicode filename and then
	 * pass it to this method
	 * 
	 * @param FILE* opened file to tokenize, this class WILL own the file pointer and delete it
	 * @return bool true if file pointer is valid
	 */
	bool OpenFile(FILE* file);
	
	/**
	 * prepares the given code to be analyzed. If another file/buffer is currently
	 * opened it will be closed. The lexer will assume that code start with
	 * pure PHP code.
	 * 
	 * @param wxString& code to analyze
	 * @return bool true if source could be successfully turned to utf-16
	 */
	bool OpenString(const wxString& code);
	
	/**
	 * Change the version that this lexer can handle. This needs to be called BEFORE OpenFile() or
	 * OpenString()
	 */
	void SetVersion(Versions version);
	
	/**
	 * Clean up any resources after lexing
	 */
	void Close();

	/**
	 * gets the next token. Checking for the end is not as simple as checking for T_EOF, you will
	 * need to call pelet::TokenClass::IsTerminatingToken() to ensure that the end of stream
	 * has been reached (since a lexer can end with EOF, an unterminated string, or an unterminated comment).
	 * 
	 * @return int token ID, one of  pelet::TokenClass::TokenIds or, if a token is a symbol then the
	 *         ASCII value of that symbol is returned. For example, for '(' this method returns 40.
	 * @see pelet::TokenClass::TokenIds
	 */
	int NextToken();

	/**
	 * Get the current lexeme, which is set during NextToken() method.
	 *
	 * @param wxString& lexeme will be set with the lexeme
	 * @return bool true if successful, false on error
	 */
	bool GetLexeme(wxString& lexeme);

	/**
	 * returns the line number of the source file that the
	 * Lexical Analyzer is currently working on. Handles various line endings correctly.
	 * This number is 1-based (starts at 1)
	 * 
	 * @return int line number
	 */
	int GetLineNumber() const;

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
	 * or OpenFile(FILE*) is used; will never be NULL
	 */
	std::string GetFileName() const;

	/**
	 * Get the last expression from the give code (the string that is to be 'completed'). 
	 * Since an expression is a recursive rule (ie. expression = expression1 + expression2) this
	 * method will only return the very last one (expression2). The exception here is function
	 * calls; for the function calls this method will return the entire function call itself. See 
	 * example 7 below.
	 *
	 * Example expressions
	 *  1. a partial variable name                               $myVar
	 *  2. a partial function / define / class / keyword name    myFunctio
	 *  3. a partial property name                               $myVar->myPr
	 *  4. a static property name                                MyClass::$myPr
	 *  5. a static function name                                MyClass::myFunc
	 *  6. a function call "chain"                               $this->myFunc()->prop
	 *  7. a function call "chain" with args                     $this->myFunc($one, $two)->prop
	 *
	 *  Expressions that we cannot complete
	 *  1. variable variables                                   $$myDynamic
	 *  2. variable properties                                  $myObk->$myDynamic
	 *  3. object arrays                                        $myArr[$i]->prop
	 *
	 * 
	 * @param a piece of PHP code
	 * @return the last expression in that piece of code. This could be the empty string
	 *         if the the last expression has been terminated (ie the last non-whitespace
	 *         character is ";")
	 */
	wxString LastExpression(const wxString& code) const;
	
private:	
	
	/**
	 * The buffer that holds the source code being tokenized.
	 */
	BufferClass* Buffer;
	
	/**
	 * The file being parsed. Exactly what was given to OpenFile().
	 */
	std::string FileName;
	
	/**
	 * Lexical analyzer to keep track of its "context" to execute some of its
	 * rules properly.
	 */
	YYCONDTYPE Condition;
	
	/**
	 * The PHP version to handle
	 */
	Versions Version;
	
};

}
#endif
