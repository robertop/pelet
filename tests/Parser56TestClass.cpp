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
 * This test suite runs tests specific to PHP 5.6 features.
 */

class Parser56FeaturesTestClass {

public:
	
	pelet::ParserClass Parser;
	pelet::LintResultsClass LintResults;
	TestObserverClass Observer;
	
	Parser56FeaturesTestClass() 
		: Parser()
		, LintResults() 
		, Observer() {
		Parser.SetVersion(pelet::PHP_56);
	}
};

SUITE (Parser56FeaturesTestClass) {

TEST_FIXTURE(Parser56FeaturesTestClass, VariadicParameters) {
	UnicodeString code = _U(
		"<?php\n"
		"function f($req, $opt = null, ...$params) {\n"
		"    // $params is an array containing the remaining arguments.\n"
		"    printf('$req: %d; $opt: %d; number of params: %d',\n"
		"           $req, $opt, count($params));\n"
		"}\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser56FeaturesTestClass, SplatArguments) {
	UnicodeString code = _U(
		"<?php\n"
		"function add($a, $b, $c) {\n"
		"    return $a + $b + $c;\n"
		"}\n"
		"$operators = [2, 3];\n"
		"echo add(1, ...$operators);\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser56FeaturesTestClass, ConstantArray) {
	UnicodeString code = _U(
		"<?php\n"
		"const ARR = ['a', 'b'];\n"
		"?>\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser56FeaturesTestClass, ConstantExpressions) {
	UnicodeString code = _U(
		"<?php\n"
		"const ONE = 1;\n"
		"const TWO = ONE * 2;\n"
		"class C {\n"
		"    const THREE = TWO + 1;\n"
		"    const ONE_THIRD = ONE / self::THREE;\n"
		"    const SENTENCE = 'The value of THREE is '.self::THREE;\n"
		"\n"
		"    public function f($a = ONE + self::THREE) {\n"
		"        return $a;\n"
		"    }\n"
		"}\n"
	);
	CHECK(Parser.LintString(code, LintResults	));
}

TEST_FIXTURE(Parser56FeaturesTestClass, ExponentExpressions) {
	UnicodeString code = _U(
		"<?php\n"
		"printf('2 ** 3 ==      %d', 2 ** 3);\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser56FeaturesTestClass, UseFunctions) {
	UnicodeString code = _U(
		"<?php\n"
		"namespace Name\\Space {\n"
		"    const FOO = 42;\n"
		"    function f() { echo __FUNCTION__ ; }\n"
		"}\n"
		"namespace {\n"
		"    use const Name\\Space\\FOO;\n"
		"    use function Name\\Space\\f;\n"
		"    echo FOO;\n"
		"    f();\n"
		"}\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}





}
