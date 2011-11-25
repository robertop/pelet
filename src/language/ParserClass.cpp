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
 */
#include <language/ParserClass.h>
#include <language/TokenClass.h>
#include <unicode/uchar.h>

/* 
 * generated by Bison according to the prefix of our choosing
 * Bison won't put this declaration in the header file so we must
 * manually make it available here by using "extern"
 */
extern int php53parse (mvceditor::LexicalAnalyzerClass &analyzer);

mvceditor::ParserClass::ParserClass()
	: Lexer()
	, ClassObserver(0)
	, ClassMemberObserver(0)
	, FunctionObserver(0)
	, VariableObserver(0) {
}

bool mvceditor::ParserClass::ScanFile(const wxString& file) {
	if (Lexer.OpenFile(file)) {
		Scan();
		return true;
	}
	return false;
}

bool mvceditor::ParserClass::ScanString(const UnicodeString& code) {
	if (Lexer.OpenString(code)) {
		Scan();
		return true;
	}
	return false;
}

void mvceditor::ParserClass::SetClassMemberObserver(ClassMemberObserverClass* observer) {
	ClassMemberObserver = observer;
}

void mvceditor::ParserClass::SetClassObserver(ClassObserverClass* observer) {
	ClassObserver = observer;
}

void mvceditor::ParserClass::SetFunctionObserver(FunctionObserverClass* observer) {
	FunctionObserver = observer;
}

void mvceditor::ParserClass::SetVariableObserver(VariableObserverClass* observer) {
	VariableObserver = observer;
}

void mvceditor::ParserClass::Scan() {
	Token = Lexer.NextToken();
	Lexer.GetLexeme(Lexeme);
	LookaheadToken = Lexer.NextToken();
	Lexer.GetLexeme(LookaheadLexeme);
	NextLookaheadToken = Lexer.NextToken();
	Lexer.GetLexeme(NextLookaheadLexeme);
	BraceDepth = 0;
	
	// skip over any HTML
	while (MoreTokens() && mvceditor::TokenClass::PHPOPENTAG != Token) {
		Advance();
	}
	UnicodeString className,
		functionName,
		phpDocComment;
	bool isStatic = false;
	mvceditor::TokenClass::TokenIds visibility  = mvceditor::TokenClass::PUBLIC;
	while (MoreTokens()) {
		if (mvceditor::TokenClass::PHPDOCCOMMENT == Token) {
			phpDocComment = Lexeme;
			Advance();
		}
		switch (Token) {
			case mvceditor::TokenClass::CLASS:
				className = ScanClass(phpDocComment);
				phpDocComment = UNICODE_STRING_SIMPLE("");
				break;
			case mvceditor::TokenClass::STATIC:
				isStatic = true;

				// could just have the static w/out a visibility modifier "static $name;"
				if (LookaheadToken == mvceditor::TokenClass::VARIABLE) {
					ScanMemberVariable(className, phpDocComment, visibility, isStatic);
					isStatic = false;
					visibility = mvceditor::TokenClass::PUBLIC;
				}
				else {
					Advance();
				}
				break;
			case mvceditor::TokenClass::PRIVATE:
			case mvceditor::TokenClass::PUBLIC:
			case mvceditor::TokenClass::PROTECTED:
				visibility = (mvceditor::TokenClass::TokenIds)Token;
				if (LookaheadToken == mvceditor::TokenClass::VARIABLE) {

					// could just have visibility modifier w/out static "private $name;"
					ScanMemberVariable(className, phpDocComment, visibility, isStatic);
					isStatic = false;
					visibility = mvceditor::TokenClass::PUBLIC;
				}
				else {
					Advance();
				}
				break;
			case mvceditor::TokenClass::VAR:
				ScanMemberVariable(className, phpDocComment, visibility, isStatic);
				phpDocComment = UNICODE_STRING_SIMPLE("");
				isStatic = false;
				visibility = mvceditor::TokenClass::PUBLIC;
				break;
			case mvceditor::TokenClass::CONST_KEYWORD:
				ScanConstantDeclaration(className, phpDocComment);
				phpDocComment = UNICODE_STRING_SIMPLE("");
				break;
			case mvceditor::TokenClass::FUNCTION:
				if (!className.isEmpty()) {
					functionName = ScanMethod(className, phpDocComment, visibility, isStatic);
				}
				else {
					functionName = ScanFunction(phpDocComment);
				}
				phpDocComment = UNICODE_STRING_SIMPLE("");
				isStatic = false;
				visibility = mvceditor::TokenClass::PUBLIC;
				break;
			case mvceditor::TokenClass::VARIABLE:
				ScanVariableDeclarations(className, functionName);
				break;
			case mvceditor::TokenClass::IDENTIFIER:
				if (Lexeme.caseCompare(UNICODE_STRING("define", 6), 0) == 0) {
					ScanDefineDeclaration(phpDocComment);
					phpDocComment = UNICODE_STRING_SIMPLE("");
				}
				else {
					Advance();
				}
				break;
			default:
				Advance();
				break;
		}
		if (BraceDepth < 2 && !className.isEmpty()) { //a method has ended
			functionName = UNICODE_STRING_SIMPLE("");
		}
		if (BraceDepth < 1) { // a class or function has ended
			className = UNICODE_STRING_SIMPLE("");
			functionName = UNICODE_STRING_SIMPLE("");
		}
	}
}

UnicodeString mvceditor::ParserClass::ScanClass(const UnicodeString& phpDocComment) {
	UnicodeString className;
	if (mvceditor::TokenClass::CLASS == Token) {
		Advance();
		if (mvceditor::TokenClass::IDENTIFIER == Token) {
			className = Lexeme;
			Advance();
			//eat the parent class, implements
			UnicodeString signature = className;
			while (MoreTokens() && mvceditor::TokenClass::OPENBRACE != Token) {
				signature += UNICODE_STRING_SIMPLE(" ");
				signature += Lexeme;
				Advance();
			}
			Advance(); // eat the '{'
			if (ClassObserver) {
				ClassObserver->ClassFound(className, signature, phpDocComment);
			}
		}
	}
	return className;
}

void mvceditor::ParserClass::ScanMemberVariable(const UnicodeString& className, const UnicodeString& phpDocComment, 
												mvceditor::TokenClass::TokenIds visibility, bool isStatic) {
	Advance(); // eat the 'var'
	if (Token == mvceditor::TokenClass::VARIABLE) {
		UnicodeString memberName = Lexeme;
		memberName.remove(0, 1); // member observer expects the name only; no '$'
		if (ClassMemberObserver) {
			ClassMemberObserver->PropertyFound(className, memberName,  
				ReturnTypeFromPhpDocComment(phpDocComment, true), phpDocComment, visibility, false, isStatic);
		}
		while (MoreTokens() && mvceditor::TokenClass::SEMICOLON != Token) {
			Advance();
		}
		Advance(); //eat the ';'
	}
}

void mvceditor::ParserClass::ScanConstantDeclaration(const UnicodeString& className, 
	const UnicodeString& phpDocComment) {
	Advance(); // eat the 'const'
	UnicodeString memberName = Lexeme;
	if (Token != mvceditor::TokenClass::SEMICOLON) {
		Advance(); // eat the '='
		if (Token != mvceditor::TokenClass::SEMICOLON) {
			Advance();
			if (mvceditor::TokenClass::SINGLEQUOTESTRING == Token || 
				mvceditor::TokenClass::DOUBLEQUOTESTRING == Token || 
				mvceditor::TokenClass::DECIMALNUMBER == Token ||
				(mvceditor::TokenClass::NEGATIVESIGN == Token && mvceditor::TokenClass::DECIMALNUMBER == LookaheadToken) ||
				mvceditor::TokenClass::INTEGERNUMBER == Token ||
				(mvceditor::TokenClass::NEGATIVESIGN == Token && mvceditor::TokenClass::INTEGERNUMBER == LookaheadToken)
				) {
				if (ClassMemberObserver) {
					ClassMemberObserver->PropertyFound(className, memberName,  
							ReturnTypeFromPhpDocComment(phpDocComment, true), phpDocComment, 
							mvceditor::TokenClass::PUBLIC, true, true);
				}
			}
			while (MoreTokens() && Token != mvceditor::TokenClass::SEMICOLON) {
				Advance();
			}
		}
	}
}

UnicodeString mvceditor::ParserClass::ScanMethod(const UnicodeString& className, const UnicodeString& phpDocComment,
												 mvceditor::TokenClass::TokenIds visibility, bool isStatic) {
	UnicodeString methodName;
	Advance(); // eat 'function'

	// handle functions that return a reference ie. function &doWork() {}
	if (mvceditor::TokenClass::REFERENCE_OPERATOR == Token) {
		Advance();
	}
	if (mvceditor::TokenClass::IDENTIFIER == Token) {
		methodName = Lexeme;
		UnicodeString signature;
		
		// lookupo for abstract methods; they will not have a function body ({})
		while (MoreTokens() && (mvceditor::TokenClass::OPENBRACE != Token && mvceditor::TokenClass::SEMICOLON != Token)) {
			signature += Lexeme;
			int previousToken = Token;
			Advance();
			// only put spaces when the function uses type hinting (identififer followed by '$')
			if (previousToken == mvceditor::TokenClass::IDENTIFIER && Token == mvceditor::TokenClass::VARIABLE) {
				signature += UNICODE_STRING_SIMPLE(" ");
			}
		}
		Advance(); // eat the '{'
		if (ClassMemberObserver) {
			ClassMemberObserver->MethodFound(className, methodName, signature, 
				 ReturnTypeFromPhpDocComment(phpDocComment), phpDocComment, visibility, isStatic);
		}
	}
	return methodName;
}

UnicodeString mvceditor::ParserClass::ScanFunction(const UnicodeString& phpDocComment) {
	UnicodeString functionName;
	if (mvceditor::TokenClass::FUNCTION == Token) {
		Advance();

		// handle functions that return a reference ie. function &doWork() {}
		if (mvceditor::TokenClass::REFERENCE_OPERATOR == Token) {
			Advance();
		}
		if (mvceditor::TokenClass::IDENTIFIER == Token) {
			functionName = Lexeme;
			UnicodeString signature;
			while (MoreTokens() && mvceditor::TokenClass::OPENBRACE != Token) {
				signature += Lexeme;
				int previousToken = Token;
				Advance();
				// only put spaces when the function uses type hinting (identififer followed by '$')
				if (previousToken == mvceditor::TokenClass::IDENTIFIER && Token == mvceditor::TokenClass::VARIABLE) {
					signature += UNICODE_STRING_SIMPLE(" ");
				}
			}
			Advance(); // eat the '{'
			if (FunctionObserver) {
				FunctionObserver->FunctionFound(functionName, signature, 
					 ReturnTypeFromPhpDocComment(phpDocComment), phpDocComment);
			}
		}
	}
	return functionName;
}

UnicodeString mvceditor::ParserClass::ReturnTypeFromPhpDocComment(const UnicodeString& phpDocComment, bool varAnnotation) {
	UnicodeString returnType;
	UnicodeString annotation = varAnnotation ? UNICODE_STRING_SIMPLE("@var") : UNICODE_STRING_SIMPLE("@return");
	int32_t pos = phpDocComment.indexOf(annotation);
	if (pos >= 0) {
		pos += annotation.length();
		
		// rudimentary tokenizer, skip all whitespace after annotation and get the word
		while (u_isWhitespace(phpDocComment[pos])) {
			++pos;
		}
		while (!u_isWhitespace(phpDocComment[pos]) && pos < phpDocComment.length()) {
			returnType += phpDocComment[pos];
			++pos;
		}
	}
	return returnType.trim();
}

void mvceditor::ParserClass::ScanVariableDeclarations(const UnicodeString& className, const UnicodeString& functionName) {
	
	// look for instances of $var = ...
	if (mvceditor::TokenClass::VARIABLE == Token && mvceditor::TokenClass::ASSIGNMENT == LookaheadToken) {
		UnicodeString variableName = Lexeme; //when variable is found, identifier will be before assignment operator
		variableName.remove(0, 1); // variable observer expects the name only; no '$'
		Advance(); //eat the variable name
		Advance(); //eat the '='
		if (mvceditor::TokenClass::NEW == Token) {
			
			//  $var = new Foo
			Advance();
			if (mvceditor::TokenClass::IDENTIFIER == Token) {
				if (VariableObserver) {
					VariableObserver->VariableCreatedWithNewFound(className, functionName, variableName, Lexeme, 
						UNICODE_STRING_SIMPLE(""));
				}
			}
		}
		else if (mvceditor::TokenClass::IDENTIFIER == Token) {
			
			// $var = fooBar(... 
			UnicodeString functionCalledName = Lexeme;
			Advance();
			if (mvceditor::TokenClass::OPENPARENTHESIS == Token) {
				if (VariableObserver) {
					VariableObserver->VariableCreatedWithFunctionFound(className, functionName, variableName, 
						functionCalledName, UNICODE_STRING_SIMPLE(""));	
				}
			}
		}
		else if (mvceditor::TokenClass::VARIABLE == Token) {
			// $var = $this->foo( or $foo->bar(
			UnicodeString object = Lexeme;
			bool isThis = object.caseCompare(UNICODE_STRING("$this", 5), 0) == 0;
			Advance();
			if (mvceditor::TokenClass::METHODOPERATOR == Token) {
				Advance();
				if (mvceditor::TokenClass::IDENTIFIER == Token) {
					UnicodeString objectMethodName = Lexeme;
					Advance();
					if (mvceditor::TokenClass::OPENPARENTHESIS == Token) {
						if (VariableObserver && isThis) {
							VariableObserver->VariableCreatedWithThisMethodFound(className, functionName, 
								variableName, objectMethodName, UNICODE_STRING_SIMPLE(""));	
						}
						else if (VariableObserver) {
							object.remove(0, 1);
							VariableObserver->VariableCreatedWithObjectMethodFound(className, functionName, 
								variableName, object, objectMethodName, UNICODE_STRING_SIMPLE(""));	
						}
					}
				}
			}
			else {
				
				// $var = $anotherVar
				if (VariableObserver) {
					object.remove(0, 1);
					VariableObserver->VariableCreatedWithAnotherVariableFound(className, functionName, 
						variableName, object, UNICODE_STRING_SIMPLE(""));	
				}
			}
		}
		else {
			
			// $var = 'hello' or $var =  123
			if (VariableObserver) {
				VariableObserver->VariableConstantFound(className, functionName, variableName, Lexeme, 
					UNICODE_STRING_SIMPLE(""));	
			}
		}
	}
	else {
		Advance();
	}
}

bool mvceditor::ParserClass::Advance() {
	Token = LookaheadToken;
	Lexeme = LookaheadLexeme;
	LookaheadToken = NextLookaheadToken;
	LookaheadLexeme = NextLookaheadLexeme;
	NextLookaheadToken = Lexer.NextToken();
	Lexer.GetLexeme(NextLookaheadLexeme);
	if (mvceditor::TokenClass::CLOSEBRACE == Token) {
		--BraceDepth;
	}
	else if (mvceditor::TokenClass::OPENBRACE == Token) {
		++BraceDepth;
	}
	return Token > 0 && Token != mvceditor::TokenClass::ENDOFFILE;
}

bool mvceditor::ParserClass::MoreTokens() {
	return !mvceditor::TokenClass::IsTerminatingToken(Token);
}

void mvceditor::ParserClass::ScanDefineDeclaration(const UnicodeString& phpDocComment) {
	Advance(); //eat 'define'
	Advance(); //eat '('
	if (mvceditor::TokenClass::SINGLEQUOTESTRING == Token || mvceditor::TokenClass::DOUBLEQUOTESTRING == Token) {
		UnicodeString variable = Lexeme;
		Advance(); //eat the string
		Advance(); //eat ','
		if (ClassObserver) {
			ClassObserver->DefineDeclarationFound(variable, Lexeme, phpDocComment);
		}
		while (MoreTokens() && Token != mvceditor::TokenClass::SEMICOLON) {
			Advance();
		}
	}
}

bool mvceditor::ParserClass::LintFile(const wxString& file, LintResultsClass& results) {
	
	// set to 1 and the parser will dump stuff to std out. useful for debugging only
	extern int php53debug;
	php53debug = 0;
	
	bool ret = false;
	if (Lexer.OpenFile(file)) {		
		ret = php53parse(Lexer) == 0;
		results.Error = Lexer.ParserError;
		results.File = file;
		results.LineNumber = Lexer.GetLineNumber();
		results.CharacterPosition = Lexer.GetCharacterPosition();
	}
	return ret;
}

bool mvceditor::ParserClass::LintString(const UnicodeString& code, LintResultsClass& results) {
	bool ret = false;
	if (Lexer.OpenString(code)) {
		ret = php53parse(Lexer) == 0;
		results.Error = Lexer.ParserError;
		results.File = wxEmptyString;
		results.LineNumber = Lexer.GetLineNumber();
		results.CharacterPosition = Lexer.GetCharacterPosition();
	}
	return ret;
}

mvceditor::LintResultsClass::LintResultsClass()
	: Error()
	, File()
	, LineNumber(0)
	, CharacterPosition(0) {
}

void mvceditor::LintResultsClass::Copy(const mvceditor::LintResultsClass& other) {
	Error = other.Error;
	File = other.File;
	LineNumber = other.LineNumber;
	CharacterPosition = other.CharacterPosition;
}