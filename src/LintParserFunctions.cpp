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
 * @copyright  2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */	
#include <pelet/LintParserFunctions.h>

int pelet::LintLex(int* value, pelet::LexicalAnalyzerClass& analyzer) {
	int ret = analyzer.NextToken();

	// ignore these token; there are no parse rules for them
	if (pelet::T_OPEN_TAG == ret || pelet::T_OPEN_TAG_WITH_ECHO == ret) {
		ret = analyzer.NextToken();
	}

	// advance past all comments (there can be more than one consecutive)
	if (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {
		while (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {
			ret = analyzer.NextToken();
		}
	}
	if (pelet::T_CLOSE_TAG == ret) {
		ret = ';';
	}
	*value = ret;
	return ret;
}

void pelet::LintGrammarError(pelet::LexicalAnalyzerClass& analyzer, std::string msg) {
	int capacity = msg.length() + 1;
	int written = u_sprintf(analyzer.ParserError.getBuffer(capacity), "%s", msg.c_str());
	analyzer.ParserError.releaseBuffer(written);
}