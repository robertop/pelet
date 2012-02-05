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
#include <unicode/ustring.h>

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
		sig.append(UNICODE_STRING_SIMPLE(" extends "));
		sig.append(extends);
	}
	if (!ImplementsList.empty()) {
		if (IsInterface) {
			sig.append(UNICODE_STRING_SIMPLE(" extends "));
		}
		else {
			sig.append(UNICODE_STRING_SIMPLE(" implements "));
		}
		for (size_t i = 0; i < ImplementsList.size(); ++i) {
			sig.append(ImplementsList[i].ToSignature());
			if (i < (ImplementsList.size() - 1)) {
				sig.append(UNICODE_STRING_SIMPLE(", "));
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
			signature.append(UNICODE_STRING_SIMPLE(", "));
		}
	}
	signature.append(UNICODE_STRING_SIMPLE(")"));
	return signature;
}

size_t mvceditor::ParametersListClass::GetCount() const {
	return Params.size();
}

void mvceditor::ParametersListClass::Param(size_t index, UnicodeString& param, UnicodeString& optionalType) const {
	if (index < Params.size()) {
		param.setTo(Params[index]);
	}
	if (index < OptionalTypes.size()) {
		optionalType.setTo(OptionalTypes[index]);
	}
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
	, PhpDocType()
	, ChainList()
	, Type(PRIMITIVE) {
}

void mvceditor::SymbolClass::Copy(const mvceditor::SymbolClass& src) {
	Lexeme = src.Lexeme;
	Comment = src.Comment;
	PhpDocType = src.PhpDocType;
	ChainList = src.ChainList;
	Type = src.Type;
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
	PhpDocType.remove();
	ChainList.clear();
	Type = mvceditor::SymbolClass::PRIMITIVE;
}

void mvceditor::SymbolClass::FromExpression(const mvceditor::ExpressionClass& expression) {
	if (mvceditor::ExpressionClass::ARRAY == expression.Type) {
		SetToArray();
	}
	else if (mvceditor::ExpressionClass::FUNCTION_CALL == expression.Type) {
		SetToObject();
	}
	else if (mvceditor::ExpressionClass::NEW_CALL == expression.Type) {
		SetToObject();
	}
	else if (mvceditor::ExpressionClass::SCALAR == expression.Type) {
		SetToPrimitive();
	}
	else if (mvceditor::ExpressionClass::UNKNOWN == expression.Type) {
		SetToUnknown();
	}
	else if (mvceditor::ExpressionClass::VARIABLE == expression.Type) {
		SetToObject();
	}
	Comment = expression.Comment;
	Lexeme = expression.Lexeme;
	ChainList = expression.ChainList;
	if (expression.Lexeme.isEmpty() && expression.ChainList.empty()) {
		
		 // when a static property; the "namespace_name" parser rule 
		 // is triggered
		Lexeme = expression.Name.ToSignature();
		ChainList.insert(ChainList.begin(), Lexeme);
	}
}

mvceditor::ObserverQuadClass::ObserverQuadClass(ClassObserverClass* classObserver, ClassMemberObserverClass* memberObserver,
				  FunctionObserverClass* functionObserver, VariableObserverClass* variableObserver, 
				  ExpressionObserverClass* expressionObserver)
	: CurrentClass()
	, CurrentMember()
	, CurrentQualifiedName()
	, CurrentParametersList()
	, CurrentFunctionCallExpression() 
	, Class(classObserver)
	, Member(memberObserver) 
	, Function(functionObserver) 
	, Variable(variableObserver)
	, ExpressionObserver(expressionObserver)
	, CurrentExpression()
	, ExpressionVariables()
	, AllValues()
	, DoCollectExpressions(true) {
}

mvceditor::ObserverQuadClass::~ObserverQuadClass() {
	SemanticValueFree();
}

void mvceditor::ObserverQuadClass::ClassStart(SemanticValueClass& commentValue, bool isAbstract, 
											  bool isFinal, bool isInterface) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentClass.Clear();

	// comment is attached to the first modifier
	// see php53lex() function
	CurrentClass.AppendToComment(commentValue);
	CurrentClass.IsAbstract = isAbstract;
	CurrentClass.IsFinal = isFinal;
	CurrentClass.IsInterface = isInterface;
}

void mvceditor::ObserverQuadClass::ClassSetName(SemanticValueClass& nameValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentClass.GrabClassName(nameValue);
}

void mvceditor::ObserverQuadClass::ClassSetExtends() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentClass.ExtendsFrom = CurrentQualifiedName;
}

void mvceditor::ObserverQuadClass::ClassAddToImplements() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentClass.ImplementsList.push_back(CurrentQualifiedName);
	CurrentQualifiedName.Clear();
}


void mvceditor::ObserverQuadClass::ClassFound() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Class) {
		Class->ClassFound(CurrentClass.ClassName, CurrentClass.ToSignature(), CurrentClass.Comment);
	}
	if (Member) {
		NotifyMagicMethodsAndProperties(CurrentClass.Comment);
	}
	CurrentMember.Clear();
}

void mvceditor::ObserverQuadClass::ClassEnd() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentClass.Clear();
}

void mvceditor::ObserverQuadClass::ClassMemberFound(bool isProperty) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
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

	if (Member && isProperty) {
		UnicodeString propType = ReturnTypeFromPhpDocComment(comment, true);
		Member->PropertyFound(className, propName, propType, comment, visibility, isConst, isStatic);
	}
	else if (Member && !isProperty) {
		UnicodeString propType = ReturnTypeFromPhpDocComment(comment, false);
		UnicodeString signature = CurrentMember.ToMethodSignature(CurrentParametersList.ToSignature());
		Member->MethodFound(className, propName, signature, propType, comment, visibility, isStatic); 
	}
	if (!isProperty) {
		NotifyVariablesFromParameterList();
	}

	// when encountering methods; 'skip' the method body if at all possible
	if (!isProperty) {
		DoCollectExpressions = Variable || ExpressionObserver;
	}
	else {
		DoCollectExpressions = true;
	}
}

void mvceditor::ObserverQuadClass::ClassMethodEnd(mvceditor::SemanticValueClass& value) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Member) {
		Member->MethodEnd(CurrentClass.ClassName, CurrentMember.MemberName, value.Pos);
	}
	CurrentMember.Clear();
	CurrentParametersList.Clear();
	DoCollectExpressions = true;
}

void mvceditor::ObserverQuadClass::DefineFound(const mvceditor::ExpressionClass& nameSymbol, const mvceditor::ExpressionClass& valueSymbol, const UnicodeString& comment) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Class) {
		Class->DefineDeclarationFound(nameSymbol.Lexeme, valueSymbol.Lexeme, comment);
	}
}

void mvceditor::ObserverQuadClass::FunctionStart(mvceditor::SemanticValueClass& nameValue, mvceditor::SemanticValueClass& referenceValue, mvceditor::SemanticValueClass& commentValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.Clear();
	CurrentMember.SetNameAndReturnReference(nameValue, referenceValue, commentValue);
	
	// the keyword 'function' will always be attached to the comment
	// see php53lex() function
	CurrentMember.IsReturnReference = ('&' == referenceValue.Token);
	CurrentParametersList.Clear();
}

void mvceditor::ObserverQuadClass::FunctionFound() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
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
	NotifyVariablesFromParameterList();
	DoCollectExpressions = Variable || ExpressionObserver;
}

void mvceditor::ObserverQuadClass::CreateParameterWithOptionalClassName() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentParametersList.CreateWithOptionalType(CurrentQualifiedName.ToSignature());
}

void mvceditor::ObserverQuadClass::FunctionEnd(mvceditor::SemanticValueClass& value) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Function) {
		Function->FunctionEnd(CurrentMember.MemberName, value.Pos);
	}
	CurrentMember.Clear();
	CurrentParametersList.Clear();
	DoCollectExpressions = true;
}

void mvceditor::ObserverQuadClass::AssignmentExpressionFound() {
	if (!DoCollectExpressions) {
		return;
	}
	if (ExpressionVariables.size() < (size_t)2) {
		return;
	}
	mvceditor::SymbolClass symbol;

	// the first variable is the name of the variable
	// the second variable has the value
	mvceditor::ExpressionClass dest = ExpressionVariables[0];
	mvceditor::ExpressionClass src = ExpressionVariables[1];
	symbol.Comment = dest.Comment;
	symbol.Lexeme = dest.Lexeme;			
	symbol.ChainList.insert(symbol.ChainList.end(), src.ChainList.begin(), src.ChainList.end());
	if (mvceditor::ExpressionClass::ARRAY == src.Type) {
		symbol.Type = mvceditor::SymbolClass::ARRAY;
	}
	else if (mvceditor::ExpressionClass::FUNCTION_CALL == src.Type) {
		symbol.Type = mvceditor::SymbolClass::OBJECT;
	}
	else if (mvceditor::ExpressionClass::NEW_CALL == src.Type) {
		symbol.Type = mvceditor::SymbolClass::OBJECT;
	}
	else if (mvceditor::ExpressionClass::SCALAR == src.Type) {
		symbol.Type = mvceditor::SymbolClass::PRIMITIVE;
	}
	else if (mvceditor::ExpressionClass::UNKNOWN == src.Type) {
		symbol.Type = mvceditor::SymbolClass::UNKNOWN;
	}
	else if (mvceditor::ExpressionClass::VARIABLE == src.Type) {
		symbol.Type = mvceditor::SymbolClass::OBJECT;
	}
	UnicodeString className = CurrentClass.ClassName;
	UnicodeString functionName = CurrentMember.MemberName;
	UnicodeString comment = symbol.Comment;

	// no need to announce class members; they are already taken care of 
	// by the ClassMember observer
	if (Variable && symbol.Lexeme.caseCompare(UNICODE_STRING_SIMPLE("$this"), 0) != 0) {
		Variable->VariableFound(className, functionName, symbol, comment);
	}
	ExpressionVariables.clear();
}

void mvceditor::ObserverQuadClass::ExceptionCatchFound(mvceditor::SemanticValueClass& variableValue) {
	if (!DoCollectExpressions) {
		return;
	}
	CurrentExpression.Name = CurrentQualifiedName;
	if (variableValue.Lexeme) {
		CurrentExpression.Lexeme = *variableValue.Lexeme;
	}
	mvceditor::SymbolClass symbol;
	symbol.SetToObject();
	symbol.Lexeme = CurrentExpression.Lexeme;
	symbol.Comment = CurrentExpression.Comment;
	UnicodeString name = CurrentExpression.Name.ToSignature();
	if (!name.isEmpty()) {
		symbol.ChainList.push_back(name);
	}
	if (Variable) {
		Variable->VariableFound(CurrentClass.ClassName, CurrentMember.MemberName, symbol, symbol.Comment);
	}
}

void mvceditor::ObserverQuadClass::GlobalVariableFound(mvceditor::SemanticValueClass& variableValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (Variable && variableValue.Lexeme) {
		CurrentExpression.Lexeme = *variableValue.Lexeme;
		mvceditor::SymbolClass symbol;
		symbol.SetToObject();
		symbol.Lexeme = CurrentExpression.Lexeme;
		symbol.Comment = CurrentExpression.Comment;
		Variable->VariableFound(CurrentClass.ClassName, CurrentMember.MemberName, symbol, symbol.Comment);
	}
}

void mvceditor::ObserverQuadClass::ForeachVariableFound() {
	if (!DoCollectExpressions) {
		return;
	}
	if (Variable && !ExpressionVariables.empty()) {
		mvceditor::ExpressionClass expr = ExpressionVariables.back();
		mvceditor::SymbolClass symbol;
		symbol.SetToObject();
		symbol.Lexeme = expr.Lexeme;
		symbol.Comment = expr.Comment;
		Variable->VariableFound(CurrentClass.ClassName, CurrentMember.MemberName, symbol, symbol.Comment);
	}
}

void mvceditor::ObserverQuadClass::StaticVariableFound(mvceditor::SemanticValueClass& variableValue) {
	if (!DoCollectExpressions) {
		return;
	}
	if (Variable && variableValue.Lexeme) {
		CurrentExpression.Lexeme = *variableValue.Lexeme;
		mvceditor::SymbolClass symbol;
		symbol.SetToObject();
		symbol.Lexeme = CurrentExpression.Lexeme;
		symbol.Comment = CurrentExpression.Comment;
		Variable->VariableFound(CurrentClass.ClassName, CurrentMember.MemberName, symbol, symbol.Comment);
	}
}

void mvceditor::ObserverQuadClass::ExpressionPushNewScalar(mvceditor::SemanticValueClass& value) {
	if (!DoCollectExpressions) {
		return;
	}
	mvceditor::ExpressionClass expr;
	expr.Type = mvceditor::ExpressionClass::SCALAR;
	if (value.Lexeme) {
		expr.Lexeme = *value.Lexeme;
		ExpressionVariables.push_back(expr);
	}
}

void mvceditor::ObserverQuadClass::ExpressionPushNewArray(mvceditor::SemanticValueClass& value) {
	if (!DoCollectExpressions) {
		return;
	}
	mvceditor::ExpressionClass expr;
	CurrentExpression.Type = mvceditor::ExpressionClass::ARRAY;
	if (value.Lexeme) {
		expr.Lexeme = *value.Lexeme;
		ExpressionVariables.push_back(expr);
	}
}

void mvceditor::ObserverQuadClass::ExpressionPushNewVariable(mvceditor::SemanticValueClass& value) {
	if (!DoCollectExpressions) {
		return;
	}
	mvceditor::ExpressionClass expr;
	expr.Type = mvceditor::ExpressionClass::VARIABLE;
	if (value.Lexeme) {
		expr.Lexeme = *value.Lexeme;
	}
	if (value.Comment) {
		expr.Comment = *value.Comment;
	}
	UnicodeString name = expr.Lexeme;
	if (!name.isEmpty()) {
		expr.ChainList.push_back(name);
	}
	ExpressionVariables.push_back(expr);
}

void mvceditor::ObserverQuadClass::ExpressionPushNewInstanceCall() {
	if (!DoCollectExpressions) {
		return;
	}
	mvceditor::ExpressionClass expr;
	expr.Type = mvceditor::ExpressionClass::NEW_CALL;
	expr.Name = CurrentQualifiedName;
	UnicodeString name = expr.Name.ToSignature();
	if (!name.isEmpty()) {
		expr.ChainList.push_back(name);
	}
	ExpressionVariables.push_back(expr);
}

void mvceditor::ObserverQuadClass::ExpressionPushNewUnknown(mvceditor::SemanticValueClass& value) {
	if (!DoCollectExpressions) {
		return;
	}
	mvceditor::ExpressionClass expr;
	expr.Type = mvceditor::ExpressionClass::UNKNOWN;
	if (value.Lexeme) {
		expr.Lexeme = *value.Lexeme;
	}
	if (value.Comment) {
		expr.Comment = *value.Comment;
	}
	UnicodeString name = CurrentExpression.Lexeme;
	if (!name.isEmpty()) {
		expr.ChainList.push_back(name);
	}
	ExpressionVariables.push_back(expr);
}

void mvceditor::ObserverQuadClass::CurrentExpressionPushAsVariable(mvceditor::SemanticValueClass& value) {
	if (!DoCollectExpressions) {
		return;
	}
	mvceditor::ExpressionClass expr;
	expr.Type = mvceditor::ExpressionClass::VARIABLE;
	if (value.Lexeme) {
		expr.Lexeme = *value.Lexeme;
	}
	if (value.Comment) {
		expr.Comment = *value.Comment;
	}
	UnicodeString name = expr.Lexeme;
	if (!name.isEmpty()) {
		expr.ChainList.push_back(name);
	}
	ExpressionVariables.push_back(expr);
}

void mvceditor::ObserverQuadClass::CurrentExpressionAppendToChain(SemanticValueClass& operatorValue, SemanticValueClass& propertyValue, bool isMethod) {
	if (!DoCollectExpressions) {
		return;
	}
	if (!ExpressionVariables.empty()) {
		ExpressionVariables.back().AppendToChain(operatorValue, propertyValue, isMethod);
	}
}

void mvceditor::ObserverQuadClass::FunctionCallStart() {
	if (!Class && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentFunctionCallExpression.Clear();
	CurrentFunctionCallExpression.Name = CurrentQualifiedName;
	CurrentFunctionCallExpression.Type = mvceditor::ExpressionClass::FUNCTION_CALL;
}

void mvceditor::ObserverQuadClass::FunctionCallEnd() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (CurrentFunctionCallExpression.CallArguments.size() == (size_t)2) {
		if (CurrentFunctionCallExpression.Name.ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
			DefineFound(CurrentFunctionCallExpression.CallArguments[0], 
				CurrentFunctionCallExpression.CallArguments[1], 
				CurrentFunctionCallExpression.Name.Comment);
		}
	}
}

void mvceditor::ObserverQuadClass::ExpressionAsCallArgument() {
	if (!DoCollectExpressions) {
		return;
	}
	if (!ExpressionVariables.empty()) {
		CurrentFunctionCallExpression.CallArguments.push_back(ExpressionVariables.back());
		
		// remove from ExpressionVariables we wont place function arguments 
		// as "regular" variables because we dont want function arguments to
		// trigger VariableFound notifications.
		// for example the expression
		//
		// $newUser = fix($user)
		//
		// should generate only 1 VariableFound notification for the $newUser variable
		ExpressionVariables.pop_back();
	}
}

void mvceditor::ObserverQuadClass::CurrentExpressionPushAsFunctionCall() {
	if (!DoCollectExpressions) {
		return;
	}
	mvceditor::ExpressionClass expr;
	expr.Type = mvceditor::ExpressionClass::VARIABLE;
	expr.Name = CurrentFunctionCallExpression.Name;
	expr.Comment = CurrentFunctionCallExpression.Comment;

	UnicodeString name = expr.Name.ToSignature();
	if (!name.isEmpty()) {
		expr.ChainList.push_back(name + UNICODE_STRING_SIMPLE("()"));
		ExpressionVariables.push_back(expr);
	}
}

void mvceditor::ObserverQuadClass::CurrentExpressionAsStaticMember(mvceditor::SemanticValueClass& scopeOperatorValue) {
	if (!DoCollectExpressions) {
		return;
	}
	if (ExpressionObserver && !ExpressionVariables.empty()) {

		// static member is the variable in CurrentExpression
		// the class name itself is in the QualifiedName
		// this is called right after the variable is parsed, so
		// ChainList will have the variable name as its first element
		mvceditor::ExpressionClass& expr = ExpressionVariables.back();
		if (!expr.ChainList.empty() && scopeOperatorValue.Lexeme) {
			expr.ChainList[0] = *scopeOperatorValue.Lexeme + expr.Lexeme;
			expr.ChainList.insert(expr.ChainList.begin(), CurrentQualifiedName.ToSignature());
			expr.Lexeme = CurrentQualifiedName.ToSignature(); 
			expr.Name = CurrentQualifiedName;
		}
	}
}

void mvceditor::ObserverQuadClass::CurrentExpressionPushAsClassConstant(mvceditor::SemanticValueClass& scopeOperatorValue, 
										 mvceditor::SemanticValueClass& constantNameValue) {
	if (!DoCollectExpressions) {
		return;
	}
	if (scopeOperatorValue.Lexeme && constantNameValue.Lexeme) {
		mvceditor::ExpressionClass expr;
		expr.Name = CurrentQualifiedName;
		expr.Lexeme = CurrentQualifiedName.ToSignature();
		expr.ChainList.push_back(CurrentQualifiedName.ToSignature());
		expr.ChainList.push_back(*scopeOperatorValue.Lexeme + *constantNameValue.Lexeme);
		ExpressionVariables.push_back(expr);
	}
}

void mvceditor::ObserverQuadClass::ClearExpressions() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentExpression.Clear();
	CurrentFunctionCallExpression.Clear();
	ExpressionVariables.clear();
	CurrentQualifiedName.Clear();
}

void mvceditor::ObserverQuadClass::NotifyVariablesFromParameterList() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	size_t paramCount = CurrentParametersList.GetCount();
	if (paramCount > 0 && Variable) {
		UnicodeString paramName,
			paramType;
		mvceditor::SymbolClass symbol;
		UnicodeString comment; // no comment it is lost in the variables
		for (size_t i = 0; i < paramCount; ++i) {
			CurrentParametersList.Param(i, paramName, paramType);
			if (!paramType.isEmpty()) {
				symbol.ChainList.push_back(paramType);
				symbol.Type = mvceditor::SymbolClass::OBJECT;
			}
			symbol.Lexeme = paramName;
			Variable->VariableFound(CurrentClass.ClassName, CurrentMember.MemberName, symbol, comment);
		}
	}

	// remove any expressions that were created by the static scalar rules
	// ie default argument values
	ClearExpressions();
}

void mvceditor::ObserverQuadClass::ExpressionFound() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (!ExpressionObserver) {
		return;
	}
	mvceditor::ExpressionClass expr;
	if (!ExpressionVariables.empty()) {

		// ExpressionVariables is filled when a variable is parsed
		expr = ExpressionVariables[0];
		expr.Name = CurrentQualifiedName;
		ExpressionObserver->ExpressionFound(expr);
	}
	else {

		// CurrentQualifiedName is parsed when the expression is just a class name
		// for example, the statement "MyClass;";
		expr.Name = CurrentQualifiedName;
		ExpressionObserver->ExpressionFound(expr);
	}
}

void mvceditor::ObserverQuadClass::NotifyLocalVariableTypeHint(const UnicodeString& comment) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	NotifyLocalVariableFromPhpDoc(comment);
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

/**
 * sets either varName or varType depending on whether text contents are a variable name or not.
 */
static void FillNameOrType(UChar* text, UnicodeString& varName, UnicodeString& varType) {
	if (text && '$' == text[0]) {
		varName.setTo(text);
	}
	else if (text) {
		varType.setTo(text);
	}
}

void mvceditor::ObserverQuadClass::NotifyLocalVariableFromPhpDoc(const UnicodeString& phpDocComment) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (!Variable) {
		return;
	}
	if (phpDocComment.isEmpty()) {
		return;
	}

	// assuming that PHPDoc for local variables look like this
	// /* @var $dog Dog */
	// people got used to doing it this way
	// http://stackoverflow.com/questions/4329288/code-hinting-completion-for-array-of-objects-in-zend-studio-or-any-other-ecli
	// there could be multiple hints in a single comment

	// not using getTerminatedBuffer() because that method triggers valgrind warnings
	UChar* buf = new UChar[phpDocComment.length() + 1];
	u_memmove(buf, phpDocComment.getBuffer(), phpDocComment.length());
	buf[phpDocComment.length()] = '\0';
	
	UChar* saveState = 0;
	
	// not using getTerminatedBuffer() because that method triggers valgrind warnings
	UnicodeString delimiters = UNICODE_STRING_SIMPLE(" \t\v\f\r\n");
	UChar* delimsBuffer = new UChar[delimiters.length() + 1];
	u_memmove(delimsBuffer, delimiters.getBuffer(), delimiters.length());
	delimsBuffer[delimiters.length()] = '\0';
	
	UChar* next = u_strtok_r(buf, delimsBuffer, &saveState);
	UnicodeString varName;
	UnicodeString varType;
	mvceditor::SymbolClass symbol;
	while (next) {
		if (UNICODE_STRING_SIMPLE("@var").caseCompare(next, 0) == 0) {
			symbol.Clear();
			symbol.SetToObject();

			// example line: @var string $nameString a string version of a name
			// will be lenient and allow the reverse var then type
			// @var $nameString string 
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			FillNameOrType(next, symbol.Lexeme, symbol.PhpDocType);
			if (next) {
				next = u_strtok_r(NULL, delimsBuffer, &saveState);
				FillNameOrType(next, symbol.Lexeme, symbol.PhpDocType);
				if (!symbol.Lexeme.isEmpty() && !symbol.PhpDocType.isEmpty()) {					
					Variable->VariableFound(CurrentClass.ClassName, CurrentMember.MemberName, symbol, phpDocComment);
					next = u_strtok_r(NULL, delimsBuffer, &saveState);
				}
			}
			if (!next) {
				break;
			}
		}
		else {
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
		}
	}
	delete[] buf;
	delete[] delimsBuffer;
}

void mvceditor::ObserverQuadClass::NotifyMagicMethodsAndProperties(const UnicodeString& phpDocComment) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (!Member) {
		return;
	}
	if (phpDocComment.isEmpty()) {
		return;
	}
	
	UnicodeString memberName;
	UnicodeString memberType;
	
	// not using getTerminatedBuffer() because that method triggers valgrind warnings
	UChar* buf = new UChar[phpDocComment.length() + 1];
	u_memmove(buf, phpDocComment.getBuffer(), phpDocComment.length());
	buf[phpDocComment.length()] = '\0';

	UChar* saveState = 0;
	// not using getTerminatedBuffer() because that method triggers valgrind warnings
	UnicodeString delimiters = UNICODE_STRING_SIMPLE(" \t\n\v\f");
	UChar* delimsBuffer = new UChar[delimiters.length() + 1];
	u_memmove(delimsBuffer, delimiters.getBuffer(), delimiters.length());
	delimsBuffer[delimiters.length()] = '\0';
	
	UChar* next = u_strtok_r(buf, delimsBuffer, &saveState);
	while (next) {
		if (UNICODE_STRING_SIMPLE("@property").caseCompare(next, 0) == 0 ||
			UNICODE_STRING_SIMPLE("@property-read").caseCompare(next, 0) == 0 ||
			UNICODE_STRING_SIMPLE("@property-write").caseCompare(next, 0) == 0) {

			// example line: @property string $nameString a string version of a name
			// will be lenient and allow the reverse var then type
			// @property $nameString string 
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			FillNameOrType(next, memberName, memberType);
			if (!next) {
				break;
			}
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			FillNameOrType(next, memberName, memberType);
			if (!memberName.isEmpty() && !memberType.isEmpty()) {
				Member->PropertyFound(CurrentClass.ClassName, memberName, memberType, UNICODE_STRING_SIMPLE(""), mvceditor::TokenClass::PUBLIC, false, false);
				memberName.remove();
				memberType.remove();
			}
			if (!next) {
				break;
			}
		}
		else if (UNICODE_STRING_SIMPLE("@method").caseCompare(next, 0) == 0) {

			// example line:  @method Integer getAge() getAge(int $int1, int $int2) returns the person's age
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			if (!next) {
				break;
			}
			memberType.setTo(next);
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			if (!next) {
				break;
			}
			memberName.setTo(next);

			// add the 'function' to keep the sig consistent with the other notify method
			UnicodeString signature = UNICODE_STRING_SIMPLE("public function ");

			// keep reading next tokens for the signature; stop when we encounter a closing parenthesis
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			while (next) {
				signature.append(next);
				size_t len = u_strlen(next);
				if (')' == next[len - 1]) {
					break;
				}

				// put this after the break so that we dont put a space at the end of the sig
				signature.append(UNICODE_STRING_SIMPLE(" "));
				next = u_strtok_r(NULL, delimsBuffer, &saveState);
			}
			if (!memberName.isEmpty() && !memberType.isEmpty()) {
				if (memberName.endsWith(UNICODE_STRING_SIMPLE("()"))) {
					memberName.remove(memberName.length() - 2, 2);
				}
				Member->MethodFound(CurrentClass.ClassName, memberName, signature, memberType, UNICODE_STRING_SIMPLE(""), mvceditor::TokenClass::PUBLIC, false);
			}
			if (!next) {
				break;
			}
		}
		else {
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
		}
	}
	delete[] buf;
	delete[] delimsBuffer;
}

void mvceditor::ObserverQuadClass::SemanticValueInit(mvceditor::SemanticValueClass& value) {
	value.Token = 0;
	value.Lexeme = NULL;
	value.Comment = NULL;
	value.Pos = 0;
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	if (!DoCollectExpressions) {
		return;
	}
	UnicodeString* lexeme = new UnicodeString();
	UnicodeString* comment = new UnicodeString();
	value.Lexeme = lexeme;
	value.Comment = comment;
	AllValues.push_back(lexeme);
	AllValues.push_back(comment);
}

void mvceditor::ObserverQuadClass::SemanticValueFree() {
	for (size_t i = 0; i < AllValues.size(); ++i) {
		delete AllValues[i];
	}
	AllValues.clear();
}

void mvceditor::ObserverQuadClass::SemanticValueFree(mvceditor::SemanticValueClass& value) {
	std::vector<UnicodeString*>::iterator it = AllValues.begin();
	while (it != AllValues.end()) {
		if (*it == value.Comment) {
			delete *it;
			it = AllValues.erase(it);
		}
		else if (*it == value.Lexeme) {
			delete *it;
			it = AllValues.erase(it);
		}
		else {
			++it;
		}
	}
	value.Lexeme = NULL;
	value.Comment = NULL;
}

void mvceditor::ObserverQuadClass::QualifiedNameClear() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentQualifiedName.Clear();
}

void mvceditor::ObserverQuadClass::QualifiedNameGrabNameAndComment(mvceditor::SemanticValueClass& nameValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentQualifiedName.GrabNameAndComment(nameValue);
}

void mvceditor::ObserverQuadClass::QualifiedNameAddName(mvceditor::SemanticValueClass& nameValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentQualifiedName.AddName(nameValue);
}

void mvceditor::ObserverQuadClass::ParametersListSetName(mvceditor::SemanticValueClass& nameValue, bool isReference) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentParametersList.SetName(nameValue, isReference);
}

void mvceditor::ObserverQuadClass::ParametersListCreate() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentParametersList.Create();
}

void mvceditor::ObserverQuadClass::ParametersListCreateWithOptionalType(mvceditor::SemanticValueClass& typeValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentParametersList.CreateWithOptionalType(typeValue);
}

void mvceditor::ObserverQuadClass::ClassMemberClear() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.Clear();
}

void mvceditor::ObserverQuadClass::ClassMemberSetNameAndReturnReference(SemanticValueClass& nameValue, SemanticValueClass& referenceValue, 
																		SemanticValueClass& functionValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.SetNameAndReturnReference(nameValue, referenceValue, functionValue);
}

void mvceditor::ObserverQuadClass::ClassMemberSetAsPublic() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.SetAsPublic();
}

void mvceditor::ObserverQuadClass::ClassMemberSetAsProtected() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.SetAsProtected();
}

void mvceditor::ObserverQuadClass::ClassMemberSetAsPrivate() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.SetAsPrivate();
}

void mvceditor::ObserverQuadClass::ClassMemberSetAsStatic() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.IsStaticMember = true;
}

void mvceditor::ObserverQuadClass::ClassMemberSetAsAbstract() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.IsAbstractMember = true;
}

void mvceditor::ObserverQuadClass::ClassMemberSetAsFinal() {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.IsFinalMember = true;
}

void mvceditor::ObserverQuadClass::ClassMemberSetAsConst(mvceditor::SemanticValueClass& nameValue, mvceditor::SemanticValueClass& commentValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.SetAsConst(nameValue, commentValue);
}

void mvceditor::ObserverQuadClass::ClassMemberAppendToComment(mvceditor::SemanticValueClass& commentValue) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	CurrentMember.AppendToComment(commentValue);
}