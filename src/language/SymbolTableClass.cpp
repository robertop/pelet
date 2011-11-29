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
#include <language/SymbolTableClass.h>
#include <windows/StringHelperClass.h>
#include <language/TokenClass.h>
#include<algorithm>

mvceditor::SymbolClass::SymbolClass() 
	: Lexeme()
	, TypeLexeme() 
	, Type(PRIMITIVE) {
}

mvceditor::SymbolTableClass::SymbolTableClass() 
	: Parser()
	, Symbols() {
	Parser.SetClassObserver(this);
	Parser.SetClassMemberObserver(this);
	Parser.SetFunctionObserver(this);
	Parser.SetVariableObserver(this);
}

void mvceditor::SymbolTableClass::ClassFound(const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment) {
	SymbolClass symbol;
	symbol.Lexeme = className;
	symbol.SourceSignature = signature;
	symbol.Type = SymbolClass::CLASS;
	GetScope(UNICODE_STRING_SIMPLE(""), UNICODE_STRING_SIMPLE("")).push_back(symbol);
}

void mvceditor::SymbolTableClass::DefineDeclarationFound(const UnicodeString& variableName, 
	const UnicodeString& variableValue, const UnicodeString& comment) {
	SymbolClass symbol;
	symbol.Lexeme = variableName;
	symbol.SourceSignature = UNICODE_STRING_SIMPLE("");
	symbol.TypeLexeme = UNICODE_STRING_SIMPLE("");
	symbol.Type = SymbolClass::PRIMITIVE;
	GetScope(UNICODE_STRING_SIMPLE(""), UNICODE_STRING_SIMPLE("")).push_back(symbol);	
}

void mvceditor::SymbolTableClass::FunctionFound(const UnicodeString& functionName, const UnicodeString& signature, 
		const UnicodeString& returnType, const UnicodeString& comment) {
	SymbolClass symbol;
	symbol.Lexeme = functionName;
	symbol.SourceSignature = signature;
	symbol.TypeLexeme = returnType;
	symbol.Type = SymbolClass::FUNCTION;
	GetScope(UNICODE_STRING_SIMPLE(""), UNICODE_STRING_SIMPLE("")).push_back(symbol);
	CreateScopeArgumentsFromSignature(signature, GetScope(UNICODE_STRING_SIMPLE(""), functionName));
}

void mvceditor::SymbolTableClass::CreateSymbols(const UnicodeString& code) {
	Symbols.clear();
	SourceCode = code;
	Parser.ScanString(code);
}

void mvceditor::SymbolTableClass::MethodFound(const UnicodeString& className, const UnicodeString& methodName, 
	const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment,
	TokenClass::TokenIds visibility, bool isStatic) {
	SymbolClass symbol;
	symbol.Lexeme = methodName;
	symbol.SourceSignature = signature;
	symbol.TypeLexeme = returnType;
	symbol.Type = SymbolClass::METHOD;
	GetScope(className, UNICODE_STRING_SIMPLE("")).push_back(symbol);
	std::vector<SymbolClass>& methodScope = GetScope(className, methodName);
	SymbolClass thisSymbol;
	thisSymbol.Lexeme = UNICODE_STRING_SIMPLE("this");
	thisSymbol.SourceSignature = UNICODE_STRING_SIMPLE("");
	thisSymbol.TypeLexeme = UNICODE_STRING_SIMPLE("");
	thisSymbol.Type = SymbolClass::OBJECT;
	methodScope.push_back(thisSymbol);
	CreateScopeArgumentsFromSignature(signature, methodScope);
}

void mvceditor::SymbolTableClass::PropertyFound(const UnicodeString& className, const UnicodeString& propertyName, 
	const UnicodeString& propertyType, const UnicodeString& comment, 
	TokenClass::TokenIds visibility, bool isConst, bool isStatic) {
	SymbolClass symbol;
	symbol.Lexeme = propertyName;
	symbol.SourceSignature = UNICODE_STRING_SIMPLE("");
	symbol.TypeLexeme = propertyType;
	SymbolClass::Types type;
	if (propertyType.caseCompare(UNICODE_STRING_SIMPLE("string"), 0) == 0 || 
		propertyType.caseCompare(UNICODE_STRING_SIMPLE("int"), 0) == 0 ||
		propertyType.caseCompare(UNICODE_STRING_SIMPLE("integer"), 0) == 0 || 
		propertyType.caseCompare(UNICODE_STRING_SIMPLE("bool"), 0) == 0 ||
		propertyType.caseCompare(UNICODE_STRING_SIMPLE("boolean"), 0) == 0 || 
		propertyType.caseCompare(UNICODE_STRING_SIMPLE("float"), 0) == 0 ||
		propertyType.caseCompare(UNICODE_STRING_SIMPLE("double"), 0) == 0) {
		type = SymbolClass::PRIMITIVE;
	}
	else if (propertyType.caseCompare(UNICODE_STRING_SIMPLE("array"), 0) == 0) {
		type = SymbolClass::ARRAY;
	}
	else {
		type = SymbolClass::OBJECT;
	}
	symbol.Type = type;
	GetScope(className, UNICODE_STRING_SIMPLE("")).push_back(symbol);
}

void mvceditor::SymbolTableClass::VariableCreatedWithNewFound(const UnicodeString& className, 
		const UnicodeString& methodName, const UnicodeString& variableName, const UnicodeString& returnType, 
		const UnicodeString& comment) {
	SymbolClass symbol;
	symbol.Lexeme = variableName;
	symbol.SourceSignature = UNICODE_STRING_SIMPLE("");
	symbol.TypeLexeme = returnType;
	symbol.Type = SymbolClass::OBJECT;
	GetScope(className, methodName).push_back(symbol);
}
	
void mvceditor::SymbolTableClass::VariableCreatedWithFunctionFound(const UnicodeString& className, 
		const UnicodeString& methodName, const UnicodeString& variableName, const UnicodeString& functionCalledName, 
		const UnicodeString& comment) {
	SymbolClass symbol;
	symbol.Lexeme = variableName;
	symbol.SourceSignature = functionCalledName;
	symbol.TypeLexeme = UNICODE_STRING_SIMPLE("");
	GetScope(className, methodName).push_back(symbol);
}

void mvceditor::SymbolTableClass::VariableCreatedWithThisMethodFound(const UnicodeString& className, 
		const UnicodeString& methodName, const UnicodeString& variableName, const UnicodeString& methodCalledName, 
		const UnicodeString& comment) {
	SymbolClass symbol;
	symbol.Lexeme = variableName;
	symbol.SourceSignature = className + UNICODE_STRING_SIMPLE("::") + methodCalledName;
	symbol.TypeLexeme = UNICODE_STRING_SIMPLE("");
	GetScope(className, methodName).push_back(symbol);		
}
	
void mvceditor::SymbolTableClass::VariableCreatedWithObjectMethodFound(const UnicodeString& className, 
		const UnicodeString& methodName, const UnicodeString& variableName, const UnicodeString& objectName, 
		const UnicodeString& objectMethod, const UnicodeString& comment) {
	
	// get the object's type
	UnicodeString objectType;
	std::vector<SymbolClass> scope = GetScope(className, methodName);
	for (size_t i = 0; i < scope.size(); ++i) {
		if (scope[i].Lexeme == objectName) {
			objectType = scope[i].TypeLexeme;
			break;
		}
	}
	SymbolClass symbol;
	symbol.Lexeme = variableName;
	symbol.SourceSignature = objectType + UNICODE_STRING_SIMPLE("::") + objectMethod;
	symbol.TypeLexeme = UNICODE_STRING_SIMPLE("");
	GetScope(className, methodName).push_back(symbol);
}

void mvceditor::SymbolTableClass::VariableConstantFound(const UnicodeString& className, const UnicodeString& methodName, 
		const UnicodeString& variableName, const UnicodeString& constant, const UnicodeString& comment) {
	SymbolClass symbol;
	symbol.Lexeme = variableName;
	symbol.SourceSignature = UNICODE_STRING_SIMPLE("");
	symbol.TypeLexeme = "";
	symbol.Type = SymbolClass::PRIMITIVE;
	GetScope(className, methodName).push_back(symbol);
}

void mvceditor::SymbolTableClass::VariableCreatedWithAnotherVariableFound(const UnicodeString& className, 
		const UnicodeString& methodName, const UnicodeString& variableName, const UnicodeString& sourceVariable, 
		const UnicodeString& comment) {
	SymbolClass symbol;
	symbol.Lexeme = variableName;
	symbol.SourceSignature = UNICODE_STRING_SIMPLE("");
	symbol.TypeLexeme = "";
	symbol.Type = SymbolClass::PRIMITIVE;
	GetScope(className, methodName).push_back(symbol);
}

bool mvceditor::SymbolTableClass::Lookup(int pos, mvceditor::SymbolClass& symbol) {
	UnicodeString className,
			functionName,
			lexeme,
			lastLexeme,
			nextToLastLexeme;
	symbol.Lexeme = UNICODE_STRING_SIMPLE("");
	symbol.TypeLexeme = UNICODE_STRING_SIMPLE("");
	symbol.SourceSignature = UNICODE_STRING_SIMPLE("");
	symbol.Type = mvceditor::SymbolClass::PRIMITIVE;
	symbol.IsStatic = false;
	int token(0),
		lastToken(0),
		nextToLastToken(0);
	bool found = false;
	GetTokensAtPos(pos, token, lastToken, nextToLastToken, lexeme, lastLexeme, nextToLastLexeme, className, functionName);
	
	bool isLastTokenThis = lastLexeme.caseCompare(UNICODE_STRING("this", 4), 0) == 0;
	bool isLastTokenParent = lastLexeme.caseCompare(UNICODE_STRING("parent", 6), 0) == 0;
	bool isLastTokenSelf = lastLexeme.caseCompare(UNICODE_STRING("self", 4), 0) == 0;
	bool isNextToLastTokenThis = nextToLastLexeme.caseCompare(UNICODE_STRING("this", 4), 0) == 0;
	bool isNextToLastTokenParent = nextToLastLexeme.caseCompare(UNICODE_STRING("parent", 6), 0) == 0;
	bool isNextToLastTokenSelf = nextToLastLexeme.caseCompare(UNICODE_STRING("self", 4), 0) == 0;
	if (mvceditor::TokenClass::METHODOPERATOR == token && mvceditor::TokenClass::VARIABLE == lastToken && isLastTokenThis) {
		
		// handle $this->
		symbol.Type = mvceditor::SymbolClass::OBJECT;
		symbol.TypeLexeme = className;
		found = true;
	}
	else if (mvceditor::TokenClass::SCOPERESOLUTION == token && mvceditor::TokenClass::IDENTIFIER == lastToken) {
		
		// handle parent:: 
		// handle self::
		// handler AAA::
		if (isLastTokenParent) {
			symbol.TypeLexeme = className;
			symbol.Type = mvceditor::SymbolClass::PARENT;
		}
		else if (isLastTokenSelf) {
			symbol.TypeLexeme = className;
			symbol.Type = mvceditor::SymbolClass::OBJECT;
		}
		else {
			symbol.TypeLexeme = lastLexeme;
			symbol.Type = mvceditor::SymbolClass::OBJECT;
		}
		symbol.IsStatic = true;
		found = !symbol.TypeLexeme.isEmpty();
	}	
	else if (mvceditor::TokenClass::IDENTIFIER == token && mvceditor::TokenClass::METHODOPERATOR == lastToken && 
		mvceditor::TokenClass::VARIABLE == nextToLastToken && isNextToLastTokenThis) {
		
		// handle $this->abc
		symbol.Type = mvceditor::SymbolClass::PROPERTY;
		symbol.TypeLexeme = className;
		symbol.Lexeme = lexeme;
		found = true;
	}
	else if (mvceditor::TokenClass::IDENTIFIER == token && mvceditor::TokenClass::SCOPERESOLUTION == lastToken &&
		mvceditor::TokenClass::IDENTIFIER == nextToLastToken) {
		
		// handle parent::abc
		// handle self::abc
		// handle AAA::abc
		symbol.Type = SymbolClass::OBJECT;
		symbol.Lexeme = lexeme;
		if (isNextToLastTokenParent) {
			symbol.Type = mvceditor::SymbolClass::PARENT;
			symbol.TypeLexeme = className;
		}
		else if (isNextToLastTokenSelf) {
			symbol.TypeLexeme = className;
		}
		else {
			symbol.TypeLexeme = nextToLastLexeme;
		}
		symbol.IsStatic = true;
		found = !symbol.TypeLexeme.isEmpty();
	}
	else if (mvceditor::TokenClass::METHODOPERATOR == token &&  mvceditor::TokenClass::VARIABLE == lastToken) {
		
		// handle $user->
		// need to get the class name for the variable
		symbol.Type = SymbolClass::OBJECT;
		symbol.Lexeme = UNICODE_STRING_SIMPLE("");
		std::vector<SymbolClass> scope = GetScope(className, functionName);
		for (size_t i = 0; i < scope.size(); ++i) {
			if (scope[i].Lexeme == lastLexeme && scope[i].Type == SymbolClass::OBJECT) {
				symbol.SourceSignature = scope[i].SourceSignature;
				symbol.TypeLexeme = scope[i].TypeLexeme;
				break;
			}
		}
		/*
		// look for the object's class comment (in the global scope)
		scope = GetScope(UNICODE_STRING_SIMPLE(""), UNICODE_STRING_SIMPLE(""));
		for (size_t i = 0; i < scope.size(); ++i) {
			if (scope[i].Lexeme == className && scope[i].Type == SymbolClass::CLASS) {
				comment = scope[i].Comment;
				break;
			}
		}*/
		found = true;
	}
	else if (mvceditor::TokenClass::IDENTIFIER == token && mvceditor::TokenClass::METHODOPERATOR == lastToken && 
		mvceditor::TokenClass::VARIABLE == nextToLastToken) {
		
		// handle $user->abc
		symbol.Type = SymbolClass::OBJECT;
		symbol.Lexeme = lexeme;
		std::vector<SymbolClass> scope = GetScope(className, functionName);
		for (size_t i = 0; i < scope.size(); ++i) {
			if (scope[i].Lexeme == nextToLastLexeme && scope[i].Type == SymbolClass::OBJECT) {
				symbol.SourceSignature = scope[i].SourceSignature;
				symbol.TypeLexeme = scope[i].TypeLexeme;
				break;
			}
		}
		
		/*
		// look for the object's class comment (in the class scope)
		scope = GetScope(className, UNICODE_STRING_SIMPLE(""));
		for (size_t i = 0; i < scope.size(); ++i) {
			if (scope[i].Lexeme == objectMember) {
				comment = scope[i].Comment;
				break;
			}
		}*/
		found = true;
	}
	else if (mvceditor::TokenClass::VARIABLE == token) {
		
		// handle $user
		// need to get the class name for the variable
		std::vector<SymbolClass> scope = GetScope(className, functionName);
		for (size_t i = 0; i < scope.size(); ++i) {
			if (scope[i].Lexeme == lexeme) {
				symbol.SourceSignature = scope[i].SourceSignature;
				symbol.Lexeme = scope[i].Lexeme;
				symbol.TypeLexeme = scope[i].TypeLexeme;
				symbol.Type = scope[i].Type;
				break;
			}
		}
		/*
		// look for the object's class comment (in the class scope)
		scope = GetScope(UNICODE_STRING_SIMPLE(""), UNICODE_STRING_SIMPLE(""));
		for (size_t i = 0; i < scope.size(); ++i) {
			if (scope[i].Lexeme == symbol.TypeLexeme) {
				comment = scope[i].Comment;
				break;
			}
		}*/
		found = true;
	}
	else if (mvceditor::TokenClass::METHODOPERATOR == lastToken && mvceditor::TokenClass::IDENTIFIER == token) {
		
		// handle ->abc
		// at this point (because of the above else conditions) this means only 
		//   func()->abc
		//   $this->user->abc
		// handle it by querying the resource finder for all methods that start with the the token 'abc'
		symbol.Type = SymbolClass::OBJECT;
		symbol.Lexeme = lexeme;
		symbol.TypeLexeme = UNICODE_STRING_SIMPLE("");
		found = true;
	}
	return found;
}

std::vector<UnicodeString> mvceditor::SymbolTableClass::GetVariablesInScope(int pos) {
	UnicodeString className,
			functionName,
			lexeme,
			lastLexeme,
			nextToLastLexeme;
	int token,
		lastToken,
		nextToLastToken;
	GetTokensAtPos(pos, token, lastToken, nextToLastToken, lexeme, lastLexeme, nextToLastLexeme, className, 
		functionName);
	UnicodeString scopeString = className + UNICODE_STRING_SIMPLE("::") + functionName;
	std::vector<SymbolClass> scopeSymbols = Symbols[scopeString];
	std::vector<UnicodeString> variables;
	for (size_t i = 0; i < scopeSymbols.size(); ++i) {
		if (find(variables.begin(), variables.end(), scopeSymbols[i].Lexeme) == variables.end()) {
			//dont return duplicates
			variables.push_back(scopeSymbols[i].Lexeme);
		}
		
	}
	return variables;
}

std::vector<mvceditor::SymbolClass>& mvceditor::SymbolTableClass::GetScope(const UnicodeString& className, 
		const UnicodeString& methodName) {
	UnicodeString scopeString = className + UNICODE_STRING_SIMPLE("::") + methodName;
	if (Symbols[scopeString].empty()) {
		CreatePredefinedVariables(Symbols[scopeString]);
	}
	return Symbols[scopeString];
}

void mvceditor::SymbolTableClass::Print() {
	UFILE *out = u_finit(stdout, NULL, NULL);
	for(std::map<UnicodeString, std::vector<SymbolClass>, UnicodeStringComparatorClass>::iterator it = Symbols.begin(); it != Symbols.end(); ++it) {
		std::vector<SymbolClass> scopedSymbols = it->second;
		UnicodeString s = it->first;
		u_fprintf(out, "Symbol Table For %S\n", s.getTerminatedBuffer());
		for (size_t j = 0; j < scopedSymbols.size(); ++j) {
			SymbolClass symbol = scopedSymbols[j];
			u_fprintf(out, "%d\t%S\t%S\t%d\t%d\t%S\n", 
				(int)j, symbol.Lexeme.getTerminatedBuffer(), 
				symbol.TypeLexeme.getTerminatedBuffer(), symbol.Type, 
				symbol.IsStatic, symbol.SourceSignature.getTerminatedBuffer()); 
		}
	}
	u_fclose(out);
}

void mvceditor::SymbolTableClass::GetTokensAtPos(int pos, int& token, int& lastToken, int& nextToLastToken, 
		UnicodeString& lexeme, UnicodeString& lastLexeme, UnicodeString& nextToLastLexeme, UnicodeString& className, 
		UnicodeString& functionName) {
	int braceCount(0);
	LexicalAnalyzerClass lexer;
	UnicodeString unistr(SourceCode, 0, pos);
	if (lexer.OpenString(unistr)) {
		int iteratorToken = lexer.NextToken();
		token = iteratorToken;
		lastToken = token;
		nextToLastToken = token;
		while (!mvceditor::TokenClass::IsTerminatingToken(iteratorToken)) {
			nextToLastToken = lastToken;
			lastToken = token;
			token = iteratorToken;
			nextToLastLexeme = lastLexeme;
			lastLexeme = lexeme;
			lexer.GetLexeme(lexeme);
			switch (iteratorToken) {
				case mvceditor::TokenClass::CLASS:
					iteratorToken = lexer.NextToken();
					lexer.GetLexeme(className);
					break;
				case mvceditor::TokenClass::FUNCTION:
					iteratorToken = lexer.NextToken();
					lexer.GetLexeme(functionName);
					break;
				case mvceditor::TokenClass::OPENBRACE:
					++braceCount;
					break;
				case mvceditor::TokenClass::CLOSEBRACE:
					if (braceCount > 0) {
						--braceCount;
					}
					if (braceCount <= 0) {
						className = UNICODE_STRING_SIMPLE("");
						functionName = UNICODE_STRING_SIMPLE("");
					}
					else if (braceCount < 1 && !className.isEmpty()) {
						functionName = UNICODE_STRING_SIMPLE("");
					}
					break;
			}
			if (lexeme.startsWith(UNICODE_STRING("$", 1))) {
				lexeme.remove(0, 1);
			}
			iteratorToken = lexer.NextToken();
		}
	}
}

void mvceditor::SymbolTableClass::CreateScopeArgumentsFromSignature(const UnicodeString& signature, 
		std::vector<SymbolClass>& scope) {
	int startPos = signature.indexOf('(');
	int lastPos = signature.indexOf(')');
	bool moreParameters = startPos >= 0 && lastPos != (startPos + 1);
	while (moreParameters) {
		int endPos = signature.indexOf(',', startPos);
		if (endPos == -1) {
			//last argument. -2 because we dont need the end ')' of the signature 
			endPos = signature.length() - 2;
			moreParameters = false;
		}
		UnicodeString argument(signature, startPos, endPos - startPos + 1);
		if (argument.endsWith(',')) {
			argument.remove(argument.length() - 1, 1);
		}
		int equalPos = argument.indexOf('=');
		if (equalPos >= 0) {
			//ignore default parameter values. make sure this logic goes before the type hinting logic
			argument.remove(equalPos, argument.length() - equalPos + 1);
		}		
		int spacePos = argument.indexOf(' ');
		UnicodeString type,
			variableName(argument);
		if (spacePos >= 0) {
			
			// a type hint.  string before space is type, after space is the variable name
			 argument.extract(0, spacePos, type);
			 variableName.truncate(0);
			 argument.extract(spacePos + 1, argument.length() - spacePos, variableName);
			 if (type.startsWith('(')) {
				// remove '(' should not be in lexeme
				type.remove(0, 1);
			}
		}
		SymbolClass variableSymbol;
		if (variableName.startsWith('(')) {
			// remove '(' should not be in lexeme
			variableName.remove(0, 1);
		}
		if (variableName.startsWith('$')) {
			// remove '$' should not be in lexeme
			variableName.remove(0, 1);
		}
		variableSymbol.Lexeme = variableName;
		variableSymbol.SourceSignature = UNICODE_STRING_SIMPLE("");
		variableSymbol.TypeLexeme = type;
		variableSymbol.IsStatic = false;
		variableSymbol.Type = type.isEmpty() ? SymbolClass::PRIMITIVE : SymbolClass::OBJECT;
		scope.push_back(variableSymbol);
		startPos = endPos + 1;
	}
}

void mvceditor::SymbolTableClass::CreatePredefinedVariables(std::vector<SymbolClass>& scope) {
	UnicodeString variables[] =  {
		UNICODE_STRING_SIMPLE("GLOBALS"),
		UNICODE_STRING_SIMPLE("_SERVER"),
		UNICODE_STRING_SIMPLE("_GET"),
		UNICODE_STRING_SIMPLE("_POST"),
		UNICODE_STRING_SIMPLE("_FILES"),
		UNICODE_STRING_SIMPLE("_REQUEST"),
		UNICODE_STRING_SIMPLE("_SESSION"),
		UNICODE_STRING_SIMPLE("_ENV"),
		UNICODE_STRING_SIMPLE("_COOKIE"),
		UNICODE_STRING_SIMPLE("php_errormsg"),
		UNICODE_STRING_SIMPLE("HTTP_RAW_POST_DATA"),
		UNICODE_STRING_SIMPLE("http_response_header"),
		UNICODE_STRING_SIMPLE("argc"),
		UNICODE_STRING_SIMPLE("argv")
	};
	for (int i = 0; i < 14; ++i) {
		SymbolClass variableSymbol;
		variableSymbol.Lexeme = variables[i];
		variableSymbol.SourceSignature = UNICODE_STRING_SIMPLE("");
		variableSymbol.IsStatic = false;
		variableSymbol.TypeLexeme = UNICODE_STRING_SIMPLE("");
		variableSymbol.Type = SymbolClass::PRIMITIVE;
		scope.push_back(variableSymbol);
	}
}