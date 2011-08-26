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
#include <language/UCharBufferedFileClass.h>
#include <unicode/ustring.h>

/**
 * IMPLEMENTATION NOTE: This class internally uses ICU strings instead of wxStrings because of a couple of issues:
 * 
 * 1.) wxTextInputStream::GetChar() has trouble with UTF-16. See http://forums.wxwidgets.org/viewtopic.php?t=1241
 * 2.) Fallback text encoding does not work properly when a file contains some High Ascii characters. See 
 *     http://trac.wxwidgets.org/ticket/10670
 * 
 * Also, note the use of UChar arrays.  Using arrays (and in some cases arrays allocated on the
 * stack) greatly improved the tokenizer performance.
 */
 
void mvceditor::UCharBufferedFileClass::CleanupBuffer() {
	if (Buffer) {
		delete[] Buffer;
		Buffer = NULL;
		BufferCapacity = DEFAULT_BUFFER_CAPACITY;
	}
}

void mvceditor::UCharBufferedFileClass::GrowBuffer() {
	UChar* newBuffer = new UChar[2 * BufferCapacity];
	u_strncpy(newBuffer, Buffer, BufferCapacity);
	
	
	// change all of the pointers
	TokenStart = &newBuffer[TokenStart - Buffer];
	Current = &newBuffer[Current - Buffer];
	Limit = &newBuffer[Limit - Buffer];
	Marker = &newBuffer[Marker - Buffer];
	
	delete[] Buffer;
	Buffer = newBuffer;
	BufferCapacity = 2 * BufferCapacity;
}

void mvceditor::UCharBufferedFileClass::ResetBuffer() {
	
	// copy any unread content to the beginning of the buffer
	int unread = Limit - Current;
	int read = Current - Buffer;
	u_strncpy(Buffer, Current, unread);
	
	// make everything point to the beginning of the buffer
	// also move limit back to the end of the unread content
	TokenStart = Buffer;
	Current = Buffer;
	Marker = Buffer;
	Limit = Buffer + unread;

	CharacterPos += read;
}

void mvceditor::UCharBufferedFileClass::AppendToLexeme(int charsToFill) {
	UChar32 ch = 0;
	bool eof = false;
	int i = 0;
	if (NULL != File) {
		for (; i < charsToFill && !eof; i++) {
			ch = u_fgetc(File);
			*Limit = ch;
			Limit++;
			if (ch == U_EOF) {
				u_fclose(File);
				File = NULL;
				
				// terminate the string properly, lexical analyzer will look for null character as the end-of-file
				*(Limit - 1) = '\0';
				eof = true;
			}
			if ((Limit - Buffer) >= BufferCapacity && !eof) {
				GrowBuffer();
			}
		}
	}
}

bool mvceditor::UCharBufferedFileClass::OpenFile(const char *newFile) {
	if (NULL != File) {
		u_fclose(File);
		File = NULL;	
	}
	if (!Buffer) {
		LineNumber = 1;
		Buffer = new UChar[DEFAULT_BUFFER_CAPACITY];
		Current = Buffer;
		TokenStart = Buffer;
		Limit = Buffer;
		Marker = Buffer;
		Limit = Buffer;
	}
	FileName = newFile;
	bool opened = false;
	File = u_fopen(newFile, "rb", NULL, NULL);
	if (NULL != File) {
		
		// point to the start of the file
		LineNumber = 1;
		CharacterPos = 0;
		Current = Buffer;
		Limit = Buffer;
		opened = true;
	}
	return opened;
}

bool mvceditor::UCharBufferedFileClass::OpenString(const UnicodeString& code) {
	if (NULL != File) {
		u_fclose(File);
		File = NULL;	
	}
	
	// cleanup because we are gonna copy the code which may be bigger
	CleanupBuffer();
	if (!Buffer) {
		CharacterPos = 0;
		LineNumber = 1;
		Buffer = new UChar[code.length() + 1];		
		u_strncpy(Buffer, code.getBuffer(), code.length());
		Buffer[code.length()] = '\0';
		Current = Buffer;
		TokenStart = Buffer;
		Marker = Buffer;
		Limit = Buffer + code.length() + 1;
	}
	return u_strlen(Buffer) > 0;
}

mvceditor::UCharBufferedFileClass::UCharBufferedFileClass()
	: Current(NULL)
	, TokenStart(NULL)
	, Marker(NULL)
	, Limit(NULL)
	, FileName(NULL)
	, Buffer(NULL)
	, File(NULL)
	, BufferCapacity(DEFAULT_BUFFER_CAPACITY) 
	, LineNumber(1)
	, CharacterPos(0)
	{
}

mvceditor::UCharBufferedFileClass::~UCharBufferedFileClass() {
	CleanupBuffer();
	if (NULL != File) {
		u_fclose(File);
		File = NULL;	
	}
}

int mvceditor::UCharBufferedFileClass::GetLineNumber() const {
	return LineNumber;
}

void mvceditor::UCharBufferedFileClass::IncrementLine() {
	LineNumber++;
}

int mvceditor::UCharBufferedFileClass::GetColumnNumber() const {
	return TokenStart - Buffer;
}

int mvceditor::UCharBufferedFileClass::GetCharacterPosition() const {
	return CharacterPos;
}