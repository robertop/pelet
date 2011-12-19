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
#include <language/ParserObserverClass.h>
#include <unicode/ustdio.h>
#include <unicode/uchar.h>

mvceditor::SymbolClass::SymbolClass() 
	: Lexeme()
	, TypeLexeme() 
	, SourceSignature()
	, Comment()
	, Type(PRIMITIVE)
	, Pos(0)
	, IsStatic(false) {
}

void mvceditor::SymbolClass::Copy(const mvceditor::SymbolClass& src) {
	Lexeme = src.Lexeme;
	TypeLexeme = src.TypeLexeme;
	Comment = src.Comment;
	SourceSignature = src.SourceSignature;
	Type = src.Type;
	Pos = src.Pos;
	IsStatic = src.IsStatic;	
}

void mvceditor::SymbolClass::AppendToComment(mvceditor::SemanticValueClass& value) {
	if (value.Comment) {
		Comment.append(*value.Comment);
	}
}

void mvceditor::SymbolClass::Fill(mvceditor::SemanticValueClass& value) {
	Lexeme = value.Lexeme;
	switch (value.Token) {
	case T_CONSTANT_ENCAPSED_STRING:
	case T_LNUMBER:
	case T_DNUMBER:
		Type = mvceditor::SymbolClass::PRIMITIVE;
		break;
	case T_VARIABLE:
		Type = mvceditor::SymbolClass::OBJECT;
	default:
		break;
	}
	AppendComment(value);
}

mvceditor::ObserverQuadClass::ObserverQuadClass(ClassObserverClass* classObserver, ClassMemberObserverClass* memberObserver,
				  FunctionObserverClass* functionObserver, VariableObserverClass* variableObserver)
	: Class(classObserver)
	, Member(memberObserver) 
	, Function(functionObserver) 
	, Variable(variableObserver)
	, VariableStack()
	, CurrentClass()
	, CurrentQualifiedName()
	, CurrentMember()
	, CurrentParametersList()
	, CurrentVariablesList()
	, VariableCount(0) {
}


void mvceditor::ObserverQuadClass::ClassFound(const mvceditor::ClassSymbolClass& classSymbol) {
	if (Class) {
		UnicodeString comment = classSymbol.Comment;
		Class->ClassFound(classSymbol.ClassName, classSymbol.Signature, comment);
	}
}

void mvceditor::ObserverQuadClass::ClassMemberFound(const mvceditor::ClassMemberSymbolClass& memberSymbol, bool isProperty) {
	mvceditor::TokenClass::TokenIds visibility = mvceditor::TokenClass::PUBLIC;
	if (memberSymbol.IsProtectedMember) {
		visibility = mvceditor::TokenClass::PROTECTED;
	}
	else if (memberSymbol.IsPrivateMember) {
		visibility = mvceditor::TokenClass::PRIVATE;
	}
	UnicodeString className = CurrentClass.ClassName;
	UnicodeString propName = memberSymbol.MemberName;
	UnicodeString comment = memberSymbol.Comment;
	bool isConst = memberSymbol.IsConstMember;
	bool isStatic = memberSymbol.IsStaticMember;

	// for members; remove the leading '$'
	if (isProperty && !isConst && propName.length() > 1) {
		propName = propName.remove(0, 1);
	}
	if (Member && isProperty) {
		UnicodeString propType = ReturnTypeFromPhpDocComment(comment, true);
		Member->PropertyFound(className, propName, propType, comment, visibility, isConst, isStatic);
	}
	else if (Member && !isProperty) {
		UnicodeString propType = ReturnTypeFromPhpDocComment(comment, false);
		Member->MethodFound(className, propName, memberSymbol.Signature, propType, comment, visibility, isStatic); 
	}
}

void mvceditor::ObserverQuadClass::DefineFound(const mvceditor::SymbolClass& nameSymbol, const mvceditor::SymbolClass& valueSymbol, const UnicodeString& comment) {
	if (Class) {
		Class->DefineDeclarationFound(nameSymbol.Lexeme, valueSymbol.Lexeme, comment);
	}
}

void mvceditor::ObserverQuadClass::FunctionFound(const mvceditor::ClassMemberSymbolClass& memberSymbol) {
	UnicodeString functionName = memberSymbol.MemberName;
	UnicodeString signature = memberSymbol.Signature;
	UnicodeString comment = memberSymbol.Comment;
	UnicodeString returnType = ReturnTypeFromPhpDocComment(comment, false);
	if (Function) {
		Function->FunctionFound(functionName, signature, returnType, comment);
	}
}

void mvceditor::ObserverQuadClass::VariableFound(const mvceditor::SymbolClass& symbol) {
	if (Variable) {
		UnicodeString className = CurrentClass.ClassName;
		UnicodeString functionName = CurrentMember.MemberName;
		UnicodeString comment = symbol.Comment;
		Variable->VariableFound(className, functionName, symbol, comment);
	}
	VariableCount++;
}
/*

void mvceditor::ObserverQuadClass::MakeTempVariable(mvceditor::SemanticValueClass& value) {
	UnicodeString newVarName;
	int capacity = 10;
	int written = u_sprintf(newVarName.getBuffer(capacity), "$tmp%d", VariableCount);
	newVarName.releaseBuffer(written);
	
	mvceditor::SymbolClass symbol;
	symbol.IsStatic = value.IsStaticMember;
	symbol.Lexeme = newVarName;
	symbol.Pos = value.Pos;
	if (value.Lexeme) {
		symbol.SourceSignature = *value.Signature;
	}
	symbol.Type = value.Type;
	if (value.TypeLexeme) {
		symbol.TypeLexeme = *value.TypeLexeme;
	}
	UnicodeString className = ClassStack.empty() ? UNICODE_STRING_SIMPLE("") : ClassStack.top();
	UnicodeString functionName = FunctionStack.empty() ?  UNICODE_STRING_SIMPLE("") : FunctionStack.top();
	UnicodeString comment = value.Comment ? *value.Comment : UNICODE_STRING_SIMPLE("");
	if (Variable) {
		Variable->VariableFound(className, functionName, symbol, comment);
	}
}

void mvceditor::ObserverQuadClass::MakeTempVariableAndStack(const UnicodeString& object, SemanticValueClass& propertyValue, SemanticValueClass& lookahead) {
	mvceditor::SymbolClass symbol;
	UnicodeString newVarName;
	int capacity = 10;
	int written = u_sprintf(newVarName.getBuffer(capacity), "$tmp%d", VariableCount);
	newVarName.releaseBuffer(written);
	if ('(' == lookahead.Token && object.startsWith(UNICODE_STRING_SIMPLE("$"))) {
		symbol.Type = mvceditor::SymbolClass::METHOD;
		if (propertyValue.Lexeme) {
			symbol.SourceSignature = object + UNICODE_STRING_SIMPLE("->") + *propertyValue.Lexeme;
		}
		symbol.Lexeme = newVarName;
	}
	else if ('(' == lookahead.Token && !object.startsWith(UNICODE_STRING_SIMPLE("$"))) {
		symbol.Type = mvceditor::SymbolClass::PRIMITIVE; // dont know the function return type yet
		symbol.SourceSignature = object;
		symbol.Lexeme = newVarName;
	}
	else {
		symbol.Type = mvceditor::SymbolClass::PROPERTY;
		if (propertyValue.Lexeme) {
			symbol.SourceSignature = object + UNICODE_STRING_SIMPLE("->") + *propertyValue.Lexeme;
		}
		symbol.Lexeme = newVarName;
	}
	symbol.Pos = propertyValue.Pos;

	UnicodeString className = ClassStack.empty() ? UNICODE_STRING_SIMPLE("") : ClassStack.top();
	UnicodeString functionName = FunctionStack.empty() ?  UNICODE_STRING_SIMPLE("") : FunctionStack.top();
	UnicodeString comment = propertyValue.Comment ? *propertyValue.Comment : UNICODE_STRING_SIMPLE("");
	
	if (Variable) {
		Variable->VariableFound(ClassStack.top(), FunctionStack.top(), symbol, UNICODE_STRING_SIMPLE(""));
	}
	VariableStack.push(newVarName);
}

void mvceditor::ObserverQuadClass::VariableEnd() {
	if (!VariableStack.empty()) {
		VariableStack.pop();
	}
}
*/
void mvceditor::ObserverQuadClass::ClassEnd() {
	CurrentClass.Clear();
}


mvceditor::ClassSymbolClass::ClassSymbolClass() 
	: ClassName()
	, Signature()
	, Comment() {

}

void mvceditor::ClassSymbolClass::GrabClassName(mvceditor::SemanticValueClass& value) {
	ClassName = *value.Lexeme;
}

void mvceditor::ClassSymbolClass::AppendToSignature(const UnicodeString& str) {
	if (!Signature.isEmpty()) {
		Signature.append(UNICODE_STRING_SIMPLE(" "));
	}
	Signature.append(str);
}

void mvceditor::ClassSymbolClass::AppendToSignature(mvceditor::SemanticValueClass& value) {
	if (!Signature.isEmpty()) {
		Signature.append(UNICODE_STRING_SIMPLE(" "));
	}
	Signature.append(*value.Lexeme);
}

void mvceditor::ClassSymbolClass::AppendToSignature(mvceditor::SemanticValueClass& value1, mvceditor::SemanticValueClass& value2) {
	AppendToSignature(value1);
	AppendToSignature(value2);
}

void mvceditor::ClassSymbolClass::AppendToComment(mvceditor::SemanticValueClass& value) {
	if (value.Comment) {
		Comment.append(*value.Comment);
	}
}

void mvceditor::ClassSymbolClass::Clear() {
	ClassName.remove();
	Signature.remove();
	Comment.remove();
}

mvceditor::ClassMemberSymbolClass::ClassMemberSymbolClass() 
	: MemberName()
	, Signature()
	, Comment()
	, TypeLexeme()

	// PHP default access mode is TRUE
	, IsPublicMember(true)
	, IsProtectedMember(false)
	, IsPrivateMember(false)
	, IsStaticMember(false)
	, IsConstMember(false) {

}

void mvceditor::ClassMemberSymbolClass::GrabMemberName(SemanticValueClass& value) {
	MemberName = *value.Lexeme;
}

void mvceditor::ClassMemberSymbolClass::AppendToSignature(SemanticValueClass& value) {
	if (!Signature.isEmpty()) {
		Signature.append(UNICODE_STRING_SIMPLE(" "));
	}
	Signature.append(*value.Lexeme);
}

void mvceditor::ClassMemberSymbolClass::AppendToSignature(SemanticValueClass& value1, SemanticValueClass& value2) {
	AppendToSignature(value1);
	AppendToSignature(value2);
}

void mvceditor::ClassMemberSymbolClass::AppendToSignature(const UnicodeString& str) {
	if (!Signature.isEmpty()) {
		Signature.append(UNICODE_STRING_SIMPLE(" "));
	}
	Signature.append(str);
}

void mvceditor::ClassMemberSymbolClass::AppendToComment(SemanticValueClass& value) {
	if (value.Comment) {
		Comment.append(*value.Comment);
	}
}

void mvceditor::ClassMemberSymbolClass::Clear() {
	MemberName.remove();
	Signature.remove();
	Comment.remove();
	TypeLexeme.remove();
	

	// PHP default access mode is TRUE
	IsPublicMember = true;
	IsProtectedMember = false;
	IsPrivateMember = false;
	IsStaticMember = false;
	IsConstMember =false;
}


UnicodeString mvceditor::ObserverQuadClass::ReturnTypeFromPhpDocComment(const UnicodeString& phpDocComment, bool varAnnotation) {
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

void mvceditor::SemanticValueClass::Init() {
	Token = 0;
	Lexeme = NULL;
	Comment = NULL;
}

void mvceditor::SemanticValueClass::Free() {
	if (Lexeme) {
		delete Lexeme;
		Lexeme = NULL;
	}
	if (Comment) {
		delete Comment;
		Comment = NULL;
	}
}
/*
void mvceditor::SemanticValueClass::Transfer(mvceditor::SemanticValueClass& src) {
	if (!Lexeme) {
		Lexeme = src.Lexeme;
		src.Lexeme = NULL;
	}
	else {
		Lexeme->setTo(*src.Lexeme);
	}
	if (!TypeLexeme) {
		TypeLexeme = src.TypeLexeme;
		src.TypeLexeme = NULL;
	}
	else {
		TypeLexeme->setTo(*src.TypeLexeme);
	}

	if (!Signature) {
		Signature = src.Signature;
		src.Signature = NULL;
	}
	else {
		Signature->setTo(*src.Signature);
	}
	if (!Comment) {
		Comment = src.Comment;
		src.Comment = NULL;
	}
	else {
		Comment->setTo(*src.Comment);
	}
	IsPublicMember = src.IsPublicMember;
	IsProtectedMember = src.IsProtectedMember;
	IsPrivateMember = src.IsPrivateMember;
	IsStaticMember = src.IsStaticMember;
	IsConstMember = src.IsConstMember;
}

void mvceditor::SemanticValueClass::AppendSignature(mvceditor::SemanticValueClass& src) {
	if (src.Signature) {
		bool isNew = false;
		if (!Signature) {
			Signature = new UnicodeString();
			isNew = true;
		}
		if (!isNew) {
			Signature->append(UNICODE_STRING_SIMPLE(" "));
		}
		Signature->append(*src.Signature);
	}
}

void mvceditor::SemanticValueClass::SetSymbolType(mvceditor::SymbolClass::Types type) {
	Type = type;
}

void mvceditor::SemanticValueClass::TransferComment(mvceditor::SemanticValueClass& src) {
	if (src.Comment) {
		if (!Comment) {
			Comment = src.Comment;
			src.Comment = NULL;
		}
		else {
			Comment->setTo(*src.Comment);
		}
	}
}

void mvceditor::SemanticValueClass::AppendSignatureFromLexeme(mvceditor::SemanticValueClass& src) {
	if (src.Lexeme) {
		bool isNew = false;
		if (!Signature) {
			Signature = new UnicodeString();
			isNew = true;
		}
		if (!isNew) {
			Signature->append(UNICODE_STRING_SIMPLE(" "));
		}
		Signature->append(*src.Lexeme);
		
	}
}
*/

mvceditor::ParametersListClass::ParametersListClass()
	: Params()
	, OptionalTypes() {

}

void mvceditor::ParametersListClass::Create() {
	Params.push_back(UNICODE_STRING_SIMPLE(""));
	OptionalTypes.push_back(UNICODE_STRING_SIMPLE(""));
}

void mvceditor::ParametersListClass::Clear() {
	Params.clear();
	OptionalTypes.clear();
}


void mvceditor::ParametersListClass::SetOptionalType(SemanticValueClass& value) {
	OptionalTypes.back().setTo(*value.Lexeme);	
}

void mvceditor::ParametersListClass::SetOptionalType(UnicodeString str) {
	OptionalTypes.back().setTo(str);	
}

void mvceditor::ParametersListClass::SetName(SemanticValueClass& value, bool isReference) {
	Params.back().setTo(*value.Lexeme);
	if (isReference) {
		Params.back().insert(0, UNICODE_STRING_SIMPLE("&"));
	}
}

UnicodeString mvceditor::ParametersListClass::ToSignature() const {
	UnicodeString signature = UNICODE_STRING_SIMPLE("(");
	size_t i = 0;
	for (; i < Params.size(); ++i) {
		if (!OptionalTypes[i].isEmpty()) {
			signature.append(OptionalTypes[i]);
			signature.append(UNICODE_STRING_SIMPLE(" "));
		}
		signature.append(Params[i]);
		if (i < (Params.size() - 1)) {
			signature.append(UNICODE_STRING_SIMPLE(","));
		}
	}
	signature.append( UNICODE_STRING_SIMPLE(")"));
	return signature;
}

mvceditor::QualifiedNameClass::QualifiedNameClass()
	: Comment() 
	, Namespaces() {

}

void mvceditor::QualifiedNameClass::GrabComment(SemanticValueClass& value) {
	if (value.Comment) {
		Comment.setTo(*value.Comment);
	}
}

void mvceditor::QualifiedNameClass::Clear() {
	Namespaces.clear();
}

void mvceditor::QualifiedNameClass::AddName(SemanticValueClass& value) {
	Namespaces.push_back(*value.Lexeme);
}

UnicodeString mvceditor::QualifiedNameClass::ToSignature() const {
	UnicodeString ret;
	for (size_t i = 0; i < Namespaces.size(); ++i) {
		ret.append(Namespaces[i]);
		if (i < (Namespaces.size() - 1)) {
			ret.append(UNICODE_STRING_SIMPLE("\\"));
		}
	}
	return ret;
}

mvceditor::VariableListClass::VariableListClass() 
	: Variables() {

}

void mvceditor::VariableListClass::Clear() {
	Variables.clear();
}

void mvceditor::VariableListClass::CreateExpression() {
	mvceditor::SymbolClass expr;
	expr.Type = mvceditor::SymbolClass::EXPRESSION;
	Variables.push_back(expr);
}

void mvceditor::VariableListClass::CreatePrimitive(SemanticValueClass& value) {
	mvceditor::SymbolClass constant;
	constant.Lexeme.setTo(*value.Lexeme);
	constant.Type = mvceditor::SymbolClass::PRIMITIVE;
	Variables.push_back(constant);
}