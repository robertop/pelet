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
#ifndef __PELET_LINTPARSERFUNCTIONS_H__
#define __PELET_LINTPARSERFUNCTIONS_H__

#include <pelet/LexicalAnalyzerClass.h>
#include <string>

/**
 * This macro will create the an instance of the given class on the heap
 * and will assign it to dest. Also, it will set the pointer to be owner
 * by the ResourceParserObserver instance, that way memory will be
 * cleaned up properly.
 *
 * The calling code must contain a variable observers of type pelet::ResourceParserObserverClass
 */
#define AST_INIT(dest, clazz) dest = new clazz; observers.Adopt(dest);

/**
 * This macro will create the an instance of the given class on the heap
 * and will assign it to dest. Also, it will set the pointer to be owner
 * by the ResourceParserObserver instance, that way memory will be
 * cleaned up properly. Additionally, the macro will call the new instance's
 * Init() method, giving all of the parameters given. For example a macro call
 * 
 *    AST_INIT_ARGS($$, pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("clazz"))
 *
 * will create a new pelet::QualifiedNameClass and will call the Init method with a 
 * single parameter "clazz"
 *
 * The calling code must contain a variable observers of type pelet::ResourceParserObserverClass
 */
#define AST_INIT_ARGS(dest, clazz, ...) dest = new clazz; dest->Init(__VA_ARGS__); observers.Adopt(dest);

/**
 * This macro will create the an instance of the given class on the heap
 * and will assign it to dest. Also, it will set the pointer to be owner
 * by the ResourceParserObserver instance, that way memory will be
 * cleaned up properly. Additionally, the constructor of clazz will take
 * 1 argument, Additionally, the macro will call the new instance's
 * Init() method, giving all of the parameters given. For example a macro call
 * 
 *    AST_INIT_CARGS($$, UNICODE_STRING_SIMPLE("name"), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("clazz"))
 *
 * will create a new pelet::QualifiedNameClass with "name" as a constructor argument;
 * and will call the Init method with a single parameter "clazz"
 *
 * The calling code must contain a variable observers of type pelet::ResourceParserObserverClass
 */
#define AST_INIT_CARGS(dest, clazz, cArg, ...) dest = new clazz(cArg); dest->Init(__VA_ARGS__); observers.Adopt(dest);

/**
 * This macro *initializes* stmtListDest with all of the statements in stmtListSrc.
 *
 * note that these are "shallow" copies; it assumes all pointers are owned by pelet::ResourceParserObserverClass
 * which they should be if they were created with AST_INIT or AST_INIT_ARGS
 */
#define AST_MERGE(stmtListDest, stmtListSrc) stmtListDest = stmtListSrc;

/**
 * This macro *initializes* stmtListDest with all of the statements in stmtListSrc and stmt.
 *
 * note that these are "shallow" copies; it assumes all pointers are owned by pelet::ResourceParserObserverClass
 * which they should be if they were created with AST_INIT or AST_INIT_ARGS
 */
#define AST_PUSH_MERGE(stmtListDest, stmt, stmtListSrc) stmtListDest = stmtListSrc; stmtListDest->Push(stmt);

/**
 * This macro *initializes* stmtListDest with all of the statements in stmtListSrcA and stmtListSrcB
 *
 * note that these are "shallow" copies; it assumes all pointers are owned by pelet::ResourceParserObserverClass
 * which they should be if they were created with AST_INIT or AST_INIT_ARGS
 */
#define AST_PUSH_ALL_MERGE(stmtListDest, stmtListSrcA, stmtListSrcB) stmtListDest = stmtListSrcA; stmtListDest->PushAll(stmtListSrcB);


namespace pelet {

/**
 * This function will get the next token from the lexer and will set the value parameter
 * to that token. Note that this function will consume any comments and PHP doc comments
 * because the PHP grammar does not use them.
 *
 * @param value the token from the analyzer
 * @param analyzer to get the next token from the PHP source being parsed.
 */
int LintLex(int* value, pelet::LexicalAnalyzerClass &analyzer);

/**
 * This function will set the error that comes from bison and put it in the LexicalAnalyzer class.
 *
 * @param analyzer to get the line, and character numbers where the error ocurred
 * @param msg the error message, generated by Bison
 */
void LintGrammarError(pelet::LexicalAnalyzerClass &analyzer, std::string msg);


}

#endif