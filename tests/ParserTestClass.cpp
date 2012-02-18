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
#include <UnitTest++.h>
#include <language/ParserObserverClass.h>
#include <language/ParserClass.h>
#include <windows/StringHelperClass.h>
#include <FileTestFixtureClass.h>
#include <wx/filefn.h> 
#include <vector>


/**
 * At the start of each test, clear out the test folder and create a new file to be parsed.
 */
class ParserTestClass : public FileTestFixtureClass {
public:	
	ParserTestClass() 
		: FileTestFixtureClass(wxT("parser")) {
		Parser = new mvceditor::ParserClass();
		if (wxDirExists(TestProjectDir)) {
			RecursiveRmDir(TestProjectDir);
		}

		// this file was carefully crafted to hit all the observers
		// class, method, function, and variable observers
		CreateFixtureFile(wxT("test.php"), wxString::FromAscii(
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
		));		
	}
	
	virtual ~ParserTestClass() {
		delete Parser;
	}
	
	mvceditor::ParserClass* Parser;
	mvceditor::LintResultsClass LintResults;
};

/**
 * Testing the parser involves testing the notifications raised by the parser.  So, this test class will implement
 * all observer interfaces and push the parameters into publicly accessible vectors. The different test cases
 * can then assert that the notifications send the correct arguments.
 */
class TestClassObserverClass : public mvceditor::ClassObserverClass, public mvceditor::ClassMemberObserverClass, 
	public mvceditor::FunctionObserverClass, public mvceditor::VariableObserverClass {

public:
	std::vector<UnicodeString> ClassName, ClassSignature, ClassComment,
						MethodClassName, MethodName, MethodSignature, MethodReturnType, MethodComment,
						PropertyClassName, PropertyName, PropertyType, PropertyComment,
						FunctionName, FunctionSignature, FunctionReturnType, FunctionComment,
						VariableClassName, VariableMethodName, VariableName, VariableComment,
						VariableChainList, VariablePhpDocType,
						DefinedName, DefinedValue, DefinedComment,
						MethodEndClassName, MethodEndMethodName;
	std::vector<bool> PropertyConsts, MethodIsStatic, PropertyIsStatic;
	std::vector<mvceditor::TokenClass::TokenIds> MethodVisibility, PropertyVisibility;
	std::vector<mvceditor::SymbolClass::Types> VariableTypes;
	std::vector<int> MethodEndPos;
	
	virtual void ClassFound(const UnicodeString& className, const UnicodeString& signature, 
			const UnicodeString& comment) {
		ClassName.push_back(className);
		ClassSignature.push_back(signature);
		ClassComment.push_back(comment);
	}
	
	virtual void MethodFound(const UnicodeString& className, const UnicodeString& methodName, 
			const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment,
			mvceditor::TokenClass::TokenIds visibility, bool isStatic) {
		MethodClassName.push_back(className);
		MethodName.push_back(methodName);
		MethodSignature.push_back(signature);
		MethodReturnType.push_back(returnType);
		MethodComment.push_back(comment);
		MethodVisibility.push_back(visibility);
		MethodIsStatic.push_back(isStatic);
	}

	virtual void MethodEnd(const UnicodeString& className, const UnicodeString& methodName, int pos) {
		//MethodEndClassName.push_back(className);
		//MethodEndMethodName.push_back(methodName);
		MethodEndPos.push_back(pos);
	}
	
	virtual void PropertyFound(const UnicodeString& className, const UnicodeString& propertyName, 
			const UnicodeString& propertyType, const UnicodeString& comment, 
			mvceditor::TokenClass::TokenIds visibility, bool isConst, bool isStatic) {
		PropertyClassName.push_back(className);
		PropertyName.push_back(propertyName);
		PropertyType.push_back(propertyType);
		PropertyComment.push_back(comment);
		PropertyConsts.push_back(isConst);
		PropertyVisibility.push_back(visibility);
		PropertyIsStatic.push_back(isStatic);
	}
	
	virtual void FunctionFound(const UnicodeString& functionName, 
			const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment) {
		FunctionName.push_back(functionName);
		FunctionSignature.push_back(signature);
		FunctionReturnType.push_back(returnType);
		FunctionComment.push_back(comment);
	}

	virtual void FunctionEnd(const UnicodeString& functionName, int pos) {
		// nothing for now
	}
	
	virtual void VariableFound(const UnicodeString& className, const UnicodeString& methodName, 
		const mvceditor::SymbolClass& symbol, const UnicodeString& comment) {
		VariableClassName.push_back(className);
		VariableMethodName.push_back(methodName);
		VariableName.push_back(symbol.Lexeme);
		VariableComment.push_back(symbol.Comment);
		VariableTypes.push_back(symbol.Type);
		UnicodeString typeString;
		for (size_t i = 0; i < symbol.ChainList.size(); ++i) {
			typeString.append(symbol.ChainList[i]);
		}
		VariableChainList.push_back(typeString);
		VariablePhpDocType.push_back(symbol.PhpDocType);
	}
	
	virtual void DefineDeclarationFound(const UnicodeString& variableName, const UnicodeString& variableValue, 
			const UnicodeString& comment) {
		DefinedName.push_back(variableName);
		DefinedValue.push_back(variableValue);
		DefinedComment.push_back(comment);		
	}
};

SUITE(ParserTestClass) {

TEST_FIXTURE(ParserTestClass, ScanFileShouldNotifyClassObserver) {
	wxString file = TestProjectDir + wxT("test.php");
	TestClassObserverClass observer;
	Parser->SetClassObserver(&observer);
	CHECK(Parser->ScanFile(file, LintResults));
	CHECK_EQUAL((size_t)1, observer.ClassName.size());
	if (!observer.ClassName.empty()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), observer.ClassName[0]);
	}
	CHECK_EQUAL((size_t)1, observer.ClassSignature.size());
	if (!observer.ClassSignature.empty()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("abstract class UserClass"), observer.ClassSignature[0]);
	}
	CHECK_EQUAL((size_t)1, observer.ClassComment.size());
	if(!observer.ClassComment.empty()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n * This is a class comment\n */"), observer.ClassComment[0]);		
	}
	
	CHECK_EQUAL((size_t)1, observer.DefinedName.size());
	if(!observer.DefinedName.empty()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MAX_TIME"), observer.DefinedName[0]);		
	}
	CHECK_EQUAL((size_t)1, observer.DefinedValue.size());
	if(!observer.DefinedValue.empty()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("5000"), observer.DefinedValue[0]);		
	}
	CHECK_EQUAL((size_t)1, observer.DefinedComment.size());
	if(!observer.DefinedComment.empty()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n * This is a define comment\n */"), observer.DefinedComment[0]);		
	}
}

TEST_FIXTURE(ParserTestClass, ScanFileShouldNotifyClassMemberObserver) {
	wxString file = TestProjectDir + wxT("test.php");
	TestClassObserverClass observer;
	Parser->SetClassMemberObserver(&observer);
	CHECK(Parser->ScanFile(file, LintResults));
	CHECK_EQUAL((size_t)4, observer.MethodClassName.size());
	if (observer.MethodClassName.size() == 4) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), observer.MethodClassName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), observer.MethodClassName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), observer.MethodClassName[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), observer.MethodClassName[3]);
	}
	CHECK_EQUAL((size_t)4, observer.MethodName.size());
	if (observer.MethodName.size() == 4) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("__construct"), observer.MethodName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("work"), observer.MethodName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("getName"), observer.MethodName[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("setName"), observer.MethodName[3]);
	}
	CHECK_EQUAL((size_t)4, observer.MethodComment.size());
	if (observer.MethodComment.size() == 4) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n\t * The class constructor\n\t * @return void\n\t */"), 
			observer.MethodComment[0]); // __construct() comment
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), 
			observer.MethodComment[1]); // work() comment
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("/** get the user's name */"), 
			observer.MethodComment[2]); // getName() comment
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), 
			observer.MethodComment[3]); // setName() comment
	}
	CHECK_EQUAL((size_t)4, observer.MethodReturnType.size());
	if (observer.MethodReturnType.size() == 4) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("void"), observer.MethodReturnType[0]);
	}
	CHECK_EQUAL((size_t)4, observer.MethodVisibility.size());
	if (observer.MethodVisibility.size() == 4) {
		CHECK_EQUAL(mvceditor::TokenClass::PUBLIC, observer.MethodVisibility[0]);
		CHECK_EQUAL(mvceditor::TokenClass::PRIVATE, observer.MethodVisibility[3]);
	}
	CHECK_EQUAL((size_t)4, observer.MethodIsStatic.size());
	if (observer.MethodIsStatic.size() == 4) {
		CHECK_EQUAL(false, observer.MethodIsStatic[0]);
		CHECK_EQUAL(true, observer.MethodIsStatic[3]);
	}
	CHECK_EQUAL((size_t)4, observer.MethodSignature.size());
	if (observer.MethodSignature.size() == 4) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("public function __construct()"), observer.MethodSignature[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("public abstract function work()"), observer.MethodSignature[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("public function getName()"), observer.MethodSignature[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("private static function setName($name)"), observer.MethodSignature[3]);
	}
	CHECK_EQUAL((size_t)2, observer.PropertyClassName.size());
	if (observer.PropertyClassName.size() == 2) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), observer.PropertyClassName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), observer.PropertyClassName[1]);
	}
	CHECK_EQUAL((size_t)2, observer.PropertyName.size());
	if (observer.PropertyName.size() == 2) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$name"), observer.PropertyName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("DEFAULT_NAME"), observer.PropertyName[1]);
	}
	CHECK_EQUAL((size_t)2, observer.PropertyComment.size());
	if (observer.PropertyComment.size() == 2) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n\t * This is a the user's name\n\t * @var string\n\t */"), 
			observer.PropertyComment[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n\t * This is the default user name\n\t * @var string\n\t */"), 
			observer.PropertyComment[1]);
	}
	CHECK_EQUAL((size_t)2, observer.PropertyType.size());
	if (observer.PropertyComment.size() == 2) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("string"), observer.PropertyType[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("string"), observer.PropertyType[1]);
	}
	CHECK_EQUAL((size_t)2, observer.PropertyConsts.size());
	if (observer.PropertyComment.size() == 2) {
		CHECK_EQUAL(false, observer.PropertyConsts[0]);
		CHECK_EQUAL(true, observer.PropertyConsts[1]);
	}
	CHECK_EQUAL((size_t)2, observer.PropertyVisibility.size());
	if (observer.PropertyVisibility.size() == 2) {
		CHECK_EQUAL(mvceditor::TokenClass::PRIVATE, observer.PropertyVisibility[0]);
		CHECK_EQUAL(mvceditor::TokenClass::PUBLIC, observer.PropertyVisibility[1]);
	}
	CHECK_EQUAL((size_t)2, observer.PropertyIsStatic.size());
	if (observer.PropertyIsStatic.size() == 2) {
		CHECK_EQUAL(false, observer.PropertyIsStatic[0]);
		CHECK_EQUAL(true, observer.PropertyIsStatic[1]);
	}
	
}

TEST_FIXTURE(ParserTestClass, ScanFileShouldNotifyFunctionObserver) {
	wxString file = TestProjectDir + wxT("test.php");
	TestClassObserverClass observer;
	Parser->SetFunctionObserver(&observer);
	CHECK(Parser->ScanFile(file, LintResults));
	CHECK_EQUAL((size_t)1, observer.FunctionName.size());
	if (!observer.FunctionName.empty()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("showUser"), observer.FunctionName[0]);
	}
	CHECK_EQUAL((size_t)1, observer.FunctionComment.size());
	if (!observer.FunctionComment.empty()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("/**\n * This is a function comment\n * @return boolean\n */"), 
			observer.FunctionComment[0]);
	}
	CHECK_EQUAL((size_t)1, observer.FunctionSignature.size());
	if (!observer.FunctionSignature.empty()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("function showUser($user)"), 
			observer.FunctionSignature[0]);
	}
	CHECK_EQUAL((size_t)1, observer.FunctionReturnType.size());
	if (!observer.FunctionReturnType.empty()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("boolean"), observer.FunctionReturnType[0]);
	}
}

TEST_FIXTURE(ParserTestClass, ScanFileShouldNotifyVariableObserver) {
	wxString file = TestProjectDir + wxT("test.php");
	TestClassObserverClass observer;
	Parser->SetVariableObserver(&observer);
	CHECK(Parser->ScanFile(file, LintResults));
	CHECK_EQUAL((size_t)7, observer.VariableName.size());
	if (observer.VariableName.size() == 7) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$blog"), observer.VariableName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$msg"), observer.VariableName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$anotherMsg"), observer.VariableName[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$name"), observer.VariableName[3]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$user"), observer.VariableName[4]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$newUser"), observer.VariableName[5]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$name"), observer.VariableName[6]);
	}
	CHECK_EQUAL((size_t)7, observer.VariableClassName.size());
	if (observer.VariableClassName.size() == 7) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), observer.VariableClassName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), observer.VariableClassName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), observer.VariableClassName[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("UserClass"), observer.VariableClassName[3]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableClassName[4]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableClassName[5]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableClassName[6]);
	}
	CHECK_EQUAL((size_t)7, observer.VariableMethodName.size());
	if (observer.VariableClassName.size() == 7) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("__construct"), observer.VariableMethodName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("__construct"), observer.VariableMethodName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("__construct"), observer.VariableMethodName[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("setName"), observer.VariableMethodName[3]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("showUser"), observer.VariableMethodName[4]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("showUser"), observer.VariableMethodName[5]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("showUser"), observer.VariableMethodName[6]);
	}
	CHECK_EQUAL((size_t)7, observer.VariableTypes.size());
	if (observer.VariableTypes.size() == 7) {
		CHECK_EQUAL(mvceditor::SymbolClass::OBJECT, observer.VariableTypes[0]);
		CHECK_EQUAL(mvceditor::SymbolClass::PRIMITIVE, observer.VariableTypes[1]);

		// cannot resolve variables that are assigned 
		CHECK_EQUAL(mvceditor::SymbolClass::OBJECT, observer.VariableTypes[2]);
		CHECK_EQUAL(mvceditor::SymbolClass::PRIMITIVE, observer.VariableTypes[3]);
		CHECK_EQUAL(mvceditor::SymbolClass::PRIMITIVE, observer.VariableTypes[4]);
		CHECK_EQUAL(mvceditor::SymbolClass::OBJECT, observer.VariableTypes[5]);
		CHECK_EQUAL(mvceditor::SymbolClass::OBJECT, observer.VariableTypes[6]);
	}
	CHECK_EQUAL((size_t)7, observer.VariableChainList.size());
	if (observer.VariableChainList.size() == 7) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Blog"), observer.VariableChainList[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableChainList[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$msg"), observer.VariableChainList[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableChainList[3]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableChainList[4]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("factory()"), observer.VariableChainList[5]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$user->getName()"), observer.VariableChainList[6]);
	}
}

TEST_FIXTURE(ParserTestClass, ScanStringWithAllPossibleClassTypes) {
	TestClassObserverClass observer;
	Parser->SetClassObserver(&observer);
	UnicodeString code = mvceditor::StringHelperClass::charToIcu(
		"interface Runnable {}\n"
		"interface MyRunnable extends Runnable {} \n"
		"abstract class AbstractRunnable implements Runnable, ArrayAccess {}\n"
		"class TrueRunnable extends AbstractRunnable implements MyRunnable {} \n"
	);
	CHECK(Parser->ScanString(code, LintResults));
	CHECK_EQUAL((size_t)4, observer.ClassName.size());
	if ((size_t)4 == observer.ClassName.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Runnable"), observer.ClassName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyRunnable"), observer.ClassName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("AbstractRunnable"), observer.ClassName[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("TrueRunnable"), observer.ClassName[3]);
	}
	CHECK_EQUAL((size_t)4, observer.ClassSignature.size());
	if ((size_t)4 == observer.ClassSignature.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("interface Runnable"), observer.ClassSignature[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("interface MyRunnable extends Runnable"), observer.ClassSignature[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("abstract class AbstractRunnable implements Runnable, ArrayAccess"), observer.ClassSignature[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("class TrueRunnable extends AbstractRunnable implements MyRunnable"), observer.ClassSignature[3]);
	}
}

TEST_FIXTURE(ParserTestClass, ScanStringWithAllPossibleClassMemberTypes) {
	TestClassObserverClass observer;
	Parser->SetClassMemberObserver(&observer);
	UnicodeString code = mvceditor::StringHelperClass::charToIcu(
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
	CHECK(Parser->ScanString(code, LintResults));
	CHECK_EQUAL((size_t)3, observer.MethodClassName.size());
	if ((size_t)3 == observer.ClassSignature.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Runnable"), observer.MethodClassName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyRunnable"), observer.MethodClassName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyRunnable"), observer.MethodClassName[2]);
	}
	if ((size_t)3 == observer.MethodName.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("run"), observer.MethodName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("run"), observer.MethodName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("myPrivate"), observer.MethodName[2]);
	}
	CHECK_EQUAL((size_t)3, observer.MethodSignature.size());
	if ((size_t)3 == observer.ClassSignature.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("abstract function run()"), observer.MethodSignature[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("public function& run()"), observer.MethodSignature[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("private function myPrivate()"), observer.MethodSignature[2]);
	}
	CHECK_EQUAL((size_t)6, observer.PropertyClassName.size());
	if ((size_t)6 == observer.PropertyClassName.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Runnable"), observer.PropertyClassName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyRunnable"), observer.PropertyClassName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyRunnable"), observer.PropertyClassName[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyRunnable"), observer.PropertyClassName[3]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyRunnable"), observer.PropertyClassName[4]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyRunnable"), observer.PropertyClassName[5]);
	}
	CHECK_EQUAL((size_t)6, observer.PropertyName.size());
	if ((size_t)6 == observer.PropertyName.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MSG"), observer.PropertyName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$myProp"), observer.PropertyName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$myStaticProp"), observer.PropertyName[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$protectedVar"), observer.PropertyName[3]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$constFinal"), observer.PropertyName[4]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$publicVar"), observer.PropertyName[5]);
	}
	if ((size_t)5 == observer.PropertyConsts.size()) {
		CHECK(observer.PropertyConsts[0]);
	}
	if ((size_t)5 == observer.PropertyIsStatic.size()) {
		CHECK(observer.PropertyConsts[0]);
		CHECK(observer.PropertyConsts[2]);
	}
}

TEST_FIXTURE(ParserTestClass, ScanStringWithAllPossibleVariableTypes) {
	TestClassObserverClass observer;
	Parser->SetVariableObserver(&observer);

	// test a global variable
	// a function parameter with a type hint
	// a variable in a function 
	// a variable with a long method chain
	// a foreach($arr as $k => $v) loop
	// a list($var1, $var2, $var3) call
	// a catch block
	// a global declaration
	// a static declaration
	UnicodeString code = mvceditor::StringHelperClass::charToIcu(
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
	CHECK(Parser->ScanString(code, LintResults));
	CHECK_EQUAL((size_t)14, observer.VariableMethodName.size());
	if ((size_t)14 == observer.VariableMethodName.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableMethodName[0]);
		for (size_t i = 1; i < 14; ++i) {
			CHECK_EQUAL(UNICODE_STRING_SIMPLE("workFunc"), observer.VariableMethodName[i]);
		}
	}
	CHECK_EQUAL((size_t)14, observer.VariableName.size());
	if ((size_t)14 == observer.VariableName.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$glob"), observer.VariableName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$srcGlobal"), observer.VariableName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$local"), observer.VariableName[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$localName"), observer.VariableName[3]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$k"), observer.VariableName[4]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$v"), observer.VariableName[5]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$item1"), observer.VariableName[6]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$item2"), observer.VariableName[7]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$item3"), observer.VariableName[8]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$glob"), observer.VariableName[9]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$specificException"), observer.VariableName[10]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$baseException"), observer.VariableName[11]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$glob"), observer.VariableName[12]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$stat"), observer.VariableName[13]);
	}
	CHECK_EQUAL((size_t)14, observer.VariableChainList.size());
	if ((size_t)14 == observer.VariableChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Globals"), observer.VariableChainList[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Globals"), observer.VariableChainList[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$srcGlobal"), observer.VariableChainList[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$srcGlobal->name"), observer.VariableChainList[3]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableChainList[4]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableChainList[5]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableChainList[6]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableChainList[7]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableChainList[8]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Globals"), observer.VariableChainList[9]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("SpecificException"), observer.VariableChainList[10]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Exception"), observer.VariableChainList[11]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableChainList[12]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), observer.VariableChainList[13]);
	}
}

TEST_FIXTURE(ParserTestClass, ShouldUsePhpDocAnnotations) {
	TestClassObserverClass observer;
	Parser->SetClassMemberObserver(&observer);
	Parser->SetVariableObserver(&observer);

	// test all the PHPDoc stuff
	// @property, @property-read, @property-write, @method, and @var
	// also @param and @return
	UnicodeString code = mvceditor::StringHelperClass::charToIcu(
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
	CHECK(Parser->ScanString(code, LintResults));
	CHECK_EQUAL((size_t)2, observer.MethodClassName.size());
	if ((size_t)2 == observer.MethodClassName.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Person"), observer.MethodClassName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Person"), observer.MethodClassName[1]);
	}
	if ((size_t)2 == observer.MethodName.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("getAge"), observer.MethodName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("__call"), observer.MethodName[1]);
	}
	if ((size_t)2 == observer.MethodReturnType.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Integer"), observer.MethodReturnType[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("string"), observer.MethodReturnType[1]);
	}
	if ((size_t)2 == observer.MethodSignature.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("public function getAge(int $int1, int $int2)"), observer.MethodSignature[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("public function __call($name, $arg1, $arg2)"), observer.MethodSignature[1]);
	}
	CHECK_EQUAL((size_t)4, observer.PropertyClassName.size());
	if ((size_t)4 == observer.PropertyClassName.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Person"), observer.PropertyClassName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Person"), observer.PropertyClassName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Person"), observer.PropertyClassName[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Person"), observer.PropertyClassName[3]);
	}
	if ((size_t)4 == observer.PropertyName.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$nameString"), observer.PropertyName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$Name"), observer.PropertyName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$WritableName"), observer.PropertyName[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$FullName"), observer.PropertyName[3]);
	}
	if ((size_t)4 == observer.PropertyType.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("string"), observer.PropertyType[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("NameClass"), observer.PropertyType[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("NameClass"), observer.PropertyType[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("CName"), observer.PropertyType[3]);
	}
	if ((size_t)3 == observer.VariableName.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$arg1"), observer.VariableName[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$arg2"), observer.VariableName[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$newName"), observer.VariableName[2]);
	}
	if ((size_t)3 == observer.VariableChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("factoryName()"), observer.VariableChainList[2]);
	}
	if ((size_t)3 == observer.VariablePhpDocType.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Integer"), observer.VariablePhpDocType[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("Integer"), observer.VariablePhpDocType[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("NameClass"), observer.VariablePhpDocType[2]);
	}
}

TEST_FIXTURE(ParserTestClass, MethodEndPos) {
	TestClassObserverClass observer;
	Parser->SetClassObserver(&observer);
	Parser->SetClassMemberObserver(&observer);
	Parser->SetFunctionObserver(&observer);
	UnicodeString code = mvceditor::StringHelperClass::charToIcu(
		"class MyClass {\n"     //16
		"\n"                    // 1
		"function work() {\n"   //18
		"   \n"                 // 4
		"}\n"
		"}"
	);
	CHECK(Parser->ScanString(code, LintResults));
	CHECK(!observer.MethodEndPos.empty());
	if (!observer.MethodEndPos.empty()) {
		CHECK_EQUAL((16 + 1 + 18 + 4), observer.MethodEndPos[0]);
	}
}


TEST_FIXTURE(ParserTestClass, LintFileShouldReturnTrueOnValidFile) {
	wxString file = TestProjectDir + wxT("test.php");
	mvceditor::LintResultsClass results;
	CHECK(Parser->LintFile(file, results));
}

TEST_FIXTURE(ParserTestClass, LintFileShouldReturnTrueWhenFileIsOnlyHtml) {
	CreateFixtureFile(wxT("testpure.php"), wxString::FromAscii(
			"<html> </html>"
	));
	wxString file = TestProjectDir + wxT("testpure.php");
	mvceditor::LintResultsClass results;
	CHECK(Parser->LintFile(file, results));
}

TEST_FIXTURE(ParserTestClass, LintFileShouldReturnTrueWhenFileHasHtmlWithPhp) {
	CreateFixtureFile(wxT("testpure.php"), wxString::FromAscii(
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
	));
	wxString file = TestProjectDir + wxT("testpure.php");
	mvceditor::LintResultsClass results;
	CHECK(Parser->LintFile(file, results));
}

TEST_FIXTURE(ParserTestClass, LintFileShouldReturnTrueWhenPhpHasCommentsOnly) {
	CreateFixtureFile(wxT("testpure.php"), wxString::FromAscii(
			"<?php\n"
			"/* this is a comment\n"
			" */\n"
			"?>\n"
			"<html>\n"
			"<body>\n"
			"</body>\n"
			"</html>\n"
	));
	wxString file = TestProjectDir + wxT("testpure.php");
	mvceditor::LintResultsClass results;
	CHECK(Parser->LintFile(file, results));
}

TEST_FIXTURE(ParserTestClass, LintStringShouldReturnFalseOnBadCode) {
	UnicodeString code = UNICODE_STRING_SIMPLE("$'gag's = 'hello' \"again\" $not gaging;");
	mvceditor::LintResultsClass results;
	CHECK_EQUAL(false, Parser->LintString(code, results));
	CHECK(results.Error.length() > 0);
	CHECK(results.LineNumber > 0);
}

TEST_FIXTURE(ParserTestClass, ParseVariableExpression) {
	UnicodeString code = UNICODE_STRING_SIMPLE("$variable");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$variable"), symbol.Lexeme);
}

TEST_FIXTURE(ParserTestClass, ParseObjectExpression) {
	UnicodeString code = UNICODE_STRING_SIMPLE("$variable->prop");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$variable"), symbol.Lexeme);
	CHECK_EQUAL((size_t)2, symbol.ChainList.size());
	if ((size_t)2 == symbol.ChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$variable"), symbol.ChainList[0]);	
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->prop"), symbol.ChainList[1]);	
	}
}

TEST_FIXTURE(ParserTestClass, ParseObjectWithoutPropertyExpression) {

	// if an expression ends with the operator, still want to add it to the
	// chain list so that during code completion we can trigger lookup
	// of class members
	UnicodeString code = UNICODE_STRING_SIMPLE("$obj->");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$obj"), symbol.Lexeme);
	CHECK_EQUAL((size_t)2, symbol.ChainList.size());
	if ((size_t)2 == symbol.ChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$obj"), symbol.ChainList[0]);	
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->"), symbol.ChainList[1]);	
	}
}

TEST_FIXTURE(ParserTestClass, ParseStaticWithoutPropertyExpression) {

	// if an expression ends with the operator, still want to add it to the
	// chain list so that during code completion we can trigger lookup
	// of class members
	UnicodeString code = UNICODE_STRING_SIMPLE("MyClass::");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass"), symbol.Lexeme);
	CHECK_EQUAL((size_t)2, symbol.ChainList.size());
	if ((size_t)2 == symbol.ChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass"), symbol.ChainList[0]);	
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("::"), symbol.ChainList[1]);	
	}
}

TEST_FIXTURE(ParserTestClass, ParseStaticExpression) {
	UnicodeString code = UNICODE_STRING_SIMPLE("MyClass::$DEFAULT");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass"), symbol.Lexeme);
	CHECK_EQUAL((size_t)2, symbol.ChainList.size());
	if ((size_t)2 == symbol.ChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass"), symbol.ChainList[0]);	
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("::$DEFAULT"), symbol.ChainList[1]);	
	}
}

TEST_FIXTURE(ParserTestClass, ParseConstantExpression) {
	UnicodeString code = UNICODE_STRING_SIMPLE("MyClass::PI;");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass"), symbol.Lexeme);
	CHECK_EQUAL((size_t)2, symbol.ChainList.size());
	if ((size_t)2 == symbol.ChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("MyClass"), symbol.ChainList[0]);	
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("::PI"), symbol.ChainList[1]);	
	}
}

TEST_FIXTURE(ParserTestClass, ParseChainExpression) {
	UnicodeString code = UNICODE_STRING_SIMPLE("$variable->func1()->prop2->func3()->prop4");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$variable"), symbol.Lexeme);
	CHECK_EQUAL((size_t)5, symbol.ChainList.size());
	if ((size_t)5 == symbol.ChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$variable"), symbol.ChainList[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->func1()"), symbol.ChainList[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->prop2"), symbol.ChainList[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->func3()"), symbol.ChainList[3]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->prop4"), symbol.ChainList[4]);
	}
}

TEST_FIXTURE(ParserTestClass, ParseChainExpressionStartsWithFunction) {
	UnicodeString code = UNICODE_STRING_SIMPLE("func1()->prop2->prop4");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), symbol.Lexeme);
	CHECK_EQUAL((size_t)3, symbol.ChainList.size());
	if ((size_t)3 == symbol.ChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("func1()"), symbol.ChainList[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->prop2"), symbol.ChainList[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->prop4"), symbol.ChainList[2]);
	}
}

TEST_FIXTURE(ParserTestClass, ParseChainExpressionWithFunctionArguments) {

	// function args $a, $b should be ignored here
	UnicodeString code = UNICODE_STRING_SIMPLE("$this->propA->func1($a, $b)->prop2->prop4");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$this"), symbol.Lexeme);
	CHECK_EQUAL((size_t)5, symbol.ChainList.size());
	if ((size_t)5 == symbol.ChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$this"), symbol.ChainList[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->propA"), symbol.ChainList[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->func1()"), symbol.ChainList[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->prop2"), symbol.ChainList[3]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->prop4"), symbol.ChainList[4]);
	}
}

TEST_FIXTURE(ParserTestClass, ParseChainExpressionWithChainThatStartsWithMethodArguments) {

	// function args $a, $b should be ignored here
	UnicodeString code = UNICODE_STRING_SIMPLE("$this->func1($a, $b)->propA->prop2->prop4");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$this"), symbol.Lexeme);
	CHECK_EQUAL((size_t)5, symbol.ChainList.size());
	if ((size_t)5 == symbol.ChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$this"), symbol.ChainList[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->func1()"), symbol.ChainList[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->propA"), symbol.ChainList[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->prop2"), symbol.ChainList[3]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->prop4"), symbol.ChainList[4]);
	}
}

TEST_FIXTURE(ParserTestClass, ParseChainExpressionWithChainThatStartsWithFunctionArguments) {

	// function args $a, $b should be ignored here
	UnicodeString code = UNICODE_STRING_SIMPLE("func1($a, $b)->propA->func2($c)->prop4");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);

	// lexeme empty because function call is first in the chain
	CHECK_EQUAL(UNICODE_STRING_SIMPLE(""), symbol.Lexeme);
	CHECK_EQUAL((size_t)4, symbol.ChainList.size());
	if ((size_t)4 == symbol.ChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("func1()"), symbol.ChainList[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->propA"), symbol.ChainList[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->func2()"), symbol.ChainList[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->prop4"), symbol.ChainList[3]);
	}
}

TEST_FIXTURE(ParserTestClass, ParseChainExpressionWithWhitespace) {
	UnicodeString code = UNICODE_STRING_SIMPLE("$propA->time->time\n->");
	mvceditor::SymbolClass symbol;
	Parser->ParseExpression(code, symbol);

	// lexeme empty because function call is first in the chain
	CHECK_EQUAL(UNICODE_STRING_SIMPLE("$propA"), symbol.Lexeme);
	CHECK_EQUAL((size_t)4, symbol.ChainList.size());
	if ((size_t)4 == symbol.ChainList.size()) {
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("$propA"), symbol.ChainList[0]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->time"), symbol.ChainList[1]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->time"), symbol.ChainList[2]);
		CHECK_EQUAL(UNICODE_STRING_SIMPLE("->"), symbol.ChainList[3]);
	}
}

}