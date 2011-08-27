/**
 * The MIT License
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
 * @author     $Author$
 * @date       $Date$
 * @version    $Rev$ 
 */

#include <UnitTest++.h>
#include <unicode/unistr.h>
#include <language/LanguageDiscoveryClass.h>

SUITE(LanguageDiscoveryTestClass) {

TEST(DiscoverHtmlAndPhp) {
	UnicodeString code = UNICODE_STRING_SIMPLE(
		"<html><body>"
		"<?php echo 'hello'; ?>"
		"</body></html>"
	);
	mvceditor::LanguageDiscoveryClass discover;
	CHECK(discover.Open((code)));
	
	int pos = code.indexOf(UNICODE_STRING_SIMPLE("</body>"));
	mvceditor::LanguageDiscoveryClass::Syntax syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::HTML, syntax);
	
	pos = code.indexOf(UNICODE_STRING_SIMPLE("hello"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::PHP_SCRIPT, syntax);
}

TEST(DiscoverShouldNotRecognizeEndTagInsideStringsAndComments) {
	
	// put the end tag in various strings; check that we still discover PHP 
	// note that end tag WILL break out of single line comments 
	UnicodeString code = UNICODE_STRING_SIMPLE(
		"<html><body>"
		"<?php echo '?>hello';\n"
		"echo \"goodbye ?> double\";\n"
		"echo <<<EOF\n"
		"goodbye ?> heredoc\n"
		"EOF;\n"
		"echo <<<'EOF'\n"
		"goodbye ?> nowdoc\n"
		"EOF;\n"
		"echo `goodbye ?> backtick`;\n"
		"/** ?> multiline comment */\n"
		" // singleline ?> \n"
		"</body></html>"
	);
	mvceditor::LanguageDiscoveryClass discover;
	CHECK(discover.Open((code)));
	
	int pos;
	mvceditor::LanguageDiscoveryClass::Syntax syntax;
	pos = code.indexOf(UNICODE_STRING_SIMPLE("hello"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::PHP_SCRIPT, syntax);
	
	pos = code.indexOf(UNICODE_STRING_SIMPLE("double"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::PHP_SCRIPT, syntax);
	
	pos = code.indexOf(UNICODE_STRING_SIMPLE("heredoc"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::PHP_SCRIPT, syntax);
	
	pos = code.indexOf(UNICODE_STRING_SIMPLE("nowdoc"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::PHP_SCRIPT, syntax);
	
	pos = code.indexOf(UNICODE_STRING_SIMPLE("backtick"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::PHP_SCRIPT, syntax);
	
	pos = code.indexOf(UNICODE_STRING_SIMPLE("multiline"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::PHP_SCRIPT, syntax);
	
	pos = code.indexOf(UNICODE_STRING_SIMPLE("</body>"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::HTML, syntax);
}

TEST(MultipleHtmlBlocks) {
	UnicodeString code = UNICODE_STRING_SIMPLE(
		"<html>"
		"<head><title><?php echo $title;?></title></head>"
		"<body class='<?php echo \"?>\" . $theclass; ?>' id='thebody'>This is the body</body>"
		"</html>"
	);
	mvceditor::LanguageDiscoveryClass discover;
	
	CHECK(discover.Open(code));
	mvceditor::LanguageDiscoveryClass::Syntax syntax;
	int pos;
	pos = code.indexOf(UNICODE_STRING_SIMPLE("$title"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::PHP_SCRIPT, syntax);
	
	pos = code.indexOf(UNICODE_STRING_SIMPLE("</head>"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::HTML, syntax);
	
	pos = code.indexOf(UNICODE_STRING_SIMPLE("$theclass"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::PHP_SCRIPT, syntax);
	
	pos = code.indexOf(UNICODE_STRING_SIMPLE("thebody"));
	syntax = discover.at(pos);
	CHECK_EQUAL(mvceditor::LanguageDiscoveryClass::HTML, syntax);
}

}