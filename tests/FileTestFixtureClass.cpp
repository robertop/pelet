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
#include <FileTestFixtureClass.h>
#include <fstream>
#include <unicode/ustring.h>

FileTestFixtureClass::FileTestFixtureClass()
	: TestProjectDir() {
}
	
FileTestFixtureClass::~FileTestFixtureClass() {
}

void FileTestFixtureClass::CreateFixtureFile(const std::string& fileName, const std::string& contents) {
	std::ofstream file;
	file.open(fileName.c_str(), std::ios::out | std::ios::binary | std::ios::trunc);

	file << contents;
	file.close();
}

UnicodeString _U(const char* source) {
	int charCount = strlen(source);
	UErrorCode status = U_ZERO_ERROR;
	UnicodeString uni;
	int actualCount = 0;
	
	// not sure if 5th param is meant to be in bytes or in chars... only time will tell	
	// need to account for the null character, hence the +1
	u_strFromUTF8(uni.getBuffer(charCount + 0), charCount + 0, &actualCount, source, charCount, &status);
	if (U_SUCCESS(status)) {
		uni.releaseBuffer(actualCount + 0);	
	}
	else {
		uni.releaseBuffer(0);
	}
	return uni;

}