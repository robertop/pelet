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

class SymbolTableTestClass : public FileTestFixtureClass {
public:	
	SymbolTableTestClass()
	 : FileTestFixtureClass(wxT("symbol_table")) 
	 , Symbol() 
	, Expression() {
		SymbolTable = new mvceditor::SymbolTableClass();
		if (wxDirExists(TestProjectDir)) {
			RecursiveRmDir(TestProjectDir);
		}
	}
	
	virtual ~SymbolTableTestClass() {
		delete SymbolTable;
	}
	
	/**
	 *  In order to simulate actual usage of the SymbolTableClass as closely as possible, we need to
	 *  test the PrepareFromPosition method. In order to improve the readability of these tests, we will
	 *  use this method to calculate positions instead of harcoding them.  This will allow easy testing of
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
	 * The above test fixture simulates that the user wrote the code and the cursor is positioned inside he setName method.
	 */
	UnicodeString FindCursor(const UnicodeString& code, int& cursorPosition) {
		cursorPosition = code.indexOf(CURSOR);
		UnicodeString codeWithoutCursor(code);
		codeWithoutCursor.findAndReplace(CURSOR, UNICODE_STRING_SIMPLE(""));
		return codeWithoutCursor;
	}

	mvceditor::SymbolTableClass* SymbolTable;
	mvceditor::SymbolClass Symbol;
	UnicodeString Expression;
};

SUITE(SymbolTableTestClass) {

TEST_FIXTURE(SymbolTableTestClass, GetVariablesInScopeShouldOnlyReturnVariablesInScope) {
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
	int pos;
	sourceCode = FindCursor(sourceCode, pos);
	SymbolTable->CreateSymbols(sourceCode);
	std::vector<UnicodeString> variables = SymbolTable->GetVariablesInScope(pos);
	
	// take the predefined variables into account
	// locals: $anotherName, $someName, $this
	CHECK_EQUAL(PREDEFINED_VARIABLE_COUNT + 3, variables.size());
	if ((PREDEFINED_VARIABLE_COUNT + 3) == variables.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$this"), variables[PREDEFINED_VARIABLE_COUNT]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$anotherName"), variables[PREDEFINED_VARIABLE_COUNT + 1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$someName"), variables[PREDEFINED_VARIABLE_COUNT + 2]);
	}
}

TEST_FIXTURE(SymbolTableTestClass, GetVariablesInScopeShouldOnlyReturnVariablesInScopeForFunctions) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"$globalVar = 34; \n"
		"function setName($anotherName, $defaultName = 'Guest') {\n"
		"\t$someName = '';\n"
		"\t{CURSOR}"
		"}\n"
		"?>\n"
	);
	int pos;
	sourceCode = FindCursor(sourceCode, pos);
	SymbolTable->CreateSymbols(sourceCode);
	std::vector<UnicodeString> variables = SymbolTable->GetVariablesInScope(pos);

	// take the predefined varaibles into account
	CHECK_EQUAL(PREDEFINED_VARIABLE_COUNT + 3, variables.size());
	if ((PREDEFINED_VARIABLE_COUNT + 3) == variables.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$anotherName"), variables[PREDEFINED_VARIABLE_COUNT]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$defaultName"), variables[PREDEFINED_VARIABLE_COUNT + 1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$someName"), variables[PREDEFINED_VARIABLE_COUNT + 2]);
	}
}

TEST_FIXTURE(SymbolTableTestClass, GetVariablesInScopeShouldHandleTypeHinting) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"function printUser(User $user) {\n"
		"\t$someName = '';\n"
		"\t{CURSOR}"
		"}\n"
		"?>\n"
	);
	int pos;
	sourceCode = FindCursor(sourceCode, pos);
	SymbolTable->CreateSymbols(sourceCode);
	std::vector<UnicodeString> variables = SymbolTable->GetVariablesInScope(pos);
	// take the predefined variables into account
	CHECK_EQUAL(PREDEFINED_VARIABLE_COUNT + 2, variables.size());
	if ((PREDEFINED_VARIABLE_COUNT + 2) == variables.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$user"), variables[PREDEFINED_VARIABLE_COUNT]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$someName"), variables[PREDEFINED_VARIABLE_COUNT + 1]);
	}
}

TEST_FIXTURE(SymbolTableTestClass, GetVariablesInScopeShouldHandleMultipleBlocks) {
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
	int pos;
	sourceCode = FindCursor(sourceCode, pos);
	SymbolTable->CreateSymbols(sourceCode);
	std::vector<UnicodeString> variables = SymbolTable->GetVariablesInScope(pos);

	// take the predefined variables into account
	CHECK_EQUAL(PREDEFINED_VARIABLE_COUNT + 2, variables.size());
	if ((PREDEFINED_VARIABLE_COUNT + 2) == variables.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$globalOne"), variables[PREDEFINED_VARIABLE_COUNT]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$globalTwo"), variables[PREDEFINED_VARIABLE_COUNT + 1]);
	}
}

}