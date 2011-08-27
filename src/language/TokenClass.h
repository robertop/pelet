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
 * @copyright  2009-2011 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 * @author     $Author: robertop2004@gmail.com $
 * @date       $Date: 2011-08-07 11:24:39 -0700 (Sun, 07 Aug 2011) $
 * @version    $Rev: 586 $ 
 */
#ifndef TOKEN_CLASS_H
#define TOKEN_CLASS_H

#include <language/Php53ParserImpl.hpp>

namespace mvceditor {
	
class TokenClass {
public:

	
        
	enum TokenIds {
			
			/*
			 * errors
			 */
			ERROR_UNTERMINATED_COMMENT = T_ERROR_UNTERMINATED_COMMENT,
			ERROR_UNTERMINATED_STRING = T_ERROR_UNTERMINATED_STRING,
			ENDOFFILE = T_END_OF_FILE,
			
			/*
			 * tokens 
			 */
			CLASS = T_CLASS,
			FUNCTION = T_FUNCTION,
			NEW = T_NEW,
			STATIC = T_STATIC,
			VAR = T_VAR,
			ASSIGNMENT = '=',
			OPENBRACE = '{',
			CLOSEBRACE = '}',
			OPENPARENTHESIS = '(',
			CLOSEPARENTHESIS = ')',
			
			/*
			 * due to following PHP parsing rules; the number tokens are only a POSITIVE numbers
			 * for example 1.23
			 * negative numbers are actually 2 tokens; negative sign AND the number
			 */
			DECIMALNUMBER = T_DNUMBER,
			INTEGERNUMBER = T_LNUMBER,
			NEGATIVESIGN = '-',
			SEMICOLON = ';',
			SINGLEQUOTESTRING = T_CONSTANT_ENCAPSED_STRING,
			DOUBLEQUOTESTRING = T_ENCAPSED_AND_WHITESPACE,
			IMPLEMENTS = T_IMPLEMENTS,
			INTERFACE = T_INTERFACE,
			PRIVATE = T_PRIVATE,
			PUBLIC = T_PUBLIC,
			PROTECTED = T_PROTECTED,
			CONST_KEYWORD = T_CONST, //when compiling in MSW, some other library is defining "CONST"  as a macro
			SCOPERESOLUTION = T_PAAMAYIM_NEKUDOTAYIM,
			METHODOPERATOR = T_OBJECT_OPERATOR, 
			IDENTIFIER = T_STRING,  
			PHPDOCCOMMENT = T_DOC_COMMENT,
			PHPOPENTAG = T_OPEN_TAG,
			VARIABLE = T_VARIABLE
	};
	
	/**
	 * Returns TRUE if the given token signifies the end of tile. Unfortunately due to bison
	 * insisting that all token be positive the only way to flag unterminating string
	 * is to give it a positive token number,and this prevents us from doing easy
	 * checks for end of file such as token > 0
	 * @return bool if TRUE caller should stop lexing as there is no more input.
	 */
	static bool IsTerminatingToken(int token) {
		return ERROR_UNTERMINATED_COMMENT == token ||
			ERROR_UNTERMINATED_STRING == token ||
			T_ERROR_UNTERMINATED_BACKTICK == token ||
			ENDOFFILE == token;
	}
};

}

#endif