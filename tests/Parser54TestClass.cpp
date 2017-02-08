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

/**
 * This test suite runs tests specific to PHP 5.4 features.
 */

class Parser54FeaturesTestClass {

public:
	
	pelet::ParserClass Parser;
	pelet::LintResultsClass LintResults;
	TestObserverClass Observer;
	
	Parser54FeaturesTestClass() 
		: Parser()
		, LintResults() 
		, Observer() {
		Parser.SetVersion(pelet::PHP_54);
	}
};

class Parser54ExpressionTestClass {

public:
	
	pelet::ParserClass Parser;
	pelet::ScopeClass Scope;
	pelet::VariableClass ParsedVar;
	
	Parser54ExpressionTestClass() 
		: Parser()
		, Scope() 
		, ParsedVar(Scope) {
		Parser.SetVersion(pelet::PHP_54);
	}
};

SUITE (Parser54FeaturesTestClass) {

TEST_FIXTURE(Parser54FeaturesTestClass, Traits) {
	Parser.SetClassObserver(&Observer);
	Parser.SetClassMemberObserver(&Observer);

	UnicodeString code = _U(
		"trait ezcReflectionReturnInfo {"
		"    function getReturnType() { /*1*/ }"
		"    function getReturnDescription() { /*2*/ }"
		"}"
		""
		"class ezcReflectionMethod extends ReflectionMethod {"
		"    use ezcReflectionReturnInfo;"
		"    /* ... */"
		"}"
		""
		"class ezcReflectionFunction extends ReflectionFunction {"
		"    use ezcReflectionReturnInfo;"
		"    /* ... */"
		"}"
		""
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(2, Observer.TraitClassName);
	CHECK_UNISTR_EQUALS("ezcReflectionMethod", Observer.TraitClassName[0]);
	CHECK_UNISTR_EQUALS("ezcReflectionFunction", Observer.TraitClassName[1]);

	CHECK_VECTOR_SIZE(2, Observer.TraitUsed);
	CHECK_UNISTR_EQUALS("ezcReflectionReturnInfo", Observer.TraitUsed[0]);
	CHECK_UNISTR_EQUALS("ezcReflectionReturnInfo", Observer.TraitUsed[1]);
}

TEST_FIXTURE(Parser54FeaturesTestClass, TraitsWithConflictsAndAlias) {
	Parser.SetClassObserver(&Observer);
	Parser.SetClassMemberObserver(&Observer);
	UnicodeString code = _U(
		"trait A {"
		"    public function smallTalk() {"
		"        echo 'a';"
		"    }"
		"   public function bigTalk() {"
		"        echo 'A';"
		"    }"
		"}"
		""
		"trait B {"
		"    public function smallTalk() {"
		"        echo 'b';"
		"    }"
		"    public function bigTalk() {"
		"        echo 'B';"
		"    }"
		"}"
		""
		"class Talker {"
		"    use A, B {"
		"        B::smallTalk insteadof A;"
		"        A::bigTalk insteadof B;"
		"    }"
		"}"
		""
		"class Aliased_Talker {"
		"    use A, B {"
		"        B::smallTalk insteadof A;"
		"        A::bigTalk insteadof B;"
		"        B::bigTalk as talk;"
		"   }"
		"}"
		" class Private_Talker { "
		"	use A { "
		"		smallTalk as private; "
		"		bigTalk as protected; "
		"	}"
		"}"
		""
	);
	CHECK(Parser.ScanString(code, LintResults));
	
	CHECK_VECTOR_SIZE(12, Observer.TraitClassName);
	CHECK_UNISTR_EQUALS("Talker", Observer.TraitClassName[0]);
	CHECK_UNISTR_EQUALS("Talker", Observer.TraitClassName[1]);
	CHECK_UNISTR_EQUALS("Talker", Observer.TraitClassName[2]);
	CHECK_UNISTR_EQUALS("Talker", Observer.TraitClassName[3]);
	CHECK_UNISTR_EQUALS("Aliased_Talker", Observer.TraitClassName[4]);
	CHECK_UNISTR_EQUALS("Aliased_Talker", Observer.TraitClassName[5]);
	CHECK_UNISTR_EQUALS("Aliased_Talker", Observer.TraitClassName[6]);
	CHECK_UNISTR_EQUALS("Aliased_Talker", Observer.TraitClassName[7]);
	CHECK_UNISTR_EQUALS("Aliased_Talker", Observer.TraitClassName[8]);
	CHECK_UNISTR_EQUALS("Private_Talker", Observer.TraitClassName[9]);
	CHECK_UNISTR_EQUALS("Private_Talker", Observer.TraitClassName[10]);
	CHECK_UNISTR_EQUALS("Private_Talker", Observer.TraitClassName[11]);

	CHECK_VECTOR_SIZE(12, Observer.TraitUsed);
	CHECK_UNISTR_EQUALS("A", Observer.TraitUsed[0]);
	CHECK_UNISTR_EQUALS("B", Observer.TraitUsed[1]);
	CHECK_UNISTR_EQUALS("B", Observer.TraitUsed[2]);
	CHECK_UNISTR_EQUALS("A", Observer.TraitUsed[3]);

	CHECK_UNISTR_EQUALS("A", Observer.TraitUsed[4]);
	CHECK_UNISTR_EQUALS("B", Observer.TraitUsed[5]);
	CHECK_UNISTR_EQUALS("B", Observer.TraitUsed[6]);
	CHECK_UNISTR_EQUALS("A", Observer.TraitUsed[7]);
	CHECK_UNISTR_EQUALS("B", Observer.TraitUsed[8]);

	CHECK_UNISTR_EQUALS("A", Observer.TraitUsed[9]);
	CHECK_UNISTR_EQUALS("", Observer.TraitUsed[10]);
	CHECK_UNISTR_EQUALS("", Observer.TraitUsed[11]);
	
	CHECK_VECTOR_SIZE(7, Observer.TraitMethodName);
	CHECK_UNISTR_EQUALS("smallTalk", Observer.TraitMethodName[0]);
	CHECK_UNISTR_EQUALS("bigTalk", Observer.TraitMethodName[1]);
	
	CHECK_UNISTR_EQUALS("smallTalk", Observer.TraitMethodName[2]);
	CHECK_UNISTR_EQUALS("bigTalk", Observer.TraitMethodName[3]);
	CHECK_UNISTR_EQUALS("bigTalk", Observer.TraitMethodName[4]);

	CHECK_UNISTR_EQUALS("smallTalk", Observer.TraitMethodName[5]);
	CHECK_UNISTR_EQUALS("bigTalk", Observer.TraitMethodName[6]);

	CHECK_VECTOR_SIZE(3, Observer.TraitAlias);
	CHECK_UNISTR_EQUALS("talk", Observer.TraitAlias[0]);
	CHECK_UNISTR_EQUALS("", Observer.TraitAlias[1]);
	CHECK_UNISTR_EQUALS("", Observer.TraitAlias[2]);
	
	CHECK_VECTOR_SIZE(4, Observer.TraitInsteadOf);
	CHECK_UNISTR_EQUALS("A", Observer.TraitInsteadOf[0]);
	CHECK_UNISTR_EQUALS("B", Observer.TraitInsteadOf[1]);
	CHECK_UNISTR_EQUALS("A", Observer.TraitInsteadOf[2]);
	CHECK_UNISTR_EQUALS("B", Observer.TraitInsteadOf[3]);
	

	CHECK_VECTOR_SIZE(3, Observer.TraitAliasVisibility);
	CHECK_EQUAL(pelet::TokenClass::PUBLIC, Observer.TraitAliasVisibility[0]);
	CHECK_EQUAL(pelet::TokenClass::PRIVATE, Observer.TraitAliasVisibility[1]);
	CHECK_EQUAL(pelet::TokenClass::PROTECTED, Observer.TraitAliasVisibility[2]);
}

TEST_FIXTURE(Parser54FeaturesTestClass, TraitsWithNamespaces) {
	Parser.SetClassObserver(&Observer);
	Parser.SetClassMemberObserver(&Observer);

	UnicodeString code = _U(
		"namespace First {\n"
		"trait ezcReflectionReturnInfo {"
		"    function getReturnType() { /*1*/ }"
		"    function getReturnDescription() { /*2*/ }"
		"}"
		"}"
		"namespace Second {"
		"class ezcReflectionMethod extends ReflectionMethod {"
		"    use \\First\\ezcReflectionReturnInfo;"
		"    /* ... */"
		"}"
		""
		"class ezcReflectionFunction extends ReflectionFunction {"
		"    use ezcReflectionReturnInfo;"
		"    /* ... */"
		"}"
		"}"
	);
	CHECK(Parser.ScanString(code, LintResults));
	CHECK_VECTOR_SIZE(2, Observer.TraitClassName);
	CHECK_UNISTR_EQUALS("ezcReflectionMethod", Observer.TraitClassName[0]);
	CHECK_UNISTR_EQUALS("ezcReflectionFunction", Observer.TraitClassName[1]);

	CHECK_VECTOR_SIZE(2, Observer.TraitUsed);
	CHECK_UNISTR_EQUALS("\\First\\ezcReflectionReturnInfo", Observer.TraitUsed[0]);
	CHECK_UNISTR_EQUALS("\\Second\\ezcReflectionReturnInfo", Observer.TraitUsed[1]);
}

TEST_FIXTURE(Parser54FeaturesTestClass, TraitWithVariable) {
	Parser.SetClassObserver(&Observer);
	Parser.SetClassMemberObserver(&Observer);
	Parser.SetVariableObserver(&Observer);

	UnicodeString code = _U(
		"trait ezcReflectionReturnInfo {"
		"    function getReturnType() { /*1*/ }"
		"    function getReturnDescription() { /*2*/ }"
		"}"
		"class ezcReflectionMethod {"
		"    use ezcReflectionReturnInfo;"
		"    /* ... */"
		"}"
		""
		"$my = new ezcReflectionMethod();"
	);
	CHECK(Parser.ScanString(code, LintResults));

	CHECK_VECTOR_SIZE(1, Observer.VariableExpressionChainList);
	CHECK_UNISTR_EQUALS("ezcReflectionMethod", Observer.VariableExpressionChainList[0]);
}


TEST_FIXTURE(Parser54ExpressionTestClass, ParseChainExpressionWithChainConstructor) {
	UnicodeString code = _U("(new Foo)->method");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(2, ParsedVar.ChainList);
	CHECK_EQUAL(pelet::ExpressionClass::NEW_CALL, ParsedVar.ExpressionType);
	CHECK_UNISTR_EQUALS("Foo", ParsedVar.ChainList[0].Name);
	CHECK_UNISTR_EQUALS("method", ParsedVar.ChainList[1].Name);
}

TEST_FIXTURE(Parser54ExpressionTestClass, ParseChainExpressionWithFunctionArrayDereference) {
	UnicodeString code = _U("array_merge($expr1, $expr2)[0]->method()");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(3, ParsedVar.ChainList);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, ParsedVar.ExpressionType);
	CHECK_UNISTR_EQUALS("array_merge", ParsedVar.ChainList[0].Name);
	
	CHECK(ParsedVar.ChainList[1].IsArrayAccess);

	CHECK_UNISTR_EQUALS("method", ParsedVar.ChainList[2].Name);
	CHECK(ParsedVar.ChainList[2].IsFunction);
}

TEST_FIXTURE(Parser54ExpressionTestClass, ParseChainExpressionWithMethodArrayDereference) {
	UnicodeString code = _U("$this->func($expr1, $expr2)[0]->method()");
	Parser.ParseExpression(code, ParsedVar);
	CHECK_VECTOR_SIZE(4, ParsedVar.ChainList);
	CHECK_EQUAL(pelet::ExpressionClass::VARIABLE, ParsedVar.ExpressionType);
	CHECK_UNISTR_EQUALS("$this", ParsedVar.ChainList[0].Name);
	CHECK_UNISTR_EQUALS("func", ParsedVar.ChainList[1].Name);
	CHECK(ParsedVar.ChainList[2].IsArrayAccess);
	CHECK_UNISTR_EQUALS("method", ParsedVar.ChainList[3].Name);
}

}
