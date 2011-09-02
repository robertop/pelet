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
 */
#ifndef LANGUAGE_DISCOVERY_CLASS_H
#define LANGUAGE_DISCOVERY_CLASS_H

#include <unicode/unistr.h>
#include <language/UCharBufferedFileClass.h>

namespace mvceditor {

/**
 * PHP is an embedded language; it is embedded within HTML documents.  This class helps
 * in determining whether a particular position in a string is "inside" a PHP
 * context.  Determining this can be a bit tricky since there can be multiple
 * PHP start/end tags; as well as there can be PHP string that contain the PHP start
 * /end tags (which do NOT signal the start/end of PHP blocks), and various kinds of
 * PHP strings (heredoc and NowDoc).
 *
 */
class LanguageDiscoveryClass {

public:

	/**
	 * The possible languages that this class can discover.
	 */
	 enum Syntax {
		SYNTAX_HTML,
		SYNTAX_HTML_TAG,
		SYNTAX_HTML_ATTRIBUTE,
		SYNTAX_HTML_ATTRIBUTE_SINGLE_QUOTE_VALUE,
		SYNTAX_HTML_ATTRIBUTE_DOUBLE_QUOTE_VALUE,
		SYNTAX_HTML_ENTITY,
		
		// TODO: HTML_COMMENT ???
		SYNTAX_PHP_SCRIPT,
		SYNTAX_PHP_LINE_COMMENT,
		SYNTAX_PHP_MULTI_LINE_COMMENT,
		SYNTAX_PHP_SINGLE_QUOTE_STRING,
		SYNTAX_PHP_DOUBLE_QUOTE_STRING,
		SYNTAX_PHP_HEREDOC,
		SYNTAX_PHP_NOWDOC,
		SYNTAX_PHP_BACKTICK,
		
		// TODO: add SQL
		// TODO: add javascript
		// TODO: HTML links to internal pages so that autocomplete can fill in internal links
		// TODO: HTML classes from CSS so that autocomplete can fill in CSS class names
	};

	LanguageDiscoveryClass();

	/**
	 * Initialize with the given code
	 *
	 * @return bool TRUE if code is not empty.
	 */
	bool Open(const UnicodeString& code);

	/**
	 * Figure out what language is
	 * Precondition: Open() must have been called and must be successful.
	 * @param int pos the position (in number of characters, zero-based) that is to be queried
	 * @return LanguageDiscoveryClass::Syntax the result; the language "context" that
	 * is
	 */
	Syntax at(int pos);

private:


	/**
	 * The tokenizer positions
	 *
	 * @var UCharBufferedFileClass
	 */
	UCharBufferedFileClass Buffer;

	/**
	 * The actual code being parsed
	 *
	 * @var UnicodeString
	 */
	UnicodeString Code;
};

}

#endif
