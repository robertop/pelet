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
 * This test suite runs tests specific to PHP 7.0 features.
 */

class Parser70FeaturesTestClass {

public:
	
	pelet::ParserClass Parser;
	pelet::LintResultsClass LintResults;
	TestObserverClass Observer;
	
	Parser70FeaturesTestClass() 
		: Parser()
		, LintResults() 
		, Observer() {
		Parser.SetVersion(pelet::PHP_70);
	}
};

SUITE (Parser70FeaturesTestClass) {

TEST_FIXTURE(Parser70FeaturesTestClass, ParameterScalarTypeDeclarations) {
	UnicodeString code = _U(
		"<?php\n"
		"// Coercive mode\n"
		"function sumOfInts(int ...$ints)\n"
		"{\n"
		"    return array_sum($ints);\n"
		"}\n"
		"var_dump(sumOfInts(2, '3', 4.1));\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser70FeaturesTestClass, ReturnTypeDeclarations) {
	UnicodeString code = _U(
		"<?php\n"
		"function arraysSum(array ...$arrays): array\n"
		"{\n"
		"    return array_map(function(array $array): int {\n"
		"        return array_sum($array);\n"
		"    }, $arrays);\n"
		"}\n"
		"print_r(arraysSum([1,2,3], [4,5,6], [7,8,9]));\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser70FeaturesTestClass, NullCoalesce) {
	UnicodeString code = _U(
		"<?php\n"
		"$username = $_GET['user'] ?? 'nobody';\n"
		"$username = $_GET['user'] ?? $_POST['user'] ?? 'nobody';\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser70FeaturesTestClass, Spaceship) {
	UnicodeString code = _U(
		"<?php\n"
		"echo 1 <=> 1; // 0\n"
		"echo 1.5 <=> 1.5; // 0\n"
		"echo 'a' <=> 'a'; // 0\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser70FeaturesTestClass, AnonymousClass) {
	UnicodeString code = _U(
		"<?php\n"
		"$app = new Application;\n"
		"$app->setLogger(new class implements Logger {\n"
		"    public function log(string $msg) {\n"
		"        echo $msg;\n"
		"    }\n"
		"});\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser70FeaturesTestClass, GroupUse) {
	UnicodeString code = _U(
		"<?php\n"
		"use some\\space\\{ClassA, ClassB, ClassC as C};\n"
		"use function some\\space\\{fn_a, fn_b, fn_c};\n"
		"use const some\\space\\{ConstA, ConstB, ConstC};\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
	u_printf("%.S\n", LintResults.Error.getTerminatedBuffer());
}

TEST_FIXTURE(Parser70FeaturesTestClass, GeneratorReturn) {
	UnicodeString code = _U(
		"<?php\n"
		"function gen()\n"
		"{\n"
		"    yield 1;\n"
		"    yield 2;\n"
		"    yield from gen2();\n"
		"}\n"
		"function gen2()\n"
		"{\n"
		"    yield 3;\n"
		"    yield 4;\n"
		"}\n"
		"foreach (gen() as $val)\n"
		"{\n"
		"    echo $val, PHP_EOL;\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

}
