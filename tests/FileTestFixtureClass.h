/**
 * Copyright 2009 Roberto Perpuly
 */
#ifndef __filetestfixtureclass__
#define __filetestfixtureclass__

#include <wx/string.h>
#include <unicode/ustream.h> //get the << overloaded operator, needed by UnitTest++
#include <iostream>

/**
 * overload the stream operator so that UnitTest++ shows legible error messages when asserts fail. For now, s
 * is assumed to contain only ASCII characters.
 */
std::ostream& operator<<(std::ostream& out, const wxString& s);

/**
 * overload the stream operator so that UnitTest++ shows legible error messages when asserts fail. For now, s
 * is assumed to contain only ASCII characters.
 */
std::ostream& operator<<(std::ostream& out, const wxChar* s);

/**
 * This test fixture is useful for testing classes that read from files.
 */
class FileTestFixtureClass {

public:

	/**
	 * Construct a new test fixture that will use subdirectory tempDirectory within the OS temp  
	 * @param wxString tempDirectory directory where files will be created.
	 */
	FileTestFixtureClass(const wxString& tempDirectory);
	
	virtual ~FileTestFixtureClass();
	
	void RecursiveRmDir(wxString path);
	
	/**
	 * Creates a file in the temp directory. The file will have the given contents.
	 * 
	 * @param wxString fileName the name of the file.  The  name should be a relative path,
	 *			with tempDirectory (as given in the constructor) as root.
	 * @param wxString contents the file contents.
	 */
	void CreateFixtureFile(const wxString& fileName, const wxString& contents);
	
	/**
	 * Create a sub-directory within tempDirectory
	 * 
	 * @param wxString subDirectory valid directory name
	 */
	void CreateSubDirectory(const wxString& subDirectory);
	
	/**
	 * Reads the file into a string and returns the string.
	 */
	wxString GetFileContents(const wxString& fileName);
	
	/**
	 * 
	 * @var wxString full path to the temp directory for this test
	 */
	wxString TestProjectDir; 
};

#endif // __filetestfixtureclass__
