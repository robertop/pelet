/**
 * Copyright 2009 Roberto Perpuly
 */
#ifndef __filetestfixtureclass__
#define __filetestfixtureclass__

#include <string>
#include <unicode/ustream.h> //get the << overloaded operator, needed by UnitTest++
#include <iostream>

/**
 * This test fixture is useful for testing classes that read from files.
 */
class FileTestFixtureClass {

public:

	FileTestFixtureClass();
	
	virtual ~FileTestFixtureClass();
		
	/**
	 * Creates a file in the current working directory. The file will have the given contents.
	 * 
	 * @param fileName the name of the file.  The  name should be a relative path,
	 *			with the current working directory as the root,
	 * @param contents the file contents.
	 */
	void CreateFixtureFile(const std::string& fileName, const std::string& contents);
		
	/**
	 * 
	 * @var string full path to the temp directory for this test
	 */
	std::string TestProjectDir; 
};

/**
 * Create a UnicodeString from a char*.  This function is useful when creating a string
 * that is broken up into multiple lines of code; like this:
 *
 *   // does not compile in MSW 
 *   // error C2308: concatenating mismatched strings
 *   UnicodeString str = UNICODE_STRING_SIMPLE("line 1\n"
 *    "line 2");
 *
 *   // works
 *   UnicodeString str = _U("line 1\n"
 *    "line 2");
 */
UnicodeString _U(const char* str);

#endif // __filetestfixtureclass__
