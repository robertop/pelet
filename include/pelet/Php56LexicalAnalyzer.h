/*
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
#ifndef __php56lexicalanalyzerimpl_h__
#define __php56lexicalanalyzerimpl_h__
 
#include <pelet/UCharBufferedFileClass.h>
#include <pelet/TokenClass.h>

namespace pelet {
	 
/**
 * Get the next token from the given buffer. Checking for the end is not as simple as checking for T_EOF, you will
 * need to call pelet::TokenClass::IsTerminatingToken() to ensure that the end of stream
 * has been reached (since a lexer can end with EOF, an unterminated string, or an unterminated comment).
 * 
 * This lexer will handle source code for PHP version 5.6
 * 
 * @param BufferClass* buffer contains the code to be tokenized. This function will NOT own the pointer.
 * @param YYCONDTYPE &condition the current state the the parser is in. this needs 
 * to be an argument to avoid global variables.
 * @return int the next token.
 */
int Next56Token(BufferClass* buffer, YYCONDTYPE &condition);

}

#endif
