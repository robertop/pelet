
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
#include <pelet/UCharBufferedFileClass.h>

pelet::BufferClass::BufferClass() 
	: Current(NULL)
	, TokenStart(NULL)
	, Marker(NULL)
	, Limit(NULL)
	, LineNumber(1) {
		
}

void pelet::BufferClass::IncrementLine() {
	LineNumber++;
}

int pelet::BufferClass::GetLineNumber() const {
	return LineNumber;
}

void pelet::BufferClass::Close() {
	
}
 
/** Buffer usage:
 *
 * Buffer will be initially set to some fixed size.
 *
 *               ------------------------------
 *  index         0 | 1 | 2 | 3 | 4 | 5 | 6 |
 * --------------------------------------------
 *  contents      x | x | x | x | x | x | x |
 * --------------------------------------------
 *  Current       ^ |   |   |   |   |   |   |
 * --------------------------------------------
 *  TokenStart    ^ |   |   |   |   |   |   |
 * --------------------------------------------
 *
 *
 * The client code will increment the current position (Current++); it is required that the
 * client perform bounds checking by making sure that Current did not go past the
 * end of the buffer ((Limit - Current) > 0). Current == Limit is a valid read
 * Example: After 4 increments (Current++ 4 times)
 *
 *               ------------------------------
 *  index         0 | 1 | 2 | 3 | 4 | 5 | 6 |
 * --------------------------------------------
 *  contents      e | c | h | o | ' | h | e |
 * --------------------------------------------
 *  Current         |   |   |   | ^ |   |   |
 * --------------------------------------------
 *  TokenStart    ^ |   |   |   |  |   |    |
 * --------------------------------------------
 *
 * The caller will keep incrementing the Current Pointer until it decides
 * that it has found a token.  A token can then be retrieved with by reading
 * the string that starts at TokenStart and is of length (Current - TokenStart). When
 * the client wants to start reading the next token, the client will call
 * MarkTokenStart(); this method will align TokenStart to the Current, essentially
 * 'erasing' the previous content.
 * 
 *
 * At some point the client code will get to the end of the buffer. The client code
 * will then call AppendToLexeme() method; this method will fetch new data from the 
 * backing file. Getting new data from the file involves 3 things:
 * (1) Copying the current token (anything from TokenStart onwards) to the 
 *     beginning of the buffer
 * (2) If, the current token is close to taking up the entire buffer, then the buffer
 *     is expanded.
 * (3) New content from the file is pulled and placed at the end of the current 
 *     token.
 *
 * For example, here Current is at the end of the buffer (Limit == Current)
 * When AppendToLexeme() is called, Buffer[5 ... ] will be copied to the
 * beginning of the buffer, and 
 *
 *               ------------------------------
 *  index         0 | 1 | 2 | 3 | 4 | 5 | 6 |
 * --------------------------------------------
 *  contents      e | c | h | o | ' | h | e |
 * --------------------------------------------
 *  Current         |   |   |   |   |   | ^ |
 * --------------------------------------------
 *  TokenStart      |   |   |   | ^ |   |   |
 * --------------------------------------------
 *  Limit           |   |   |   |   |   | ^ | 
 * --------------------------------------------
 *
 * Notice that TokenStart and Current point to new positions
 * within the buffer, but the content of the token is till the 
 * same.  After the AppendToLexeme() call, Buffer[3 ...]
 * contains the new content read from the file.
 *
 *               ------------------------------
 *  index         0 | 1 | 2 | 3 | 4 | 5 | 6 |
 * --------------------------------------------
 *  contents      ' | h | e | N | N | N | N |
 * --------------------------------------------
 *  Current       ^ |   |   |   |   |   |   |
 * --------------------------------------------
 *  TokenStart    ^ |   |   |   |  |   |    |
 * --------------------------------------------
 *
 */
void pelet::UCharBufferedFileClass::CleanupBuffer() {
	if (Buffer) {
		delete[] Buffer;
		Buffer = NULL;
		BufferCapacity = 0;
	}
}

void pelet::UCharBufferedFileClass::GrowBuffer(int minCapacity) {
	int newCapacity = minCapacity < (2 * BufferCapacity) ? (2 * BufferCapacity) : minCapacity;
	wxChar* newBuffer = new wxChar[newCapacity];

	memcpy(newBuffer, Buffer, sizeof(wxChar) * BufferCapacity);
	memset(newBuffer + BufferCapacity, 'i', sizeof(wxChar) * newCapacity / 2);
	
	
	// change all of the pointers
	TokenStart = newBuffer + (TokenStart - Buffer);
	Current = newBuffer + (Current - Buffer);
	
	// leave Limit at the place where the last good character is located
	Limit = newBuffer + (Limit - Buffer);
	Marker = newBuffer + (Marker - Buffer);
	
	delete[] Buffer;
	Buffer = newBuffer;
	BufferCapacity = newCapacity;
}

void pelet::UCharBufferedFileClass::MarkTokenStart() {
	TokenStart = Current;
	Marker = Current;
}

void pelet::UCharBufferedFileClass::AppendToLexeme(int minToGet) {
	if (InputStream && !InputStream->Eof()) {
		//printf("getting extra %d chars\n", minToGet);
		
		// since Limit points to the last character of the string (not past), we do +1 
		int validContentsCount = (Limit - TokenStart + 1); 
		int charsToGet;
		wxChar* startOfFreeSpace;
		if (TokenStart > Buffer) {
			RemoveLeadingSlackSpace();
			startOfFreeSpace = Buffer + validContentsCount; 
			charsToGet = BufferCapacity - validContentsCount;
		}
		
		// if, after we removed the slack; we are still close to the edge; grow the buffer
		// choosing 20 because the longest PHP keywords is about this long
		if ((Current - Limit) < 20) {
			int oldCapacity = BufferCapacity;
			GrowBuffer(2 * oldCapacity);
			startOfFreeSpace = Buffer + validContentsCount;
			charsToGet = oldCapacity + (oldCapacity - validContentsCount);
		}

		// should read charsToGet bytes from file; not charsToFill
		// we want to get as much from the file as possible without re-allocation
		if (charsToGet > 0) {
			int read = ReadChars(startOfFreeSpace, charsToGet);
			Limit = Buffer + BufferCapacity - 1;
			if (read < charsToGet) {
				HasReachedEof = true;
				
				// insert null character as the lexers will look for null characters as EOF
				startOfFreeSpace[read] = '\0';
				Eof = startOfFreeSpace + read;
			}
		}
	}
}

bool pelet::UCharBufferedFileClass::HasReachedEnd() const {
	
	// if we havent yet read in all of the file from disk then Limit is not really the end of the input
	// there is more to be had
	if (!HasReachedEof) {
		return false;
	}
	return Current >= Eof;
}

void  pelet::UCharBufferedFileClass::RemoveLeadingSlackSpace() {
	CharacterPos += TokenStart - Buffer;

	// copy any good content to the beginning of the buffer
	// since Limit points to the last character and not PAST the string, we do +1 
	int goodCount = Limit - TokenStart + 1;
	int currentIndex = Current - TokenStart;
	int markerIndex = Marker - TokenStart;

	memmove(Buffer, TokenStart, sizeof(wxChar) * goodCount);
	
	// make everything point to the beginning of the buffer
	// also move limit back to the end of the unread content
	TokenStart = Buffer;
	Current = Buffer + currentIndex;
	Marker = Buffer + markerIndex;

}

bool pelet::UCharBufferedFileClass::OpenFile(const char *newFile, const wxMBConv& conv, int startingCapacity) {
	CloseFile();
	wxString filename(newFile, wxConvUTF8);
	InputStream = new wxFFileInputStream(filename);
	TextStream = new wxTextInputStream(*InputStream, wxT("\t"), conv);
	return OpenFile(startingCapacity);
}

bool pelet::UCharBufferedFileClass::OpenFile(FILE* file, const wxMBConv& conv, int startingCapacity) {
	CloseFile();
	InputStream = new wxFFileInputStream(file);
	TextStream = new wxTextInputStream(*InputStream, wxT("\t"), conv);
	return OpenFile(startingCapacity);
}

void pelet::UCharBufferedFileClass::CloseFile() {
	if (NULL != TextStream) {
		delete TextStream;
		TextStream = NULL;
	}
	if (NULL != InputStream) {
		delete InputStream;
		InputStream = NULL;
	}
}

bool pelet::UCharBufferedFileClass::OpenFile(int startingCapacity) {
	if (!Buffer) {
		LineNumber = 1;
		Buffer = new wxChar[startingCapacity];
		BufferCapacity = startingCapacity;
		Current = Buffer;
		TokenStart = Buffer;
		Limit = Buffer;
		Marker = Buffer;
		HasReachedEof = false;
		Eof = NULL;
	}
	bool opened = false;
	if (NULL != InputStream && NULL != TextStream) {
		
		// point to the start of the file
		LineNumber = 1;
		CharacterPos = 0;
		Current = Buffer;
		Limit = Buffer;
		opened = true;
		int read = ReadChars(Buffer, BufferCapacity);
		Limit = Buffer + BufferCapacity - 1;
		if (read < BufferCapacity) {
			CloseFile();
			
			// insert null character as the lexers will look for null characters as EOF
			Buffer[read] = '\0';
			HasReachedEof = true;
			Eof = Buffer + read;
		}
	}
	return opened;
}

int pelet::UCharBufferedFileClass::ReadChars(wxChar* buffer, int n) {
	int read = 0;
	if (!InputStream) {
		return read;
	}
	for (int k = 0; k < n && !InputStream->Eof(); ++k) {
		
		// from wxWidgets docs
		// Note that the behaviour of the file pointer-based class wxFFile is different as wxFFile::Eof() 
		// will return true here only if an attempt has been made to read PAST the last byte of the file,
		wxChar c = TextStream->GetChar();
		if (c > 0) {
			buffer[k] = c;
			read++;
		}
	}
	return read;
}

pelet::UCharBufferedFileClass::UCharBufferedFileClass()
	: BufferClass()
	, Buffer(NULL)
	, Eof(NULL)
	, InputStream(NULL)
	, TextStream(NULL)
	, BufferCapacity(0) 
	, CharacterPos(0)
	, HasReachedEof(false)
	{
}

pelet::UCharBufferedFileClass::~UCharBufferedFileClass() {
	Close();
}

void pelet::UCharBufferedFileClass::Close() {
	CleanupBuffer();
	if (NULL != TextStream) {
		delete TextStream;
		TextStream = NULL;
	}
	if (NULL != InputStream) {
		delete InputStream;
		InputStream = NULL;
	}
	Buffer = NULL;
	Eof = NULL;
	BufferCapacity = 0;
	CharacterPos = 0;
	HasReachedEof = false;
	
	Current = NULL;
	TokenStart = NULL;
	Marker = NULL;
	Limit = NULL;
}

int pelet::UCharBufferedFileClass::GetCharacterPosition() const {
	return CharacterPos + (TokenStart - Buffer);
}

pelet::UCharBufferClass::UCharBufferClass() 
	: BufferClass()
	, Buffer(NULL) 
	, BufferCapacity(0) {
		
}

pelet::UCharBufferClass::~UCharBufferClass() {
	Close();
}

bool pelet::UCharBufferClass::OpenString(const wxString& code) {
	Close();
	int length = code.length();
	if (length > 0) {
		LineNumber = 1;
		wxChar* buf = new wxChar[length + 1];
		int i = 0;
		for (wxString::const_iterator c = code.begin(); c != code.end(); ++c) {
			buf[i++] = *c;
		}
		buf[length] = '\0';
		Buffer = buf;
		Current = Buffer;
		TokenStart = Buffer;
		Marker = Buffer;
		Limit = Buffer + length + 1;
	}
	return length > 0;
}

void pelet::UCharBufferClass::Close() {
	if (Buffer) {
		
		// the original string still owns the data, according to getTerminatedBuffer()
		delete[] Buffer;
		Buffer = NULL;
	}
	Current = NULL;
	TokenStart = NULL;
	Marker = NULL;
	Limit = NULL;
}

void pelet::UCharBufferClass::AppendToLexeme(int charsToFill) {
}

void pelet::UCharBufferClass::MarkTokenStart() {
	TokenStart = Current;
}

bool pelet::UCharBufferClass::HasReachedEnd() const {
	return Current >= Limit;
}

int pelet::UCharBufferClass::GetCharacterPosition() const {
	return TokenStart - Buffer;
}