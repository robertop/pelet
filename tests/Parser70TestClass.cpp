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

TEST_FIXTURE(Parser70FeaturesTestClass, LintParameterScalarTypeDeclarations) {
	UnicodeString code = _U(
		"<?php\n"
		"function sumOfInts(int ...$ints)\n"
		"{\n"
		"    return array_sum($ints);\n"
		"}\n"
		"var_dump(sumOfInts(2, '3', 4.1));\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser70FeaturesTestClass, ParseParameterScalarTypeDeclarations) {
	Parser.SetFunctionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"function sumOfInts(int $a, int $b)\n"
		"{\n"
		"    return array_sum([$a, $b]);\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	
	CHECK_VECTOR_SIZE(1, Observer.FunctionName);
	CHECK_UNISTR_EQUALS("sumOfInts", Observer.FunctionName[0]);
	CHECK_UNISTR_EQUALS("function sumOfInts(int $a, int $b)", Observer.FunctionSignature[0]);
}

TEST_FIXTURE(Parser70FeaturesTestClass, LintReturnTypeDeclarations) {
	Parser.SetFunctionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"function sumOfInts(int $a, int $b): int \n"
		"{\n"
		"    return array_sum([$a, $b]);\n"
		"}\n"
		"\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.FunctionName);
	CHECK_UNISTR_EQUALS("sumOfInts", Observer.FunctionName[0]);
	CHECK_UNISTR_EQUALS("function sumOfInts(int $a, int $b): int", Observer.FunctionSignature[0]);
	CHECK_UNISTR_EQUALS("int", Observer.FunctionReturnType[0]);
}

TEST_FIXTURE(Parser70FeaturesTestClass, LintNullCoalesce) {
	UnicodeString code = _U(
		"<?php\n"
		"$username = $_GET['user'] ?? 'nobody';\n"
		"$username = $_GET['user'] ?? $_POST['user'] ?? 'nobody';\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser70FeaturesTestClass, LintSpaceship) {
	UnicodeString code = _U(
		"<?php\n"
		"echo 1 <=> 1; // 0\n"
		"echo 1.5 <=> 1.5; // 0\n"
		"echo 'a' <=> 'a'; // 0\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser70FeaturesTestClass, LintAnonymousClass) {
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

TEST_FIXTURE(Parser70FeaturesTestClass, ParseAnonymousClass) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"(new class implements Logger {\n"
		"    public function log(string $msg) {\n"
		"        echo $msg;\n"
		"    }\n"
		"});\n"
		"\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.AnonymousClassExpressions);
	pelet::AnonymousClassExpressionClass* expr = Observer.AnonymousClassExpressions[0];
	CHECK_VECTOR_SIZE(1, expr->ImplementsList);
	CHECK_UNISTR_EQUALS("Logger", expr->ImplementsList[0]);
	CHECK_EQUAL(1, expr->Body.Size());
}

TEST_FIXTURE(Parser70FeaturesTestClass, LintGroupUse) {
	UnicodeString code = _U(
		"<?php\n"
		"use some\\space\\{ClassA, ClassB, ClassC as C};\n"
		"use function some\\space\\{fn_a, fn_b, fn_c};\n"
		"use const some\\space\\{ConstA, ConstB, ConstC};\n"
		"\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser70FeaturesTestClass, ParseGroupUse) {
	Parser.SetClassObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"use some\\space\\{ClassA, ClassB, ClassC as C};\n"
		"use function some\\space\\{fn_a, fn_b, fn_c as fc};\n"
		"use const some\\space\\{ConstA, ConstB, ConstC as cc};\n"
		"use some\\space\\{ClassX, function fn_y, const ConstZ as zz};\n"
		"\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	
	CHECK_VECTOR_SIZE(4, Observer.NamespaceUseName);
	CHECK_VECTOR_SIZE(4, Observer.NamespaceAlias);
	CHECK_UNISTR_EQUALS("\\some\\space\\ClassA", Observer.NamespaceUseName[0]);
	CHECK_UNISTR_EQUALS("\\some\\space\\ClassB", Observer.NamespaceUseName[1]);
	CHECK_UNISTR_EQUALS("\\some\\space\\ClassC", Observer.NamespaceUseName[2]);
	CHECK_UNISTR_EQUALS("\\some\\space\\ClassX", Observer.NamespaceUseName[3]);
	CHECK_UNISTR_EQUALS("ClassA", Observer.NamespaceAlias[0]);
	CHECK_UNISTR_EQUALS("ClassB", Observer.NamespaceAlias[1]);
	CHECK_UNISTR_EQUALS("C", Observer.NamespaceAlias[2]);
	CHECK_UNISTR_EQUALS("ClassX", Observer.NamespaceAlias[3]);

	CHECK_VECTOR_SIZE(4, Observer.FunctionImportName);
	CHECK_VECTOR_SIZE(4, Observer.FunctionImportAlias);
	CHECK_UNISTR_EQUALS("\\some\\space\\fn_a", Observer.FunctionImportName[0]);
	CHECK_UNISTR_EQUALS("\\some\\space\\fn_b", Observer.FunctionImportName[1]);
	CHECK_UNISTR_EQUALS("\\some\\space\\fn_c", Observer.FunctionImportName[2]);
	CHECK_UNISTR_EQUALS("\\some\\space\\fn_y", Observer.FunctionImportName[3]);
	CHECK_UNISTR_EQUALS("fn_a", Observer.FunctionImportAlias[0]);
	CHECK_UNISTR_EQUALS("fn_b", Observer.FunctionImportAlias[1]);
	CHECK_UNISTR_EQUALS("fc", Observer.FunctionImportAlias[2]);
	CHECK_UNISTR_EQUALS("fn_y", Observer.FunctionImportAlias[3]);

	CHECK_VECTOR_SIZE(4, Observer.ConstantImportName);
	CHECK_VECTOR_SIZE(4, Observer.ConstantImportAlias);
	CHECK_UNISTR_EQUALS("\\some\\space\\ConstA", Observer.ConstantImportName[0]);
	CHECK_UNISTR_EQUALS("\\some\\space\\ConstB", Observer.ConstantImportName[1]);
	CHECK_UNISTR_EQUALS("\\some\\space\\ConstC", Observer.ConstantImportName[2]);
	CHECK_UNISTR_EQUALS("\\some\\space\\ConstZ", Observer.ConstantImportName[3]);
	CHECK_UNISTR_EQUALS("ConstA", Observer.ConstantImportAlias[0]);
	CHECK_UNISTR_EQUALS("ConstB", Observer.ConstantImportAlias[1]);
	CHECK_UNISTR_EQUALS("cc", Observer.ConstantImportAlias[2]);
	CHECK_UNISTR_EQUALS("zz", Observer.ConstantImportAlias[3]);
}

TEST_FIXTURE(Parser70FeaturesTestClass, LintGeneratorReturn) {
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

TEST_FIXTURE(Parser70FeaturesTestClass, LintUniformVariableSyntax) {
	UnicodeString code = _U(
		"<?php\n"
		"$foo()['bar']();\n"
		"[$obj1, $obj2][0]->prop;\n"
		"getStr(){0};\n"
 
		"$foo['bar']::$baz;\n"
		"$foo::$bar::$baz;\n"
		"$foo->bar()::baz();\n"
 
		"foo()();\n"
		"$foo->bar()();\n"
		"Foo::bar()();\n"
		"$foo()();\n"

		"(function() { })();\n"
		"($obj->closure)();\n"
	);
	CHECK(Parser.LintString(code, LintResults));
}

TEST_FIXTURE(Parser70FeaturesTestClass, ParseUniformVariableSyntaxDereferencing) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"$foo()['bar']();\n"
	);
	//   |  |  |    $foo ()             |      ['bar']        |     ()    |
	//   |  |  |                        |                     |           |
	//   |  |  |                        |                     |           |
	//   |  |  |                        | IsArrayAccess = True|           |
	//   |  |  |--var x--chain item 1---| ----- chain item 2 -|           |
	//   |  |                                                 |           |
  	//   |  |-variable aa ChainList size = 2 -----------------|           |
	//   |                                                                |
	//   |-------- variable 0 ChainList size = 1, callable expression -----
	//
	
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);
	
	// $foo()['bar']
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);
	pelet::VariablePropertyClass prop = Observer.VariableExpressions[0]->ChainList[0];
	CHECK(prop.IsCallableExpression);
	CHECK(prop.IsFunction);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, prop.CallableExpression->ExpressionType);

	pelet::VariableClass* var = (pelet::VariableClass*)prop.CallableExpression;
	CHECK_VECTOR_SIZE(2, var->ChainList);
	// $foo()
	CHECK(var->ChainList[0].IsCallableExpression);
	CHECK(var->ChainList[0].IsFunction);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, var->ChainList[0].CallableExpression->ExpressionType);
	pelet::VariableClass* insideVar = PCEV(var->ChainList[0].CallableExpression);
	CHECK_UNISTR_EQUALS("$foo", insideVar->ChainList[0].Name);
	
	// ['bar']
	CHECK(var->ChainList[1].IsArrayAccess);
	pelet::ScalarExpressionClass* scalar = PCES(var->ChainList[1].ArrayAccess);
	CHECK_UNISTR_EQUALS("bar", scalar->Value);
}

TEST_FIXTURE(Parser70FeaturesTestClass, ParseUniformVariableSyntaxArrayAccess) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"[$obj1, $obj2][0]->prop;\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);
	CHECK_VECTOR_SIZE(3, Observer.VariableExpressions[0]->ChainList);
	
	// [$obj1, $obj2]
	pelet::VariablePropertyClass prop = Observer.VariableExpressions[0]->ChainList[0];
	CHECK(prop.IsCallableExpression);
	CHECK_EQUAL(pelet::ExpressionClass::ARRAY, prop.CallableExpression->ExpressionType);
	
	// [0]
	prop = Observer.VariableExpressions[0]->ChainList[1];
	CHECK(prop.IsArrayAccess);
	pelet::ScalarExpressionClass* scalar = PCES(prop.ArrayAccess);
	CHECK_UNISTR_EQUALS("0", scalar->Value);

	// ->prop
	prop = Observer.VariableExpressions[0]->ChainList[2];
	CHECK_EQUAL(false, prop.IsStatic);
	CHECK_EQUAL(false, prop.IsFunction);
	CHECK_EQUAL(false, prop.IsCallableExpression);
	CHECK_EQUAL(false, prop.IsArrayAccess);
	CHECK_UNISTR_EQUALS("prop", prop.Name);
}

TEST_FIXTURE(Parser70FeaturesTestClass, ParseUniformVariableCurlyBraceAccess) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"getStr(){0};\n"
	);

	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);
	CHECK_VECTOR_SIZE(2, Observer.VariableExpressions[0]->ChainList);
	
	// getStr()
	pelet::VariablePropertyClass prop = Observer.VariableExpressions[0]->ChainList[0];
	CHECK(prop.IsFunction);
	CHECK_UNISTR_EQUALS("getStr", prop.Name);
	
	// {0}
	prop = Observer.VariableExpressions[0]->ChainList[1];
	CHECK(prop.IsArrayAccess);
	pelet::ScalarExpressionClass* scalar = PCES(prop.ArrayAccess);
	CHECK_UNISTR_EQUALS("0", scalar->Value);
}

TEST_FIXTURE(Parser70FeaturesTestClass, ParseUniformVariableSyntaxAccessors) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n"
		"$foo['bar']::$baz;\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);
	CHECK_VECTOR_SIZE(3, Observer.VariableExpressions[0]->ChainList);
	
	pelet::VariablePropertyClass prop;

	// $foo
	prop = Observer.VariableExpressions[0]->ChainList[0];
	CHECK_UNISTR_EQUALS("$foo", prop.Name);
	CHECK_EQUAL(false, prop.IsFunction);
	CHECK_EQUAL(false, prop.IsCallableExpression);
	
	// ['bar']
	prop = Observer.VariableExpressions[0]->ChainList[1];
	CHECK(prop.IsArrayAccess);
	pelet::ScalarExpressionClass* scalar = PCES(prop.ArrayAccess);
	CHECK_UNISTR_EQUALS("bar", scalar->Value);
	
	// ::$baz
	prop = Observer.VariableExpressions[0]->ChainList[2];
	CHECK(prop.IsStatic);
	CHECK_UNISTR_EQUALS("$baz", prop.Name);

}

TEST_FIXTURE(Parser70FeaturesTestClass, ParseUniformVariableSyntaxClosures) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n" 
		"foo()('two');\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);
	
	pelet::VariablePropertyClass prop;

	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);
	prop = Observer.VariableExpressions[0]->ChainList[0];
	
	CHECK(prop.IsCallableExpression);
	CHECK(prop.IsFunction);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, prop.CallableExpression->ExpressionType);
	CHECK_VECTOR_SIZE(1, prop.CallArguments);
	pelet::ScalarExpressionClass* scalar = PCES(prop.CallArguments[0]);
	CHECK_UNISTR_EQUALS("two", scalar->Value);
}
	
TEST_FIXTURE(Parser70FeaturesTestClass, ParseUniformVariableSyntaxClosuresWithMembers) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n" 
		"$foo->bar()();\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);
	
	pelet::VariablePropertyClass prop;
	prop = Observer.VariableExpressions[0]->ChainList[0];
	CHECK(prop.IsCallableExpression);
	CHECK(prop.IsFunction);
	
	// $foo->bar()
	pelet::VariableClass* var = PCEV(prop.CallableExpression);
	CHECK_VECTOR_SIZE(2, var->ChainList);
	CHECK_UNISTR_EQUALS("$foo", var->ChainList[0].Name);
	CHECK(var->ChainList[1].IsFunction);
	CHECK_UNISTR_EQUALS("bar", var->ChainList[1].Name);
}

TEST_FIXTURE(Parser70FeaturesTestClass, ParseUniformVariableSyntaxClosuresWithStaticMembers) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n" 
		"Foo::bar()();\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);
	
	pelet::VariablePropertyClass prop;
	prop = Observer.VariableExpressions[0]->ChainList[0];
	CHECK(prop.IsCallableExpression);
	CHECK(prop.IsFunction);
	
	// Foo::bar()
	pelet::VariableClass* var = PCEV(prop.CallableExpression);
	CHECK_VECTOR_SIZE(2, var->ChainList);
	CHECK_UNISTR_EQUALS("Foo", var->ChainList[0].Name);
	CHECK_UNISTR_EQUALS("bar", var->ChainList[1].Name);
	CHECK(var->ChainList[1].IsFunction);
	CHECK(var->ChainList[1].IsStatic);
}

TEST_FIXTURE(Parser70FeaturesTestClass, ParseUniformVariableSyntaxClosuresWithIndirectFunctionCalls) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n" 
		"$foo()();\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);
	
	pelet::VariablePropertyClass prop;
	prop = Observer.VariableExpressions[0]->ChainList[0];
	CHECK(prop.IsCallableExpression);
	CHECK(prop.IsFunction);
	
	// $foo()
	pelet::VariableClass* var = PCEV(prop.CallableExpression);
	CHECK_VECTOR_SIZE(1, var->ChainList);
	prop = var->ChainList[0];
	CHECK(prop.IsCallableExpression);
	CHECK(prop.IsFunction);
	
	// $foo
	var = PCEV(prop.CallableExpression);
	CHECK_VECTOR_SIZE(1, var->ChainList);
	CHECK_UNISTR_EQUALS("$foo", var->ChainList[0].Name);
}

TEST_FIXTURE(Parser70FeaturesTestClass, ParseUniformVariableSyntaxImmediateClosuresCalls) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n" 
		"(function() { print 'hello world'; })();\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);	
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);
	
	pelet::VariablePropertyClass prop;
	
	prop = Observer.VariableExpressions[0]->ChainList[0];
	CHECK(prop.IsCallableExpression);
	CHECK(prop.IsFunction);

	CHECK_EQUAL(pelet::ExpressionClass::CLOSURE, prop.CallableExpression->ExpressionType);
	pelet::ClosureExpressionClass* closure = PCEC(prop.CallableExpression);
	CHECK_EQUAL(1, closure->Statements.Size());
}

TEST_FIXTURE(Parser70FeaturesTestClass, ParseUniformVariableSyntaxImmediateClosuresCallsWithArguments) {
	Parser.SetExpressionObserver(&Observer);
	UnicodeString code = _U(
		"<?php\n" 
		"($obj->closure)('two');\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions);
	CHECK_VECTOR_SIZE(1, Observer.VariableExpressions[0]->ChainList);

	pelet::VariablePropertyClass prop;
	prop = Observer.VariableExpressions[0]->ChainList[0];
	CHECK(prop.IsCallableExpression);
	CHECK(prop.IsFunction);
	CHECK_VECTOR_SIZE(1, prop.CallArguments);
	
	pelet::ScalarExpressionClass* scalar = PCES(prop.CallArguments[0]);
	CHECK_UNISTR_EQUALS("two", scalar->Value);
}

TEST_FIXTURE(Parser70FeaturesTestClass, AnyExpression) {
	TestAnyExpressionObserverClass anyObserver;
	Parser.SetExpressionObserver(&anyObserver);
	UnicodeString code = _U(
		"(new class {\n"
		"  function work() {\n"
		"    strlen('hello world');\n"
		"  }\n"
		"});\n"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(3, anyObserver.Expressions);
	// the parameter
	CHECK_EQUAL(pelet::ExpressionClass::SCALAR, anyObserver.Expressions[0]->ExpressionType);
	// the function call
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, anyObserver.Expressions[1]->ExpressionType);
	// the anonymous class expression
	CHECK_EQUAL(pelet::ExpressionClass::ANONYMOUS_CLASS, anyObserver.Expressions[2]->ExpressionType);
}

TEST_FIXTURE(Parser70FeaturesTestClass, TraitsInNamespaces) {
	Parser.SetClassObserver(&Observer);
	Parser.SetClassMemberObserver(&Observer);
	UnicodeString code = _U(
		"namespace Traits {\n"
		"  trait Language {"
		"      public function smallTalk() {"
		"          echo 'a';"
		"      }"
		"     public function bigTalk() {"
		"          echo 'A';"
		"      }"
		"  }"
		"  trait Sayings {"
		"    public function smallTalk() {"
		"      echo 'a';"
		"    }"
		" }"
		"}"
		"namespace App {"
		"  use Traits\\Language;\n"
		"  class Private_Talker { "
		"   use Language { "
		"     smallTalk as private; "
		"     bigTalk as protected; "
		"   }"
		"  }"
		"}"
		"namespace Lib {"
		"  use Traits\\Language;\n"
		"  class Private_Talker { "
		"   use Language, \\Traits\\Sayings { "
		"     Language::smallTalk as private talk; "
		"     \\Traits\\Sayings::smallTalk insteadof Language; "
		"   }"
		"  }"
		"}"
	);
	CHECK(Parser.ScanString(code, LintResults));

	CHECK_VECTOR_SIZE(7, Observer.TraitClassName);
	CHECK_UNISTR_EQUALS("Private_Talker", Observer.TraitClassName[0]);
	CHECK_UNISTR_EQUALS("Private_Talker", Observer.TraitClassName[1]);
	CHECK_UNISTR_EQUALS("Private_Talker", Observer.TraitClassName[2]);
	CHECK_UNISTR_EQUALS("Private_Talker", Observer.TraitClassName[3]);
	CHECK_UNISTR_EQUALS("Private_Talker", Observer.TraitClassName[4]);
	CHECK_UNISTR_EQUALS("Private_Talker", Observer.TraitClassName[5]);
	CHECK_UNISTR_EQUALS("Private_Talker", Observer.TraitClassName[6]);

	CHECK_VECTOR_SIZE(7, Observer.TraitUsed);
	CHECK_UNISTR_EQUALS("\\Traits\\Language", Observer.TraitUsed[0]);
	CHECK_UNISTR_EQUALS("\\Traits\\Language", Observer.TraitUsed[1]);
	CHECK_UNISTR_EQUALS("\\Traits\\Language", Observer.TraitUsed[2]);
	CHECK_UNISTR_EQUALS("\\Traits\\Language", Observer.TraitUsed[3]);
	CHECK_UNISTR_EQUALS("\\Traits\\Sayings", Observer.TraitUsed[4]);
	CHECK_UNISTR_EQUALS("\\Traits\\Language", Observer.TraitUsed[5]);
	CHECK_UNISTR_EQUALS("\\Traits\\Sayings", Observer.TraitUsed[6]);

	CHECK_VECTOR_SIZE(4, Observer.TraitMethodName);
	CHECK_UNISTR_EQUALS("smallTalk", Observer.TraitMethodName[0]);
	CHECK_UNISTR_EQUALS("bigTalk", Observer.TraitMethodName[1]);
	CHECK_UNISTR_EQUALS("smallTalk", Observer.TraitMethodName[2]);
	CHECK_UNISTR_EQUALS("smallTalk", Observer.TraitMethodName[3]);

	CHECK_VECTOR_SIZE(1, Observer.TraitInsteadOf);
	CHECK_UNISTR_EQUALS("\\Traits\\Language", Observer.TraitInsteadOf[0]);

	CHECK_VECTOR_SIZE(3, Observer.TraitAlias);
	CHECK_UNISTR_EQUALS("", Observer.TraitAlias[0]);
	CHECK_UNISTR_EQUALS("", Observer.TraitAlias[1]);
	CHECK_UNISTR_EQUALS("talk", Observer.TraitAlias[2]);

	CHECK_VECTOR_SIZE(3, Observer.TraitAliasVisibility);
	CHECK_EQUAL(pelet::TokenClass::PRIVATE, Observer.TraitAliasVisibility[0]);
	CHECK_EQUAL(pelet::TokenClass::PROTECTED, Observer.TraitAliasVisibility[1]);
	CHECK_EQUAL(pelet::TokenClass::PRIVATE, Observer.TraitAliasVisibility[2]);
}

}
