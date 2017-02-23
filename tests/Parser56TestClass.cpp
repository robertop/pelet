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

TEST_FIXTURE(Parser56FeaturesTestClass, VariadicExpressions) {
	Parser.SetFunctionObserver(&Observer);
	Parser.SetVariableObserver(&Observer);
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"function f($req, $opt = null, ...$params) {\n"
		"    // $params is an array containing the remaining arguments.\n"
		"    printf('$req: %d; $opt: %d; number of params: %d',\n"
		"           $req, $opt, count($params));\n"
		"}\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	
	CHECK_VECTOR_SIZE(1, Observer.FunctionName);
	CHECK_UNISTR_EQUALS("f", Observer.FunctionName[0]);
	CHECK(Observer.FunctionHasVariableArguments[0]);
	CHECK_VECTOR_SIZE(3, Observer.VariableName);
	CHECK_UNISTR_EQUALS("$req", Observer.VariableName[0]);
	CHECK_UNISTR_EQUALS("$opt", Observer.VariableName[1]);
	CHECK_UNISTR_EQUALS("$params", Observer.VariableName[2]);
}

TEST_FIXTURE(Parser56FeaturesTestClass, ArgumentUnpacking) {
	Parser.SetFunctionObserver(&Observer);
	Parser.SetVariableObserver(&Observer);
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"$req = 'hello';\n"
        "$params = [1, 2, 3];\n"
        "callMe($req, ...$params);\n"
		"\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);
    CHECK_UNISTR_EQUALS("callMe", Observer.VariableExpressions[0]->ChainList[0].Name);
    CHECK_VECTOR_SIZE(2, Observer.VariableExpressions[0]->ChainList[0].CallArguments);
    CHECK_EQUAL(false, Observer.VariableExpressions[0]->ChainList[0].CallArguments[0]->IsUnpack);
    CHECK(Observer.VariableExpressions[0]->ChainList[0].CallArguments[1]->IsUnpack);
}


TEST_FIXTURE(Parser56FeaturesTestClass, UseFunctionsExpressions) {
	Parser.SetClassObserver(&Observer);
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"namespace Name\\Space {\n"
		"    const FOO = 42;\n"
		"    function f() { echo __FUNCTION__ ; }\n"
		"}\n"
		"namespace {\n"
		"    use const Name\\Space\\FOO;\n"
		"    use function Name\\Space\\f;\n"
		"    use function Name\\Space\\f AS dup;\n"
		"    echo 'hello ' . FOO;\n"
		"    f();\n"
		"    dup();\n"
		"}\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	
	CHECK_VECTOR_SIZE(2, Observer.FunctionImportName);
	CHECK_UNISTR_EQUALS("\\Name\\Space\\f", Observer.FunctionImportName[0]);
	CHECK_UNISTR_EQUALS("\\Name\\Space\\f", Observer.FunctionImportName[1]);
	
	CHECK_VECTOR_SIZE(2, Observer.FunctionImportAlias);
	CHECK_UNISTR_EQUALS("f", Observer.FunctionImportAlias[0]);
	CHECK_UNISTR_EQUALS("dup", Observer.FunctionImportAlias[1]);
	
	CHECK_VECTOR_SIZE(1, Observer.ConstantImportName);
	CHECK_VECTOR_SIZE(1, Observer.ConstantImportAlias);
	CHECK_UNISTR_EQUALS("\\Name\\Space\\FOO", Observer.ConstantImportName[0]);
	CHECK_UNISTR_EQUALS("FOO", Observer.ConstantImportAlias[0]);

	CHECK_VECTOR_SIZE(1, Observer.BinaryOperations);
	CHECK_EQUAL(pelet::ExpressionClass::SCALAR, Observer.BinaryOperations[0]->LeftOperand->ExpressionType);
	CHECK_EQUAL(pelet::ExpressionClass::SCALAR, Observer.BinaryOperations[0]->RightOperand->ExpressionType);
	
	CHECK_VECTOR_SIZE(2, Observer.VariableExpressions);
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);
	CHECK_EQUAL(pelet::StatementClass::EXPRESSION, Observer.VariableExpressions[0]->Type);
	CHECK_UNISTR_EQUALS("\\Name\\Space\\f", Observer.VariableExpressions[0]->ChainList[0].Name);

	CHECK_EQUAL(pelet::StatementClass::EXPRESSION, Observer.VariableExpressions[1]->Type);
	CHECK_UNISTR_EQUALS("\\Name\\Space\\f", Observer.VariableExpressions[1]->ChainList[0].Name);
}


}
