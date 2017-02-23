PHP Easy LanguagE Toolkit (pelet)
=================================

pelet is a PHP parser library written in C++.  This is library does not produce an
appplication,  it is meant to be integrated into programs that need to inspect PHP
source code (source code editors / IDEs targeting PHP). As an example, an editor may
use pelet to figure out the classes that were declared in a particular source code
file. pelet was born out of the [Triumph 4 PHP](http://triumph4php.com) 
project.

The pelet project aims to conform to the PHP syntax to its fullest.  Currently, pelet
can parse source code written for PHP version 5.4 (closures, namespaces, traits, simple arrays).

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
- Parses PHPDoc comments to assign types to class members, function parameters and return values.
- Can read type hints from a function / method signature
- Reads namespaces and aliases, can handle qualified, fully qualified, and not qualified namespaces
- Full PHP 5.4 support; traits, trait aliasing, array dereferencing, and short array syntax.
- Full PHP 5.5 support; yield and finally keywords, string and array dereferencing.
- Full PHP 5.6 support; constant expressions, variadic parameters, argument unpacking, exponent operator, function
  and constant importing and aliasing.
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

pelet comes with a working example solution "skeleton" that shows how
you can integrate it into your projects.  The skeleton uses premake as its build system (premake is 
included in the repository). This enables users to create Makefiles or various IDE solutions (MS 
Visual Studio, CodeBlocks, CodeLite). Before attempting to build, please download the ICU 4.2 
source from the [ICU] (http://site.icu-project.org/) website and build it.

Using Make (On  Linux)
------------------------
	(build the ICU library as normal, many linux distros have it in their package manager)
	git clone git@github.com:robertop/pelet.git /home/user/pelet
	cd /home/user/pelet
	./premake4 --icu-config="/path/to/icu-config" gmake
	cd build/gmake
	make config=release

"./premake4 gmake" can be substituted for an IDE solution; ie 
"./premake4 --icu-config="/path/to/icu-config codelite". After these steps
the resulting shared library will be created in Release/pelet.so. The library can then be imported
into any C++ project by adding the include directory (-Iinclude) to the include path and adding the 
library file as a library (-lpelet). 

Also note that if you installed ICU in a non-standard place you will need to add the ICU library subdirectory
to the LD_LIBRARY_PATH environment variable as well. You will need to do this BEFORE compiling
pelet, as the compilation has a post-build action to run a test suite (and the test suite requires
the ICU library).

MSW instructions (Visual Studio Solution)
------------------------------------------
    (build the ICU library as normal before attempting these steps using the VS solution that ICU 
	provides)
	git clone git@github.com:robertop/pelet.git C:\Users\user\pelet
	cd C:\Users\user\pelet	
	./premake4 --icu-include="C:\path\to\icu\headers" --icu-lib="C:\path\to\icu\libs" vs2008

Now you can open the pelet solution file under build/vs2008 and build the solution. After these
steps, the resulting shared library will be created in Release/pelet.dll. The library can then be imported
into any C++ project by using the include directory (include) to the include path and adding the 
library file as a library (pelet.dll)

Also note that if you installed ICU in a non-standard place you will need to copy the ICU DLLs (icu*.dll) into the 
same directory as the sample program (the Debug/ and Release/ directories). You will need to do this 
BEFORE compiling pelet, as the compilation has a post-build action to run a test suite (and the test 
suite requires the ICU library).

Using Make (On  Mac OS X)
------------------------
	(build the ICU library as normal,can also use homebrew to install it)
	git clone git@github.com:robertop/pelet.git /home/user/pelet
	cd /home/user/pelet
	./premake4-macosx --icu-config="/path/to/icu-config" gmake
	cd build/gmake
	make config=release

"./premake4 gmake" can be substituted for an IDE solution; ie 
"./premake4 --icu-config="/path/to/icu-config codelite". After these steps
the resulting shared library will be created in Release/pelet.so. The library can then be imported
into any C++ project by adding the include directory (-Iinclude) to the include path and adding the 
library file as a library (-lpelet). You will probably need to change the install name and / or
the install path. Use the otool tool.


Sample Usage
-------------
pelet is a simple library to use; you create a class that conforms to one or more
"observer" interfaces. Then you create a parser and give it the file you want to 
parse as well as the observers.  The parser will then call the observer methods
when it enounters an artifact.

	// create a class to "observe" for artifacts
	class SampleObserver : public pelet::ClassObserverClass {
		virtual void ClassFound(const UnicodeString& nameSpace, const UnicodeString& className, 
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

Help
-----
I gave pelet its name for a reason; this is a simple library.  The source is fairly well documented and 
the included sample program covers 90% of the functionality. If you are having problems getting the library
up and running, you can browse the [docs online] http://robertop.github.com/pelet/ .
Here you will find API docs, as well as some higher-level docs explaining the implementation details.
You can contact also the me directly; see my Github [profile page] (https://github.com/robertop) or E-mail me
at roberto@triumph4php.com. If I find that I cannot handle the volume of requests I may setup a forum or mailing list.

To report bugs or feature requests please use the [Issues] (https://github.com/robertop/pelet/issues)
page of the pelet Github project. 

Contributing
-------------
Contributions will be taken in form of Github pull requests. Before creating a pull request, please 
verify that your changes do not break the standards outlined in the CODING_STANDARDS file.
