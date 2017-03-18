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

TEST_FIXTURE(Parser71FeaturesTestClass, ParseNullableTypeFunctions) {
	Parser.SetFunctionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"function sumOfInts(?Number $a, Number $b, ?Number $c): ?Number \n"
		"{\n"
		"    return $a + $b + $c;\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.FunctionSignature);
	CHECK_UNISTR_EQUALS("function sumOfInts(?Number $a, Number $b, ?Number $c): ?Number", Observer.FunctionSignature[0]);
	CHECK_UNISTR_EQUALS("Number", Observer.FunctionReturnType[0]);
}

TEST_FIXTURE(Parser71FeaturesTestClass, ParseNullableTypeMethods) {
	Parser.SetClassMemberObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"class MyClass {\n"
		"  function sumOfInts(?Number $a, Number $b, ?Number $c): ?Number \n"
		"  {\n"
		"    return $a + $b + $c;\n"
		"  }\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.MethodSignature);
	CHECK_UNISTR_EQUALS("public function sumOfInts(?Number $a, Number $b, ?Number $c): ?Number", Observer.MethodSignature[0]);
	CHECK_UNISTR_EQUALS("Number", Observer.MethodReturnType[0]);
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

TEST_FIXTURE(Parser71FeaturesTestClass, ParseVoidFunctions) {
	Parser.SetFunctionObserver(&Observer);
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
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.FunctionSignature);
	CHECK_UNISTR_EQUALS("function printNumbers(Number $a, Number $b): void", Observer.FunctionSignature[0]);
	CHECK_UNISTR_EQUALS("void", Observer.FunctionReturnType[0]);
}

TEST_FIXTURE(Parser71FeaturesTestClass, LintArrayDestructuring) {
	Parser.SetVariableObserver(&Observer);
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
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(5, Observer.VariableName);
	CHECK_UNISTR_EQUALS("$data", Observer.VariableName[0]);
	CHECK_UNISTR_EQUALS("$id1", Observer.VariableName[1]);
	CHECK_UNISTR_EQUALS("$name1", Observer.VariableName[2]);
	CHECK_UNISTR_EQUALS("$id", Observer.VariableName[3]);
	CHECK_UNISTR_EQUALS("$name", Observer.VariableName[4]);
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

TEST_FIXTURE(Parser71FeaturesTestClass, ParseClassConstantVisibility) {
	Parser.SetClassMemberObserver(&Observer);
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
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(4, Observer.PropertyName);
	CHECK_UNISTR_EQUALS("PUBLIC_CONST_A", Observer.PropertyName[0]);
	CHECK_UNISTR_EQUALS("PUBLIC_CONST_B", Observer.PropertyName[1]);
	CHECK_UNISTR_EQUALS("PROTECTED_CONST", Observer.PropertyName[2]);
	CHECK_UNISTR_EQUALS("PRIVATE_CONST", Observer.PropertyName[3]);
	
	CHECK_VECTOR_SIZE(4, Observer.PropertyConsts);
	CHECK(Observer.PropertyConsts[0]);
	CHECK(Observer.PropertyConsts[1]);
	CHECK(Observer.PropertyConsts[2]);
	CHECK(Observer.PropertyConsts[3]);
	
	CHECK_VECTOR_SIZE(4, Observer.PropertyVisibility);
	CHECK_EQUAL(pelet::TokenClass::PUBLIC, Observer.PropertyVisibility[0]);
	CHECK_EQUAL(pelet::TokenClass::PUBLIC, Observer.PropertyVisibility[1]);
	CHECK_EQUAL(pelet::TokenClass::PROTECTED, Observer.PropertyVisibility[2]);
	CHECK_EQUAL(pelet::TokenClass::PRIVATE, Observer.PropertyVisibility[3]);
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

TEST_FIXTURE(Parser71FeaturesTestClass, ParseMultiCatchException) {
	Parser.SetVariableObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"try {\n"
		"  // some code\n"
		"} catch (FirstException | SecondException $e) {\n"
		"  // handle first and second exceptions\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(2, Observer.VariableName);
	CHECK_UNISTR_EQUALS("$e", Observer.VariableName[0]);
	CHECK_UNISTR_EQUALS("$e", Observer.VariableName[1]);
	CHECK_VECTOR_SIZE(2, Observer.VariableExpressionChainList);
	CHECK_UNISTR_EQUALS("FirstException", Observer.VariableExpressionChainList[0]);
	CHECK_UNISTR_EQUALS("SecondException", Observer.VariableExpressionChainList[1]);
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

TEST_FIXTURE(Parser71FeaturesTestClass, ParseKeysInList) {
	Parser.SetVariableObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"$data = [\n"
		"  ['id' => 1, 'name' => 'Tom'],\n"
		"  ['id' => 2, 'name' => 'Fred'],\n"
		"];\n"
		"list('id' => $id1, 'name' => $name1) = $data[0];\n"
		"['id' => $id2, 'name' => $name2] = $data[0];\n"
		"foreach ($data as list('id' => $id3, 'name' => $name3)) {\n"
		"  // logic here with $id3 and $name3\n"
		"}\n"
		"foreach ($data as ['id' => $id4, 'name' => $name4]) {\n"
		"  // logic here with $id4 and $name4\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(9, Observer.VariableName);
	CHECK_UNISTR_EQUALS("$data", Observer.VariableName[0]);
	CHECK_UNISTR_EQUALS("$id1", Observer.VariableName[1]);
	CHECK_UNISTR_EQUALS("$name1", Observer.VariableName[2]);
	CHECK_UNISTR_EQUALS("$id2", Observer.VariableName[3]);
	CHECK_UNISTR_EQUALS("$name2", Observer.VariableName[4]);
	CHECK_UNISTR_EQUALS("$id3", Observer.VariableName[5]);
	CHECK_UNISTR_EQUALS("$name3", Observer.VariableName[6]);
	CHECK_UNISTR_EQUALS("$id4", Observer.VariableName[7]);
	CHECK_UNISTR_EQUALS("$name4", Observer.VariableName[8]);
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
