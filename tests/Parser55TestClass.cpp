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
 * @copyright  2017 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */
#include <UnitTest++.h>
#include <pelet/ParserClass.h>
#include <FileTestFixtureClass.h>
#include <TestObserverClass.h>
#include <PeletChecks.h>
#include <unicode/ustring.h>
#include <vector>

/**
 * This test suite runs tests specific to PHP 5.5 features.
 */

class Parser55FeaturesTestClass {

public:
	
	pelet::ParserClass Parser;
	pelet::LintResultsClass LintResults;
	TestObserverClass Observer;
	
	Parser55FeaturesTestClass() 
		: Parser()
		, LintResults() 
		, Observer() {
		Parser.SetVersion(pelet::PHP_55);
	}
};

SUITE (Parser55FeaturesTestClass) {

TEST_FIXTURE(Parser55FeaturesTestClass, FinallyClause) {
	UnicodeString code = _U(
		"class SafeClass {\n"
		"  function safeCall($url) {\n"
		"    try { \n"
		"    } catch (Exception $e) {\n"
		"    \n"
		"    } finally {\n"
		"    \n"
		"    }\n"
		"  }\n"
		"}\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser55FeaturesTestClass, Yield) {
	UnicodeString code = _U(
		"class IteratorClass {\n"
		"  function iterate() {\n"
		"    for ($i = 0; $i < 100; $i++) {\n"
		"      yield $i;\n"
		"    }\n"
		"  }\n"
		"}\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser55FeaturesTestClass, ListInForEach) {
	UnicodeString code = _U(
		"<?php\n"
		"$array = [\n"
		"    [1, 2],\n"
		"    [3, 4],\n"
		"];\n"
		"\n"
		"foreach ($array as list($a, $b)) {\n"
		"    echo \"A: $a; B: $b\";\n"
		"}\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser55FeaturesTestClass, ExpressionsInEmpty) {
	UnicodeString code = _U(
		"<?php\n"
		"function always_false() {\n"
		"    return false;\n"
		"}\n"
		"\n"
		"if (empty(always_false())) {\n"
		"    echo 'This will be printed.';\n"
		"}\n"
		"\n"
		"if (empty(true)) {\n"
		"    echo 'This will not be printed.';\n"
		"}\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser55FeaturesTestClass, ParserTernaryWithDefault) {
	Parser.SetClassObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"class MyClass {\n"
		"  function stop($name) {\n"
		"    $this->name = $name ?: new MyClass(); \n"
		"  }\n"
		"}\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.ClassName);
	CHECK_UNISTR_EQUALS("MyClass", Observer.ClassName[0]);
}

TEST_FIXTURE(Parser55FeaturesTestClass, ParserClassStaticIndirectVariable) {
	Parser.SetClassObserver(&Observer);
	Parser.SetClassMemberObserver(&Observer);
	Parser.SetVariableObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"class MyClass {\n"
		"  function stop() {\n"
		"    $this::$appname = null;\n"
	    "	}\n"
	    "}\n"
    );

	CHECK(Parser.ScanString(code, LintResults));
	// not capturing indirect variables for now
	CHECK_VECTOR_SIZE(0, Observer.VariableExpressions);
}

TEST_FIXTURE(Parser55FeaturesTestClass, ParserListInForeach) {
	Parser.SetClassObserver(&Observer);
	Parser.SetClassMemberObserver(&Observer);
	Parser.SetVariableObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"$array = [2, 5];\n"
		"foreach ($array as list($a, $b)) {\n"
    	"  echo \"A: $a; B: $b\n\";\n"
		"}\n"
    );

	CHECK(Parser.ScanString(code, LintResults));
	// not capturing indirect variables for now
	CHECK_VECTOR_SIZE(3, Observer.VariableName);
	CHECK_UNISTR_EQUALS("$array", Observer.VariableName[0]);
	CHECK_UNISTR_EQUALS("$a", Observer.VariableName[1]);
	CHECK_UNISTR_EQUALS("$b", Observer.VariableName[2]);
}

}
