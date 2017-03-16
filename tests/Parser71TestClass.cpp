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
 * This test suite runs tests specific to PHP 7.1 features.
 */

class Parser71FeaturesTestClass {

public:
	
	pelet::ParserClass Parser;
	pelet::LintResultsClass LintResults;
	TestObserverClass Observer;
	
	Parser71FeaturesTestClass() 
		: Parser()
		, LintResults() 
		, Observer() {
		Parser.SetVersion(pelet::PHP_71);
	}
};

SUITE (Parser71FeaturesTestClass) {

TEST_FIXTURE(Parser71FeaturesTestClass, LintNullableTypes) {
	UnicodeString code = _U(
		"<?php\n"
		"function sumOfInts(?Number $a, ?Number $b): ?Number \n"
		"{\n"
		"    return $a + $b;\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser71FeaturesTestClass, LintVoidFunctions) {
	UnicodeString code = _U(
		"<?php\n"
		"function printNumbers(Number $a, Number $b): void \n"
		"{\n"
		"    echo $a;\n"
		"    echo $b;\n"
		"    return;\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser71FeaturesTestClass, LintArrayDestructuring) {
	UnicodeString code = _U(
		"<?php\n"
		" $data = [\n"
		"   [1, 'Tom'],\n"
		"   [2, 'Fred'],\n"
		" ];\n"
		"[$id1, $name1] = $data[0];\n"
		"foreach ($data as [$id, $name]) {\n"
		"    // logic here with $id and $name\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser71FeaturesTestClass, LintClassConstantVisibility) {
	UnicodeString code = _U(
		"<?php\n"
		"class ConstDemo\n"
		"{\n"
			"const PUBLIC_CONST_A = 1;\n"
			"public const PUBLIC_CONST_B = 2;\n"
			"protected const PROTECTED_CONST = 3;\n"
			"private const PRIVATE_CONST = 4;\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser71FeaturesTestClass, LintMultiCatchException) {
	UnicodeString code = _U(
		"<?php\n"
		"try {\n"
		"  // some code\n"
		"} catch (FirstException | SecondException $e) {\n"
		"  // handle first and second exceptions\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}


TEST_FIXTURE(Parser71FeaturesTestClass, LintKeysInList) {
	UnicodeString code = _U(
		"<?php\n"
		"$data = [\n"
		"  ['id' => 1, 'name' => 'Tom'],\n"
		"  ['id' => 2, 'name' => 'Fred'],\n"
		"];\n"
		"list('id' => $id1, 'name' => $name1) = $data[0];\n"
		"['id' => $id1, 'name' => $name1] = $data[0];\n"
		"foreach ($data as list('id' => $id, 'name' => $name)) {\n"
		"  // logic here with $id and $name\n"
		"}\n"
		"foreach ($data as ['id' => $id, 'name' => $name]) {\n"
		"  // logic here with $id and $name\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser71FeaturesTestClass, StringNegativeOffsets) {
	UnicodeString code = _U(
		"<?php\n"
			"var_dump('abcdef'[-2]);"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

}
