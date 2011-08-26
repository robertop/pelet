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
 * @date       $Date: 2011-07-04 12:25:36 -0700 (Mon, 04 Jul 2011) $
 * @version    $Rev: 568 $ 
 */
#include <FileTestFixtureClass.h>
#include <wx/dir.h>
#include <wx/filename.h>
#include <wx/utils.h>
#include <fstream>


FileTestFixtureClass::FileTestFixtureClass(const wxString& tempTestDirectory) {
	wxString tempDir = wxFileName::GetTempDir();
	wxFileName fileName(tempDir);
	fileName.Normalize();
	TestProjectDir = fileName.GetFullPath() + wxFileName::GetPathSeparator() + tempTestDirectory + wxFileName::GetPathSeparator();
	if (wxFileName::DirExists(TestProjectDir)) {
		RecursiveRmDir(TestProjectDir);
	}	
}
	
FileTestFixtureClass::~FileTestFixtureClass() {
}
	
void FileTestFixtureClass::RecursiveRmDir(wxString path) {
	wxDir dir(path);
	wxString filename;
	bool next = dir.GetFirst(&filename, wxEmptyString, wxDIR_FILES | wxDIR_DIRS | wxDIR_HIDDEN);
	while (next) {
		
		// wxRmDir does not handle symlinks
		if (wxT("sfPropelPlugin") == filename) {
			wxExecute(wxT("rm ") + path + wxT("sfPropelPlugin"));
		}
		else if (wxT("sfProtoculousPlugin") == filename) {
			wxExecute(wxT("rm ") + path + wxT("sfProtoculousPlugin"));
		}
		else if (wxDirExists(path + filename)) {
			RecursiveRmDir(path + filename + wxFileName::GetPathSeparator());
			wxString fullPath = path + filename;
			wxRmDir(fullPath.fn_str());
		}
		else {
			wxRemoveFile(path +filename);
		}
		next = dir.GetNext(&filename);
	}
}

void FileTestFixtureClass::CreateFixtureFile(const wxString& fileName, const wxString& contents) {
	if (!wxDirExists(TestProjectDir)) {
		wxMkdir(TestProjectDir, 0777);
	}
	wxString fileToWrite = TestProjectDir + fileName;
	std::ofstream file;
	file.open(fileToWrite.fn_str(), std::ios::out | std::ios::binary | std::ios::trunc);
	wxASSERT(file.good());
	
	// horrible code: must find a way to write many bytes at once
	for (unsigned int i = 0; i < contents.Length(); ++i) {
		file.put((int)contents[i]);
	}
	file.close();
}

wxString FileTestFixtureClass::GetFileContents(const wxString& fileName) {
	wxString fileToRead = TestProjectDir + fileName;
	std::ifstream file;
	file.open(fileToRead.fn_str(), std::ios::in | std::ios::binary);
	wxASSERT(file.good());
	file.seekg(0, std::ios_base::end);
	int filesize = file.tellg();
	file.seekg(0, std::ios_base::beg);
	char* buf = new char[filesize];
	file.read(buf, filesize);
	file.close();
	wxString fileContents(buf, wxConvUTF8,filesize);
	delete[] buf;
	return fileContents;
}

void FileTestFixtureClass::CreateSubDirectory(const wxString& subDirectory) {
	if (!wxDirExists(TestProjectDir)) {
		wxMkdir(TestProjectDir, 0777);
	}
	wxString fullPath = TestProjectDir + subDirectory;
	if (!wxDirExists(fullPath)) {
		wxMkdir(fullPath, 0777);
	}
}

std::ostream& operator<<(std::ostream& out, const wxString& s) {
	out << s.ToAscii();
	return out;	
}

std::ostream& operator<<(std::ostream& out, const wxChar* s) {
	wxString str(s);
	out << str.ToAscii();
	return out;	
}
