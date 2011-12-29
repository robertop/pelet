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

mvceditor::SymbolTableClass::SymbolTableClass() 
	: Parser()
	, Variables()
	, ScopePositions() {
	Parser.SetClassObserver(this);
	Parser.SetClassMemberObserver(this);
	Parser.SetFunctionObserver(this);
	Parser.SetVariableObserver(this);
}

void mvceditor::SymbolTableClass::ClassFound(const UnicodeString& className, const UnicodeString& signature, 
		const UnicodeString& comment) {
	
}

void mvceditor::SymbolTableClass::DefineDeclarationFound(const UnicodeString& variableName, 
	const UnicodeString& variableValue, const UnicodeString& comment) {
	mvceditor::SymbolClass symbol;
	symbol.SetToPrimitive();
	symbol.Lexeme = variableName;
	GetScope(UNICODE_STRING_SIMPLE(""), UNICODE_STRING_SIMPLE("")).push_back(symbol);

}

void mvceditor::SymbolTableClass::FunctionFound(const UnicodeString& functionName, const UnicodeString& signature, 
		const UnicodeString& returnType, const UnicodeString& comment) {
	int currentPos = Parser.GetCharacterPosition();
	PushStartPos(UNICODE_STRING_SIMPLE(""), functionName, currentPos);
	std::vector<SymbolClass>& functionScope = GetScope(UNICODE_STRING_SIMPLE(""), functionName);
	CreatePredefinedVariables(functionScope);
}

void mvceditor::SymbolTableClass::FunctionEnd(const UnicodeString& functionName, int pos) {
	UnicodeString scopeString = ScopeString(UNICODE_STRING_SIMPLE(""), functionName);
	ScopePositions[scopeString].second = pos;
}

void mvceditor::SymbolTableClass::MethodFound(const UnicodeString& className, const UnicodeString& methodName, 
	const UnicodeString& signature, const UnicodeString& returnType, const UnicodeString& comment,
	TokenClass::TokenIds visibility, bool isStatic) {
	int currentPos = Parser.GetCharacterPosition();
	PushStartPos(className, methodName, currentPos);
	std::vector<SymbolClass>& methodScope = GetScope(className, methodName);
	CreatePredefinedVariables(methodScope);

	// creat the $this variable
	SymbolClass variableSymbol;
	variableSymbol.Lexeme = UNICODE_STRING_SIMPLE("$this");
	variableSymbol.Type = mvceditor::SymbolClass::OBJECT;
	variableSymbol.ChainList.push_back(className);
	methodScope.push_back(variableSymbol);
}

void mvceditor::SymbolTableClass::MethodEnd(const UnicodeString& className, const UnicodeString& methodName, int pos) {
	UnicodeString scopeString = ScopeString(className, methodName);
	ScopePositions[scopeString].second = pos;
}

void mvceditor::SymbolTableClass::PropertyFound(const UnicodeString& className, const UnicodeString& propertyName, 
	const UnicodeString& propertyType, const UnicodeString& comment, 
	TokenClass::TokenIds visibility, bool isConst, bool isStatic) {

	// do nothing; properties will be looked up using the ResourceFinder class
}

void mvceditor::SymbolTableClass::VariableFound(const UnicodeString& className, const UnicodeString& methodName, 
	const SymbolClass& symbol, const UnicodeString& comment) {
	GetScope(className, methodName).push_back(symbol);
}

void mvceditor::SymbolTableClass::CreateSymbols(const UnicodeString& code) {
	Variables.clear();
	ScopePositions.clear();
	Parser.ScanString(code);
}

std::vector<UnicodeString> mvceditor::SymbolTableClass::GetVariablesInScope(int pos) const {

	// ScopePositions are ranges; we just need to check which range pos falls in
	UnicodeString scopeString = ScopeString(UNICODE_STRING_SIMPLE(""), UNICODE_STRING_SIMPLE(""));
	for (std::map<UnicodeString, std::pair<int, int>, UnicodeStringComparatorClass>::const_iterator it = ScopePositions.begin(); it != ScopePositions.end(); ++it) {

		// this is the scope IF pos is after this position but before the next one
		// map values are pairs themselves, hence teh second.first and second.second
		if (pos >= it->second.first && pos <= it->second.second) {
			scopeString = it->first;
			break;
		}
	}
	std::map<UnicodeString, std::vector<SymbolClass>, UnicodeStringComparatorClass>::const_iterator itVar = Variables.find(scopeString);
	std::vector<SymbolClass> scopeSymbols;
	if (itVar != Variables.end()) {
		scopeSymbols = itVar->second;
	}
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
	UnicodeString scopeString = ScopeString(className , methodName);
	if (Variables[scopeString].empty()) {
		CreatePredefinedVariables(Variables[scopeString]);
	}
	return Variables[scopeString];
}

void mvceditor::SymbolTableClass::Print() const {
	UFILE *out = u_finit(stdout, NULL, NULL);
	for(std::map<UnicodeString, std::vector<SymbolClass>, UnicodeStringComparatorClass>::const_iterator it = Variables.begin(); it != Variables.end(); ++it) {
		std::vector<mvceditor::SymbolClass> scopedSymbols = it->second;
		UnicodeString s = it->first;
		u_fprintf(out, "Symbol Table For %S\n", s.getTerminatedBuffer());
		for (size_t j = 0; j < scopedSymbols.size(); ++j) {
			SymbolClass symbol = scopedSymbols[j];
			u_fprintf(out, "%d\t%S\t%d\n", (int)j, symbol.Lexeme.getTerminatedBuffer(), symbol.Type); 
		}
	}
	u_fprintf(out,  "\n************************\n");
	for (std::map<UnicodeString, std::pair<int, int>, UnicodeStringComparatorClass>::const_iterator it = ScopePositions.begin(); it != ScopePositions.end(); ++it) {
		UnicodeString s = it->first;
		u_fprintf(out, "Scope:%S Start:%d End:%d\n", s.getTerminatedBuffer(), it->second.first, it->second.second);
	}
	u_fclose(out);
}

void mvceditor::SymbolTableClass::CreatePredefinedVariables(std::vector<mvceditor::SymbolClass>& scope) {
	UnicodeString variables[] =  {
		UNICODE_STRING_SIMPLE("$GLOBALS"),
		UNICODE_STRING_SIMPLE("$_SERVER"),
		UNICODE_STRING_SIMPLE("$_GET"),
		UNICODE_STRING_SIMPLE("$_POST"),
		UNICODE_STRING_SIMPLE("$_FILES"),
		UNICODE_STRING_SIMPLE("$_REQUEST"),
		UNICODE_STRING_SIMPLE("$_SESSION"),
		UNICODE_STRING_SIMPLE("$_ENV"),
		UNICODE_STRING_SIMPLE("$_COOKIE"),
		UNICODE_STRING_SIMPLE("$php_errormsg"),
		UNICODE_STRING_SIMPLE("$HTTP_RAW_POST_DATA"),
		UNICODE_STRING_SIMPLE("$http_response_header"),
		UNICODE_STRING_SIMPLE("$argc"),
		UNICODE_STRING_SIMPLE("$argv")
	};
	for (int i = 0; i < 14; ++i) {
		SymbolClass variableSymbol;
		variableSymbol.Lexeme = variables[i];
		variableSymbol.Type = SymbolClass::PRIMITIVE;
		scope.push_back(variableSymbol);
	}
}

void mvceditor::SymbolTableClass::PushStartPos(const UnicodeString& className, const UnicodeString& functionName, int startPos) {
	UnicodeString scopeString = ScopeString(className, functionName);
	std::pair<int, int> pair;
	pair.first = startPos;
	pair.second = startPos;
	ScopePositions[scopeString] = pair;
}

UnicodeString mvceditor::SymbolTableClass::ScopeString(const UnicodeString& className, const UnicodeString& functionName) const {
	return className + UNICODE_STRING_SIMPLE("::") + functionName;
}
