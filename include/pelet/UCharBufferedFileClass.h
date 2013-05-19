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
#ifndef UCHARBUFFEREDFILE_H
#define UCHARBUFFEREDFILE_H

#include <wx/string.h>
#include <wx/wfstream.h>
#include <wx/txtstrm.h>
#include <pelet/Api.h>

namespace pelet {

/**
 * This is a base class for handling PHP source (or any other string really) that comes from
 * various sources (memory buffer or files). This abstraction will allows us to use the
 * LexicalAnalyzerClass on source code that comes from a string in memory or from a file on
 * the hard disk.
 */
class PELET_API BufferClass {

public:

	BufferClass();	
	
	/**
	 * The position of the current character. This pointer may be reassigned from one lexeme to the 
	 * next and in between long lexemes. For this reason, do NOT store Current pointer since it may change at
	 * any after buffer.AppendToLexeme is called. Memory errors will occur.
	 */
	const wxChar* Current;
	
	/**
	 * Points to the start of a token. This pointer may be reassigned from one lexeme to the 
	 * next and in between long lexemes. For this reason, do NOT store TokenStart pointer since it may change at
	 * any after buffer.AppendToLexeme is called. Memory errors will occur.
	 */
	const wxChar* TokenStart;
	
	/**
	 * Used for backtracking. This pointer may be reassigned from one lexeme to the 
	 * next and in between long lexemes. For this reason, do NOT store Marker pointer since it may change at
	 * any after buffer.AppendToLexeme is called. Memory errors will occur.
	 */
	const wxChar* Marker;
	
	/**
	 * Marks the end of the buffer (NOT necessarily the end of the input). When Current == Limit then we need to refill the buffer. 
	 * This pointer may be reassigned from one lexeme to the 
	 * next and in between long lexemes.For this reason, do NOT store Limit pointer since it may change at
	 * any after buffer.AppendToLexeme is called. Memory errors will occur.
	 */
	const wxChar* Limit;
	
	/**
	 * NO-OP will do nothing since all data is already in memory
	 * 
	 * @param int the number of characters to get from the file.
	 */
	virtual void AppendToLexeme(int charsToFill) = 0;
	
	/**
	 * Will reset the TokenStart to the Current pointer.
	 */
	virtual void MarkTokenStart() = 0;
	
	/**
	 * Adds to the line number count and resets the column count to 1.
	 */
	void IncrementLine();
	
	/**
	 * @return TRUE if the Current pointer has reached the end of the input
	 */
	virtual bool HasReachedEnd() const = 0;
		
	/**
	 *  the current line number
	 * 
	 * 	@return int 
	 */
	int GetLineNumber() const;

	/**
	 * Returns the position of Current in the context of this buffer
	 * (the number of characters that have been consumed since the Open() call)
	 * This number is zero based
	 * @return int
	 */
	virtual int GetCharacterPosition() const = 0;
	
	/**
	 * Release any resources
	 */
	virtual void Close() = 0;
	
protected:

	/**
	 * The current line number. This number is controlled by the IncrementLine() method
	 * since this buffer is always AHEAD of the token being read
	 */
	int LineNumber;
	
};
	
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
 *     wxString longStr(buf.Current, 512);
 *     
 *     // small string
 *    buf.ResetBuffer();
 *    buf.AppendToLexeme(16);
 *    wxString shortStr(buf.Current, 16);
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
class PELET_API UCharBufferedFileClass : public BufferClass {
	
public:
		
	UCharBufferedFileClass();
	
	~UCharBufferedFileClass();
	
	/**
	 * cleans up the internal buffer
	 */
	void Close();

	/**
	 * Opens the file and partially loads it into the buffer. InlineHtml starts at true; signaling the lexer
	 * to start consuming the html (open tag in the stream will be required to start lexing as php).
	 * This method is a convenience method, but it will NOT handle unicode file names.
	 *
	 * @param const char *newFile to open
	 * @param conv the converter to use when opening the file
	 * @param startingCapacity to initial buffer size
	 * @return bool true if file can be opened for reading
	 */
	bool OpenFile(const char *newFile, const wxMBConv& conv = wxConvAuto(), int statingCapacity = 512);

	/**
	 * Opens the file and partially loads it into the buffer. InlineHtml starts at true; signaling the lexer
	 * to start consuming the html (open tag in the stream will be required to start lexing as php).This method
	 * is useful when, for example, a file with a unicode filename was opened by the caller of this
	 * method.
	 * 
	 * @param FILE* *file opened file pointer, this class will NOT own the file pointer
	 * @param conv the converter to use when opening the file
	 * @param startingCapacity to initial buffer size
	 * @return bool true if file can be opened for reading
	 */
	bool OpenFile(FILE* file, const wxMBConv& conv = wxConvAuto(), int statingCapacity = 512);
	
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
	void MarkTokenStart();
	
	/**
	 * @return TRUE if the Current pointer has reached the end of the input
	 */
	bool HasReachedEnd() const;

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
	 * 
	 * @param minCapacity the minimum size of the new buffer; new buffer will be either minCapacity or 2 * the old capacity
	 * which ever is greater
	 */
	void GrowBuffer(int minCapacity);
	
	/**
	 * Will copy the contents from Tokenstart On back to the beginning of the buffer
	 * This will, in effect, throw away any old data.
	 */
	void RemoveLeadingSlackSpace();

	/**
	 * common code that is shared by the public OpenFile() methods
	 */
	bool OpenFile(int statingCapacity);
	
	/**
	 * close all file pointers and streams
	 */
	void CloseFile();
	
	/**
	 * read n characters from the text stream.
	 * 
	 * @param n the number of characters to read
	 * @return int the number of characters that were read
	 */
	int ReadChars(wxChar* buffer, int n);
	
	/**
	 * This will store the lexemes.  Since they can be unlimited in length, we need
	 * to dynamically resize it as we see fit. However, as most lexemes are really short, 
	 * so we will pre-allocate space for it so that 99% of lexemes will not cause
	 * heap allocation (only lexemes over 512 chars will trigger a new allocation). 
	 * The string will NOT be NULL terminated. The current lexeme can be retrieved via
	 * the GetLexeme() method.
	 */
	wxChar* Buffer;
	
	/**
	 * Points to the end-of-file. This is just a pointer to Buffer.
	 */
	wxChar* Eof;

	/**
	 * The opened file handle. This class will own the pointer.
	 */
	wxFFileInputStream* InputStream;
	
	/**
	 * to convert file data to text. This class will own the pointer.
	 */
	wxTextInputStream* TextStream;
		
	/**
	 * This variable stores the total memory allocated to the buffer.
	 *
	 */
	int BufferCapacity;

	/**
	 * The offset of the TokenStart position into the ENTIRE FILE. 
	 */
	int CharacterPos;
	
	/**
	 * Flag that tells us that we have read in the file entirely.  When this is TRUE, then Limit
	 * is also the end od the input.
	 */
	bool HasReachedEof;
};

/**
 * The UCharBufferClass will wrap an array of UChars or a wxString, making it
 * possible to tokenize a string of PHP source code.
 */
class PELET_API UCharBufferClass : public BufferClass {
	
public:
		
	UCharBufferClass();
	
	~UCharBufferClass();
	
	/**
	 * Release any resources
	 */
	void Close();
	
	/**
	 * prepares the given code to be anlyzed. It is assumed that code is all php source; the
	 * open tag "<?php" is not required (InlineHtml starts at false)
	 * @param const wxString& code to analyze
	 * @return bool true if code is not empty
	 */
	bool OpenString(const wxString& code);
	
	/**
	 * NO-OP will do nothing since all data is already in memory
	 * 
	 * @param int the number of characters to get from the file.
	 */
	void AppendToLexeme(int charsToFill);
	
	/**
	 * Will reset the TokenStart to the Current pointer.
	 */
	void MarkTokenStart();
	
	/**
	 * @return TRUE if the Current pointer has reached the end of the input
	 */
	bool HasReachedEnd() const;

	/**
	 * Returns the position of Current in the context of this buffer
	 * (the number of characters that have been consumed since the Open() call)
	 * This number is zero based
	 * @return int
	 */
	int GetCharacterPosition() const;
	
private:
	
	
	/**
	 * This will store the lexemes.  Since they can be unlimited in length, we need
	 * to dynamically resize it as we see fit. However, as most lexemes are really short, 
	 * so we will pre-allocate space for it so that 99% of lexemes will not cause
	 * heap allocation (only lexemes over 512 chars will trigger a new allocation). 
	 * The string will NOT be NULL terminated. The current lexeme can be retrieved via
	 * the GetLexeme() method.
	 */
	const wxChar* Buffer;
	
	/**
	 * This variable stores the total memory allocated to the buffer.
	 */
	int BufferCapacity;
};

}
#endif