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
#include <pelet/ParserObserverClass.h>
#include <pelet/ParserClass.h>
#include <FileTestFixtureClass.h>
#include <TestObserverClass.h>
#include <PeletChecks.h>
#include <unicode/ustring.h>
#include <vector>


// NOTE: the contents below will be copied from Parser54TestClass.cpp
// this was the easiest way to 'share' the test cases, since I want to 
// make use both parsers have the same tests. The only differences are the 
// define below is set to use the 5.3 parser and the new suite name (so
// that tests get run)

/**
 * Some tests use a 'full' sample of PHP code. these will test multiple 
 * artifacts.
 */
class FullParser53TestClass : public FileTestFixtureClass {
public:	

	pelet::ParserClass Parser;
	pelet::LintResultsClass LintResults;
	TestObserverClass Observer;
	
	FullParser53TestClass () 
		: FileTestFixtureClass() 
		, Parser() {
		Parser.SetVersion(pelet::PHP_53);
		
		// this file was carefully crafted to hit all the Observers
		// class, method, function, and variable Observers
		CreateFixtureFile("test.php",
			"<?php\n"
			"/**\n"
			" * This is a define comment\n"
			" */\n"
			"define('MAX_TIME', 5000);\n"
			"/**\n"
			" * This is a class comment\n"
			" */\n"
			"abstract class UserClass {\n"
			"\t/**\n"
			"\t * This is a the user's name\n"
			"\t * @var string\n"
			"\t */\n"			
			" \tprivate $name;\n"
			"\t/**\n"
			"\t * This is the default user name\n"
			"\t * @var string\n"
			"\t */\n"			
			" \tconst DEFAULT_NAME = 'guest';\n"			
			"\t/**\n"
			"\t * The class constructor\n"
			"\t * @return void\n"
			"\t */\n"
			"\tfunction __construct() {\n"
			"\t\techo 'in construct';\n"
			"\t\t$blog = new Blog();\n"
			"\t\t$msg = 'created a new blog';\n"
			"\t\t$anotherMsg = $msg;\n"
			"\t\tif ($blog->isNew()) {\n"
			"\t\t\techo $msg;\n"
			"\t\t}\n"
			"\t}\n"
			"\tabstract function work();\n"
			"\t/** get the user's name */\n"
			"\tfunction getName() {\n"
			"\t\treturn $this->name;\n"
			"\t}\n"
			"\tprivate static function setName($name) {\n"
			"\t}\n"
			"}\n"
			"\n\n"
			"/**\n"
			" * This is a function comment\n"
			" * @return boolean\n"
			" */\n"
			"function showUser($user) {\n"
			"\t$newUser = factory($user);\n"
			"\t$name = $user->getName();\n"
			"}"
			"\n"
			"?>\n"
		);		
	}
};

class Parser53TestClass : public FileTestFixtureClass {
public:	
	Parser53TestClass () 
		: FileTestFixtureClass() 
		, Parser()
		, LintResults()
		, Observer() {
		Parser.SetVersion(pelet::PHP_53);
	}
	
	pelet::ParserClass Parser;
	pelet::LintResultsClass LintResults;
	TestObserverClass Observer;
};

SUITE(Parser53TestClass) {

TEST_FIXTURE(FullParser53TestClass, ScanFileShouldNotifyClassObserver) {
		std::string file = TestProjectDir + "test.php";
		Parser.SetClassObserver(&Observer);
		CHECK(Parser.ScanFile(file, LintResults));
		CHECK_VECTOR_SIZE(1, Observer.ClassName);
		CHECK_UNISTR_EQUALS("UserClass", Observer.ClassName[0]);
		CHECK_VECTOR_SIZE(1, Observer.ClassSignature);
		CHECK_UNISTR_EQUALS("abstract class UserClass", Observer.ClassSignature[0]);
		CHECK_VECTOR_SIZE(1, Observer.ClassComment);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n * This is a class comment\n */"), Observer.ClassComment[0]);			
		CHECK_VECTOR_SIZE(1, Observer.DefinedName);
		CHECK_UNISTR_EQUALS("MAX_TIME", Observer.DefinedName[0]);		
		CHECK_VECTOR_SIZE(1, Observer.DefinedValue);
		CHECK_UNISTR_EQUALS("5000", Observer.DefinedValue[0]);		
		CHECK_VECTOR_SIZE(1, Observer.DefinedComment);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n * This is a define comment\n */"), Observer.DefinedComment[0]);
}

TEST_FIXTURE(FullParser53TestClass, ScanFileShouldNotifyClassMemberObserver) {
	std::string file = TestProjectDir + "test.php";
	Parser.SetClassMemberObserver(&Observer);
	CHECK(Parser.ScanFile(file, LintResults));
	CHECK_VECTOR_SIZE(4, Observer.MethodClassName);
	CHECK_UNISTR_EQUALS("UserClass", Observer.MethodClassName[0]);
	CHECK_UNISTR_EQUALS("UserClass", Observer.MethodClassName[1]);
	CHECK_UNISTR_EQUALS("UserClass", Observer.MethodClassName[2]);
	CHECK_UNISTR_EQUALS("UserClass", Observer.MethodClassName[3]);
	CHECK_VECTOR_SIZE(4, Observer.MethodName);
	CHECK_UNISTR_EQUALS("__construct", Observer.MethodName[0]);
	CHECK_UNISTR_EQUALS("work", Observer.MethodName[1]);
	CHECK_UNISTR_EQUALS("getName", Observer.MethodName[2]);
	CHECK_UNISTR_EQUALS("setName", Observer.MethodName[3]);
	CHECK_VECTOR_SIZE(4, Observer.MethodComment);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n\t * The class constructor\n\t * @return void\n\t */"), 
		Observer.MethodComment[0]); // __construct() comment
	CHECK_UNISTR_EQUALS("", 
		Observer.MethodComment[1]); // work() comment
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("/** get the user's name */"), 
		Observer.MethodComment[2]); // getName() comment
	CHECK_UNISTR_EQUALS("", 
		Observer.MethodComment[3]); // setName() comment
	CHECK_VECTOR_SIZE(4, Observer.MethodReturnType);
	CHECK_UNISTR_EQUALS("void", Observer.MethodReturnType[0]);
	CHECK_VECTOR_SIZE(4, Observer.MethodVisibility);
	CHECK_EQUAL(pelet::TokenClass::PUBLIC, Observer.MethodVisibility[0]);
	CHECK_EQUAL(pelet::TokenClass::PRIVATE, Observer.MethodVisibility[3]);
	CHECK_VECTOR_SIZE(4, Observer.MethodIsStatic);
	CHECK_EQUAL(false, Observer.MethodIsStatic[0]);
	CHECK_EQUAL(true, Observer.MethodIsStatic[3]);
	CHECK_VECTOR_SIZE(4, Observer.MethodSignature);
	CHECK_UNISTR_EQUALS("public function __construct()", Observer.MethodSignature[0]);
	CHECK_UNISTR_EQUALS("public abstract function work()", Observer.MethodSignature[1]);
	CHECK_UNISTR_EQUALS("public function getName()", Observer.MethodSignature[2]);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("private static function setName($name)"), Observer.MethodSignature[3]);
	CHECK_VECTOR_SIZE(2, Observer.PropertyClassName);
	CHECK_UNISTR_EQUALS("UserClass", Observer.PropertyClassName[0]);
	CHECK_UNISTR_EQUALS("UserClass", Observer.PropertyClassName[1]);
	CHECK_VECTOR_SIZE(2, Observer.PropertyName);
	CHECK_UNISTR_EQUALS("$name", Observer.PropertyName[0]);
	CHECK_UNISTR_EQUALS("DEFAULT_NAME", Observer.PropertyName[1]);
	CHECK_VECTOR_SIZE(2, Observer.PropertyComment);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n\t * This is a the user's name\n\t * @var string\n\t */"), 
		Observer.PropertyComment[0]);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n\t * This is the default user name\n\t * @var string\n\t */"), 
		Observer.PropertyComment[1]);
	CHECK_VECTOR_SIZE(2, Observer.PropertyType);
	CHECK_UNISTR_EQUALS("string", Observer.PropertyType[0]);
	CHECK_UNISTR_EQUALS("string", Observer.PropertyType[1]);
	CHECK_VECTOR_SIZE(2, Observer.PropertyConsts);
	CHECK_EQUAL(false, Observer.PropertyConsts[0]);
	CHECK_EQUAL(true, Observer.PropertyConsts[1]);
	CHECK_VECTOR_SIZE(2, Observer.PropertyVisibility);
	CHECK_EQUAL(pelet::TokenClass::PRIVATE, Observer.PropertyVisibility[0]);
	CHECK_EQUAL(pelet::TokenClass::PUBLIC, Observer.PropertyVisibility[1]);
	CHECK_VECTOR_SIZE(2, Observer.PropertyIsStatic);
	CHECK_EQUAL(false, Observer.PropertyIsStatic[0]);
	CHECK_EQUAL(true, Observer.PropertyIsStatic[1]);	
}

TEST_FIXTURE(FullParser53TestClass, ScanFileShouldNotifyFunctionObserver) {
	std::string file = TestProjectDir + "test.php";
	Parser.SetFunctionObserver(&Observer);
	CHECK(Parser.ScanFile(file, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.FunctionName);
	CHECK_UNISTR_EQUALS("showUser", Observer.FunctionName[0]);
	CHECK_VECTOR_SIZE(1, Observer.FunctionComment);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n * This is a function comment\n * @return boolean\n */"), 
		Observer.FunctionComment[0]);
	CHECK_VECTOR_SIZE(1, Observer.FunctionSignature);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("function showUser($user)"), 
		Observer.FunctionSignature[0]);
	CHECK_VECTOR_SIZE(1, Observer.FunctionReturnType);
	CHECK_UNISTR_EQUALS("boolean", Observer.FunctionReturnType[0]);
}

TEST_FIXTURE(FullParser53TestClass, ScanFileShouldNotifyVariableObserver) {
	std::string file = TestProjectDir + "test.php";
	Parser.SetVariableObserver(&Observer);
	CHECK(Parser.ScanFile(file, LintResults));
	CHECK_VECTOR_SIZE(7, Observer.VariableName);
	CHECK_UNISTR_EQUALS("$blog", Observer.VariableName[0]);
	CHECK_UNISTR_EQUALS("$msg", Observer.VariableName[1]);
	CHECK_UNISTR_EQUALS("$anotherMsg", Observer.VariableName[2]);
	CHECK_UNISTR_EQUALS("$name", Observer.VariableName[3]);
	CHECK_UNISTR_EQUALS("$user", Observer.VariableName[4]);
	CHECK_UNISTR_EQUALS("$newUser", Observer.VariableName[5]);
	CHECK_UNISTR_EQUALS("$name", Observer.VariableName[6]);
	CHECK_VECTOR_SIZE(7, Observer.VariableClassName);
	CHECK_UNISTR_EQUALS("UserClass", Observer.VariableClassName[0]);
	CHECK_UNISTR_EQUALS("UserClass", Observer.VariableClassName[1]);
	CHECK_UNISTR_EQUALS("UserClass", Observer.VariableClassName[2]);
	CHECK_UNISTR_EQUALS("UserClass", Observer.VariableClassName[3]);
	CHECK_UNISTR_EQUALS("", Observer.VariableClassName[4]);
	CHECK_UNISTR_EQUALS("", Observer.VariableClassName[5]);
	CHECK_UNISTR_EQUALS("", Observer.VariableClassName[6]);
	CHECK_VECTOR_SIZE(7, Observer.VariableMethodName);
	CHECK_UNISTR_EQUALS("__construct", Observer.VariableMethodName[0]);
	CHECK_UNISTR_EQUALS("__construct", Observer.VariableMethodName[1]);
	CHECK_UNISTR_EQUALS("__construct", Observer.VariableMethodName[2]);
	CHECK_UNISTR_EQUALS("setName", Observer.VariableMethodName[3]);
	CHECK_UNISTR_EQUALS("showUser", Observer.VariableMethodName[4]);
	CHECK_UNISTR_EQUALS("showUser", Observer.VariableMethodName[5]);
	CHECK_UNISTR_EQUALS("showUser", Observer.VariableMethodName[6]);
	CHECK_VECTOR_SIZE(7, Observer.VariableTypes);
	CHECK_EQUAL(pelet::SymbolClass::OBJECT, Observer.VariableTypes[0]);
	CHECK_EQUAL(pelet::SymbolClass::PRIMITIVE, Observer.VariableTypes[1]);

	// cannot resolve variables that are assigned 
	CHECK_EQUAL(pelet::SymbolClass::OBJECT, Observer.VariableTypes[2]);
	CHECK_EQUAL(pelet::SymbolClass::PRIMITIVE, Observer.VariableTypes[3]);
	CHECK_EQUAL(pelet::SymbolClass::PRIMITIVE, Observer.VariableTypes[4]);
	CHECK_EQUAL(pelet::SymbolClass::OBJECT, Observer.VariableTypes[5]);
	CHECK_EQUAL(pelet::SymbolClass::OBJECT, Observer.VariableTypes[6]);
	CHECK_VECTOR_SIZE(7, Observer.VariableChainList);
	CHECK_UNISTR_EQUALS("Blog", Observer.VariableChainList[0]);
	CHECK_UNISTR_EQUALS("", Observer.VariableChainList[1]);
	CHECK_UNISTR_EQUALS("$msg", Observer.VariableChainList[2]);
	CHECK_UNISTR_EQUALS("", Observer.VariableChainList[3]);
	CHECK_UNISTR_EQUALS("", Observer.VariableChainList[4]);
	CHECK_UNISTR_EQUALS("factory()", Observer.VariableChainList[5]);
	CHECK_UNISTR_EQUALS("$user->getName()", Observer.VariableChainList[6]);
}

TEST_FIXTURE(Parser53TestClass, ScanStringWithAllPossibleClassTypes) {
	Parser.SetClassObserver(&Observer);
	UnicodeString code = _U(
		"interface Runnable {}\n"
		"interface MyRunnable extends Runnable {} \n"
		"abstract class AbstractRunnable implements Runnable, ArrayAccess {}\n"
		"class TrueRunnable extends AbstractRunnable implements MyRunnable {} \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(4, Observer.ClassName);
	CHECK_UNISTR_EQUALS("Runnable", Observer.ClassName[0]);
	CHECK_UNISTR_EQUALS("MyRunnable", Observer.ClassName[1]);
	CHECK_UNISTR_EQUALS("AbstractRunnable", Observer.ClassName[2]);
	CHECK_UNISTR_EQUALS("TrueRunnable", Observer.ClassName[3]);
	CHECK_VECTOR_SIZE(4, Observer.ClassSignature);
	CHECK_UNISTR_EQUALS("interface Runnable", Observer.ClassSignature[0]);
	CHECK_UNISTR_EQUALS("interface MyRunnable extends Runnable", Observer.ClassSignature[1]);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("abstract class AbstractRunnable implements Runnable, ArrayAccess"), Observer.ClassSignature[2]);
	CHECK_UNISTR_EQUALS("class TrueRunnable extends AbstractRunnable implements MyRunnable", Observer.ClassSignature[3]);
}

TEST_FIXTURE(Parser53TestClass, ScanStringWithAllPossibleClassMemberTypes) {
	Parser.SetClassMemberObserver(&Observer);
	UnicodeString code = _U(
		"interface Runnable { const MSG = 'const'; abstract function run();}\n"
		"abstract class MyRunnable implements Runnable { \n"
		"	function run() {} \n"

		// test the reference return
		"	private function & myPrivate() {}\n"
		"	private $myProp;\n"
		"	private static $myStaticProp; \n"
		"	protected $protectedVar; \n"
		"	final private $constFinal = 44;\n"
		"	var $publicVar;\n"
		"} \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(3, Observer.MethodClassName);
	CHECK_UNISTR_EQUALS("Runnable", Observer.MethodClassName[0]);
	CHECK_UNISTR_EQUALS("MyRunnable", Observer.MethodClassName[1]);
	CHECK_UNISTR_EQUALS("MyRunnable", Observer.MethodClassName[2]);
	CHECK_UNISTR_EQUALS("run", Observer.MethodName[0]);
	CHECK_UNISTR_EQUALS("run", Observer.MethodName[1]);
	CHECK_UNISTR_EQUALS("myPrivate", Observer.MethodName[2]);
	CHECK_VECTOR_SIZE(3, Observer.MethodSignature);
	CHECK_UNISTR_EQUALS("public abstract function run()", Observer.MethodSignature[0]);
	CHECK_UNISTR_EQUALS("public function run()", Observer.MethodSignature[1]);
	CHECK_UNISTR_EQUALS("private function& myPrivate()", Observer.MethodSignature[2]);
	CHECK_VECTOR_SIZE(6, Observer.PropertyClassName);
	CHECK_UNISTR_EQUALS("Runnable", Observer.PropertyClassName[0]);
	CHECK_UNISTR_EQUALS("MyRunnable", Observer.PropertyClassName[1]);
	CHECK_UNISTR_EQUALS("MyRunnable", Observer.PropertyClassName[2]);
	CHECK_UNISTR_EQUALS("MyRunnable", Observer.PropertyClassName[3]);
	CHECK_UNISTR_EQUALS("MyRunnable", Observer.PropertyClassName[4]);
	CHECK_UNISTR_EQUALS("MyRunnable", Observer.PropertyClassName[5]);
	CHECK_VECTOR_SIZE(6, Observer.PropertyName);
	CHECK_UNISTR_EQUALS("MSG", Observer.PropertyName[0]);
	CHECK_UNISTR_EQUALS("$myProp", Observer.PropertyName[1]);
	CHECK_UNISTR_EQUALS("$myStaticProp", Observer.PropertyName[2]);
	CHECK_UNISTR_EQUALS("$protectedVar", Observer.PropertyName[3]);
	CHECK_UNISTR_EQUALS("$constFinal", Observer.PropertyName[4]);
	CHECK_UNISTR_EQUALS("$publicVar", Observer.PropertyName[5]);
	CHECK_VECTOR_SIZE(6,  Observer.PropertyConsts);
	CHECK(Observer.PropertyConsts[0]);
	CHECK_VECTOR_SIZE(6, Observer.PropertyIsStatic);
	CHECK(Observer.PropertyConsts[0]);
}

TEST_FIXTURE(Parser53TestClass, ScanStringWithAllPossibleVariableTypes) {
	Parser.SetVariableObserver(&Observer);

	// test a global variable
	// a function parameter with a type hint
	// a variable in a function 
	// a variable with a long method chain
	// a foreach($arr as $k => $v) loop
	// a list($var1, $var2, $var3) call
	// a catch block
	// a global declaration
	// a static declaration
	UnicodeString code = _U(
		"$glob = new Globals();\n"
		"function workFunc(Globals $srcGlobal) {\n"
		"	$local = $srcGlobal;\n"
		"	$localName = $srcGlobal->name;\n"
		"   foreach($local as $k => $v) {}\n"
		"   list($item1, $item2, $item3) = $local;\n"
		"   try { \n"
		"     $glob = new Globals(); \n"
		"   } catch (SpecificException $specificException) {\n"
		"		echo 'exception';\n"
		"   } catch (Exception $baseException) {\n"
		"		echo 'exception';\n"
		"   }\n"
		"   global $glob; \n"
		"   static $stat = 1; \n"
		"}"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(14, Observer.VariableMethodName);
	CHECK_UNISTR_EQUALS("", Observer.VariableMethodName[0]);
	for (size_t i = 1; i < 14; ++i) {
		CHECK_UNISTR_EQUALS("workFunc", Observer.VariableMethodName[i]);
	}
	CHECK_VECTOR_SIZE(14, Observer.VariableName);
	CHECK_UNISTR_EQUALS("$glob", Observer.VariableName[0]);
	CHECK_UNISTR_EQUALS("$srcGlobal", Observer.VariableName[1]);
	CHECK_UNISTR_EQUALS("$local", Observer.VariableName[2]);
	CHECK_UNISTR_EQUALS("$localName", Observer.VariableName[3]);
	CHECK_UNISTR_EQUALS("$k", Observer.VariableName[4]);
	CHECK_UNISTR_EQUALS("$v", Observer.VariableName[5]);
	CHECK_UNISTR_EQUALS("$item1", Observer.VariableName[6]);
	CHECK_UNISTR_EQUALS("$item2", Observer.VariableName[7]);
	CHECK_UNISTR_EQUALS("$item3", Observer.VariableName[8]);
	CHECK_UNISTR_EQUALS("$glob", Observer.VariableName[9]);
	CHECK_UNISTR_EQUALS("$specificException", Observer.VariableName[10]);
	CHECK_UNISTR_EQUALS("$baseException", Observer.VariableName[11]);
	CHECK_UNISTR_EQUALS("$glob", Observer.VariableName[12]);
	CHECK_UNISTR_EQUALS("$stat", Observer.VariableName[13]);
	CHECK_VECTOR_SIZE(14, Observer.VariableChainList);
	CHECK_UNISTR_EQUALS("Globals", Observer.VariableChainList[0]);
	CHECK_UNISTR_EQUALS("Globals", Observer.VariableChainList[1]);
	CHECK_UNISTR_EQUALS("$srcGlobal", Observer.VariableChainList[2]);
	CHECK_UNISTR_EQUALS("$srcGlobal->name", Observer.VariableChainList[3]);
	CHECK_UNISTR_EQUALS("", Observer.VariableChainList[4]);
	CHECK_UNISTR_EQUALS("", Observer.VariableChainList[5]);
	CHECK_UNISTR_EQUALS("", Observer.VariableChainList[6]);
	CHECK_UNISTR_EQUALS("", Observer.VariableChainList[7]);
	CHECK_UNISTR_EQUALS("", Observer.VariableChainList[8]);
	CHECK_UNISTR_EQUALS("Globals", Observer.VariableChainList[9]);
	CHECK_UNISTR_EQUALS("SpecificException", Observer.VariableChainList[10]);
	CHECK_UNISTR_EQUALS("Exception", Observer.VariableChainList[11]);
	CHECK_UNISTR_EQUALS("", Observer.VariableChainList[12]);
	CHECK_UNISTR_EQUALS("", Observer.VariableChainList[13]);
}

TEST_FIXTURE(Parser53TestClass, ShouldUsePhpDocAnnotations) {
	Parser.SetClassMemberObserver(&Observer);
	Parser.SetVariableObserver(&Observer);

	// test all the PHPDoc stuff
	// @property, @property-read, @property-write, @method, and @var
	// also @param and @return
	UnicodeString code = _U(
		"/**\n"
		" * This is a class that implements the 'magic' methods\n"
		" *\n"
		" * @property string $nameString a string version of a name\n"
		" * @property-read NameClass $Name the name in a object form\n"
		" * @property-write NameClass $WritableName version of the name that can be set\n"
		" * @method Integer getAge() getAge(int $int1, int $int2) returns the person's age\n"
		" */\n"
		"class Person {\n"
		"\n"
		"	/** @var CName */\n"
		"	private $FullName;\n"
		"\n"
		"	/**\n"
		"	 * @param string $name \n"
		"	 * @param Integer $arg1 \n"
		"	 * @param Integer $arg2 \n"
		"	 * @return string\n"
		"	 */\n"
		"	function __call($name, $arg1, $arg2) {\n"
		"		/* @var $newName NameClass */\n"
		"		$newName = factoryName();\n"
		"		return $newName->toString();\n"
		"	}\n"
		"}"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(2, Observer.MethodClassName);
	CHECK_UNISTR_EQUALS("Person", Observer.MethodClassName[0]);
	CHECK_UNISTR_EQUALS("Person", Observer.MethodClassName[1]);
	CHECK_UNISTR_EQUALS("getAge", Observer.MethodName[0]);
	CHECK_UNISTR_EQUALS("__call", Observer.MethodName[1]);
	CHECK_VECTOR_SIZE(2, Observer.MethodReturnType);
	CHECK_UNISTR_EQUALS("Integer", Observer.MethodReturnType[0]);
	CHECK_UNISTR_EQUALS("string", Observer.MethodReturnType[1]);
	CHECK_VECTOR_SIZE(2, Observer.MethodSignature);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("public function getAge(int $int1, int $int2)"), Observer.MethodSignature[0]);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("public function __call($name, $arg1, $arg2)"), Observer.MethodSignature[1]);
	CHECK_VECTOR_SIZE(4, Observer.PropertyClassName);
	CHECK_UNISTR_EQUALS("Person", Observer.PropertyClassName[0]);
	CHECK_UNISTR_EQUALS("Person", Observer.PropertyClassName[1]);
	CHECK_UNISTR_EQUALS("Person", Observer.PropertyClassName[2]);
	CHECK_UNISTR_EQUALS("Person", Observer.PropertyClassName[3]);
	CHECK_VECTOR_SIZE(4, Observer.PropertyName);
	CHECK_UNISTR_EQUALS("$nameString", Observer.PropertyName[0]);
	CHECK_UNISTR_EQUALS("$Name", Observer.PropertyName[1]);
	CHECK_UNISTR_EQUALS("$WritableName", Observer.PropertyName[2]);
	CHECK_UNISTR_EQUALS("$FullName", Observer.PropertyName[3]);
	CHECK_VECTOR_SIZE(4, Observer.PropertyType);
	CHECK_UNISTR_EQUALS("string", Observer.PropertyType[0]);
	CHECK_UNISTR_EQUALS("NameClass", Observer.PropertyType[1]);
	CHECK_UNISTR_EQUALS("NameClass", Observer.PropertyType[2]);
	CHECK_UNISTR_EQUALS("CName", Observer.PropertyType[3]);
	
	// TODO should be 4: 3 function parameters + newName (should not get duplicated)
	CHECK_VECTOR_SIZE(5, Observer.VariableName);
	CHECK_UNISTR_EQUALS("$name", Observer.VariableName[0]);
	CHECK_UNISTR_EQUALS("$arg1", Observer.VariableName[1]);
	CHECK_UNISTR_EQUALS("$arg2", Observer.VariableName[2]);
	CHECK_UNISTR_EQUALS("$newName", Observer.VariableName[3]);
	CHECK_UNISTR_EQUALS("$newName", Observer.VariableName[4]);
	CHECK_VECTOR_SIZE(5, Observer.VariableChainList);
	CHECK_UNISTR_EQUALS("factoryName()", Observer.VariableChainList[4]);
	
	// TODO; this is a bug the assertions fail
	//CHECK_VECTOR_SIZE(5, Observer.VariablePhpDocType);
	//CHECK_UNISTR_EQUALS("Integer", Observer.VariablePhpDocType[0]);
	//CHECK_UNISTR_EQUALS("Integer", Observer.VariablePhpDocType[1]);
	//CHECK_UNISTR_EQUALS("NameClass", Observer.VariablePhpDocType[2]);
}

TEST_FIXTURE(Parser53TestClass, MethodEndPos) {
	Parser.SetClassObserver(&Observer);
	Parser.SetClassMemberObserver(&Observer);
	Parser.SetFunctionObserver(&Observer);
	UnicodeString code = _U(
		"class MyClass {\n"     //16
		"\n"                    // 1
		"function work() {\n"   //18
		"   \n"                 // 4
		"}\n"
		"}"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK(!Observer.MethodEndPos.empty());
	CHECK_EQUAL((16 + 1 + 18 + 4), Observer.MethodEndPos[0]);
}

TEST_FIXTURE(Parser53TestClass, IncludeWithStringConstant) {
	Parser.SetClassObserver(&Observer);
	UnicodeString code = _U(
		"require ('db_functions_0.php');\n"
		"require_once ('db_functions_1.php');\n"
		"include 'db_functions_2.php';\n"
		"include_once 'db_functions_3.php';\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(4, Observer.IncludeFile);
	CHECK_UNISTR_EQUALS("db_functions_0.php", Observer.IncludeFile[0]);
	CHECK_UNISTR_EQUALS("db_functions_1.php", Observer.IncludeFile[1]);
	CHECK_UNISTR_EQUALS("db_functions_2.php", Observer.IncludeFile[2]);
	CHECK_UNISTR_EQUALS("db_functions_3.php", Observer.IncludeFile[3]);
}

TEST_FIXTURE(Parser53TestClass, IncludeWithExpression) {
	Parser.SetClassObserver(&Observer);
	UnicodeString code = _U(
		"@include($file);\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.IncludeFile);

	// parser cannot resolve include file at parse time
	CHECK_UNISTR_EQUALS("", Observer.IncludeFile[0]);
}

TEST_FIXTURE(Parser53TestClass, IncludeWithMagicConstant) {
	Parser.SetClassObserver(&Observer);
	UnicodeString code = _U(
		"include (__DIR__ . '/file.php');\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.IncludeFile);

	// parser cannot resolve include file at parse time
	CHECK_UNISTR_EQUALS("", Observer.IncludeFile[0]);

}

TEST_FIXTURE(Parser53TestClass, ClassLineNumber) {
	Parser.SetClassObserver(&Observer);
	Parser.SetClassMemberObserver(&Observer);
	UnicodeString code = _U(
		"/**\n"
		" * my class \n"
		" */\n"
		"class MyClass {\n"
		"	function \n"
		"      myFunc() {\n"
		"      echo 'hello world';\n"
		"   }\n"
		"}\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.ClassLineNumber);

	// for now method lineNumber is the line after the class declaration is read
	CHECK_EQUAL(4, Observer.ClassLineNumber[0]);
}

TEST_FIXTURE(Parser53TestClass, MethodLineNumber) {
	Parser.SetClassObserver(&Observer);
	Parser.SetClassMemberObserver(&Observer);
	UnicodeString code = _U(
		"class MyClass {\n"
		"	function \n"
		"      myFunc() {\n"
		"      echo 'hello world';\n"
		"   }\n"
		"}\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.MethodLineNumber);

	// for now method lineNumber is the line after all function params are read
	CHECK_EQUAL(3, Observer.MethodLineNumber[0]);
}

TEST_FIXTURE(Parser53TestClass, PropertyLineNumber) {
	Parser.SetClassObserver(&Observer);
	Parser.SetClassMemberObserver(&Observer);
	UnicodeString code = _U(
		"class MyClass {\n"
		"	var $name;\n"
		"}\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.PropertyLineNumber);

	// for now property line number is the line after the entire property declaration
	// has been read
	CHECK_EQUAL(2, Observer.PropertyLineNumber[0]);
}

TEST_FIXTURE(Parser53TestClass, IncludeLineNumber) {
	Parser.SetClassObserver(&Observer);
	UnicodeString code = _U(
		"require 'db_functions_0.php';\n"             // line 1
		"require_once 'db_functions_1.php';\n"
		"include 'db_functions_2.php';\n"
		"\n"
		"\n"                                          // line 5
		"include_once \n"
		" 'db_functions_3.php';\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(4, Observer.IncludeFile);
	CHECK_VECTOR_SIZE(4, Observer.IncludeLineNumber);
	CHECK_EQUAL(1, Observer.IncludeLineNumber[0]);
	CHECK_EQUAL(2, Observer.IncludeLineNumber[1]);
	CHECK_EQUAL(3, Observer.IncludeLineNumber[2]);
	CHECK_EQUAL(7, Observer.IncludeLineNumber[3]);
}

TEST_FIXTURE(Parser53TestClass, LintFileShouldReturnTrueOnValidFile) {
	std::string file = TestProjectDir + "test.php";
	CHECK(Parser.LintFile(file, LintResults));
}

TEST_FIXTURE(Parser53TestClass, LintFileShouldReturnTrueWhenFileIsOnlyHtml) {
	CreateFixtureFile("testpure.php",
			"<html> </html>"
	);
	std::string file = TestProjectDir + "testpure.php";
	CHECK(Parser.LintFile(file, LintResults));
}

TEST_FIXTURE(Parser53TestClass, LintFileShouldReturnTrueWhenFileHasHtmlWithPhp) {
	CreateFixtureFile("testpure.php",
			"<?php\n"
			"\techo 'Today is ...'; \n"
			"?>\n"
			"<br />\n"
			"<?php\n"
			"\t$str = <<<EOD\n"
			"Example of string\n"
			"spanning multiple lines\n"
			"using heredoc syntax.\n"
			"EOD;\n"
			"\techo $str;\n"
			"?>\n"
			"?>\n"
			"</body>\n"
			"</html>\n"
	);
	std::string file = TestProjectDir + "testpure.php";
	CHECK(Parser.LintFile(file, LintResults));
}

TEST_FIXTURE(Parser53TestClass, LintFileShouldReturnTrueWhenPhpHasCommentsOnly) {
	CreateFixtureFile("testpure.php",
			"<?php\n"
			"/* this is a comment\n"
			" */\n"
			"?>\n"
			"<html>\n"
			"<body>\n"
			"</body>\n"
			"</html>\n"
	);
	std::string file = TestProjectDir + "testpure.php";
	CHECK(Parser.LintFile(file, LintResults));
}

TEST_FIXTURE(Parser53TestClass, LintStringShouldReturnFalseOnBadCode) {
	UnicodeString code = _U("$'gag's = 'hello' \"again\" $not gaging;");
	CHECK_EQUAL(false, Parser.LintString(code, LintResults));
	CHECK(LintResults.Error.length() > 0);
	CHECK(LintResults.LineNumber > 0);
}

TEST_FIXTURE(Parser53TestClass, LintFileShouldReturnFalseOnBadCode) {
	CreateFixtureFile("testpure.php", 
		"<?php $'gag's = 'hello' \"again\" $not gaging;");
	std::string filename = TestProjectDir + "testpure.php";
	UnicodeString ufilename = UNICODE_STRING_SIMPLE("testpure.php");
	int charCount = filename.length();
	UErrorCode status = U_ZERO_ERROR;
	UnicodeString uni;
	int actualCount = 0;
	u_strFromUTF8(ufilename.getBuffer(charCount + 0), charCount + 0, &actualCount, filename.c_str(), charCount, &status);
	if (U_SUCCESS(status)) {
		ufilename.releaseBuffer(actualCount + 0);	
	}
	else {
		ufilename.releaseBuffer(0);
	}

	FILE* file = fopen(filename.c_str(), "rb");
	CHECK_EQUAL(false, Parser.LintFile(file, ufilename, LintResults));
	CHECK(LintResults.Error.length() > 0);
	CHECK(LintResults.LineNumber > 0);
	CHECK_EQUAL(ufilename, LintResults.UnicodeFilename);
}

TEST_FIXTURE(Parser53TestClass, ScanFileShouldReturnFalseOnBadCode) {
	CreateFixtureFile("testpure.php", 
		"<?php $'gag's = 'hello' \"again\" $not gaging;");
	std::string filename = TestProjectDir + "testpure.php";
	UnicodeString ufilename = UNICODE_STRING_SIMPLE("testpure.php");
	int charCount = filename.length();
	UErrorCode status = U_ZERO_ERROR;
	UnicodeString uni;
	int actualCount = 0;
	u_strFromUTF8(ufilename.getBuffer(charCount + 0), charCount + 0, &actualCount, filename.c_str(), charCount, &status);
	if (U_SUCCESS(status)) {
		ufilename.releaseBuffer(actualCount + 0);	
	}
	else {
		ufilename.releaseBuffer(0);
	}

	FILE* file = fopen(filename.c_str(), "rb");
	CHECK_EQUAL(false, Parser.ScanFile(file, ufilename, LintResults));
	fclose(file);
	CHECK(LintResults.Error.length() > 0);
	CHECK(LintResults.LineNumber > 0);
	CHECK_EQUAL(ufilename, LintResults.UnicodeFilename);
}

TEST_FIXTURE(Parser53TestClass, ParseVariableExpression) {
	UnicodeString code = _U("$variable");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);
	CHECK_UNISTR_EQUALS("$variable", symbol.Lexeme);
}

TEST_FIXTURE(Parser53TestClass, ParseObjectExpression) {
	UnicodeString code = _U("$variable->prop");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);
	CHECK_UNISTR_EQUALS("$variable", symbol.Lexeme);
	CHECK_EQUAL((size_t)2, symbol.ChainList.size());
	if ((size_t)2 == symbol.ChainList.size()) {
		CHECK_UNISTR_EQUALS("$variable", symbol.ChainList[0]);	
		CHECK_UNISTR_EQUALS("->prop", symbol.ChainList[1]);	
	}
}

TEST_FIXTURE(Parser53TestClass, ParseObjectWithoutPropertyExpression) {

	// if an expression ends with the operator, still want to add it to the
	// chain list so that during code completion we can trigger lookup
	// of class members
	UnicodeString code = _U("$obj->");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);
	CHECK_UNISTR_EQUALS("$obj", symbol.Lexeme);
	CHECK_EQUAL((size_t)2, symbol.ChainList.size());
	if ((size_t)2 == symbol.ChainList.size()) {
		CHECK_UNISTR_EQUALS("$obj", symbol.ChainList[0]);	
		CHECK_UNISTR_EQUALS("->", symbol.ChainList[1]);	
	}
}

TEST_FIXTURE(Parser53TestClass, ParseStaticWithoutPropertyExpression) {

	// if an expression ends with the operator, still want to add it to the
	// chain list so that during code completion we can trigger lookup
	// of class members
	UnicodeString code = _U("MyClass::");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);
	CHECK_UNISTR_EQUALS("MyClass", symbol.Lexeme);
	CHECK_EQUAL((size_t)2, symbol.ChainList.size());
	if ((size_t)2 == symbol.ChainList.size()) {
		CHECK_UNISTR_EQUALS("MyClass", symbol.ChainList[0]);	
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("::"), symbol.ChainList[1]);	
	}
}

TEST_FIXTURE(Parser53TestClass, ParseStaticExpression) {
	UnicodeString code = _U("MyClass::$DEFAULT");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);
	CHECK_UNISTR_EQUALS("MyClass", symbol.Lexeme);
	CHECK_VECTOR_SIZE(2, symbol.ChainList);
	CHECK_UNISTR_EQUALS("MyClass", symbol.ChainList[0]);	
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("::$DEFAULT"), symbol.ChainList[1]);	
}

TEST_FIXTURE(Parser53TestClass, ParseConstantExpression) {
	UnicodeString code = _U("MyClass::PI;");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);
	CHECK_UNISTR_EQUALS("MyClass", symbol.Lexeme);
	CHECK_EQUAL((size_t)2, symbol.ChainList.size());
	if ((size_t)2 == symbol.ChainList.size()) {
		CHECK_UNISTR_EQUALS("MyClass", symbol.ChainList[0]);	
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("::PI"), symbol.ChainList[1]);	
	}
}

TEST_FIXTURE(Parser53TestClass, ParseChainExpression) {
	UnicodeString code = _U("$variable->func1()->prop2->func3()->prop4");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);
	CHECK_UNISTR_EQUALS("$variable", symbol.Lexeme);
	CHECK_EQUAL((size_t)5, symbol.ChainList.size());
	if ((size_t)5 == symbol.ChainList.size()) {
		CHECK_UNISTR_EQUALS("$variable", symbol.ChainList[0]);
		CHECK_UNISTR_EQUALS("->func1()", symbol.ChainList[1]);
		CHECK_UNISTR_EQUALS("->prop2", symbol.ChainList[2]);
		CHECK_UNISTR_EQUALS("->func3()", symbol.ChainList[3]);
		CHECK_UNISTR_EQUALS("->prop4", symbol.ChainList[4]);
	}
}

TEST_FIXTURE(Parser53TestClass, ParseChainExpressionStartsWithFunction) {
	UnicodeString code = _U("func1()->prop2->prop4");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);
	CHECK_UNISTR_EQUALS("", symbol.Lexeme);
	CHECK_EQUAL((size_t)3, symbol.ChainList.size());
	if ((size_t)3 == symbol.ChainList.size()) {
		CHECK_UNISTR_EQUALS("func1()", symbol.ChainList[0]);
		CHECK_UNISTR_EQUALS("->prop2", symbol.ChainList[1]);
		CHECK_UNISTR_EQUALS("->prop4", symbol.ChainList[2]);
	}
}

TEST_FIXTURE(Parser53TestClass, ParseChainExpressionWithFunctionArguments) {

	// function args $a, $b should be ignored here
	UnicodeString code = _U("$this->propA->func1($a, $b)->prop2->prop4");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);
	CHECK_UNISTR_EQUALS("$this", symbol.Lexeme);
	CHECK_EQUAL((size_t)5, symbol.ChainList.size());
	if ((size_t)5 == symbol.ChainList.size()) {
		CHECK_UNISTR_EQUALS("$this", symbol.ChainList[0]);
		CHECK_UNISTR_EQUALS("->propA", symbol.ChainList[1]);
		CHECK_UNISTR_EQUALS("->func1()", symbol.ChainList[2]);
		CHECK_UNISTR_EQUALS("->prop2", symbol.ChainList[3]);
		CHECK_UNISTR_EQUALS("->prop4", symbol.ChainList[4]);
	}
}

TEST_FIXTURE(Parser53TestClass, ParseChainExpressionWithChainThatStartsWithMethodArguments) {

	// function args $a, $b should be ignored here
	UnicodeString code = _U("$this->func1($a, $b)->propA->prop2->prop4");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);
	CHECK_UNISTR_EQUALS("$this", symbol.Lexeme);
	CHECK_EQUAL((size_t)5, symbol.ChainList.size());
	if ((size_t)5 == symbol.ChainList.size()) {
		CHECK_UNISTR_EQUALS("$this", symbol.ChainList[0]);
		CHECK_UNISTR_EQUALS("->func1()", symbol.ChainList[1]);
		CHECK_UNISTR_EQUALS("->propA", symbol.ChainList[2]);
		CHECK_UNISTR_EQUALS("->prop2", symbol.ChainList[3]);
		CHECK_UNISTR_EQUALS("->prop4", symbol.ChainList[4]);
	}
}

TEST_FIXTURE(Parser53TestClass, ParseChainExpressionWithChainThatStartsWithFunctionArguments) {

	// function args $a, $b should be ignored here
	UnicodeString code = _U("func1($a, $b)->propA->func2($c)->prop4");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);

	// lexeme empty because function call is first in the chain
	CHECK_UNISTR_EQUALS("", symbol.Lexeme);
	CHECK_EQUAL((size_t)4, symbol.ChainList.size());
	if ((size_t)4 == symbol.ChainList.size()) {
		CHECK_UNISTR_EQUALS("func1()", symbol.ChainList[0]);
		CHECK_UNISTR_EQUALS("->propA", symbol.ChainList[1]);
		CHECK_UNISTR_EQUALS("->func2()", symbol.ChainList[2]);
		CHECK_UNISTR_EQUALS("->prop4", symbol.ChainList[3]);
	}
}

TEST_FIXTURE(Parser53TestClass, ParseChainExpressionWithWhitespace) {
	UnicodeString code = _U("$propA->time->time\n->");
	pelet::SymbolClass symbol;
	Parser.ParseExpression(code, symbol);

	// lexeme empty because function call is first in the chain
	CHECK_UNISTR_EQUALS("$propA", symbol.Lexeme);
	CHECK_EQUAL((size_t)4, symbol.ChainList.size());
	if ((size_t)4 == symbol.ChainList.size()) {
		CHECK_UNISTR_EQUALS("$propA", symbol.ChainList[0]);
		CHECK_UNISTR_EQUALS("->time", symbol.ChainList[1]);
		CHECK_UNISTR_EQUALS("->time", symbol.ChainList[2]);
		CHECK_UNISTR_EQUALS("->", symbol.ChainList[3]);
	}
}

}