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
#include <UnitTest++.h>
#include <pelet/LexicalAnalyzerClass.h>
#include <FileTestFixtureClass.h>
#include <PeletChecks.h>

/**
 * This fixture is used to test both version of the lexer (5.3 and 5.4 versions).
 * Since they are implemented as copy-pasted code, we want to make sure both
 * Next53Token() and Next54Token() are tested properly. This fixture will create
 * two lexers (one for each PHP version), and the CHECK_ defines below will test that both lexers get the
 * same tokens (where appropriate)
 */
class LexicalAnalyzerTestClass : public FileTestFixtureClass {
public:	
	LexicalAnalyzerTestClass() 
		: FileTestFixtureClass() 
		, Lexer53()
		, Lexer54() {
		Lexer54.SetVersion(pelet::PHP_54);
	}
	
	pelet::LexicalAnalyzerClass Lexer53;
	pelet::LexicalAnalyzerClass Lexer54;
	wxString ActualLexeme;
	
	bool LexerOpen(std::string file) {
		return Lexer53.OpenFile(file) && Lexer54.OpenFile(file);
	}
	
	bool LexerOpenString(wxString code) {
		return Lexer53.OpenString(code) && Lexer54.OpenString(code);
	}
};

/**
 * This fixture is used to test the LastExpression() method, that method is not different
 * on different PHP versions
 */
class LexicalAnalyzerExpressionTestClass : public FileTestFixtureClass {
public:	
	LexicalAnalyzerExpressionTestClass() 
		: Lexer() {
	}
	
	pelet::LexicalAnalyzerClass Lexer;

};

// using #defines here because otherwise UnitTest++ won't report the correct line
// number when an assertion fails
#define CHECK_TOKEN_LEXEME(token, expectedLexeme) \
		CHECK_EQUAL(token, Lexer53.NextToken());\
		ActualLexeme.clear(); \
		Lexer53.GetLexeme(ActualLexeme);\
		CHECK_EQUAL(expectedLexeme, ActualLexeme);\
		CHECK_EQUAL(token, Lexer54.NextToken());\
		ActualLexeme.clear(); \
		Lexer54.GetLexeme(ActualLexeme);\
		CHECK_EQUAL(expectedLexeme, ActualLexeme);

#define CHECK_TOKEN(token) \
	CHECK_EQUAL(token, Lexer53.NextToken());\
	CHECK_EQUAL(token, Lexer54.NextToken());
		
#define CHECK_TOKEN_POSITION(position) \
		CHECK_EQUAL(position, Lexer53.GetCharacterPosition());\
		CHECK_EQUAL(position, Lexer54.GetCharacterPosition());

#define CHECK_TOKEN_LINE(lineNumber) \
		CHECK_EQUAL(lineNumber, Lexer53.GetLineNumber());\
		CHECK_EQUAL(lineNumber, Lexer54.GetLineNumber());


SUITE(LexicalAnalyzerTestClass) {

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldFindEasy) {
	CreateFixtureFile("test.php",
		"<?php\n"
		"$s = 'hello';\n"
		"$a = 1 * 3;\n"
		"$b = -1;\n"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$s"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("hello"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$a"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("1"));
	CHECK_TOKEN_LEXEME('*', wxT("*"));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("3"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$b"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	
	// php parser considers these separate
	CHECK_TOKEN_LEXEME('-', wxT("-"));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("1"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldFindWhenFileEndsWithIdentifier) {
	wxString code = _U(
		"function echoA"
	);
	CHECK(LexerOpenString(code));
	CHECK_TOKEN_LEXEME(pelet::T_FUNCTION, wxT("function"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("echoA"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, OpenStringShouldbeAnalyzed) {
	wxString code  = _U(
		"$s = 'hello';\n"
		"$a = 1 * 3;"
	);
	CHECK(LexerOpenString(code));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$s"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("hello"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$a"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("1"));
	CHECK_TOKEN_LEXEME('*', wxT("*"));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("3"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldFindEasyIfStatement) {
	CreateFixtureFile("test.php", 
		"<?php\n"
		"if(NULL !== $value && !is_array($value)) {\n"
		"\t$value = (string) $value;\n"
		"}\n"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	std::string lexeme;
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_IF, wxT("if"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("NULL"));
	CHECK_TOKEN_LEXEME(pelet::T_IS_NOT_IDENTICAL, wxT("!=="));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$value"));
	CHECK_TOKEN_LEXEME(pelet::T_BOOLEAN_AND, wxT("&&"));
	CHECK_TOKEN_LEXEME('!', wxT("!"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("is_array"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$value"));
	CHECK_TOKEN_LEXEME(')', wxT(")"));
	CHECK_TOKEN_LEXEME(')', wxT(")"));
	CHECK_TOKEN_LEXEME('{', wxT("{"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$value"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_STRING_CAST, wxT("(string)"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$value"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME('}', wxT("}"));
	
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleEmptyComments) {

	// the "/**/" was being confused for an unfinished doc comment "/**"
	CreateFixtureFile("test.php",
		"<?php\n"
		"/**/\n"
		"function work() {\n"
		"}"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_COMMENT, wxT("/**/"));
	CHECK_TOKEN_LEXEME(pelet::T_FUNCTION, wxT("function"));
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleComments) {
	CreateFixtureFile("test.php",
		"<?php\n"
		"/*\n"
		" *\n"
		" */\n"
		"function work() {\n"
		"}"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_COMMENT, wxT("/*\n *\n */"));
	CHECK_TOKEN_LEXEME(pelet::T_FUNCTION, wxT("function"));
	
	/*
	 * test for single line, PHP Doc comments 
	 */
	CreateFixtureFile("test.php",
		"<?php\n"
		"//for fun, let's enable every rule for every group for this client\r"
		"# testing another comment\r" 
		"/** this is a PHPDoc Comment */"
		"require_once('globals.php');\n"
	);
	file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_DOC_COMMENT, wxT("/** this is a PHPDoc Comment */"));
	CHECK_TOKEN_LEXEME(pelet::T_REQUIRE_ONCE, wxT("require_once"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("globals.php"));
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleUnterminatedComments) {
	CreateFixtureFile("test.php", 
		"<?php\n"
		"/*\n"
		" *\n"
		" * /\n"
		"function work() {\n"
		"}\n"
		"?>"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_ERROR_UNTERMINATED_COMMENT, wxT(""));
	
	
	CreateFixtureFile("test.php", 
		"<?php\n"
		"//for fun, let's enable every rule for every group for this client\r"
		"require_once('globals.php');\n"
	);
	file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_REQUIRE_ONCE, wxT("require_once"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("globals.php"));
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleLongComments) {
	CreateFixtureFile("test.php", 
		"<?php\n"
		"/* ***************************************************************************************************************************************************************************************\n"
		" * The following class extends the 'RecordSet' class.\n"
		" * ***************************************************************************************************************************************************************************************/\n"
		"/*\n"
		" * This class does not call the constructor of the parent ('RecordSet') class.\n"
		" */\n"
		"class ExtendedRecordSetForUnitTestDoesNotInitializeRcord extends RecordSet {\n"
		"}\n"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN(pelet::T_COMMENT);
	CHECK_TOKEN(pelet::T_COMMENT);
	CHECK_TOKEN_LEXEME(pelet::T_CLASS, wxT("class"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("ExtendedRecordSetForUnitTestDoesNotInitializeRcord"));
	CHECK_TOKEN_LEXEME(pelet::T_EXTENDS, wxT("extends"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("RecordSet"));
	CHECK_TOKEN_LEXEME('{', wxT("{"));
	CHECK_TOKEN_LEXEME('}', wxT("}"));
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldFindClassTokens) {
	CreateFixtureFile("test.php", 
		"<?php \n"
		"require_once('globals.php');\n"
		"/*\n"
		" */\n"
		"class UserClass {\n"
		"  protected $_name;\n"
		"  var $id;\n"
		"  const NULL_ID = 0;\n"		
		"  function __construct() {\n"
		"    $this->_name = '';\n"
		"    $this->id = self::NULL_ID;\n"
		"  }\n"
		"\n"	
		"}\n"
		"class AdminClass extends UserClass implements IFace {\n"
		"  private $_superUser;\n"
		"  public function __construct() {\n"
		"    parent::__construct();\n"
		"  }\n"
		"}\r\n"
		"?>\r\n"
		"\r\n"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php "));
	CHECK_TOKEN_LEXEME(pelet::T_REQUIRE_ONCE, wxT("require_once"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("globals.php"));
	CHECK_TOKEN_LEXEME(')', wxT(")"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN(pelet::T_COMMENT);
	CHECK_TOKEN_LEXEME(pelet::T_CLASS, wxT("class"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("UserClass"));
	CHECK_TOKEN_LEXEME('{', wxT("{"));
	CHECK_TOKEN_LEXEME(pelet::T_PROTECTED, wxT("protected"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$_name"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_VAR, wxT("var"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$id"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_CONST, wxT("const"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("NULL_ID"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("0"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_FUNCTION, wxT("function"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("__construct"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(')', wxT(")"));
	CHECK_TOKEN_LEXEME('{', wxT("{"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$this"));
	CHECK_TOKEN_LEXEME(pelet::T_OBJECT_OPERATOR, wxT("->"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("_name"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT(""));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$this"));
	CHECK_TOKEN_LEXEME(pelet::T_OBJECT_OPERATOR, wxT("->"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("id"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("self"));
	CHECK_TOKEN_LEXEME(pelet::T_PAAMAYIM_NEKUDOTAYIM, wxT("::"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("NULL_ID"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME('}', wxT("}"));
	CHECK_TOKEN_LEXEME('}', wxT("}"));
	CHECK_TOKEN_LEXEME(pelet::T_CLASS, wxT("class"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("AdminClass"));
	CHECK_TOKEN_LEXEME(pelet::T_EXTENDS, wxT("extends"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("UserClass"));
	CHECK_TOKEN_LEXEME(pelet::T_IMPLEMENTS, wxT("implements"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("IFace"));
	CHECK_TOKEN_LEXEME('{', wxT("{"));
	CHECK_TOKEN_LEXEME(pelet::T_PRIVATE, wxT("private"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$_superUser"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_PUBLIC, wxT("public"));
	CHECK_TOKEN_LEXEME(pelet::T_FUNCTION, wxT("function"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("__construct"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(')', wxT(")"));
	CHECK_TOKEN_LEXEME('{', wxT("{"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("parent"));
	CHECK_TOKEN_LEXEME(pelet::T_PAAMAYIM_NEKUDOTAYIM, wxT("::"));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("__construct"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(')', wxT(")"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME('}', wxT("}"));
	CHECK_TOKEN_LEXEME('}', wxT("}"));
	CHECK_TOKEN_LEXEME(pelet::T_CLOSE_TAG, wxT("?>"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleEscapedSlashes) {
	CreateFixtureFile("test.php", 
		"<?php\n"
		"$s = '\\\\';"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$s"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("\\"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleEscapedSingleQuoteStrings) {
	CreateFixtureFile("test.php", 
		"<?php\n"	
		"$s = 'this \\\\ is an \\'escaped\\' \\n string';"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$s"));
	CHECK_TOKEN_LEXEME('=', wxT("="));

	// in PHP single quote strings the only escape sequence allowed is the escaped single quotes
	// double backslash should be turned into single backslash
	// \n should be left alone.
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("this \\ is an 'escaped' \\n string"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleEscapedDoubleQuoteStrings) {

	// this is what we want the string to be:  this is an "escaped" string
	// but since the PHP code is inside a C string, we must escape the
	// double quotes of the PHP code and escape the quote in PHP which means
	// escape the double quote escape sequence in C; that's how we get 3 backslashes
	CreateFixtureFile("test.php", 
		"<?php\n"
		"$s = \"this is an \\\"escaped\\\" string\";"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$s"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	
	// all strings are labeled as constant for now
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("this is an \"escaped\" string"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleHeredocStrings) {

	// heredocs follow the same escaping rules as double quoted strings.
	// except that double quotes do not have to be escaped.
	// this is what we want the string to be:  this is an "escaped" string
	CreateFixtureFile("test.php", 
		"<?php\n"
		"$s = <<<EOF\n"
		"this is an \"escaped\" string;\n"
		"EOF;\n"
		"$a = 55;\n"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$s"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("this is an \"escaped\" string;"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$a"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("55"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleHeredocStringsThatDontEndWithSemicolon) {

	// this test is for the semicolon AFTER the ending marker
	CreateFixtureFile("test.php", 
		"<?php\n"
		"$s = <<<EOF\n"
		"this is an \"escaped\" string;\n"
		"EOF\r\n"
		";"
		"$a = 55;\n"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$s"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("this is an \"escaped\" string;"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$a"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("55"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleHeredocStringsWithEmptyLines) {

	// this test is for the semicolon AFTER the ending marker
	CreateFixtureFile("test.php", 
		"<?php\n"
		"$s = <<<EOF\n"
		"this is an \"escaped\" string;\n"
		"\n"
		"this is an \"escaped\" string;\n"
		"EOF;\n"
		"$a = 55;\n"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$s"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("this is an \"escaped\" string;\n\nthis is an \"escaped\" string;"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$a"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("55"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN(pelet::T_END);
}


TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleNowdocStrings) {

	// heredocs follow the same escaping rules as double quoted strings.
	// except that double quotes do not have to be escaped.
	// this is what we want the string to be:  this is an "escaped" string
	CreateFixtureFile("test.php", 
		"<?php\n"
		"$s = <<<'EOF'\n"
		"this is an \"escaped\" string;\n"
		"EOF;\n"
		"$a = 55;\n"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$s"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("this is an \"escaped\" string;"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$a"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("55"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleStringWithInterprolatedArrays) {

	// heredocs follow the same escaping rules as double quoted strings.
	// except that double quotes do not have to be escaped.
	// this is what we want the string to be:  this is an "escaped" string
	CreateFixtureFile("test.php", 
		"<?php\n"
		"$s = \"{$arrRow[\"FirstName\"]} ({$arrRow[\"LastName\"]})\"; \n"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$s"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("{$arrRow[\"FirstName\"]} ({$arrRow[\"LastName\"]})"));
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenWithBraces) {

	// testing strings that have braces in order to test that we handle
	// string interprolated variables correctly and that we leave them alone
	// when there are no variables
	CreateFixtureFile("test.php", 
		"<?php\n"
		"$data = array();"
		"$data[] = \"{\" . \"function {};\";\n"
		"/*\n"
		"}\n"
		"*/\n"
		"$data[] = \"}\";"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\n"));

	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$data"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_ARRAY, wxT("array"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(')', wxT(")"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$data"));
	CHECK_TOKEN_LEXEME('[', wxT("["));
	CHECK_TOKEN_LEXEME(']', wxT("]"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("{"));
	CHECK_TOKEN_LEXEME('.', wxT("."));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("function {};"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));

	CHECK_TOKEN_LEXEME(pelet::T_COMMENT, wxT("/*\n}\n*/"));
	
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$data"));
	CHECK_TOKEN_LEXEME('[', wxT("["));
	CHECK_TOKEN_LEXEME(']', wxT("]"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("}"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleWindowsLineEndings) {
	CreateFixtureFile("test.php", 
		"<?php\r\n" // length= 6
		"$s = 'hello';\r\n" //length = 21
		"$a = 1 * 3;\r\n" //length = 34
		"$b = -1;\r\n"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?php\r\n"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$s"));
	CHECK_TOKEN_POSITION(7);
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_POSITION(10);
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("hello"));
	CHECK_TOKEN_POSITION(12);
	CHECK_TOKEN_LINE(2);
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$a"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("1"));
	CHECK_TOKEN_LEXEME('*', wxT("*"));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("3"));
	CHECK_TOKEN_LINE(3);
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$b"));
	CHECK_TOKEN_LEXEME('=', wxT("="));
	CHECK_TOKEN_POSITION(38);
	CHECK_TOKEN_LEXEME('-', wxT("-"));
	CHECK_TOKEN_LEXEME(pelet::T_LNUMBER, wxT("1"));
	CHECK_TOKEN_LINE(4);
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldHandleInlineHtml) {
	CreateFixtureFile("test.php", 
		"<? foreach ($arrTabsList as $key=>$val) { ?>\n"
		"print<br />\n"
		"<?= 'hello' ?>\n"
		"<?} ?>\n"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<? "));
	CHECK_TOKEN_LEXEME(pelet::T_FOREACH, wxT("foreach"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$arrTabsList"));
	CHECK_TOKEN_LEXEME(pelet::T_AS, wxT("as"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$key"));
	CHECK_TOKEN_LEXEME(pelet::T_DOUBLE_ARROW, wxT("=>"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$val"));
	CHECK_TOKEN_LEXEME(')', wxT(")"));
	CHECK_TOKEN_LEXEME('{', wxT("{"));
	CHECK_TOKEN_LEXEME(pelet::T_CLOSE_TAG, wxT("?>"));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG_WITH_ECHO, wxT("<?="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("hello"));
	CHECK_TOKEN_LEXEME(pelet::T_CLOSE_TAG, wxT("?>"));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?"));
	CHECK_TOKEN_LEXEME('}', wxT("}"));
	CHECK_TOKEN_LEXEME(pelet::T_CLOSE_TAG, wxT("?>"));
	CHECK_TOKEN(pelet::T_END);
}


TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldReturnInlineHtml) {
	CreateFixtureFile("test.php", 
		"<? foreach ($arrTabsList as $key=>$val) { ?>\n"
		"print<br />\n"
		"<?= 'hello' ?>\n"
		"<?} ?>\n"
		"text"
	);
	std::string file = TestProjectDir;
	file += "test.php";
	Lexer53.SetCaptureAllTokens(true);
	Lexer54.SetCaptureAllTokens(true);
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<? "));
	CHECK_TOKEN_LEXEME(pelet::T_FOREACH, wxT("foreach"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$arrTabsList"));
	CHECK_TOKEN_LEXEME(pelet::T_AS, wxT("as"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$key"));
	CHECK_TOKEN_LEXEME(pelet::T_DOUBLE_ARROW, wxT("=>"));
	CHECK_TOKEN_LEXEME(pelet::T_VARIABLE, wxT("$val"));
	CHECK_TOKEN_LEXEME(')', wxT(")"));
	CHECK_TOKEN_LEXEME('{', wxT("{"));
	CHECK_TOKEN_LEXEME(pelet::T_CLOSE_TAG, wxT("?>"));
	CHECK_TOKEN_LEXEME(pelet::T_INLINE_HTML, wxT("\nprint<br />\n"));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG_WITH_ECHO, wxT("<?="));
	CHECK_TOKEN_LEXEME(pelet::T_CONSTANT_ENCAPSED_STRING, wxT("hello"));
	CHECK_TOKEN_LEXEME(pelet::T_CLOSE_TAG, wxT("?>"));
	CHECK_TOKEN_LEXEME(pelet::T_INLINE_HTML, wxT("\n"));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<?"));
	CHECK_TOKEN_LEXEME('}', wxT("}"));
	CHECK_TOKEN_LEXEME(pelet::T_CLOSE_TAG, wxT("?>"));
	CHECK_TOKEN_LEXEME(pelet::T_INLINE_HTML, wxT("\ntext"));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerTestClass, NextTokenShouldReturnLineComments) {
	CreateFixtureFile("test.php", 
		"<? // this is a comment?>\n"
		"<? phpinfo(); ?>\n"
		"<? // done "
	);
	std::string file = TestProjectDir;
	file += "test.php";
	Lexer53.SetCaptureAllTokens(true);
	Lexer54.SetCaptureAllTokens(true);
	CHECK(LexerOpen(file));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<? "));
	CHECK_TOKEN_LEXEME(pelet::T_COMMENT, wxT(" this is a comment"));
	CHECK_TOKEN_LEXEME(pelet::T_CLOSE_TAG, wxT("?>"));
	CHECK_TOKEN_LEXEME(pelet::T_INLINE_HTML, wxT("\n"));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<? "));
	CHECK_TOKEN_LEXEME(pelet::T_STRING, wxT("phpinfo"));
	CHECK_TOKEN_LEXEME('(', wxT("("));
	CHECK_TOKEN_LEXEME(')', wxT(")"));
	CHECK_TOKEN_LEXEME(';', wxT(";"));
	CHECK_TOKEN_LEXEME(pelet::T_CLOSE_TAG, wxT("?>"));
	CHECK_TOKEN_LEXEME(pelet::T_INLINE_HTML, wxT("\n"));
	CHECK_TOKEN_LEXEME(pelet::T_OPEN_TAG, wxT("<? "));
	CHECK_TOKEN_LEXEME(pelet::T_COMMENT, wxT(" done "));
	CHECK_TOKEN(pelet::T_END);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionFirstFunction) {
	wxString code = _U(
		"<?php echo"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_UNISTR_EQUALS("echo", last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionSimpleVariable) {
	wxString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"$expr2"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("$expr2"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionFunctionArgument) {
	wxString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"func($expr2"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("$expr2"), last);
}


TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionFunctionChain) {
	wxString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"func($expr2)->prop"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("func($expr2)->prop"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionFunctionArgumentAsFunction) {
	wxString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"func(funct2($expr2), $arr[3])->prop"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("func(funct2($expr2), $arr[3])->prop"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionStaticMember) {
	wxString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"$expr2 = MyClass::$prop"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("MyClass::$prop"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionConstMember) {
	wxString code = _U(
		"<?php\n"
		"$expr1 = 3;\n"
		"$expr2 = MyClass::DEFAULT_NU"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("MyClass::DEFAULT_NU"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionObjectMethodChain) {
	wxString code = _U(
		"<?php\n"
		"$expr1 = new MyClass;\n"
		"$expr2 = $expr->funct3('two')->prop"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("$expr->funct3('two')->prop"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionNoExpression) {
	wxString code = _U(
		"<?php\n"
		"$expr1 = new MyClass;\n"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT(""), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionIndirectVariable) {
	wxString code = _U(
		"<?php\n"
		"$expr2 = 3;\n"
		"$expr1 = 'expr2';\n"
		"$$expr1"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("$expr1"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionIndirectProperty) {
	wxString code = _U(
		"<?php\n"
		"$expr2 = new MyClass;\n"
		"$expr1 = 'prop';\n"
		"$expr2->$expr1"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("$expr1"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionObjectOperator) {
	wxString code = _U(
		"<?php\n"
		"$expr2 = new MyClass;\n"
		"$expr2->"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("$expr2->"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionStaticOperator) {
	wxString code = _U(
		"<?php\n"
		"$expr2 = new MyClass;\n"
		"MyClass::"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("MyClass::"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionObjectOperatorWithWhitespace) {
	wxString code = _U(
		"<?php\n"
		"$expr2 = new MyClass;\n"
		"$expr2\n"
		"->"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("$expr2->"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionNewCallWithChaining) {
	wxString code = _U(
		"<?php \n"
		" $expr = new MyClass; \n"
		"(new Foo)->method"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("(new Foo)->method"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionArrayDereference) {
	wxString code = _U(
		"<?php \n"
		"$expr1 = array( 0 => new MyClass); \n"
		"$expr2 = array( 1 => new MyClass); \n"
		"array_merge($expr1, $expr2)[0]->method"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("array_merge($expr1, $expr2)[0]->method"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionMethodArrayDereference) {
	wxString code = _U(
		"<?php \n"
		"$expr1 = array( 0 => new MyClass); \n"
		"$expr2 = array( 1 => new MyClass); \n"
		"$this->func($expr1, $expr2)[0]->method"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("$this->func($expr1, $expr2)[0]->method"), last);
}

TEST_FIXTURE(LexicalAnalyzerExpressionTestClass, LastExpressionNamespaces) {
	wxString code = _U(
		"<?php \n"
		"$obj = new \\op\\child\\MyClass"
	);
	wxString last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("\\op\\child\\MyClass"), last);
	
	code = _U(
		"<?php \n"
		"$obj = new child\\MyClass"
	);
	last = Lexer.LastExpression(code);
	CHECK_EQUAL(wxT("child\\MyClass"), last);
}

}
