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
 */
#include <language/SymbolTableClass.h>
#include <windows/StringHelperClass.h>
#include <FileTestFixtureClass.h>
#include <UnitTest++.h>

UnicodeString CURSOR = UNICODE_STRING_SIMPLE("{CURSOR}");

// The variables that are available in all scopes
// $GLOBALS, $_SERVER, $_GET, $_POST, $_FILES,
// $_REQUEST, $_SESSION, $_ENV, $_COOKIE, $php_errormsg,
// $HTTP_RAW_POST_DATA, $http_response_header, $argc, $argv
static size_t PREDEFINED_VARIABLE_COUNT = 14;

/**
 *  In order to simulate actual usage of the SymbolTableClass as closely as possible, we need to
 *  test use character positions as required by the symbol table. In order to improve the readability of these tests, we will
 *  use this function to calculate positions instead of harcoding them.  This will allow easy testing of
 *  various positions. When writing test fixture, we can do the following:
 * 
 * <code>
 *    UnicodeString code = UNICODE_STRING_SIMPLE("
 * 	  class User { 
 *       private $name;
 *       
 *      function setName($name) {
 *        $this->na{CURSOR}
 *    ");
 * </code>
 * 
 * This function  will calculate the position of {CURSOR} and also remove it from the code
 */
UnicodeString FindCursor(const UnicodeString& code, int32_t& cursorPosition) {
	cursorPosition = code.indexOf(CURSOR);
	UnicodeString codeWithoutCursor(code);
	codeWithoutCursor.findAndReplace(CURSOR, UNICODE_STRING_SIMPLE(""));
	return codeWithoutCursor;
}

class SymbolTableTestClass : public FileTestFixtureClass {
public:	
	SymbolTableTestClass()
	 : FileTestFixtureClass(wxT("symbol_table")) 
	 , SymbolTable()
	 , ParsedExpression()  {
		if (wxDirExists(TestProjectDir)) {
			RecursiveRmDir(TestProjectDir);
		}
	}

	mvceditor::SymbolTableClass SymbolTable;
	mvceditor::SymbolClass ParsedExpression;
};

class SymbolTableCompletionTestClass {

public:

	mvceditor::SymbolTableClass CompletionSymbolTable;
	mvceditor::SymbolClass ParsedExpression;
	std::map<wxString, mvceditor::ResourceFinderClass*> OpenedFinders;
	mvceditor::ResourceFinderClass Finder1;
	mvceditor::ResourceFinderClass GlobalFinder;
	std::vector<UnicodeString> Matches;

	SymbolTableCompletionTestClass()
		: CompletionSymbolTable()
		, ParsedExpression()
		, OpenedFinders()
		, Finder1()
		, GlobalFinder()
		, Matches() {

	}

	void Init(const UnicodeString& sourceCode) {
		Finder1.BuildResourceCacheForFile(wxT("untitled"), sourceCode, true);
		OpenedFinders[wxT("untitled")] = &Finder1;
		CompletionSymbolTable.CreateSymbols(sourceCode);
	}

	void ToFunction(const UnicodeString& functionName) {
		ParsedExpression.Lexeme = functionName;
		ParsedExpression.ChainList.push_back(functionName);
	}

	void ToVariable(const UnicodeString& variableName) {

		// same as function make, but it makes tests easier to read
		ParsedExpression.Lexeme = variableName;
		ParsedExpression.ChainList.push_back(variableName);
	}

	void ToMethod(const UnicodeString& variableName, const UnicodeString& methodName, bool isStatic) {

		// same as function make, but it makes tests easier to read
		ParsedExpression.Lexeme = variableName;
		ParsedExpression.ChainList.push_back(variableName);
		UnicodeString operatorString = isStatic ? UNICODE_STRING_SIMPLE("::") : UNICODE_STRING_SIMPLE("->");
		ParsedExpression.ChainList.push_back(operatorString + methodName);
	}
};

class ScopeFinderTestClass {

public:

	mvceditor::ScopeFinderClass ScopeFinder;

	ScopeFinderTestClass() 
		: ScopeFinder() {
	}
};

SUITE(SymbolTableTestClass) {

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithFunctionName) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"function work() {}\n"
	);
	Init(sourceCode);	
	ToFunction(UNICODE_STRING_SIMPLE("wo"));
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK(!Matches.empty());
	if (!Matches.empty()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("work"), Matches[0]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithVariableName) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$globalOne = 1;\n"
		"$globalTwo = 2;\n"
	);
	Init(sourceCode);	
	ToVariable(UNICODE_STRING_SIMPLE("$global"));
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)2, Matches.size());
	if ((size_t)2 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$globalOne"), Matches[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$globalTwo"), Matches[1]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithLocalVariableOnly) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$globalOne = 1;\n"
		" function work() { $globalTwo = 2; } \n"
	);
	Init(sourceCode);	
	ToVariable(UNICODE_STRING_SIMPLE("$global"));
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)1, Matches.size());
	if ((size_t)1 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$globalOne"), Matches[0]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, ManyVariableAssignments) {

	// completion matches should never return duplicates
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$globalOne = 1;\n"
		" function work() { $globalTwo = 2; } \n"
		"$globalOne = 2;\n"
	);
	Init(sourceCode);	
	ToVariable(UNICODE_STRING_SIMPLE("$global"));
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)1, Matches.size());
	if ((size_t)1 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$globalOne"), Matches[0]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithPredefinedVariable) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$globalOne = 1;\n"
		" function work() {  } \n"
	);
	Init(sourceCode);	
	ToVariable(UNICODE_STRING_SIMPLE("$_POS"));
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::work"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)1, Matches.size());
	if ((size_t)1 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$_POST"), Matches[0]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithMethodCall) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"class MyClass { function workA() {} function workB() {} } \n"
		"$my = new MyClass;\n"
	);
	Init(sourceCode);	
	ToMethod(UNICODE_STRING_SIMPLE("$my"), UNICODE_STRING_SIMPLE("work"), false);
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)2, Matches.size());
	if ((size_t)2 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("workA"), Matches[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("workB"), Matches[1]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithMethodCallFromGlobalFinder) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$my = new MyClass;\n"
	);
	UnicodeString sourceCodeGlobal = mvceditor::StringHelperClass::charToIcu(
		"<?php class MyClass { function workA() {} function workB() {} } \n"	
	);
	Init(sourceCode);
	GlobalFinder.BuildResourceCacheForFile(wxT("MyClass.php"), sourceCodeGlobal, true);
	ToMethod(UNICODE_STRING_SIMPLE("$my"), UNICODE_STRING_SIMPLE("work"), false);
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)2, Matches.size());
	if ((size_t)2 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("workA"), Matches[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("workB"), Matches[1]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithLocalFinderOverridesGlobalFinder) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$my = new MyClass;\n"
	);

	// in this test, simulate method workA() being deleted; it should not show
	// as a match
	UnicodeString sourceCodeGlobal = mvceditor::StringHelperClass::charToIcu(
		"<?php class MyClass { function workA() {} function workB() {} } \n"	
	);
	UnicodeString sourceCodeOpened = mvceditor::StringHelperClass::charToIcu(
		"<?php class MyClass { function workB() {} } \n"	
	);
	Init(sourceCode);
	GlobalFinder.BuildResourceCacheForFile(wxT("MyClass.php"), sourceCodeGlobal, true);
	mvceditor::ResourceFinderClass localFinder;
	localFinder.BuildResourceCacheForFile(wxT("MyClass.php"), sourceCodeOpened, true);
	OpenedFinders[wxT("MyClass.php")] = &localFinder;

	GlobalFinder.BuildResourceCacheForFile(wxT("MyClass.php"), sourceCodeGlobal, true);
	ToMethod(UNICODE_STRING_SIMPLE("$my"), UNICODE_STRING_SIMPLE("work"), false);
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)1, Matches.size());
	if ((size_t)1 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("workB"), Matches[0]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithObjectWithoutMethodCall) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"class MyClass { function workA() {} function workB() {} } \n"
		"$my = new MyClass;\n"
	);
	Init(sourceCode);	
	ToMethod(UNICODE_STRING_SIMPLE("$my"), UNICODE_STRING_SIMPLE(""), false);
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)2, Matches.size());
	if ((size_t)2 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("workA"), Matches[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("workB"), Matches[1]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithStaticMethodCall) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"class MyClass { function workA() {} static function workB() {} } \n"
	);
	int32_t pos;
	sourceCode = FindCursor(sourceCode, pos);
	Init(sourceCode);	
	ToMethod(UNICODE_STRING_SIMPLE("MyClass"), UNICODE_STRING_SIMPLE("work"), true);
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)1, Matches.size());
	if ((size_t)1 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("workB"), Matches[0]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithPrivateMethodCall) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"class MyClass { function workA() {} private function workB() {} } \n"
		"$my = new MyClass;\n"
	);
	Init(sourceCode);	
	ToMethod(UNICODE_STRING_SIMPLE("$my"), UNICODE_STRING_SIMPLE("work"), false);
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)1, Matches.size());
	if ((size_t)1 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("workA"), Matches[0]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithMethodChain) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"class MyClass { /** @return OtherClass */ function workA() {} } \n"
		"class OtherClass { var $time; function toString() {} }\n"
		"$my = new MyClass;\n"
	);
	Init(sourceCode);	
	ToMethod(UNICODE_STRING_SIMPLE("$my"), UNICODE_STRING_SIMPLE("workA()"), false);
	ParsedExpression.ChainList.push_back(UNICODE_STRING_SIMPLE("->ti"));
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)1, Matches.size());
	if ((size_t)1 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("time"), Matches[0]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithLongPropertyChain) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"class MyClass { /** @return OtherClass */ function workA() {} } \n"
		"class OtherClass { /** @var OtherClass */ var $parent; function toString() {} }\n"
		"$my = new MyClass;\n"
	);
	int32_t pos;
	sourceCode = FindCursor(sourceCode, pos);
	Init(sourceCode);	
	ToMethod(UNICODE_STRING_SIMPLE("$my"), UNICODE_STRING_SIMPLE("workA()"), false);
	ParsedExpression.ChainList.push_back(UNICODE_STRING_SIMPLE("->parent"));
	ParsedExpression.ChainList.push_back(UNICODE_STRING_SIMPLE("->pare"));
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)1, Matches.size());
	if ((size_t)1 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("parent"), Matches[0]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithLongMethodChain) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"class MyClass { /** @return OtherClass */ function workA() {} } \n"
		"class OtherClass { /** @return OtherClass */ function parent() {} }\n"
		"$my = new MyClass;\n"
	);
	Init(sourceCode);	
	ToMethod(UNICODE_STRING_SIMPLE("$my"), UNICODE_STRING_SIMPLE("workA()"), false);
	ParsedExpression.ChainList.push_back(UNICODE_STRING_SIMPLE("->parent()"));
	ParsedExpression.ChainList.push_back(UNICODE_STRING_SIMPLE("->parent()"));
	ParsedExpression.ChainList.push_back(UNICODE_STRING_SIMPLE("->p"));
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)1, Matches.size());
	if ((size_t)1 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("parent"), Matches[0]);
	}
}


TEST_FIXTURE(SymbolTableCompletionTestClass, MatchesWithFunctionChain) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"/** @return OtherClass */ function workA() {} \n"
		"class FirstClass { /** @return OtherClass */ function status() {} } \n"
		"class OtherClass { var $time;  /** @return FirstClass */ function toString() {} }\n"
		"$my = new MyClass;\n"
	);
	int32_t pos;
	sourceCode = FindCursor(sourceCode, pos);
	Init(sourceCode);	
	ToFunction(UNICODE_STRING_SIMPLE("workA()"));
	ParsedExpression.ChainList.push_back(UNICODE_STRING_SIMPLE("->toString()"));
	ParsedExpression.ChainList.push_back(UNICODE_STRING_SIMPLE("->stat"));
	CompletionSymbolTable.ExpressionCompletionMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, Matches);
	CHECK_EQUAL((size_t)1, Matches.size());
	if ((size_t)1 == Matches.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("status"), Matches[0]);
	}
}

TEST_FIXTURE(SymbolTableCompletionTestClass, ResourceMatchesWithMethodCall) {

	// only doing light testing on ResourceMatches because the Matches* tests
	// cover it already
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"class MyClass { function workA() {} function workB() {} } \n"
		"$my = new MyClass;\n"
	);
	int32_t pos;
	sourceCode = FindCursor(sourceCode, pos);
	Init(sourceCode);	
	ToMethod(UNICODE_STRING_SIMPLE("$my"), UNICODE_STRING_SIMPLE("work"), false);
	std::vector<mvceditor::ResourceClass> resources;
	CompletionSymbolTable.ResourceMatches(ParsedExpression, UNICODE_STRING_SIMPLE("::"), OpenedFinders, &GlobalFinder, resources);
	CHECK_EQUAL((size_t)2, resources.size());
	if ((size_t)2 == resources.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass::workA"), resources[0].Resource);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass::workB"), resources[1].Resource);
	}
}

TEST_FIXTURE(ScopeFinderTestClass, GetScopeStringShouldFindMethodScope) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$globalVar = 34; \n"
		"/** This is the user class */\n"
		"class UserClass {\n"
		"\t/** @var string */\n"
		"\tprivate $name;\n"
		"\t/** @var string */\n"
		"\tprivate $address;\n"
		"\t/** @return string */\n"
		"\tfunction getName() {\n"
		"\t\t$unknownName = 'unknown';\n"
		"\t\treturn $this->name;\n"
		"\t}\n"
		"\t/** @return void */\n"
		"\tprivate function setName($anotherName) {\n"
		"\t\t$someName = '';\n"
		"\t\t{CURSOR}"
		"\t}\n"
		"}\n"
		"?>\n"
	);
	int32_t pos;
	sourceCode = FindCursor(sourceCode, pos);
	UnicodeString scope = ScopeFinder.GetScopeString(sourceCode, pos);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass::setName"), scope);
}

TEST_FIXTURE(ScopeFinderTestClass, GetScopeStringShouldFindFunctionScope) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$globalVar = 34; \n"
		"function setName($anotherName, $defaultName = 'Guest') {\n"
		"\t$someName = '';\n"
		"\t{CURSOR}"
		"}\n"
		"?>\n"
	);
	int32_t pos;
	sourceCode = FindCursor(sourceCode, pos);
	UnicodeString scope = ScopeFinder.GetScopeString(sourceCode, pos);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("::setName"), scope);
}

TEST_FIXTURE(ScopeFinderTestClass, GetScopeStringShouldHandleTypeHinting) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"function printUser(User $user) {\n"
		"\t$someName = '';\n"
		"\t{CURSOR}"
		"}\n"
		"?>\n"
	);
	int32_t pos;
	sourceCode = FindCursor(sourceCode, pos);
	UnicodeString scope = ScopeFinder.GetScopeString(sourceCode, pos);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("::printUser"), scope);
}

TEST_FIXTURE(ScopeFinderTestClass, GetScopeStringShouldHandleMultipleBlocks) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$globalOne = 1;\n"
		"function printUser(User $user) {\n"
		"\t$someName = '';\n"
		"}\n"
		"?>\n"
		"<html><body><?php echo $globalOne; ?></body></html>\n"
		"<?php\n"
		"$globalTwo = 2;\n"
		"{CURSOR}"
	);
	int32_t pos;
	sourceCode = FindCursor(sourceCode, pos);
	UnicodeString scope = ScopeFinder.GetScopeString(sourceCode, pos);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("::"), scope);
}

TEST_FIXTURE(ScopeFinderTestClass, GetScopeStringShouldHandleUnfinishedBlock) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$globalOne = 1;\n"
		"function printUser(User $user) {\n"
		"\t$someName = '';\n"
		"{CURSOR}"
	);
	int32_t pos;
	sourceCode = FindCursor(sourceCode, pos);
	UnicodeString scope = ScopeFinder.GetScopeString(sourceCode, pos);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("::printUser"), scope);
}

TEST_FIXTURE(ScopeFinderTestClass, GetScopeStringShouldHandleUnfinishedClassMethod) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$globalOne = 1;\n"
		"class MyClass {\n"
		"function printUser(User $user) {\n"
		"\t$someName = '';\n"
		"{CURSOR}"
	);
	int32_t pos;
	sourceCode = FindCursor(sourceCode, pos);
	UnicodeString scope = ScopeFinder.GetScopeString(sourceCode, pos);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass::printUser"), scope);
}

}