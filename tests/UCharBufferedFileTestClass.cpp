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
#include <UnitTest++.h>
#include <FileTestFixtureClass.h>
#include <pelet/UCharBufferedFileClass.h>
#include <wx/string.h>
#include <wx/strconv.h>

class UCharBufferedFileTestFixtureClass : public FileTestFixtureClass {
	
public:

	UCharBufferedFileTestFixtureClass()
		: FileTestFixtureClass() {
		MemBuffer = new pelet::UCharBufferClass();
		FileBuffer = new pelet::UCharBufferedFileClass();
	}
	
	~UCharBufferedFileTestFixtureClass() {
		delete MemBuffer;
		delete FileBuffer;
	}
	
	pelet::UCharBufferClass* MemBuffer;
	pelet::UCharBufferedFileClass* FileBuffer;
	
};

SUITE(UCharBufferedFileTestClass) {

TEST_FIXTURE(UCharBufferedFileTestFixtureClass, MemoryBufferHasEnded) {
	wxString test = wxT("function");
	CHECK(MemBuffer->OpenString(test));
	CHECK_EQUAL(false, MemBuffer->HasReachedEnd());
	size_t actualLength = MemBuffer->Limit - MemBuffer->Current - 1;
	CHECK_EQUAL(test.length(), actualLength);
	CHECK_EQUAL('f', *MemBuffer->Current++);
	CHECK_EQUAL('u', *MemBuffer->Current++);
	CHECK_EQUAL('n', *MemBuffer->Current++);
	CHECK_EQUAL('c', *MemBuffer->Current++);
	CHECK_EQUAL('t', *MemBuffer->Current++);
	CHECK_EQUAL('i', *MemBuffer->Current++);
	CHECK_EQUAL('o', *MemBuffer->Current++);
	CHECK_EQUAL(false, MemBuffer->HasReachedEnd());
	CHECK_EQUAL('n', *MemBuffer->Current++);
	CHECK_EQUAL(0, *MemBuffer->Current++);
	CHECK(MemBuffer->HasReachedEnd());
}

TEST_FIXTURE(UCharBufferedFileTestFixtureClass, FileBufferHasEnded) {
	std::string fileName = "test_buffer.txt";
	std::string test = "function";
	CreateFixtureFile(fileName, test);
	std::string filePath = TestProjectDir + fileName;

	CHECK(FileBuffer->OpenFile(filePath.c_str()));
	FileBuffer->AppendToLexeme(1);
	CHECK_EQUAL(false, FileBuffer->HasReachedEnd());
	CHECK_EQUAL('f', *FileBuffer->Current++);
	FileBuffer->AppendToLexeme(1);
	CHECK_EQUAL('u', *FileBuffer->Current++);
	FileBuffer->AppendToLexeme(1);
	CHECK_EQUAL('n', *FileBuffer->Current++);
	FileBuffer->AppendToLexeme(1);
	CHECK_EQUAL('c', *FileBuffer->Current++);
	FileBuffer->AppendToLexeme(1);
	CHECK_EQUAL('t', *FileBuffer->Current++);
	FileBuffer->AppendToLexeme(1);
	CHECK_EQUAL('i', *FileBuffer->Current++);
	FileBuffer->AppendToLexeme(1);
	CHECK_EQUAL('o', *FileBuffer->Current++);
	FileBuffer->AppendToLexeme(1);
	CHECK_EQUAL(false, FileBuffer->HasReachedEnd());
	FileBuffer->AppendToLexeme(1);
	CHECK_EQUAL('n', *FileBuffer->Current++);
	FileBuffer->AppendToLexeme(1);
	CHECK(FileBuffer->HasReachedEnd());
	CHECK_EQUAL(0, *FileBuffer->Current);
}

TEST_FIXTURE(UCharBufferedFileTestFixtureClass, FileBufferHasEndedWhenAppendingMuch) {
	std::string fileName = "test_buffer.txt";
	std::string test = "function";
	CreateFixtureFile(fileName, test);
	std::string filePath = TestProjectDir + fileName;

	CHECK(FileBuffer->OpenFile(filePath.c_str()));
	FileBuffer->AppendToLexeme(20);
	CHECK_EQUAL(false, FileBuffer->HasReachedEnd());
	CHECK_EQUAL('f', *FileBuffer->Current++);
	CHECK_EQUAL('u', *FileBuffer->Current++);
	CHECK_EQUAL('n', *FileBuffer->Current++);
	CHECK_EQUAL('c', *FileBuffer->Current++);
	CHECK_EQUAL('t', *FileBuffer->Current++);
	CHECK_EQUAL('i', *FileBuffer->Current++);
	CHECK_EQUAL('o', *FileBuffer->Current++);
	CHECK_EQUAL(false, FileBuffer->HasReachedEnd());
	CHECK_EQUAL('n', *FileBuffer->Current++);
	CHECK(FileBuffer->HasReachedEnd());
	CHECK_EQUAL(0, *FileBuffer->Current);
}

TEST_FIXTURE(UCharBufferedFileTestFixtureClass, FileBufferWhenBufferHasToGrow) {
	std::string fileName = "test_buffer.txt";
	std::string test = "function";
	CreateFixtureFile(fileName, test);
	std::string filePath = TestProjectDir + fileName;

	// start with a small buffer size, it will need to grow to
	// acommodate the entire file
	CHECK(FileBuffer->OpenFile(filePath.c_str(), wxConvUTF8, 2));
	CHECK_EQUAL(false, FileBuffer->HasReachedEnd());
	CHECK_EQUAL('f', *FileBuffer->Current++);
	CHECK_EQUAL('u', *FileBuffer->Current++);
	
	// buffer will double (4) but it will occupied by (2)
	FileBuffer->AppendToLexeme(20);
	CHECK_EQUAL('n', *FileBuffer->Current++);
	CHECK_EQUAL('c', *FileBuffer->Current++);
	
	// buffer will double (8) it will be occcupied by (4)
	FileBuffer->AppendToLexeme(20);
	CHECK_EQUAL('t', *FileBuffer->Current++);
	CHECK_EQUAL('i', *FileBuffer->Current++);
	CHECK_EQUAL('o', *FileBuffer->Current++);
	CHECK_EQUAL(false, FileBuffer->HasReachedEnd());
	CHECK_EQUAL('n', *FileBuffer->Current++);
	
	// need to attempt to read more before EOF can be detected
	FileBuffer->AppendToLexeme(20);
	CHECK(FileBuffer->HasReachedEnd());
	CHECK_EQUAL(0, *FileBuffer->Current);
}

TEST_FIXTURE(UCharBufferedFileTestFixtureClass, FileBufferWhenRemovingLeadingSlack) {
	std::string fileName = "test_buffer.txt";
	std::string test = "another free function";
	CreateFixtureFile(fileName, test);
	std::string filePath = TestProjectDir + fileName;

	// start with a small buffer size, it will need to grow to
	// acommodate the entire file
	CHECK(FileBuffer->OpenFile(filePath.c_str(), wxConvUTF8, 15));
	
	// advance past 'another free '
	for (int i = 0; i < 13; i++) {
		FileBuffer->Current++;
	}
	FileBuffer->MarkTokenStart();
	
	// 10 => just enough to get the rest of the file, while fitting in the leading slack
	FileBuffer->AppendToLexeme(10);
	CHECK_EQUAL('f', *FileBuffer->Current++);
	CHECK_EQUAL('u', *FileBuffer->Current++);
	CHECK_EQUAL('n', *FileBuffer->Current++);
	CHECK_EQUAL('c', *FileBuffer->Current++);
	CHECK_EQUAL('t', *FileBuffer->Current++);
	CHECK_EQUAL('i', *FileBuffer->Current++);
	CHECK_EQUAL('o', *FileBuffer->Current++);
	CHECK_EQUAL(false, FileBuffer->HasReachedEnd());
	CHECK_EQUAL('n', *FileBuffer->Current++);
	CHECK(FileBuffer->HasReachedEnd());
	
	// here Current is already one past the end
	wxString str(FileBuffer->TokenStart, FileBuffer->Current - FileBuffer->TokenStart);
	CHECK_EQUAL(wxT("function"), str);
	CHECK_EQUAL(0, *FileBuffer->Current);
}

TEST_FIXTURE(UCharBufferedFileTestFixtureClass, FileBufferWhenRemovingLeadingSlackInTheMiddleOfToken) {
	std::string fileName = "test_buffer.txt";
	std::string test = "another free function";
	CreateFixtureFile(fileName, test);
	std::string filePath = TestProjectDir + fileName;

	// start with a small buffer size, it will need to grow to
	// acommodate the entire file
	CHECK(FileBuffer->OpenFile(filePath.c_str(), wxConvUTF8, 15));
	
	// advance past 'another free '
	for (int i = 0; i < 13; i++) {
		FileBuffer->Current++;
	}
	FileBuffer->MarkTokenStart();
	FileBuffer->Current++;
	FileBuffer->Current++;
	
	// 10 => just enough to get the rest of the file, while fitting in the leading slack
	FileBuffer->AppendToLexeme(10);
	
	// we ate the 'fu' above
	CHECK_EQUAL('n', *FileBuffer->Current++);
	CHECK_EQUAL('c', *FileBuffer->Current++);
	CHECK_EQUAL('t', *FileBuffer->Current++);
	CHECK_EQUAL('i', *FileBuffer->Current++);
	CHECK_EQUAL('o', *FileBuffer->Current++);
	CHECK_EQUAL(false, FileBuffer->HasReachedEnd());
	CHECK_EQUAL('n', *FileBuffer->Current++);
	CHECK(FileBuffer->HasReachedEnd());
	
	// here Current is already one past the end
	wxString str(FileBuffer->TokenStart, FileBuffer->Current - FileBuffer->TokenStart);
	CHECK_EQUAL(wxT("function"), str);
	CHECK_EQUAL(0, *FileBuffer->Current);
}

TEST_FIXTURE(UCharBufferedFileTestFixtureClass, FileBufferWhenRemovingLeadingSlackAndHasToGrowInTheMiddleOfToken) {
	std::string fileName = "test_buffer.txt";
	std::string test = "another free function";
	CreateFixtureFile(fileName, test);
	std::string filePath = TestProjectDir + fileName;

	// start with a small buffer size, it will need to grow to
	// acommodate the entire file
	CHECK(FileBuffer->OpenFile(filePath.c_str(), wxConvUTF8, 9));
	
	// advance past 'another '
	for (int i = 0; i < 8; i++) {
		FileBuffer->Current++;
	}
	FileBuffer->MarkTokenStart();
	FileBuffer->AppendToLexeme(7);
	
	CHECK_EQUAL('f', *FileBuffer->Current++);
	CHECK_EQUAL('r', *FileBuffer->Current++);
	CHECK_EQUAL('e', *FileBuffer->Current++);
	CHECK_EQUAL('e', *FileBuffer->Current++);
	CHECK_EQUAL(' ', *FileBuffer->Current++);
	CHECK_EQUAL('f', *FileBuffer->Current++);
	CHECK_EQUAL('u', *FileBuffer->Current++);
	
	// 14 => just enough to get the rest of the file, won't fit in the leading slack
	FileBuffer->AppendToLexeme(14);
	
	CHECK_EQUAL('n', *FileBuffer->Current++);
	CHECK_EQUAL('c', *FileBuffer->Current++);
	CHECK_EQUAL('t', *FileBuffer->Current++);
	CHECK_EQUAL('i', *FileBuffer->Current++);
	CHECK_EQUAL('o', *FileBuffer->Current++);
	CHECK_EQUAL(false, FileBuffer->HasReachedEnd());
	CHECK_EQUAL('n', *FileBuffer->Current++);
	CHECK(FileBuffer->HasReachedEnd());
	
	// here Current is already one past the end
	wxString str(FileBuffer->TokenStart, FileBuffer->Current - FileBuffer->TokenStart);
	CHECK_EQUAL(wxT("free function"), str);
	CHECK_EQUAL(0, *FileBuffer->Current);
}

TEST_FIXTURE(UCharBufferedFileTestFixtureClass, FileBufferShouldFillFromFileAfterRemovingSlack) {
	std::string fileName = "test_buffer.txt";
	std::string test = "another free function";
	CreateFixtureFile(fileName, test);
	std::string filePath = TestProjectDir + fileName;

	// start with a small buffer size, it will need to grow to
	// acommodate the entire file
	CHECK(FileBuffer->OpenFile(filePath.c_str(), wxConvUTF8, 2));
	
	// advance past 'another '
	for (int i = 0; i < 8; i++) {

		//  by marking the token start inside of the loop; we are forcing
		// to remove the slack space.  the thing we want to test is that
		// when the slack space is used up AND the buffer grows at the same
		// time; the copying of the current characters is correct
		FileBuffer->MarkTokenStart();
		FileBuffer->AppendToLexeme(1);
		FileBuffer->Current++;
	}
	FileBuffer->MarkTokenStart();
	FileBuffer->AppendToLexeme(23);
	
	CHECK_EQUAL('f', *FileBuffer->Current++);
	CHECK_EQUAL('r', *FileBuffer->Current++);
	CHECK_EQUAL('e', *FileBuffer->Current++);
	CHECK_EQUAL('e', *FileBuffer->Current++);
	CHECK_EQUAL(' ', *FileBuffer->Current++);
	CHECK_EQUAL('f', *FileBuffer->Current++);
	CHECK_EQUAL('u', *FileBuffer->Current++);
	CHECK_EQUAL('n', *FileBuffer->Current++);
	CHECK_EQUAL('c', *FileBuffer->Current++);
	CHECK_EQUAL('t', *FileBuffer->Current++);
	CHECK_EQUAL('i', *FileBuffer->Current++);
	CHECK_EQUAL('o', *FileBuffer->Current++);
	CHECK_EQUAL(false, FileBuffer->HasReachedEnd());
	CHECK_EQUAL('n', *FileBuffer->Current++);
	CHECK(FileBuffer->HasReachedEnd());
	
	// here Current is already one past the end
	wxString str(FileBuffer->TokenStart, FileBuffer->Current - FileBuffer->TokenStart);
	CHECK_EQUAL(wxT("free function"), str);
	CHECK_EQUAL(0, *FileBuffer->Current);
}

TEST_FIXTURE(UCharBufferedFileTestFixtureClass, FileBufferShouldFillBufferWhenItEnds) {
	std::string fileName = "test_buffer.txt";
	std::string test = "<?php\r\n'"                      // 7
	"**************************************************" // 57
	"**************************************************" // 107
	"**************************************************" // 207
	"**************************************************" // 307
	"**************************************************" // 407
	"**************************************************" // 507
	"***\r\necho 'hello';";                              // byte 510 is \r
	CreateFixtureFile(fileName, test);
	std::string filePath = TestProjectDir + fileName;

	CHECK(FileBuffer->OpenFile(filePath.c_str(), wxConvUTF8, 512));
	for (int i = 0; i < 8; i++) {
		++FileBuffer->Current;
	}
	FileBuffer->MarkTokenStart();
	/*
	// 503 = 510 - 8
	for (int i = 0; i < 503; i++) {
		++FileBuffer->Current;
	}
	CHECK_EQUAL(2, FileBuffer->Limit - FileBuffer->Current);
	
	//the goal of this test is to setup the newline hitting the buffer boundary
	FileBuffer->AppendToLexeme(2);
	CHECK_EQUAL(true, (FileBuffer->Limit - FileBuffer->Current) > 1);
	CHECK_EQUAL('\r', *FileBuffer->Current++);
	CHECK_EQUAL('\n', *FileBuffer->Current++);
	FileBuffer->AppendToLexeme(2);
	CHECK_EQUAL('e', *FileBuffer->Current++);
	CHECK_EQUAL('c', *FileBuffer->Current++);
	FileBuffer->AppendToLexeme(2);
	CHECK_EQUAL('h', *FileBuffer->Current++);
	CHECK_EQUAL('o', *FileBuffer->Current++);
	 * */
}

}