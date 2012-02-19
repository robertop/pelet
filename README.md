PHP Easy LanguagE Toolkit (pelet)
=================================

pelet is a PHP parser library written in C++.  This is library does not produce an
appplication,  it is meant to be integrated into programs that need to inspect PHP
source code (source code editors / IDEs targeting PHP). As an example, an editor may
use pelet to figure out the classes that were declared in a particular source code
file. pelet was born out of the [MVC Editor](http://code.google.com/p/mvc-editor) 
project.

The pelet project aims to conform to the PHP syntax to its fullest.  Currently, pelet
can parse source code written for PHP version 5.3 (closures, namespaces).

License
-------
pelet is licensed under the MIT license, meaning that it can be used for Open Source
and commercial applications. See LICENSE file for details.

Features
--------
These are the cases that pelet supports

- Parses classes
- Parses methods and properties, plus all of their modifiers (static, public, private, ...)
- Parses stand-alone functions.  
- Parsers define() function calls
- Can handle all PHP strings: single quoted, double quoted, heredoc, and nowdoc.
- Uses proper tokenizing techniques (it will ignore a "class" if it occurs inside of a comment or a string).
- Parses PHPDoc comments to assign types to class members and function parameters
- Can read type hints from a function / method signature
- Fully tested (see tests/ subdirectory in the distribution)

Requirements
-------------
- The library can be compiled and run on Windows and Linux. It will most likely be 
possible to compile and run this library can run on a MAC, however it has not been 
tested.
- ICU library is required (ver. 4.2+)

Optional: These are only needed if you want to make changes to the library (most
users will not need to do so):

- Bison
- re2c 

Building 
---------
pelet uses premake as its build system (premake is included in the repository). This enables 
users to create Makefiles or various IDE solutions (MS Visual Studio, CodeBlocks, CodeLite). 
Before attempting to build, please download the ICU 4.2 source from the 
[ICU] http://site.icu-project.org/) website and place it in pelet's lib subdirectory.

Using Make  (On  Linux)
------------------------

	git clone git@github.com:robertop/pelet.git /home/user/pelet
	cd /home/user/pelet
	cp /home/user/Downloads/icu4c-4_2_1-src.tgz lib/
	./premake4 icu
	./premake4 prep
	./premake4 gmake
	cd build/gmake
	make config=release

"./premake4 gmake" can be substituted for an IDE solution; ie "./premake4"

MSW instructions (Visual Studio Solution)
------------------------------------------
	git clone git@github.com:robertop/pelet.git C:\Users\user\pelet
	cd C:\Users\user\pelet
	copy C:\Users\user\Downloads\icu4c-4_2_1-src.tgz lib\
	<manually extract and compile the ICU library (Debug & Relase) using the VS solution that ICU 
	provides>
	premake4.exe prep
	premake4.exe vs2008

Now you can open the pelet solution file under build/vs2008 and build the solution.

Sample Usage
-------------
pelet is a simple library to use; you create a class that conforms to one or more
"observer" interfaces. Then you create a parser and give it the file you want to 
parse as well as the observers.  The parser will then call the observer methods
when it enounters an artifact.

	// create a class to "observe" for artifacts
	class SampleObserver : public pelet::ClassObserverClass {
		virtual void ClassFound(const UnicodeString& className, 
			const UnicodeString& signature, const UnicodeString& comment) {
			// your code to handle new classes goes here
		}
	};
	
	// ...
	// and in your main use it
	SampleObserver observer;
	pelet::ParserClass parser;
	parser.SetClassObserver(&observer);
	
	pelet::LintResultsClass results;
	const char *file = // ....;
	bool parsed = parser.ScanFile(file, results);
	if (parsed) {
		// no syntax errors
	}
	else {
		// file contained syntax errors
	}


See sample.cpp file for a full-fledged, running example.

TODO
-----
- Build environment: Allow options to use a pre-exisiting installation of the 
ICU library.
- PHP 5.4 support (array dereferencing, traits)
- Namespaces: While are captured by the parser, they are not visible to the caller.
