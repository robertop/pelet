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

void mvceditor::SemanticValueClass::Init() {
	Token = 0;
	Lexeme = NULL;
	Comment = NULL;
	Pos = 0;
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

mvceditor::ClassSymbolClass::ClassSymbolClass() 
	: ClassName()
	, Comment()
	, ExtendsFrom()
	, ImplementsList() 
	, IsAbstract(false)
	, IsFinal(false)
	, IsInterface(false) {

}

void mvceditor::ClassSymbolClass::GrabClassName(mvceditor::SemanticValueClass& value) {
	if (value.Lexeme) {
		ClassName = *value.Lexeme;
	}
}

void mvceditor::ClassSymbolClass::AppendToComment(mvceditor::SemanticValueClass& value) {
	if (value.Comment) {
		Comment.append(*value.Comment);
	}
}

void mvceditor::ClassSymbolClass::Clear() {
	ClassName.remove();
	Comment.remove();
	ExtendsFrom.Clear();
	ImplementsList.clear();
	IsAbstract = false;
	IsFinal = false;
	IsInterface = false;
}

UnicodeString mvceditor::ClassSymbolClass::ToSignature() const {
	UnicodeString sig;
	if (!IsInterface && !IsAbstract) {
		sig.append(UNICODE_STRING_SIMPLE("class "));
	}
	else if (!IsInterface && IsAbstract) {
		sig.append(UNICODE_STRING_SIMPLE("abstract class "));
	}
	else {
		sig.append(UNICODE_STRING_SIMPLE("interface "));
	}

	sig.append(ClassName);
	UnicodeString extends = ExtendsFrom.ToSignature();
	if (!extends.isEmpty()) {
		sig.append(UNICODE_STRING_SIMPLE(" "));
		sig.append(extends);
	}
	if (!ImplementsList.empty()) {
		sig.append(UNICODE_STRING_SIMPLE(" implements "));
		for (size_t i = 0; i < ImplementsList.size(); ++i) {
			sig.append(ImplementsList[i].ToSignature());
			if (i < (ImplementsList.size() - 1)) {
				sig.append(UNICODE_STRING_SIMPLE(" "));
			}
		}
	}
	return sig;
}

mvceditor::ClassMemberSymbolClass::ClassMemberSymbolClass() 
	: MemberName()
	, Comment()

	// PHP default access mode is TRUE
	, IsPublicMember(true)
	, IsProtectedMember(false)
	, IsPrivateMember(false)
	, IsStaticMember(false)
	, IsConstMember(false)
	, IsAbstractMember(false) 
	, IsFinalMember(false)
	, IsReturnReference(false) {

}

void mvceditor::ClassMemberSymbolClass::SetNameAndReturnReference(mvceditor::SemanticValueClass& nameValue, mvceditor::SemanticValueClass& referenceValue, mvceditor::SemanticValueClass& functionValue) {
	if (nameValue.Lexeme) {
		MemberName = *nameValue.Lexeme;
	}
	IsReturnReference = ('&' == referenceValue.Token);

	// a comment may be attached to the function keyword.
	// see php53lex() function
	if (functionValue.Comment) {
		Comment.append(*functionValue.Comment);
	}
}

void mvceditor::ClassMemberSymbolClass::SetAsConst(mvceditor::SemanticValueClass& nameValue, mvceditor::SemanticValueClass& commentValue) {
	IsPublicMember = true;
	IsProtectedMember = false;
	IsPrivateMember = false;
	IsStaticMember = true;
	IsConstMember = true;
	IsAbstractMember = false;
	IsFinalMember = false;
	IsReturnReference = false;
	if (nameValue.Lexeme) {
		MemberName = *nameValue.Lexeme;
	}

	// a comment may be attached to the const keyword.
	// see php53lex() function
	if (commentValue.Comment) {
		Comment.append(*commentValue.Comment);
	}
}

void mvceditor::ClassMemberSymbolClass::AppendToComment(SemanticValueClass& value) {
	if (value.Comment) {
		Comment.append(*value.Comment);
	}
}

void mvceditor::ClassMemberSymbolClass::SetAsPublic() {
	IsPublicMember = true;
	IsProtectedMember = false;
	IsPrivateMember = false;
}

void mvceditor::ClassMemberSymbolClass::SetAsProtected() {
	IsPublicMember = false;
	IsProtectedMember = true;
	IsPrivateMember = false;
}
void mvceditor::ClassMemberSymbolClass::SetAsPrivate() {
	IsPublicMember = false;
	IsProtectedMember = false;
	IsPrivateMember = true;
}

void mvceditor::ClassMemberSymbolClass::Clear() {
	MemberName.remove();
	Comment.remove();

	// PHP default access mode is TRUE
	IsPublicMember = true;
	IsProtectedMember = false;
	IsPrivateMember = false;
	IsStaticMember = false;
	IsConstMember = false;
	IsAbstractMember = false;
	IsFinalMember = false;
	IsReturnReference = false;
}

UnicodeString mvceditor::ClassMemberSymbolClass::ToMethodSignature(UnicodeString variablesSignature) const {
	UnicodeString sig;

	// methods cannot be const
	if (IsPublicMember) {
		sig.append(UNICODE_STRING_SIMPLE("public "));
	}
	if (IsProtectedMember) {
		sig.append(UNICODE_STRING_SIMPLE("protected "));
	}
	if (IsPrivateMember) {
		sig.append(UNICODE_STRING_SIMPLE("private "));
	}
	if (IsStaticMember) {
		sig.append(UNICODE_STRING_SIMPLE("static "));
	}
	if (IsAbstractMember) {
		sig.append(UNICODE_STRING_SIMPLE("abstract "));
	}
	if (IsFinalMember) {
		sig.append(UNICODE_STRING_SIMPLE("final "));
	}
	if (IsReturnReference) {
		sig.append(UNICODE_STRING_SIMPLE("function& "));
	}
	else {
		sig.append(UNICODE_STRING_SIMPLE("function "));
	}
	sig.append(MemberName);
	sig.append(variablesSignature);
	return sig;
}

mvceditor::QualifiedNameClass::QualifiedNameClass()
	: Comment()
	, Namespaces() {

}

void mvceditor::QualifiedNameClass::GrabNameAndComment(SemanticValueClass& value) {
	if (value.Comment) {
		Comment.setTo(*value.Comment);
	}
	AddName(value);
}

void mvceditor::QualifiedNameClass::Clear() {
	while (!Namespaces.empty()) {
		Namespaces.pop();
	}
}

void mvceditor::QualifiedNameClass::AddName(SemanticValueClass& value) {
	if (value.Lexeme) {
		Namespaces.push(*value.Lexeme);
	}
}

UnicodeString mvceditor::QualifiedNameClass::ToSignature() const {
	UnicodeString ret;

	// create a local copy so that we can pop() from it
	std::stack<UnicodeString> namespaces = Namespaces;
	while (!namespaces.empty()) {
		ret.append(namespaces.top());
		namespaces.pop();
		if (!namespaces.empty()) {
			ret.append(UNICODE_STRING_SIMPLE("\\"));
		}
	}
	return ret;
}

mvceditor::ParametersListClass::ParametersListClass()
	: Params()
	, OptionalTypes() {

}

void mvceditor::ParametersListClass::Create() {
	Params.push_back(UNICODE_STRING_SIMPLE(""));
	OptionalTypes.push_back(UNICODE_STRING_SIMPLE(""));
}

void mvceditor::ParametersListClass::CreateWithOptionalType(mvceditor::SemanticValueClass& typeValue) {
	Params.push_back(UNICODE_STRING_SIMPLE(""));
	if (typeValue.Lexeme) {
		OptionalTypes.push_back(*typeValue.Lexeme);
	}
	else {
		OptionalTypes.push_back(UNICODE_STRING_SIMPLE(""));
	}
}

void mvceditor::ParametersListClass::CreateWithOptionalType(const UnicodeString& className) {
	Params.push_back(UNICODE_STRING_SIMPLE(""));
	if (!className.isEmpty()) {
		OptionalTypes.push_back(className);
	}
	else {
		OptionalTypes.push_back(UNICODE_STRING_SIMPLE(""));
	}
}


void mvceditor::ParametersListClass::Clear() {
	Params.clear();
	OptionalTypes.clear();
}

void mvceditor::ParametersListClass::SetName(SemanticValueClass& value, bool isReference) {
	if (value.Lexeme) {
		Params.back().setTo(*value.Lexeme);
		if (isReference) {
			Params.back().insert(0, UNICODE_STRING_SIMPLE("&"));
		}
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

mvceditor::ExpressionClass::ExpressionClass()
	: Name()
	, Lexeme()
	, Comment()
	, CallArguments()
	, ChainList()
	, Type(SCALAR) {
}

void mvceditor::ExpressionClass::Clear() {
	Name.Clear();
	Lexeme.remove();
	Comment.remove();
	CallArguments.clear();
	ChainList.clear();
	Type = mvceditor::ExpressionClass::SCALAR;
}

void mvceditor::ExpressionClass::StartChainFromVariable(mvceditor::SemanticValueClass& objectValue) {
	Clear();
	Type = mvceditor::ExpressionClass::VARIABLE;
	if (objectValue.Lexeme) {
		Lexeme = *objectValue.Lexeme;
	}
	if (objectValue.Comment) {
		Comment = *objectValue.Comment;
	}
}

void mvceditor::ExpressionClass::StartChainFromFunctionCall(const mvceditor::ExpressionClass& functionCallExpression) {
	Clear();
	Type = mvceditor::ExpressionClass::FUNCTION_CALL;
	Name = functionCallExpression.Name;
}

void mvceditor::ExpressionClass::AppendToChain(mvceditor::SemanticValueClass& operatorValue, mvceditor::SemanticValueClass& propertyValue, bool isMethod) {
	UnicodeString objectCall;
	if (operatorValue.Lexeme) {
		objectCall.append(*operatorValue.Lexeme);
	}
	if (propertyValue.Lexeme) {
		objectCall.append(*propertyValue.Lexeme);
	}
	if (isMethod) {
		objectCall.append(UNICODE_STRING_SIMPLE("()"));
	}
	ChainList.push_back(objectCall);
}

mvceditor::SymbolClass::SymbolClass() 
	: Lexeme()
	, Comment() 
	, ChainList()
	, Type(PRIMITIVE)
	, Pos(0)
	, IsStatic(false) {
}

void mvceditor::SymbolClass::Copy(const mvceditor::SymbolClass& src) {
	Lexeme = src.Lexeme;
	Comment = src.Comment;
	ChainList = src.ChainList;
	Type = src.Type;
	Pos = src.Pos;
	IsStatic = src.IsStatic;	
}

void mvceditor::SymbolClass::AppendToComment(mvceditor::SemanticValueClass& value) {
	if (value.Comment) {
		Comment.append(*value.Comment);
	}
}

void mvceditor::SymbolClass::SetToPrimitive() {
	Type = mvceditor::SymbolClass::PRIMITIVE;
}

void mvceditor::SymbolClass::SetToObject() {
	Type = mvceditor::SymbolClass::OBJECT;
}

void mvceditor::SymbolClass::SetToArray() {
	Type = mvceditor::SymbolClass::ARRAY;
}

void mvceditor::SymbolClass::SetToUnknown() {
	Type = mvceditor::SymbolClass::UNKNOWN;
}

void mvceditor::SymbolClass::Clear() {
	Lexeme.remove();
	Comment.remove();
	ChainList.clear();
	Type = mvceditor::SymbolClass::PRIMITIVE;
	Pos = 0;
	IsStatic = false;
}

mvceditor::ObserverQuadClass::ObserverQuadClass(ClassObserverClass* classObserver, ClassMemberObserverClass* memberObserver,
				  FunctionObserverClass* functionObserver, VariableObserverClass* variableObserver)
	: Class(classObserver)
	, Member(memberObserver) 
	, Function(functionObserver) 
	, Variable(variableObserver)
	, CurrentClass()
	, CurrentMember()
	, CurrentQualifiedName()
	, CurrentParametersList()
	, CurrentFunctionCallExpression() 
	, CurrentExpression()
	, ExpressionVariables() {
}

void mvceditor::ObserverQuadClass::ClassStart(SemanticValueClass& commentValue, bool isAbstract, 
											  bool isFinal, bool isInterface) {
	CurrentClass.Clear();

	// comment is attached to the first modifier
	// see php53lex() function
	CurrentClass.AppendToComment(commentValue);
	CurrentClass.IsAbstract = isAbstract;
	CurrentClass.IsFinal = isFinal;
	CurrentClass.IsInterface = isInterface;
}


void mvceditor::ObserverQuadClass::ClassSetName(SemanticValueClass& nameValue) {
	CurrentClass.GrabClassName(nameValue);
}

void mvceditor::ObserverQuadClass::ClassSetExtends() {
	CurrentClass.ExtendsFrom = CurrentQualifiedName;
}

void mvceditor::ObserverQuadClass::ClassAddToImplements() {
	CurrentClass.ImplementsList.push_back(CurrentQualifiedName);
	CurrentQualifiedName.Clear();
}


void mvceditor::ObserverQuadClass::ClassFound() {
	if (Class) {
		Class->ClassFound(CurrentClass.ClassName, CurrentClass.ToSignature(), CurrentClass.Comment);
	}
	CurrentMember.Clear();
}

void mvceditor::ObserverQuadClass::ClassEnd() {
	CurrentClass.Clear();
}

void mvceditor::ObserverQuadClass::ClassMemberFound(bool isProperty) {
	mvceditor::TokenClass::TokenIds visibility = mvceditor::TokenClass::PUBLIC;
	if (CurrentMember.IsProtectedMember) {
		visibility = mvceditor::TokenClass::PROTECTED;
	}
	else if (CurrentMember.IsPrivateMember) {
		visibility = mvceditor::TokenClass::PRIVATE;
	}
	UnicodeString className = CurrentClass.ClassName;
	UnicodeString propName = CurrentMember.MemberName;
	UnicodeString comment = CurrentMember.Comment;
	bool isConst = CurrentMember.IsConstMember;
	bool isStatic = CurrentMember.IsStaticMember;

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
		UnicodeString signature = CurrentMember.ToMethodSignature(CurrentParametersList.ToSignature());
		Member->MethodFound(className, propName, signature, propType, comment, visibility, isStatic); 
	}
}

void mvceditor::ObserverQuadClass::DefineFound(const mvceditor::ExpressionClass& nameSymbol, const mvceditor::ExpressionClass& valueSymbol, const UnicodeString& comment) {
	if (Class) {
		Class->DefineDeclarationFound(nameSymbol.Lexeme, valueSymbol.Lexeme, comment);
	}
}

void mvceditor::ObserverQuadClass::FunctionStart(mvceditor::SemanticValueClass& nameValue, mvceditor::SemanticValueClass& referenceValue, mvceditor::SemanticValueClass& commentValue) {
	CurrentMember.Clear();
	CurrentMember.SetNameAndReturnReference(nameValue, referenceValue, commentValue);
	
	// the keyword 'function' will always be attached to the comment
	// see php53lex() function
	CurrentMember.IsReturnReference = ('&' == referenceValue.Token);
	CurrentParametersList.Clear();
}

void mvceditor::ObserverQuadClass::FunctionFound() {
	UnicodeString functionName = CurrentMember.MemberName;
	UnicodeString signature = CurrentMember.ToMethodSignature(CurrentParametersList.ToSignature());

	// remove the 'public' we are re-using the ClassMember symbol which always assumes a
	// method signature
	// didnt feel like writing a whole other class for just for functions when functions and
	// methods are almost identical
	int32_t index = signature.indexOf(UNICODE_STRING_SIMPLE("function"));
	signature.setTo(signature, index);
	UnicodeString comment = CurrentMember.Comment;
	UnicodeString returnType = ReturnTypeFromPhpDocComment(comment, false);
	if (Function) {
		Function->FunctionFound(functionName, signature, returnType, comment);
	}
}

void mvceditor::ObserverQuadClass::CreateParameterWithOptionalClassName() {
	CurrentParametersList.CreateWithOptionalType(CurrentQualifiedName.ToSignature());
}

void mvceditor::ObserverQuadClass::FunctionEnd() {
	CurrentMember.Clear();
	CurrentParametersList.Clear();
}

void mvceditor::ObserverQuadClass::VariableFound() {
	if (Variable) {
		mvceditor::SymbolClass symbol;
		if (mvceditor::ExpressionClass::ARRAY == CurrentExpression.Type) {
			symbol.SetToArray();
		}
		else if (mvceditor::ExpressionClass::FUNCTION_CALL == CurrentExpression.Type) {
			symbol.SetToObject();
		}
		else if (mvceditor::ExpressionClass::NEW_CALL == CurrentExpression.Type) {
			symbol.SetToObject();
		}
		else if (mvceditor::ExpressionClass::SCALAR == CurrentExpression.Type) {
			symbol.SetToPrimitive();
		}
		else if (mvceditor::ExpressionClass::UNKNOWN == CurrentExpression.Type) {
			symbol.SetToUnknown();
		}
		else if (mvceditor::ExpressionClass::VARIABLE == CurrentExpression.Type) {
			symbol.SetToObject();
		}
		symbol.ChainList = CurrentExpression.ChainList;
		symbol.Comment = CurrentExpression.Comment;
		symbol.IsStatic = false;
		symbol.Lexeme = CurrentExpression.Lexeme;
		//symbol.Pos = CurrentExpression.Pos;
		UnicodeString className = CurrentClass.ClassName;
		UnicodeString functionName = CurrentMember.MemberName;
		UnicodeString comment = symbol.Comment;
	
		Variable->VariableFound(className, functionName, symbol, comment);
	}
}

void mvceditor::ObserverQuadClass::ExpressionScalar(mvceditor::SemanticValueClass& value) {
	CurrentExpression.Clear();
	CurrentExpression.Type = mvceditor::ExpressionClass::SCALAR;
	if (value.Lexeme) {
		CurrentExpression.Lexeme = *value.Lexeme;
	}
}

void mvceditor::ObserverQuadClass::ExpressionArray(mvceditor::SemanticValueClass& value) {
	CurrentExpression.Clear();
	CurrentExpression.Type = mvceditor::ExpressionClass::ARRAY;
	if (value.Lexeme) {
		CurrentExpression.Lexeme = *value.Lexeme;
	}
}

void mvceditor::ObserverQuadClass::ExpressionVariable(mvceditor::SemanticValueClass& value) {
	CurrentExpression.Clear();
	CurrentExpression.Type = mvceditor::ExpressionClass::VARIABLE;
	if (value.Lexeme) {
		CurrentExpression.Lexeme = *value.Lexeme;
	}
	if (value.Comment) {
		CurrentExpression.Comment = *value.Comment;
	}
}

void mvceditor::ObserverQuadClass::ExpressionNewCall() {
	CurrentExpression.Clear();
	CurrentExpression.Type = mvceditor::ExpressionClass::NEW_CALL;
	CurrentExpression.Name = CurrentQualifiedName;
}

void mvceditor::ObserverQuadClass::ExpressionUnknown(mvceditor::SemanticValueClass& value) {
	CurrentExpression.Clear();
	CurrentExpression.Type = mvceditor::ExpressionClass::UNKNOWN;
	if (value.Lexeme) {
		CurrentExpression.Lexeme = *value.Lexeme;
	}
	if (value.Comment) {
		CurrentExpression.Comment = *value.Comment;
	}
}


void mvceditor::ObserverQuadClass::FunctionCallStart() {
	CurrentFunctionCallExpression.Clear();
	CurrentFunctionCallExpression.Name = CurrentQualifiedName;
	CurrentFunctionCallExpression.Type = mvceditor::ExpressionClass::FUNCTION_CALL;
}

void mvceditor::ObserverQuadClass::FunctionCallEnd() {
	if (CurrentFunctionCallExpression.CallArguments.size() == (size_t)2) {
		if (CurrentFunctionCallExpression.Name.ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
			DefineFound(CurrentFunctionCallExpression.CallArguments[0], 
				CurrentFunctionCallExpression.CallArguments[1], 
				CurrentFunctionCallExpression.Name.Comment);
		}
	}
}

void mvceditor::ObserverQuadClass::ExpressionAsCallArgument() {
	CurrentFunctionCallExpression.CallArguments.push_back(CurrentExpression);
}

void mvceditor::ObserverQuadClass::CurrentExpressionAsFunctionCall() {
	CurrentExpression.Clear();
	CurrentExpression.Type = mvceditor::ExpressionClass::VARIABLE;
	CurrentExpression.Name = CurrentFunctionCallExpression.Name;
	CurrentExpression.Comment = CurrentFunctionCallExpression.Comment;
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

*/