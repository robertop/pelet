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

class Parser53ExpressionTestClass {

public:
	
	pelet::ParserClass Parser;
	pelet::ScopeClass Scope;
	pelet::VariableClass ParsedVar;
	
	Parser53ExpressionTestClass() 
		: Parser()
		, Scope() 
		, ParsedVar(Scope) {
		Parser.SetVersion(pelet::PHP_53);
	}
};

SUITE(Parser53TestClass) {

TEST_FIXTURE(FullParser53TestClass, ScanFileShouldNotifyClassObserver) {
		std::string file = TestProjectDir + "test.php";
		Parser.SetClassObserver(&Observer);
		CHECK(Parser.ScanFile(file, LintResults));
		CHECK_VECTOR_SIZE(1, Observer.ClassName);
		CHECK_UNISTR_EQUALS("UserClass", Observer.ClassName[0]);
		CHECK_VECTOR_SIZE(1, Observer.ClassNamespace);
		CHECK_UNISTR_EQUALS("\\", Observer.ClassNamespace[0]);
		CHECK_VECTOR_SIZE(1, Observer.ClassSignature);
		CHECK_UNISTR_EQUALS("abstract class UserClass", Observer.ClassSignature[0]);
		CHECK_VECTOR_SIZE(1, Observer.ClassComment);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n * This is a class comment\n */"), Observer.ClassComment[0]);			
		CHECK_VECTOR_SIZE(1, Observer.DefinedName);
		CHECK_UNISTR_EQUALS("MAX_TIME", Observer.DefinedName[0]);		
		CHECK_VECTOR_SIZE(1, Observer.DefinedValue);
		CHECK_UNISTR_EQUALS("5000", Observer.DefinedValue[0]);		
		CHECK_VECTOR_SIZE(1, Observer.DefinedComment);
		CHECK_UNISTR_EQUALS("/**\n * This is a define comment\n */", Observer.DefinedComment[0]);
		CHECK_UNISTR_EQUALS("\\", Observer.DefinedNamespaceName[0]);
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

	CHECK_VECTOR_SIZE(4, Observer.MethodClassNamespace);
	CHECK_UNISTR_EQUALS("\\", Observer.MethodClassNamespace[0]);
	CHECK_UNISTR_EQUALS("\\", Observer.MethodClassNamespace[1]);
	CHECK_UNISTR_EQUALS("\\", Observer.MethodClassNamespace[2]);
	CHECK_UNISTR_EQUALS("\\", Observer.MethodClassNamespace[3]);

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
	CHECK_VECTOR_SIZE(7, Observer.VariableExpressionTypes);
	CHECK_EQUAL(pelet::ExpressionClass::NEW_CALL, Observer.VariableExpressionTypes[0]);
	CHECK_EQUAL(pelet::ExpressionClass::SCALAR, Observer.VariableExpressionTypes[1]);

	// cannot resolve variables that are assigned 
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, Observer.VariableExpressionTypes[2]);
	CHECK_EQUAL(pelet::ExpressionClass::UNKNOWN, Observer.VariableExpressionTypes[3]);
	CHECK_EQUAL(pelet::ExpressionClass::UNKNOWN, Observer.VariableExpressionTypes[4]);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, Observer.VariableExpressionTypes[5]);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, Observer.VariableExpressionTypes[6]);
	CHECK_VECTOR_SIZE(7, Observer.VariableExpressionChainList);
	CHECK_UNISTR_EQUALS("Blog", Observer.VariableExpressionChainList[0]);
	CHECK_UNISTR_EQUALS("created a new blog", Observer.VariableExpressionChainList[1]);
	CHECK_UNISTR_EQUALS("$msg", Observer.VariableExpressionChainList[2]);
	CHECK_UNISTR_EQUALS("", Observer.VariableExpressionChainList[3]);
	CHECK_UNISTR_EQUALS("", Observer.VariableExpressionChainList[4]);
	CHECK_UNISTR_EQUALS("factory()", Observer.VariableExpressionChainList[5]);
	CHECK_UNISTR_EQUALS("$user->getName()", Observer.VariableExpressionChainList[6]);
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

TEST_FIXTURE(Parser53TestClass, ScanStringWithAllDefinesWithExpressions) {
	Parser.SetClassObserver(&Observer);
	UnicodeString code = _U(
		"define('MAX_TIME', 3 * 60);\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.DefinedName);
	CHECK_VECTOR_SIZE(1, Observer.DefinedNamespaceName);
	CHECK_UNISTR_EQUALS("MAX_TIME", Observer.DefinedName[0]);
	CHECK_UNISTR_EQUALS("\\", Observer.DefinedNamespaceName[0]);
}

TEST_FIXTURE(Parser53TestClass, ScanStringWithClassesWithNamespaces) {
	Parser.SetClassObserver(&Observer);
	UnicodeString code = _U(
		"namespace First;\n"
		"use Symfony\\Request as sfRequest;\n"
		"interface Runnable {}\n"
		"interface MyRunnable extends Runnable {} \n"
		"abstract class AbstractRunnable implements Runnable, \\ArrayAccess {}\n"
		"class TrueRunnable extends AbstractRunnable implements MyRunnable {} \n"
		"class MyRequest extends sfRequest {} \n"
		"const MY_CONST = 1;\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(5, Observer.ClassName);
	CHECK_UNISTR_EQUALS("Runnable", Observer.ClassName[0]);
	CHECK_UNISTR_EQUALS("MyRunnable", Observer.ClassName[1]);
	CHECK_UNISTR_EQUALS("AbstractRunnable", Observer.ClassName[2]);
	CHECK_UNISTR_EQUALS("TrueRunnable", Observer.ClassName[3]);
	CHECK_VECTOR_SIZE(5, Observer.ClassSignature);
	CHECK_UNISTR_EQUALS("interface Runnable", Observer.ClassSignature[0]);

	// check that signature resolves unqualifed names to the declared namespace
	CHECK_UNISTR_EQUALS("interface MyRunnable extends \\First\\Runnable", Observer.ClassSignature[1]);
	
	// check that signature leaves fully qualified classes alone
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("abstract class AbstractRunnable implements \\First\\Runnable, \\ArrayAccess"), Observer.ClassSignature[2]);

	// check the implements code path too
	CHECK_UNISTR_EQUALS("class TrueRunnable extends \\First\\AbstractRunnable implements \\First\\MyRunnable", Observer.ClassSignature[3]);

	// check that signature uses the imported "use" namespaces
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("class MyRequest extends \\Symfony\\Request"), Observer.ClassSignature[4]);
	
	// chec namespaced constants
	CHECK_VECTOR_SIZE(1, Observer.DefinedNamespaceName);
	CHECK_UNISTR_EQUALS("\\First", Observer.DefinedNamespaceName[0]);
	CHECK_VECTOR_SIZE(1, Observer.DefinedName);
	CHECK_UNISTR_EQUALS("MY_CONST", Observer.DefinedName[0]);
}

TEST_FIXTURE(Parser53TestClass, ScanStringWithClassesWithMultipleNamespaces) {
	Parser.SetClassObserver(&Observer);
	UnicodeString code = _U(
		"namespace Second {\n"
		"class SecClass {}\n"
		"}"
		"namespace First\\Child { \n"
		"use Second; \n"
		"class OtherClass { }\n"
		"}"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(2, Observer.ClassName);
	CHECK_UNISTR_EQUALS("SecClass", Observer.ClassName[0]);
	CHECK_UNISTR_EQUALS("OtherClass", Observer.ClassName[1]);
	
	CHECK_VECTOR_SIZE(2, Observer.ClassNamespace);
	CHECK_UNISTR_EQUALS("\\Second", Observer.ClassNamespace[0]);
	CHECK_UNISTR_EQUALS("\\First\\Child", Observer.ClassNamespace[1]);
	
	CHECK_VECTOR_SIZE(1, Observer.NamespaceUseName);
	CHECK_UNISTR_EQUALS("\\Second", Observer.NamespaceUseName[0]);
	
	CHECK_VECTOR_SIZE(1, Observer.NamespaceAlias);
	CHECK_UNISTR_EQUALS("Second", Observer.NamespaceAlias[0]);
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

TEST_FIXTURE(Parser53TestClass, ScanStringWithReturnAnnotationsNamespaces) {
	Parser.SetClassMemberObserver(&Observer);
	UnicodeString code = _U(
		"namespace First;\n"
		"use Second\\Child as C;"
		"abstract class MyRunnable implements Runnable { \n"
		"	/** @return Result */"
		"	function run() {} \n"
		""
		"	/** @return C\\Result */"
		"	function stop() {} \n"
		""
		"	/** @return \\D\\Result */"
		"	function pause() {} \n"
		"} \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(3, Observer.MethodClassName);
	CHECK_UNISTR_EQUALS("MyRunnable", Observer.MethodClassName[0]);
	CHECK_UNISTR_EQUALS("run", Observer.MethodName[0]);
	CHECK_UNISTR_EQUALS("stop", Observer.MethodName[1]);
	CHECK_UNISTR_EQUALS("pause", Observer.MethodName[2]);
	CHECK_VECTOR_SIZE(3, Observer.MethodReturnType);
	CHECK_UNISTR_EQUALS("\\First\\Result", Observer.MethodReturnType[0]);
	CHECK_UNISTR_EQUALS("\\Second\\Child\\Result", Observer.MethodReturnType[1]);
	CHECK_UNISTR_EQUALS("\\D\\Result", Observer.MethodReturnType[2]);
	CHECK_VECTOR_SIZE(3, Observer.MethodSignature);
	CHECK_UNISTR_EQUALS("public function run()", Observer.MethodSignature[0]);
	CHECK_UNISTR_EQUALS("public function stop()", Observer.MethodSignature[1]);
	CHECK_UNISTR_EQUALS("public function pause()", Observer.MethodSignature[2]);
}

TEST_FIXTURE(Parser53TestClass, ScanStringWithUndeclaredClassMemberAssignments) {
	Parser.SetClassMemberObserver(&Observer);

	// even though there are two assignments we shoule get notified only once
	// for the second class, we should only get 1 notification since the
	// member is declared
	UnicodeString code = _U(
		"class MyRunnable { \n"
		"	function run() {\n"
		"		$this->name = 'Runnable';\n"
		"		$this->name = 'Runnable';\n"

		// make sure method calls don't get treated as undeclared members
		"       $type = $this->getType();\n"
		"       $type = $this->getType();\n"
		"	} \n"
		"} \n"
		"class ChildRunnable { \n"
		"	private $fullName;\n"
		"	function run() {\n"
		"		$this->fullName = 'Runnable';\n"
		"		$this->fullName = 'Runnable';\n"
		"	} \n"
		"} \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(2, Observer.PropertyName);
	CHECK_UNISTR_EQUALS("$name", Observer.PropertyName[0]);
	CHECK_UNISTR_EQUALS("$fullName", Observer.PropertyName[1]);
	CHECK_VECTOR_SIZE(2,  Observer.PropertyConsts);
	CHECK_EQUAL(false, Observer.PropertyConsts[0]);
	CHECK_EQUAL(false, Observer.PropertyConsts[1]);
	CHECK_VECTOR_SIZE(2, Observer.PropertyIsStatic);
	CHECK_EQUAL(false, Observer.PropertyIsStatic[0]);
	CHECK_EQUAL(false, Observer.PropertyIsStatic[1]);
}

TEST_FIXTURE(Parser53TestClass, ScanStringVariableObserverWithUndeclaredClassMemberAssignments) {
	
	// this test is the same as above, except that its using the "full" parser
	// because we are setting the variable observer
	Parser.SetClassMemberObserver(&Observer);
	Parser.SetVariableObserver(&Observer);

	// even though there are two assignments we should get notified only once
	// for the second class, we should only get 1 notification since the
	// member is declared
	UnicodeString code = _U(
		"class MyRunnable { \n"
		"	function run() {\n"
		"		$this->name = 'Runnable';\n"
		"		$this->name = 'Runnable';\n"
		"	} \n"
		"} \n"
		"class ChildRunnable { \n"
		"	private $fullName;\n"
		"	function run() {\n"
		"		$this->fullName = 'Runnable';\n"
		"		$this->fullName = 'Runnable';\n"
		"	} \n"
		"} \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(2, Observer.PropertyName);
	CHECK_UNISTR_EQUALS("$name", Observer.PropertyName[0]);
	CHECK_UNISTR_EQUALS("$fullName", Observer.PropertyName[1]);
	CHECK_VECTOR_SIZE(2,  Observer.PropertyConsts);
	CHECK_EQUAL(false, Observer.PropertyConsts[0]);
	CHECK_EQUAL(false, Observer.PropertyConsts[1]);
	CHECK_VECTOR_SIZE(2, Observer.PropertyIsStatic);
	CHECK_EQUAL(false, Observer.PropertyIsStatic[0]);
	CHECK_EQUAL(false, Observer.PropertyIsStatic[1]);
}

TEST_FIXTURE(Parser53TestClass, ScanStringWithAllPossibleVariableExpressionTypes) {
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
	// an assignment with an array expression
	// an assignment with a variable that has an array key
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
		"   $samples = array("
		"      'one' => 1,\n"
		"       'two' => 2"
		"   );\n"
		"	$samples['three'] = 3;\n"
		"}"
	);
	int expectedVariableCount = 16;
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(expectedVariableCount, Observer.VariableMethodName);
	CHECK_UNISTR_EQUALS("", Observer.VariableMethodName[0]);
	for (int i = 1; i < expectedVariableCount; ++i) {
		CHECK_UNISTR_EQUALS("workFunc", Observer.VariableMethodName[i]);
	}
	CHECK_VECTOR_SIZE(expectedVariableCount, Observer.VariableName);
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
	CHECK_UNISTR_EQUALS("$samples", Observer.VariableName[14]);
	CHECK_UNISTR_EQUALS("$samples", Observer.VariableName[15]);
	CHECK_VECTOR_SIZE(expectedVariableCount, Observer.VariableExpressionChainList);
	CHECK_UNISTR_EQUALS("Globals", Observer.VariableExpressionChainList[0]);
	CHECK_UNISTR_EQUALS("Globals", Observer.VariableExpressionChainList[1]);
	CHECK_UNISTR_EQUALS("$srcGlobal", Observer.VariableExpressionChainList[2]);
	CHECK_UNISTR_EQUALS("$srcGlobal->name", Observer.VariableExpressionChainList[3]);

	// empty 
	CHECK_UNISTR_EQUALS("", Observer.VariableExpressionChainList[4]);
	CHECK_UNISTR_EQUALS("", Observer.VariableExpressionChainList[5]);
	CHECK_UNISTR_EQUALS("$local", Observer.VariableExpressionChainList[6]);
	CHECK_UNISTR_EQUALS("$local", Observer.VariableExpressionChainList[7]);
	CHECK_UNISTR_EQUALS("$local", Observer.VariableExpressionChainList[8]);
	CHECK_UNISTR_EQUALS("Globals", Observer.VariableExpressionChainList[9]);
	CHECK_UNISTR_EQUALS("SpecificException", Observer.VariableExpressionChainList[10]);
	CHECK_UNISTR_EQUALS("Exception", Observer.VariableExpressionChainList[11]);
	CHECK_UNISTR_EQUALS("", Observer.VariableExpressionChainList[12]);
	CHECK_UNISTR_EQUALS("", Observer.VariableExpressionChainList[13]);
	CHECK_UNISTR_EQUALS("", Observer.VariableExpressionChainList[14]);
	CHECK_UNISTR_EQUALS("3", Observer.VariableExpressionChainList[15]);
	
	CHECK_VECTOR_SIZE(2, Observer.VariableExpressionArrayKeys);
	CHECK_UNISTR_EQUALS("one", Observer.VariableExpressionArrayKeys[0]);
	CHECK_UNISTR_EQUALS("two", Observer.VariableExpressionArrayKeys[1]);
	
	CHECK_VECTOR_SIZE(expectedVariableCount, Observer.VariableArrayKeys);
	CHECK_UNISTR_EQUALS("three", Observer.VariableArrayKeys[15]);
}

TEST_FIXTURE(Parser53TestClass, ScanStringWithAllTypeHintingNamespaces) {
	Parser.SetVariableObserver(&Observer);

	// array built-in type should not have the declared namespace
	// string built-in type should not have the declared namespace
	UnicodeString code = _U(
		"namespace First;\n"
		"use Symfony\\Request as sfRequest;\n"
		"function workFunc(Globals $srcGlobal, Second\\Globals $second, array $items, $str, sfRequest $request) {\n"
		"}\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	int expectedParams = 5;
	CHECK_VECTOR_SIZE(expectedParams, Observer.VariableMethodName);
	for (int i = 0; i < expectedParams; ++i) {
		CHECK_UNISTR_EQUALS("workFunc", Observer.VariableMethodName[i]);
	}
	CHECK_VECTOR_SIZE(expectedParams, Observer.VariableName);
	CHECK_UNISTR_EQUALS("$srcGlobal", Observer.VariableName[0]);
	CHECK_UNISTR_EQUALS("$second", Observer.VariableName[1]);
	CHECK_UNISTR_EQUALS("$items", Observer.VariableName[2]);
	CHECK_UNISTR_EQUALS("$str", Observer.VariableName[3]);
	CHECK_UNISTR_EQUALS("$request", Observer.VariableName[4]);
	CHECK_VECTOR_SIZE(expectedParams, Observer.VariableExpressionChainList);
	CHECK_UNISTR_EQUALS("\\First\\Globals", Observer.VariableExpressionChainList[0]);
	CHECK_UNISTR_EQUALS("\\First\\Second\\Globals", Observer.VariableExpressionChainList[1]);
	CHECK_UNISTR_EQUALS("array", Observer.VariableExpressionChainList[2]);
	CHECK_UNISTR_EQUALS("", Observer.VariableExpressionChainList[3]);
	CHECK_UNISTR_EQUALS("\\Symfony\\Request", Observer.VariableExpressionChainList[4]);
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
		"		return $newName->toString();\n"
		"	}\n"
		"}"
	);
	
	// phpdoc magic methods / properties get notified first
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
	
	// should be 6: 3 function parameters for __call + newName local var + 2 params for getAge() method
	// note the order: PHPDoc variables first because of the way
	// the AST is built 
	// typehint variable is notified first
	// then  params for phpdoc methods
	// then params for defined methods
	CHECK_VECTOR_SIZE(6, Observer.VariableName);
	CHECK_UNISTR_EQUALS("$newName", Observer.VariableName[0]);
	CHECK_UNISTR_EQUALS("$int1", Observer.VariableName[1]);
	CHECK_UNISTR_EQUALS("$int2", Observer.VariableName[2]);
	CHECK_UNISTR_EQUALS("$name", Observer.VariableName[3]);
	CHECK_UNISTR_EQUALS("$arg1", Observer.VariableName[4]);
	CHECK_UNISTR_EQUALS("$arg2", Observer.VariableName[5]);
	
	
	CHECK_VECTOR_SIZE(6, Observer.VariableExpressionChainList);
	//CHECK_UNISTR_EQUALS("NameClass", Observer.VariableExpressionChainList[3]);
	
	CHECK_VECTOR_SIZE(6, Observer.VariablePhpDocType);
	
	 
	CHECK_UNISTR_EQUALS("NameClass", Observer.VariablePhpDocType[0]);
	CHECK_UNISTR_EQUALS("int", Observer.VariablePhpDocType[1]);
	CHECK_UNISTR_EQUALS("int", Observer.VariablePhpDocType[2]);
	
	// type hints are not read from PHPDoc as of now
	//CHECK_UNISTR_EQUALS("string", Observer.VariablePhpDocType[3]);
	//CHECK_UNISTR_EQUALS("Integer", Observer.VariablePhpDocType[4]);
	//CHECK_UNISTR_EQUALS("Integer", Observer.VariablePhpDocType[5]);
}

TEST_FIXTURE(Parser53TestClass, MethodScope) {
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
	CHECK(!Observer.MethodEndingPos.empty());
	CHECK_EQUAL((16 + 1 + 16), Observer.MethodStartingPos[0]);
	CHECK_EQUAL((16 + 1 + 18 + 4), Observer.MethodEndingPos[0]);
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

TEST_FIXTURE(Parser53TestClass, IncludeWithExpressionObserver) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"require __DIR__ . '/db_functions_0.php';\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.IncludeFile);
	CHECK_VECTOR_SIZE(1, Observer.IncludeLineNumber);
	CHECK_EQUAL(1, Observer.IncludeLineNumber[0]);
	
	CHECK_VECTOR_SIZE(1, Observer.IncludeExpressions);
	CHECK_EQUAL(pelet::ExpressionClass::BINARY_OPERATION, Observer.IncludeExpressions[0]->Expression->ExpressionType);

	pelet::BinaryOperationClass* binary = (pelet::BinaryOperationClass*)Observer.IncludeExpressions[0]->Expression;
	CHECK_SCALAR("/db_functions_0.php", binary->RightOperand);
}

TEST_FIXTURE(Parser53TestClass, NamespaceAlias) {
	Parser.SetClassObserver(&Observer);
	Parser.SetFunctionObserver(&Observer);
	UnicodeString code = _U(
		"namespace First;\n"
		"class MyClass {}\n"
		"function work() {}\n"
		"namespace Second {\n"
		"class MyClass {}\n"
		"function work() {}"
		"}\n"
		"namespace First\\Child {\n"
		"class MyClass {} \n"
		"}\n"
		"namespace {\n"
		"class MyClass {}\n"
		"function work() {}\n"
		"}\n"
		"use First\\MyClass as FClass;\n"
		"use Second\\MyClass;\n"
		"use \\First\\Child; \n"
		
	);
	CHECK(Parser.ScanString(code, LintResults));
	
	CHECK_VECTOR_SIZE(4, Observer.NamespaceName);
	CHECK_UNISTR_EQUALS("\\First", Observer.NamespaceName[0]);
	CHECK_UNISTR_EQUALS("\\Second", Observer.NamespaceName[1]);
	CHECK_UNISTR_EQUALS("\\First\\Child", Observer.NamespaceName[2]);
	CHECK_UNISTR_EQUALS("\\", Observer.NamespaceName[3]);
	
	CHECK_VECTOR_SIZE(3, Observer.NamespaceUseName);
	CHECK_UNISTR_EQUALS("\\First\\MyClass", Observer.NamespaceUseName[0]);
	CHECK_UNISTR_EQUALS("\\Second\\MyClass", Observer.NamespaceUseName[1]);
	CHECK_UNISTR_EQUALS("\\First\\Child", Observer.NamespaceUseName[2]);
	
	CHECK_VECTOR_SIZE(3, Observer.NamespaceAlias);
	CHECK_UNISTR_EQUALS("FClass", Observer.NamespaceAlias[0]);
	CHECK_UNISTR_EQUALS("MyClass", Observer.NamespaceAlias[1]);
	CHECK_UNISTR_EQUALS("Child", Observer.NamespaceAlias[2]);
	
	CHECK_VECTOR_SIZE(3, Observer.NamespaceUseStartingPos);
	CHECK_EQUAL((int)code.indexOf(UNICODE_STRING_SIMPLE("use First\\MyClass")), Observer.NamespaceUseStartingPos[0]);
	CHECK_EQUAL((int)code.indexOf(UNICODE_STRING_SIMPLE("use Second\\MyClass")), Observer.NamespaceUseStartingPos[1]);
	CHECK_EQUAL((int)code.indexOf(UNICODE_STRING_SIMPLE("use \\First\\Child")), Observer.NamespaceUseStartingPos[2]);
	
	CHECK_VECTOR_SIZE(4, Observer.ClassNamespace);
	CHECK_UNISTR_EQUALS("\\First", Observer.ClassNamespace[0]);
	CHECK_UNISTR_EQUALS("\\Second", Observer.ClassNamespace[1]);
	CHECK_UNISTR_EQUALS("\\First\\Child", Observer.ClassNamespace[2]);
	CHECK_UNISTR_EQUALS("\\", Observer.ClassNamespace[3]);
	
	CHECK_VECTOR_SIZE(3, Observer.FunctionNamespace);
	CHECK_UNISTR_EQUALS("\\First", Observer.FunctionNamespace[0]);
	CHECK_UNISTR_EQUALS("\\Second", Observer.FunctionNamespace[1]);
	CHECK_UNISTR_EQUALS("\\", Observer.FunctionNamespace[2]);
}

TEST_FIXTURE(Parser53TestClass, NamespaceVariables) {
	Parser.SetVariableObserver(&Observer);
	UnicodeString code = _U(
		"namespace First;\n"
		"use Second\\Child as C;\n"
		"$first =  new MyClass();\n"
		"$second = new ChildNamespace\\MyClass();\n"
		"$third = new \\MyClass();\n"
		"$fourth = \\strlen('one'); \n"
		"$fifth = ChildNamespace\\strlen('one');\n"
		"$sixth = namespace\\strlen('one');\n"
		"$seventh = new namespace\\MyClass();\n"
		"$eigth = new C\\MyClass();\n"
	);
	
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(8, Observer.VariableExpressionChainList);
	CHECK_UNISTR_EQUALS("\\First\\MyClass", Observer.VariableExpressionChainList[0]);
	CHECK_UNISTR_EQUALS("\\First\\ChildNamespace\\MyClass", Observer.VariableExpressionChainList[1]);
	CHECK_UNISTR_EQUALS("\\MyClass", Observer.VariableExpressionChainList[2]);
	CHECK_UNISTR_EQUALS("\\strlen()", Observer.VariableExpressionChainList[3]);
	CHECK_UNISTR_EQUALS("\\First\\ChildNamespace\\strlen()", Observer.VariableExpressionChainList[4]);
	CHECK_UNISTR_EQUALS("\\First\\strlen()", Observer.VariableExpressionChainList[5]);
	CHECK_UNISTR_EQUALS("\\First\\MyClass", Observer.VariableExpressionChainList[6]);
	CHECK_UNISTR_EQUALS("\\Second\\Child\\MyClass", Observer.VariableExpressionChainList[7]);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserver) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"myFunct('one', $arr); \n"
		"anotherFunc(myFunct('three', $four), myFunct(array('key_one' => 1)));\n"
	);
	
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(2, Observer.VariableExpressions);
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);
	
	// the first line
	pelet::VariableClass* var = Observer.VariableExpressions[0];
	CHECK_FUNCTION("myFunct", var);
	CHECK_VECTOR_SIZE(2, var->ChainList[0].CallArguments);
	CHECK_SCALAR("one", var->ChainList[0].CallArguments[0]);
	CHECK_VARIABLE("$arr", var->ChainList[0].CallArguments[1]);
	
	// the second line big expression here....
	
	// 1. the outermost expression (call to anotherFunc)
	pelet::VariableClass* secondVar = Observer.VariableExpressions[1];
	CHECK_FUNCTION("anotherFunc", secondVar);
	CHECK_VECTOR_SIZE(2, secondVar->ChainList[0].CallArguments);
	
	// 2. the first arg to anotherFunc (call to myFunct with 2 arguments)
	CHECK_FUNCTION("myFunct", secondVar->ChainList[0].CallArguments[0]);
	
	pelet::VariableClass* myFunctVar = (pelet::VariableClass*)secondVar->ChainList[0].CallArguments[0];
	CHECK_VECTOR_SIZE(2, myFunctVar->ChainList[0].CallArguments);
	CHECK_SCALAR("three", myFunctVar->ChainList[0].CallArguments[0]);
	CHECK_VARIABLE("$four", myFunctVar->ChainList[0].CallArguments[1]);
	
	
	// 3. second arg to anotherFunc (call with 1 argument)
	CHECK_FUNCTION("myFunct", secondVar->ChainList[0].CallArguments[1]);

	myFunctVar = (pelet::VariableClass*)secondVar->ChainList[0].CallArguments[1];
	CHECK_VECTOR_SIZE(1, myFunctVar->ChainList[0].CallArguments);
	CHECK_ARRAY(myFunctVar->ChainList[0].CallArguments[0]);

	pelet::ArrayExpressionClass* arrayExpr = (pelet::ArrayExpressionClass*)myFunctVar->ChainList[0].CallArguments[0];
	CHECK_VECTOR_SIZE(1, arrayExpr->ArrayPairs);
	CHECK_SCALAR("key_one", arrayExpr->ArrayPairs[0]->Key);
	CHECK_SCALAR("1", arrayExpr->ArrayPairs[0]->Value);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithObjects) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"$this->load->view('one', $arr); \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);

	pelet::VariableClass* var = Observer.VariableExpressions[0];
	CHECK_VARIABLE("$this", var);
	
	CHECK_VECTOR_SIZE(3, var->ChainList);
	CHECK_UNISTR_EQUALS("$this", var->ChainList[0].Name);
	CHECK_UNISTR_EQUALS("load", var->ChainList[1].Name);
	CHECK_UNISTR_EQUALS("view", var->ChainList[2].Name);
	
	CHECK_VECTOR_SIZE(2, var->ChainList[2].CallArguments);
	CHECK_SCALAR("one", var->ChainList[2].CallArguments[0]);
	CHECK_VARIABLE("$arr", var->ChainList[2].CallArguments[1]);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithBinaryOperators) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"$result = $x + $y; \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.AssignmentExpressions);
	
	pelet::AssignmentExpressionClass* expr = Observer.AssignmentExpressions[0];
	
	CHECK_VECTOR_SIZE(1, expr->Destination.ChainList);
	CHECK_UNISTR_EQUALS("$result", expr->Destination.ChainList[0].Name);

	CHECK_EQUAL(pelet::ExpressionClass::BINARY_OPERATION, expr->Expression->ExpressionType);

	pelet::BinaryOperationClass* binary = PCEB(expr->Expression);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, binary->LeftOperand->ExpressionType);
	pelet::VariableClass* leftOperand = PCEV(binary->LeftOperand);
	CHECK_VARIABLE("$x", leftOperand);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, binary->RightOperand->ExpressionType);
	pelet::VariableClass* rightOperand = PCEV(binary->RightOperand);
	CHECK_VARIABLE("$y", rightOperand);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithUnaryOperators) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"$result = !$x; \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.AssignmentExpressions);
	
	pelet::AssignmentExpressionClass* expr = Observer.AssignmentExpressions[0];
	
	CHECK_VECTOR_SIZE(1, expr->Destination.ChainList);
	pelet::VariableClass* var = &expr->Destination;
	CHECK_VARIABLE("$result", var);

	CHECK_EQUAL(pelet::ExpressionClass::UNARY_OPERATION, expr->Expression->ExpressionType);	
	pelet::UnaryOperationClass* unary = PCEU(expr->Expression);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, unary->Operand->ExpressionType);
	pelet::VariableClass* operand = PCEV(unary->Operand);
	CHECK_VARIABLE("$x", operand);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithTernaryOperators) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"$result = $x ? $max : 40; \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.AssignmentExpressions);
	
	pelet::AssignmentExpressionClass* expr = Observer.AssignmentExpressions[0];
	
	CHECK_VECTOR_SIZE(1, expr->Destination.ChainList);
	pelet::VariableClass* var = &expr->Destination;
	CHECK_VARIABLE("$result", var);

	CHECK_EQUAL(pelet::ExpressionClass::TERNARY_OPERATION, expr->Expression->ExpressionType);	
	pelet::TernaryOperationClass* ternary = PCET(expr->Expression);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, ternary->Expression1->ExpressionType);
	pelet::VariableClass* expr1 = PCEV(ternary->Expression1);
	CHECK_VARIABLE("$x", expr1);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, ternary->Expression2->ExpressionType);
	pelet::VariableClass* expr2 = PCEV(ternary->Expression2);
	CHECK_VARIABLE("$max", expr2);
	CHECK_EQUAL(pelet::ExpressionClass::SCALAR, ternary->Expression3->ExpressionType);
	pelet::ScalarExpressionClass* expr3 = PCES(ternary->Expression3);
	CHECK_UNISTR_EQUALS("40", expr3->Value);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithVariable) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"$_GET['name']; \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);

	pelet::VariableClass* var = Observer.VariableExpressions[0];
	CHECK_VARIABLE("$_GET", var);
	
	CHECK_VECTOR_SIZE(2, var->ChainList);
	CHECK(var->ChainList[1].IsArrayAccess);
	CHECK_SCALAR("name", var->ChainList[1].ArrayAccess);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithAssignmentCompound) { 
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"$result &= $x; \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.AssignmentCompoundExpressions);
	
	pelet::AssignmentCompoundExpressionClass* expr = Observer.AssignmentCompoundExpressions[0];
	
	CHECK_VECTOR_SIZE(1, expr->Variable.ChainList);
	pelet::VariableClass* var = &expr->Variable;
	CHECK_VARIABLE("$result", var);

	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, expr->RightOperand->ExpressionType);	
	pelet::VariableClass* rightOperand = PCEV(expr->RightOperand);
	CHECK_VARIABLE("$x", rightOperand);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithUnaryVariable) { 
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"++$result; \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.UnaryVariableOperations);
	
	pelet::UnaryVariableOperationClass* unary = Observer.UnaryVariableOperations[0];
	
	CHECK_VECTOR_SIZE(1, unary->Variable.ChainList);
	pelet::VariableClass* var = &unary->Variable;
	CHECK_VARIABLE("$result", var);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithNewInstance) { 
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"$result = new ResultClass(34, $name); \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.AssignmentExpressions);
	
	pelet::AssignmentExpressionClass* assignment = Observer.AssignmentExpressions[0];
	
	CHECK_VECTOR_SIZE(1, assignment->Destination.ChainList);
	pelet::VariableClass* var = &assignment->Destination;
	CHECK_VARIABLE("$result", var);

	CHECK_EQUAL(pelet::ExpressionClass::NEW_CALL, assignment->Expression->ExpressionType);

	pelet::NewInstanceExpressionClass* newExpr = PCEN(assignment->Expression);
	CHECK_UNISTR_EQUALS("ResultClass", newExpr->ClassName);
	
	CHECK_VECTOR_SIZE(2, newExpr->CallArguments);
	CHECK_SCALAR("34", newExpr->CallArguments[0]);
	CHECK_VARIABLE("$name", newExpr->CallArguments[1]);	
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithArray) { 
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"$result = array('123' => 456, '789' => 'abc'); \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.AssignmentExpressions);
	
	pelet::AssignmentExpressionClass* assignment = Observer.AssignmentExpressions[0];
	
	CHECK_VECTOR_SIZE(1, assignment->Destination.ChainList);
	pelet::VariableClass* var = &assignment->Destination;
	CHECK_VARIABLE("$result", var);

	CHECK_EQUAL(pelet::ExpressionClass::ARRAY, assignment->Expression->ExpressionType);

	pelet::ArrayExpressionClass* newExpr = PCEAR(assignment->Expression);
	CHECK_VECTOR_SIZE(2, newExpr->ArrayPairs);
	CHECK_SCALAR("123", newExpr->ArrayPairs[0]->Key);
	CHECK_SCALAR("456", newExpr->ArrayPairs[0]->Value);
	CHECK_SCALAR("789", newExpr->ArrayPairs[1]->Key);
	CHECK_SCALAR("abc", newExpr->ArrayPairs[1]->Value);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithArrayAccess) { 
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"$result = $users['123']->counts['abc']; \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.AssignmentExpressions);
	
	pelet::AssignmentExpressionClass* assignment = Observer.AssignmentExpressions[0];
	
	CHECK_VECTOR_SIZE(1, assignment->Destination.ChainList);
	pelet::VariableClass* var = &assignment->Destination;
	CHECK_VARIABLE("$result", var);

	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, assignment->Expression->ExpressionType);

	pelet::VariableClass* newExpr = PCEV(assignment->Expression);

	CHECK_VECTOR_SIZE(4, newExpr->ChainList);
	CHECK_UNISTR_EQUALS("$users", newExpr->ChainList[0].Name);
	CHECK(newExpr->ChainList[1].IsArrayAccess);
	CHECK_SCALAR("123", newExpr->ChainList[1].ArrayAccess);
	CHECK_UNISTR_EQUALS("counts", newExpr->ChainList[2].Name);
	CHECK(newExpr->ChainList[3].IsArrayAccess);
	CHECK_SCALAR("abc", newExpr->ChainList[3].ArrayAccess);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithFunctionArgument) { 
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"function myFunc($a, Db $db) {} \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(2, Observer.VariableExpressions);
	
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);
	CHECK_VARIABLE("$a", Observer.VariableExpressions[0]);

	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[1]->ChainList);
	CHECK_VARIABLE("$db", Observer.VariableExpressions[1]);
	CHECK_UNISTR_EQUALS("Db", Observer.VariableExpressions[1]->PhpDocType);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithGlobalDeclaration) { 
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"global $a, $db; \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(2, Observer.VariableExpressions);
	
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);
	CHECK_VARIABLE("$a", Observer.VariableExpressions[0]);

	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[1]->ChainList);
	CHECK_VARIABLE("$db", Observer.VariableExpressions[1]);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithStaticDeclaration) { 
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"static $a = 1, $db = 0;  \n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(2, Observer.VariableExpressions);
	
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);
	CHECK_VARIABLE("$a", Observer.VariableExpressions[0]);

	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[1]->ChainList);
	CHECK_VARIABLE("$db", Observer.VariableExpressions[1]);
}

TEST_FIXTURE(Parser53TestClass, ExpressionObserverWithClosure) { 
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"$func = function($a, $b) use ($c) {  \n"
		"  return $a - $b - $c; \n"
		"};\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.AssignmentExpressions);
	
	CHECK_VECTOR_SIZE(1, Observer.AssignmentExpressions);
	CHECK_VARIABLE("$func", (&Observer.AssignmentExpressions[0]->Destination));

	CHECK_EQUAL(pelet::ExpressionClass::CLOSURE, Observer.AssignmentExpressions[0]->Expression->ExpressionType);

	pelet::ClosureExpressionClass* closure = (pelet::ClosureExpressionClass*)Observer.AssignmentExpressions[0]->Expression;
	CHECK_VECTOR_SIZE(2, closure->Parameters);
	CHECK_VARIABLE("$a", closure->Parameters[0]);
	CHECK_VARIABLE("$b", closure->Parameters[1]);
	CHECK_VECTOR_SIZE(1, closure->LexicalVars);
	CHECK_VARIABLE("$c", closure->LexicalVars[0]);
	CHECK_EQUAL(1, closure->Statements.Size());

	CHECK_EQUAL(pelet::StatementClass::EXPRESSION, closure->Statements.TypeAt(0));
	pelet::StatementClass* stmt = closure->Statements.At(0);
	pelet::ExpressionClass* expr = (pelet::ExpressionClass*) stmt;
	CHECK_EQUAL(pelet::ExpressionClass::BINARY_OPERATION, expr->ExpressionType);
}

TEST_FIXTURE(Parser53TestClass, LintFileShouldReturnTrueOnValidFile) {
	std::string file = TestProjectDir + "test.php";
	bool isGood = Parser.LintFile(file, LintResults);
	CHECK_UNISTR_EQUALS("", LintResults.Error);
	CHECK(isGood);
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

TEST_FIXTURE(Parser53TestClass, LintFileShouldReturnTrueWhenFileHasBackticks) {
	CreateFixtureFile("test_backticks.php",
			"<?php\n"
			"$strHost = trim(`uname -n`);\n"
			"echo $strHost;\n"
			"echo \"\\n\";\n"
	);
	std::string file = TestProjectDir + "test_backticks.php";
	CHECK(Parser.LintFile(file, LintResults));
}

TEST_FIXTURE(Parser53TestClass, LintFileShouldReturnTrueWhenFileHasInlineHtml) {
	CreateFixtureFile("test_inline.php",
		"<? foreach ($arrTabsList as $key=>$val) { ?>\n"
		"print<br />\n"
		"<?} ?>\n"
	);
	std::string file = TestProjectDir + "test_inline.php";
	CHECK(Parser.LintFile(file, LintResults));
}

TEST_FIXTURE(Parser53TestClass, LintFileShouldReturnTrueWhenFileHasTagWithEcho) {
	CreateFixtureFile("test_tag_with_echo.php",
		"<? foreach ($arrTabsList as $key=>$val) { ?>\n"
		"<?= echo 'hello'; ?>"
		"<?} ?>\n"
	);
	std::string file = TestProjectDir + "test_tag_with_echo.php";
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
	fclose(file);
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

TEST_FIXTURE(Parser53TestClass, ScanFileShouldReturnScopeBadCode) {
	CreateFixtureFile("testpure.php", 
		"<?php "
		"class MyClass { "
		" function myFunct() { "
		"   $'gag's = 'hello' \"again\" $not gaging; "
		" }"
		"}");
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
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass"), LintResults.Scope.ClassName); 
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("myFunct"), LintResults.Scope.MethodName);
}

TEST_FIXTURE(Parser53TestClass, ScanStringShouldReturnScopeBadCode) {
	UnicodeString code = _U(
		"<?php "
		"class MyClass { "
		" function myFunct() { "
		"   $'gag's = 'hello' \"again\" $not gaging; "
		" }"
		"}");
	CHECK_EQUAL(false, Parser.ScanString(code, LintResults));
	CHECK(LintResults.Error.length() > 0);
	CHECK(LintResults.LineNumber > 0);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass"), LintResults.Scope.ClassName); 
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("myFunct"), LintResults.Scope.MethodName);
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseVariableExpression) {
	UnicodeString code = _U("$variable");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(1, ParsedVar.ChainList);
	CHECK_UNISTR_EQUALS("$variable", ParsedVar.ChainList[0].Name);
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseObjectExpression) {
	UnicodeString code = _U("$variable->prop");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(2, ParsedVar.ChainList);
	CHECK_UNISTR_EQUALS("$variable", ParsedVar.ChainList[0].Name);
	CHECK_UNISTR_EQUALS("prop", ParsedVar.ChainList[1].Name);	
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseObjectWithoutPropertyExpression) {

	// if an expression ends with the operator, still want to add it to the
	// chain list so that during code completion we can trigger lookup
	// of class members
	UnicodeString code = _U("$obj->");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(2, ParsedVar.ChainList);
	CHECK_UNISTR_EQUALS("$obj", ParsedVar.ChainList[0].Name);	
	CHECK_UNISTR_EQUALS("", ParsedVar.ChainList[1].Name);	
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseStaticWithoutPropertyExpression) {

	// if an expression ends with the operator, still want to add it to the
	// chain list so that during code completion we can trigger lookup
	// of class members
	UnicodeString code = _U("MyClass::");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(2, ParsedVar.ChainList);	
	CHECK_UNISTR_EQUALS("MyClass", ParsedVar.ChainList[0].Name);	
	CHECK_UNISTR_EQUALS("", ParsedVar.ChainList[1].Name);
	CHECK(ParsedVar.ChainList[1].IsStatic);
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseStaticExpression) {
	UnicodeString code = _U("MyClass::$DEFAULT");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(2, ParsedVar.ChainList);	
	CHECK_UNISTR_EQUALS("MyClass", ParsedVar.ChainList[0].Name);	
	CHECK_UNISTR_EQUALS("$DEFAULT", ParsedVar.ChainList[1].Name);
	CHECK(ParsedVar.ChainList[1].IsStatic);
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseConstantExpression) {
	UnicodeString code = _U("MyClass::PI;");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(2, ParsedVar.ChainList);	
	CHECK_UNISTR_EQUALS("MyClass", ParsedVar.ChainList[0].Name);	
	CHECK_UNISTR_EQUALS("PI", ParsedVar.ChainList[1].Name);	
	CHECK(ParsedVar.ChainList[1].IsStatic);
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseChainExpression) {
	UnicodeString code = _U("$variable->func1()->prop2->func3()->prop4");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(5, ParsedVar.ChainList);
	CHECK_UNISTR_EQUALS("$variable", ParsedVar.ChainList[0].Name);
	CHECK_UNISTR_EQUALS("func1", ParsedVar.ChainList[1].Name);
	CHECK_UNISTR_EQUALS("prop2", ParsedVar.ChainList[2].Name);
	CHECK_UNISTR_EQUALS("func3", ParsedVar.ChainList[3].Name);
	CHECK_UNISTR_EQUALS("prop4", ParsedVar.ChainList[4].Name);
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseChainExpressionStartsWithFunction) {
	UnicodeString code = _U("func1()->prop2->prop4");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(3, ParsedVar.ChainList);	
	CHECK_UNISTR_EQUALS("func1", ParsedVar.ChainList[0].Name);
	CHECK_UNISTR_EQUALS("prop2", ParsedVar.ChainList[1].Name);
	CHECK_UNISTR_EQUALS("prop4", ParsedVar.ChainList[2].Name);
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseChainExpressionWithFunctionArguments) {

	// function args $a, $b should be ignored here
	UnicodeString code = _U("$this->propA->func1($a, $b)->prop2->prop4");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(5, ParsedVar.ChainList);	
	CHECK_UNISTR_EQUALS("$this", ParsedVar.ChainList[0].Name);
	CHECK_UNISTR_EQUALS("propA", ParsedVar.ChainList[1].Name);
	CHECK_UNISTR_EQUALS("func1", ParsedVar.ChainList[2].Name);
	CHECK_UNISTR_EQUALS("prop2", ParsedVar.ChainList[3].Name);
	CHECK_UNISTR_EQUALS("prop4", ParsedVar.ChainList[4].Name);
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseChainExpressionWithChainThatStartsWithMethodArguments) {

	// function args $a, $b should be ignored here
	UnicodeString code = _U("$this->func1($a, $b)->propA->prop2->prop4");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(5, ParsedVar.ChainList);
	CHECK_UNISTR_EQUALS("$this", ParsedVar.ChainList[0].Name);
	CHECK_UNISTR_EQUALS("func1", ParsedVar.ChainList[1].Name);
	CHECK_UNISTR_EQUALS("propA", ParsedVar.ChainList[2].Name);
	CHECK_UNISTR_EQUALS("prop2", ParsedVar.ChainList[3].Name);
	CHECK_UNISTR_EQUALS("prop4", ParsedVar.ChainList[4].Name);
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseChainExpressionWithChainThatStartsWithFunctionArguments) {

	// function args $a, $b should be ignored here
	UnicodeString code = _U("func1($a, $b)->propA->func2($c)->prop4");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(4, ParsedVar.ChainList);	
	CHECK_UNISTR_EQUALS("func1", ParsedVar.ChainList[0].Name);
	CHECK_UNISTR_EQUALS("propA", ParsedVar.ChainList[1].Name);
	CHECK_UNISTR_EQUALS("func2", ParsedVar.ChainList[2].Name);
	CHECK_UNISTR_EQUALS("prop4", ParsedVar.ChainList[3].Name);
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseExpressionWithNamespace) {
	UnicodeString code = _U("\\First\\Chi");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(1, ParsedVar.ChainList);
	CHECK_UNISTR_EQUALS("\\First\\Chi", ParsedVar.ChainList[0].Name);
}

TEST_FIXTURE(Parser53ExpressionTestClass, ParseExpressionWithNamespaceEnd) {
	UnicodeString code = _U("\\First\\");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(1, ParsedVar.ChainList);
	CHECK_UNISTR_EQUALS("\\First\\", ParsedVar.ChainList[0].Name);
}

}