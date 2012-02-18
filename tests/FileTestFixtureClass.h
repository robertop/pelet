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

#endif // __filetestfixtureclass__
