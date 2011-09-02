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
#ifndef UCHARBUFFEREDFILE_H
#define UCHARBUFFEREDFILE_H

#include <unicode/ustdio.h>
#include <unicode/unistr.h>

namespace mvceditor {
	
/**
 * The UCharBufferedFile encapsulates a file; it will buffer reads so that calling AppendToLexeme() method
 * will read from an internal buffer and not from disk every single time.
 * Simple example:
 * 
 * @code
 * UCharBufferedFile buf();
 * if (buf.OpenFile("/home/user/files/my_file.txt")) {
 *  buf.AppendToLexeme(512);
 * 	while (buf.Current != 0) {
 *     // buf.Current will be valid up to 512;
 *     UnicodeString longStr(buf.Current, 512);
 *     
 *     // small string
 *    buf.ResetBuffer();
 *    buf.AppendToLexeme(16);
 *    UnicodeString shortStr(buf.Current, 16);
 *   }
 * }
 * else {
 *   puts("Could not open file!");
 * }
 * @endcode
 *
 * Note that this class will only work with text files, as it interprets a null character as the end of file. 
 * 
 * The public API was designed to fit the re2c generated scanners; it is not the preference of the author
 * to have public pointers that may change at any time.  Beware.
 */
class UCharBufferedFileClass {
	
public:
		
	/**
	 * The position of the current character. This pointer may be reassigned from one lexeme to the 
	 * next and in between long lexemes. For this reason, do NOT store Current pointer since it may change at
	 * any after buffer.AppendToLexeme is called. Memory errors will occur.
	 */
	UChar* Current;
	
	/**
	 * Points to the start of a token. This pointer may be reassigned from one lexeme to the 
	 * next and in between long lexemes. For this reason, do NOT store Current pointer since it may change at
	 * any after buffer.AppendToLexeme is called. Memory errors will occur.
	 */
	UChar* TokenStart;
	
	/**
	 * Used for backtracking. This pointer may be reassigned from one lexeme to the 
	 * next and in between long lexemes. For this reason, do NOT store Current pointer since it may change at
	 * any after buffer.AppendToLexeme is called. Memory errors will occur.
	 */
	UChar* Marker;
	
	/**
	 * Marks the end of the buffer. When Current == Limit then we need to refill the buffer. 
	 * This pointer may be reassigned from one lexeme to the 
	 * next and in between long lexemes.For this reason, do NOT store Current pointer since it may change at
	 * any after buffer.AppendToLexeme is called. Memory errors will occur.
	 * This pointer is guaranteed to be NULL when the end of 
	 * the file has been reached. 
	 */
	UChar* Limit;

		
	UCharBufferedFileClass();
	
	/**
	 * cleans up the internal buffer
	 */
	~UCharBufferedFileClass();

	/**
	 * Opens the file and partially loads it into the buffer. InlineHtml starts at true; signaling the lexer
	 * to start consuming the html (open tag in the stream will be required to start lexing as php).
	 * 
	 * @param const char *newFile to open
	 * @return bool true if file can be opened for reading
	 */
	bool OpenFile(const char *newFile);
	
	/**
	 * prepares the given code to be anlyzed. It is assumed that code is all php source; the
	 * open tag "<?php" is not required (InlineHtml starts at false)
	 * @param const UnicodeString& code to analyze
	 * @return bool true if source could be successfully turned to utf-16
	 */
	bool OpenString(const UnicodeString& code);
	
	/**
	 * Gets the next character from the file stream. This method may allocate a larger 
	 * internal buffer if the lexeme is longer than the deafult buffer length.
	 * 
	 * @param int the number of characters to get from the file.
	 */
	void AppendToLexeme(int charsToFill);
	
	/**
	 * Will reset the TokenStart to the Current pointer.
	 */
	void ResetBuffer();
	
	/**
	 * Adds to the line number count and resets the column count to 1.
	 */
	void IncrementLine();
	
	/**
	 *  the current line number
	 * 
	 * 	@return int 
	 */
	int GetLineNumber() const;
	
	/**
	 *  the current column number (characters after the newline)
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
	
private:

	/**
	 * reclaim memory used by this buffer
	 */
	void CleanupBuffer();
	
	/**
	 * allocate more memory for a lexeme. This will be triggered when a lexeme is longer than
	 * the default buffer size. All of the pointers (Current, TokenStart, Marker, Limit) 
	 * will be changed to point to the new buffer.
	 */
	void GrowBuffer();
	
	/**
	 * At some point while filling the buffer, Current will reach the end of the buffer (Limit - Buffer) == BufferCapacity
	 * but there will be room at the start of the buffer (TokenStart - 1 - Buffer) for more characters (previous tokens
	 * that were already read). This method will copy the current token to the start of the buffer in order to 
	 * prevent growing the buffer unless the entire buffer is used up with the current token.
	 * 
	 */
	void AlignToBufferStart();
	
	/**
	 * The name of the file being analyzed
	 * 
	 * @var const char *
	 */
	const char *FileName;
	
	/**
	 * This will store the lexemes.  Since they can be unlimited in length, we need
	 * to dynamically resize it as we see fit. However, as most lexemes are really short, 
	 * so we will pre-allocate space for it so that 99% of lexemes will not cause
	 * heap allocation (only lexemes over 512 chars will trigger a new allocation). 
	 * The string will NOT be NULL terminated. The current lexeme can be retrieved via
	 * the GetLexeme() method.
	 */
	UChar* Buffer;

	/**
	 * The opened file handle.
	 * 
	 * @var UFILE*
	 */
	UFILE* File;
		
	/**
	 * This variable stores the total memory allocated to the buffer.
	 *
	 * @var int
	 */
	int BufferCapacity;
	
	/**
	 * The current line number. This number is controlled by the IncrementLine() method
	 * since this buffer is always AHEAD of the token being read
	 * 
	 * @var int
	 */
	int LineNumber;

	/**
	 * The offset of the TokenStart position into the ENTIRE FILE. 
	 */
	int CharacterPos;

	/**
	 * The amount of memory to initially allocate to the buffer.
	 */
	static const int DEFAULT_BUFFER_CAPACITY = 512;
	
};	 
	 
}
#endif