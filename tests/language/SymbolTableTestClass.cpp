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
 * @date       $Date: 2011-08-07 11:24:39 -0700 (Sun, 07 Aug 2011) $
 * @version    $Rev: 586 $ 
 */
#include <search/ResourceFinderClass.h>
#include <language/SymbolTableClass.h>
#include <windows/StringHelperClass.h>
#include <FileTestFixtureClass.h>
#include <UnitTest++.h>

UnicodeString CURSOR = UNICODE_STRING_SIMPLE("{CURSOR}");

static int PREDEFINED_VARIABLE_COUNT = 14;

class SymbolTableTestClass : public FileTestFixtureClass {
public:	
	SymbolTableTestClass()
	 : FileTestFixtureClass(wxT("symbol_table")) {
		SymbolTable = new mvceditor::SymbolTableClass();
		ResourceFinder = new mvceditor::ResourceFinderClass();
		if (wxDirExists(TestProjectDir)) {
			RecursiveRmDir(TestProjectDir);
		}
	}
	
	virtual ~SymbolTableTestClass() {
		delete SymbolTable;
		delete ResourceFinder;
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
	mvceditor::ResourceFinderClass* ResourceFinder;
};

SUITE(SymbolTableTestClass) {

TEST_FIXTURE(SymbolTableTestClass, LookupShouldGetClassNameForThisKeyword) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
	
		"<?php\n"
		"/** This is the user class */\n"
		"class UserClass {\n"
		"\t/** @var string */\n"
		"\tprivate $name;\n"
		"\t/** @var string */\n"
		"\tprivate $address;\n"
		"\t/** @return string */\n"
		"\tfunction getName() {\n"
		"\t\treturn $this->name;\n"
		"\t}\n"
		"\t/** @return void */\n"
		"\tprivate function clearName() {\n"
		"\t\t$this->{CURSOR}\n"
		"\t}\n"
		"}\n"
		"?>\n"
	);
	int pos;
	sourceCode = FindCursor(sourceCode, pos);
	SymbolTable->CreateSymbols(sourceCode);
	mvceditor::SymbolClass::Types type = mvceditor::SymbolClass::PRIMITIVE;
	UnicodeString typeLexeme, 
		objectMember, 
		comment;	
	CHECK(SymbolTable->Lookup(pos, *ResourceFinder, type, typeLexeme, objectMember, comment));
	CHECK_EQUAL(mvceditor::SymbolClass::OBJECT, type);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), typeLexeme);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), objectMember);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("/** This is the user class */"), comment);
}

TEST_FIXTURE(SymbolTableTestClass, LookupShouldGetClassNameAndMemberForThisKeyword) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"/** This is the user class */\n"
		"class UserClass {\n"
		"\t/** @var string */\n"
		"\tprivate $name;\n"
		"\t/** @var string */\n"
		"\tprivate $address;\n"
		"\t/** @return string */\n"
		"\tfunction getName() {\n"
		"\t\treturn $this->name;\n"
		"\t}\n"
		"\t/** @return void */\n"
		"\tprivate function clearName() {\n"
		"\t\t$this->name{CURSOR}\n"
		"\t}\n"
		"}\n"
		"?>\n"
	);
	int pos;
	sourceCode = FindCursor(sourceCode, pos);
	SymbolTable->CreateSymbols(sourceCode);
	mvceditor::SymbolClass::Types type = mvceditor::SymbolClass::PRIMITIVE;
	UnicodeString typeLexeme, 
		objectMember, 
		comment;	
	CHECK(SymbolTable->Lookup(pos, *ResourceFinder, type, typeLexeme, objectMember, comment));
	CHECK_EQUAL(mvceditor::SymbolClass::PROPERTY, type);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), typeLexeme);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("name"), objectMember);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("/** @var string */"), comment);
}

TEST_FIXTURE(SymbolTableTestClass, LookupShouldGetClassNameAndMemberForLocalVariable) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"/** This is the user class */\n"
		"class UserClass {\n"
		"\t/** @var string */\n"
		"\tprivate $name;\n"
		"\t/** @var string */\n"
		"\tprivate $address;\n"
		"\t/** @return string */\n"
		"\tfunction getName() {\n"
		"\t\treturn $this->name;\n"
		"\t}\n"
		"\t/** @return void */\n"
		"\tprivate function copy($anotherUser) {\n"
		"\t\t$user = new UserClass();\n"
		"\t\t$user->{CURSOR}\n"
		"\t}\n"
		"}\n"
		"?>\n"
	);
	int pos;
	sourceCode = FindCursor(sourceCode, pos);
	SymbolTable->CreateSymbols(sourceCode);
	mvceditor::SymbolClass::Types type = mvceditor::SymbolClass::PRIMITIVE;
	UnicodeString typeLexeme, 
		objectMember, 
		comment;
	CHECK(SymbolTable->Lookup(pos, *ResourceFinder, type, typeLexeme, objectMember, comment));
	CHECK_EQUAL(mvceditor::SymbolClass::OBJECT, type);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), typeLexeme);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), objectMember);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("/** This is the user class */"), comment);
}

TEST_FIXTURE(SymbolTableTestClass, LookupShouldGetObjectNameAndMemberForLocalVariable) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"/** This is the user class */\n"
		"class UserClass {\n"
		"\t/** @var string */\n"
		"\tprivate $name;\n"
		"\t/** @var string */\n"
		"\tprivate $address;\n"
		"\t/** @return string */\n"
		"\tfunction getName() {\n"
		"\t\treturn $this->name;\n"
		"\t}\n"
		"\t/** @return void */\n"
		"\tprivate function copy($anotherUser) {\n"
		"\t\t$user = new UserClass();\n"
		"\t\t$user->getName{CURSOR}\n"
		"\t}\n"
		"}\n"
		"?>\n"
	);
	int pos;
	sourceCode = FindCursor(sourceCode, pos);
	SymbolTable->CreateSymbols(sourceCode);
	mvceditor::SymbolClass::Types type = mvceditor::SymbolClass::PRIMITIVE;
	UnicodeString typeLexeme, 
		objectMember, 
		comment;	
	CHECK(SymbolTable->Lookup(pos, *ResourceFinder, type, typeLexeme, objectMember, comment));
	CHECK_EQUAL(mvceditor::SymbolClass::OBJECT, type);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), typeLexeme);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("getName"), objectMember);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("/** @return string */"), comment);
}

TEST_FIXTURE(SymbolTableTestClass, LookupShouldGetCommentForLocalVariable) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"/** This is the user class */\n"
		"class UserClass {\n"
		"\t/** @var string */\n"
		"\tprivate $name;\n"
		"\t/** @var string */\n"
		"\tprivate $address;\n"
		"\t/** @return string */\n"
		"\tfunction getName() {\n"
		"\t\treturn $this->name;\n"
		"\t}\n"
		"\t/** @return void */\n"
		"\tprivate function copy($anotherUser) {\n"
		"\t\t$user = new UserClass();\n"
		"\t\t$user{CURSOR}\n"
		"\t}\n"
		"}\n"
		"?>\n"
	);
	int pos;
	sourceCode = FindCursor(sourceCode, pos);
	SymbolTable->CreateSymbols(sourceCode);
	mvceditor::SymbolClass::Types type = mvceditor::SymbolClass::PRIMITIVE;
	UnicodeString typeLexeme, 
		objectMember, 
		comment;	
	CHECK(SymbolTable->Lookup(pos, *ResourceFinder, type, typeLexeme, objectMember, comment));
	CHECK_EQUAL(mvceditor::SymbolClass::OBJECT, type);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), typeLexeme);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), objectMember);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("/** This is the user class */"), comment);
}

TEST_FIXTURE(SymbolTableTestClass, LookupShouldGetClassNameForLocalVariableWhenMethodIsInAnotherFile) {
	
	/*
	 * create a class in a separate file
	 */
	CreateFixtureFile(wxT("test.php"), wxString::FromAscii(
		"<?php\n"
		"/** This is the user class */\n"
		"class UserClass {\n"
		"\t/** @var string */\n"
		"\tprivate $name;\n"
		"\t/** @var string */\n"
		"\tprivate $address;\n"
		"\t/** @return string */\n"
		"\tfunction getName() {\n"
		"\t\treturn $this->name;\n"
		"\t}\n"
		"}\n"
		"?>\n"
	));
	CHECK(ResourceFinder->Prepare(wxT("a")));
	ResourceFinder->Walk(TestProjectDir + wxT("test.php"));
	
	/*
	 * use the class in another file 
	 */
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
		"\t/** @return void */\n"
		"\t function copy($aUser) {\n"
		"\t\t$user = new UserClass();\n"
		"\t\t$name = $user->getName();\n"
		"\t\t$name{CURSOR}\n"
		"\t}\n"
	);
	int pos;
	sourceCode = FindCursor(sourceCode, pos);
	SymbolTable->CreateSymbols(sourceCode);
	mvceditor::SymbolClass::Types type = mvceditor::SymbolClass::PRIMITIVE;
	UnicodeString typeLexeme, 
		objectMember, 
		comment;	
	CHECK(SymbolTable->Lookup(pos, *ResourceFinder, type, typeLexeme, objectMember, comment));
	CHECK_EQUAL(mvceditor::SymbolClass::PRIMITIVE, type);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("string"), typeLexeme);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), objectMember);
}

TEST_FIXTURE(SymbolTableTestClass, LookupShouldGetParentClass) {
	wxString sourceCode = wxString::FromAscii(
		"<?php\n"
		"/** This is the user class */\n"
		"class UserClass {\n"
		"\t/** @var string */\n"
		"\tprivate $name;\n"
		"\t/** @var string */\n"
		"\tprivate $address;\n"
		"\t/** @return string */\n"
		"\tfunction getName() {\n"
		"\t\treturn $this->name;\n"
		"\t}\n"
		"}\n"
		"class AdminClass extends UserClass {\n"
		"\tfunction getName() {"
		"\treturn 'Admin:' + parent::{CURSOR}\n"
		"\t}\n"
		"}\n"
		"?>\n"
	);
	UnicodeString uniCode = mvceditor::StringHelperClass::wxToIcu(sourceCode);
	CreateFixtureFile(wxT("test.php"), sourceCode);
	CHECK(ResourceFinder->Prepare(wxT("a")));
	ResourceFinder->Walk(TestProjectDir + wxT("test.php"));
	int pos;
	uniCode = FindCursor(uniCode, pos);
	SymbolTable->CreateSymbols(uniCode);
	mvceditor::SymbolClass::Types type = mvceditor::SymbolClass::PRIMITIVE;
	UnicodeString typeLexeme, 
		objectMember, 
		comment;	
	CHECK(SymbolTable->Lookup(pos, *ResourceFinder, type, typeLexeme, objectMember, comment));
	CHECK_EQUAL(mvceditor::SymbolClass::OBJECT, type);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), typeLexeme);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), objectMember);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), comment);
}

TEST_FIXTURE(SymbolTableTestClass, LookupShouldGetParentMethod) {
	wxString sourceCode = wxString::FromAscii(
		"<?php\n"
		"/** This is the user class */\n"
		"class UserClass {\n"
		"\t/** @var string */\n"
		"\tprivate $name;\n"
		"\t/** @var string */\n"
		"\tprivate $address;\n"
		"\t/** @return string */\n"
		"\tfunction getName() {\n"
		"\t\treturn $this->name;\n"
		"\t}\n"
		"}\n"
		"class AdminClass extends UserClass {\n"
		"\tfunction getName() {"
		"\treturn 'Admin:' + parent::getNam{CURSOR}\n"
		"\t}\n"
		"}\n"
		"?>\n"
	);
	UnicodeString uniCode = mvceditor::StringHelperClass::wxToIcu(sourceCode);
	CreateFixtureFile(wxT("test.php"), sourceCode);
	CHECK(ResourceFinder->Prepare(wxT("a")));
	ResourceFinder->Walk(TestProjectDir + wxT("test.php"));
	int pos;
	uniCode = FindCursor(uniCode, pos);
	SymbolTable->CreateSymbols(uniCode);
	mvceditor::SymbolClass::Types type = mvceditor::SymbolClass::PRIMITIVE;
	UnicodeString typeLexeme, 
		objectMember, 
		comment;	
	CHECK(SymbolTable->Lookup(pos, *ResourceFinder, type, typeLexeme, objectMember, comment));
	CHECK_EQUAL(mvceditor::SymbolClass::OBJECT, type);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), typeLexeme);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("getNam"), objectMember);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), comment);
}

TEST_FIXTURE(SymbolTableTestClass, LookupShouldGetAncestorOnlyWhenMethodMatches) {
	wxString sourceCode = wxString::FromAscii(
		"<?php\n"
		"/** This is the user class */\n"
		"class UserClass {\n"
		"\t/** @var string */\n"
		"\tprivate $name;\n"
		"\t/** @var string */\n"
		"\tprivate $address;\n"
		"\t/** @return string */\n"
		"\tfunction getName() {\n"
		"\t\treturn $this->name;\n"
		"\t}\n"
		"}\n"
		"class AdminClass extends UserClass {\n"
		"}\n"		
		"class SuperAdminClass extends AdminClass {\n"
		"\tfunction getName() {"
		"\treturn 'SuperAdmin:' + parent::getNam{CURSOR}\n"
		"\t}\n"
		"}\n"
		"?>\n"
	);
	UnicodeString uniCode = mvceditor::StringHelperClass::wxToIcu(sourceCode);
	CreateFixtureFile(wxT("test.php"), sourceCode);
	CHECK(ResourceFinder->Prepare(wxT("a")));
	ResourceFinder->Walk(TestProjectDir + wxT("test.php"));
	int pos;
	uniCode = FindCursor(uniCode, pos);
	SymbolTable->CreateSymbols(uniCode);
	mvceditor::SymbolClass::Types type = mvceditor::SymbolClass::PRIMITIVE;
	UnicodeString typeLexeme, 
		objectMember, 
		comment;	
	CHECK(SymbolTable->Lookup(pos, *ResourceFinder, type, typeLexeme, objectMember, comment));
	CHECK_EQUAL(mvceditor::SymbolClass::OBJECT, type);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), typeLexeme);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("getNam"), objectMember);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), comment);
}

TEST_FIXTURE(SymbolTableTestClass, GetVariablesInScopeShouldOnlyReturnVariablesInScope) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
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
	// take the predefined varaibles into account
	CHECK_EQUAL((size_t)PREDEFINED_VARIABLE_COUNT + 3, variables.size());
	if ((size_t)(PREDEFINED_VARIABLE_COUNT + 3) == variables.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("this"), variables[PREDEFINED_VARIABLE_COUNT]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("anotherName"), variables[PREDEFINED_VARIABLE_COUNT + 1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("someName"), variables[PREDEFINED_VARIABLE_COUNT + 2]);
	}
}

TEST_FIXTURE(SymbolTableTestClass, GetVariablesInScopeShouldOnlyReturnVariablesInScopeForFunctions) {
	UnicodeString sourceCode = mvceditor::StringHelperClass::charToIcu(
		"<?php\n"
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
	CHECK_EQUAL((size_t)PREDEFINED_VARIABLE_COUNT + 3, variables.size());
	if ((size_t)(PREDEFINED_VARIABLE_COUNT + 3) == variables.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("anotherName"), variables[PREDEFINED_VARIABLE_COUNT]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("defaultName"), variables[PREDEFINED_VARIABLE_COUNT + 1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("someName"), variables[PREDEFINED_VARIABLE_COUNT + 2]);
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
	CHECK_EQUAL((size_t)PREDEFINED_VARIABLE_COUNT + 2, variables.size());
	if ((size_t)(PREDEFINED_VARIABLE_COUNT + 2) == variables.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("user"), variables[PREDEFINED_VARIABLE_COUNT]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("someName"), variables[PREDEFINED_VARIABLE_COUNT + 1]);
	}
}

}