/**
 * The MIT License
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
 * @copyright  2009-2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */
#include <pelet/ParserTypeClass.h>
#include <unicode/uchar.h>
#include <unicode/ustring.h>

UnicodeString pelet::ReturnTypeFromPhpDocComment(const UnicodeString& phpDocComment, bool varAnnotation, 
												 const pelet::ScopeClass& scope, 
												 const pelet::QualifiedNameClass& currentNamespace) {
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
	returnType = returnType.trim();
	return PhpDocTypeToAbsoluteClassname(returnType, scope, currentNamespace);
}

UnicodeString pelet::PhpDocTypeToAbsoluteClassname(UnicodeString phpDocType, 
												   const pelet::ScopeClass& scope, 
												   const pelet::QualifiedNameClass& currentNamespace) {

	// any of the "basic" types will never use the current namespace
	// these were taken from http://www.phpdoc.org/docs/latest/for-users/types.html
	if (UNICODE_STRING_SIMPLE("string").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("integer").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("int").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("boolean").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("bool").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("float").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("double").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("object").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("mixed").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("array").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("resource").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("void").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("null").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("callback").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("false").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("true").caseCompare(phpDocType, 0) == 0 ||
	        UNICODE_STRING_SIMPLE("self").caseCompare(phpDocType, 0) == 0) {
		return phpDocType;
	}
	if (!phpDocType.isEmpty()) {
		pelet::QualifiedNameClass name;
		pelet::SemanticValueClass value;
		value.Lexeme = phpDocType;
		name.AppendName(&value);
		return scope.FullyQualify(name, currentNamespace);
	}
	return phpDocType;
}

/**
 * sets either varName or varType depending on whether text contents are a variable name or not.
 */
static void FillNameOrType(UChar* text, UnicodeString& varName, UnicodeString& varType) {
	if (text && '$' == text[0]) {
		varName.setTo(text);
	} else if (text) {
		varType.setTo(text);
	}
}

static UChar* PropertyFromPhpDoc(const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace,
		const UChar* delimsBuffer, UChar** saveState, pelet::ClassMemberSymbolClass* member) {

	// example line: 
	//
	// @property string $nameString a string version of a name
	//
	// the 
	// will be lenient and allow the reverse var then type
	// @property $nameString string
	UChar* next = u_strtok_r(NULL, delimsBuffer, saveState);
	if (!next) {
		return next;
	}
	pelet::SemanticValueClass nameValue;
	
	FillNameOrType(next, nameValue.Lexeme, nameValue.Comment);
	next = u_strtok_r(NULL, delimsBuffer, saveState);
	if (!next) {
		return next;
	}
	FillNameOrType(next, nameValue.Lexeme, nameValue.Comment);
	
	// handles namespaces in the magic properties
	nameValue.Comment = pelet::PhpDocTypeToAbsoluteClassname(nameValue.Comment, scope, declaredNamespace);
	nameValue.Comment = UNICODE_STRING_SIMPLE("/** @var ") + nameValue.Comment + UNICODE_STRING_SIMPLE(" */");
	bool isConstant = false;
	int endingPosition = 0;
	member->MakeVariable(&nameValue, &nameValue, isConstant, endingPosition, scope, declaredNamespace);
	return next;
}

static UChar* ParametersFromSignature(const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace,
		const UChar* delimsBuffer, UChar** saveState, pelet::ParametersListClass& parameters) {
	
	// example line: getAge(int $int1, int $int2) returns the person's age
	UChar* next = u_strtok_r(NULL, delimsBuffer, saveState); // method name
	
	// keep reading next tokens for the signature; stop when we encounter a closing parenthesis
	UnicodeString paramsString;
	UChar parens[2] = { '(', '\0' };
	do {
		size_t len = u_strlen(next);
		if (')' == next[len - 1]) {
			paramsString.append(UNICODE_STRING_SIMPLE(" "));
			paramsString.append(next, len - 1);
			break;
		}
		UChar* openParens = u_strFindFirst(next, len, parens, 1);
		if (openParens) {
			paramsString.append(UNICODE_STRING_SIMPLE(" "));
			paramsString.append(++openParens);
		}
		else {
			paramsString.append(UNICODE_STRING_SIMPLE(" "));
			paramsString.append(next, len);
		}
		next = u_strtok_r(NULL, delimsBuffer, saveState);
	} while (next);
		
	// paramsString contains the parameters, parse those out
	// need to split by commas
	UChar commaDelims[3] = { ',', ' ', '\0' };
	UChar* commaSaveState = NULL;
	UChar* paramsBuffer = new UChar[paramsString.length() + 1];
	u_memmove(paramsBuffer, paramsString.getBuffer(), paramsString.length());
	paramsBuffer[paramsString.length()] = '\0';
	
	UChar* paramsNext = u_strtok_r(paramsBuffer, commaDelims, &commaSaveState);
	pelet::SemanticValueClass parameterName;
	pelet::QualifiedNameClass parameterType;
	while (paramsNext) {
		if ('$' == paramsNext[0]) {
			
			// parameter name
			parameterName.Lexeme.setTo(paramsNext, u_strlen(paramsNext));
			if(parameterName.Lexeme.endsWith(UNICODE_STRING_SIMPLE(")"))) {
				parameterName.Lexeme.remove(parameterName.Lexeme.length() - 1, 1);
			}
			bool isReference = false;
			parameters.Append(&parameterType, &parameterName, isReference, false, scope, declaredNamespace);
			parameterName.Lexeme.remove();
			parameterType.Clear();
		}
		else {
			UnicodeString parameterTypeString(paramsNext);
			
			// TODO fill in line number and position if needed
			int zeroLine = 0;
			int zeroPos = 0;
			parameterType.Init(parameterTypeString, zeroLine, zeroPos);
		}
		paramsNext = u_strtok_r(NULL, commaDelims, &commaSaveState);
	}
	delete[] paramsBuffer;
	return next;
}


static UChar* MethodFromPhpDoc(const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace,
							const UChar* delimsBuffer, UChar** saveState, pelet::ClassMemberSymbolClass* memberMethod) {
	pelet::SemanticValueClass nameValue;
	pelet::SemanticValueClass commentValue;
	pelet::ParametersListClass parameters;
	pelet::ClassMemberSymbolClass modifiers;
	modifiers.SetAsPublic();
	pelet::ClassMemberSymbolClass methodBody;
	methodBody.EndingPosition = 0;

	
	// example line:  @method Integer getAge() getAge(int $int1, int $int2) returns the person's age
	UChar* next = u_strtok_r(NULL, delimsBuffer, saveState); // method return type
	if (!next) {
		return next;
	}
	commentValue.Comment.setTo(next);
	
	// handles namespaces in the magic properties
	commentValue.Comment = pelet::PhpDocTypeToAbsoluteClassname(commentValue.Comment, scope, declaredNamespace);
	commentValue.Comment = UNICODE_STRING_SIMPLE("/** @return ") + commentValue.Comment + UNICODE_STRING_SIMPLE(" */");
	
	next = u_strtok_r(NULL, delimsBuffer, saveState); // method name, could have parenthesis
	if (!next) {
		return next;
	}
	nameValue.Lexeme.setTo(next);
	if (nameValue.Lexeme.endsWith(UNICODE_STRING_SIMPLE("()"))) {
		nameValue.Lexeme.remove(nameValue.Lexeme.length() - 2, 2);
	}
	
	next = ParametersFromSignature(scope, declaredNamespace, delimsBuffer, saveState, parameters);
	bool isReference = false;
	memberMethod->MakeMethod(&nameValue, &modifiers, isReference, &commentValue, &parameters, &methodBody, scope, declaredNamespace, false);
	return next;
}


void pelet::CreateMagicMethodsAndProperties(std::vector<pelet::AstItemClass*>& allAstItems,
										    pelet::StatementListClass* statements, 
											const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace,
											const UnicodeString& phpDocComment, const int lineNumber) {
	if (phpDocComment.isEmpty()) {
		return;
	}

	// not using getTerminatedBuffer() because that method triggers valgrind warnings
	UChar* buf = new UChar[phpDocComment.length() + 1];
	u_memmove(buf, phpDocComment.getBuffer(), phpDocComment.length());
	buf[phpDocComment.length()] = '\0';

	UChar* saveState = 0;
	UChar delimsBuffer[6] = { ' ', '\t', '\n', '\v', '\f', '\0' };
	UChar* next = u_strtok_r(buf, delimsBuffer, &saveState);
	
	while (next) {
		if (UNICODE_STRING_SIMPLE("@property").caseCompare(next, 0) == 0 ||
		        UNICODE_STRING_SIMPLE("@property-read").caseCompare(next, 0) == 0 ||
		        UNICODE_STRING_SIMPLE("@property-write").caseCompare(next, 0) == 0) {

			pelet::ClassMemberSymbolClass* propertyMember = new pelet::ClassMemberSymbolClass;
			next = PropertyFromPhpDoc(scope, currentNamespace, delimsBuffer, &saveState, propertyMember);
			allAstItems.push_back(propertyMember);
			statements->Push(propertyMember);
		} else if (UNICODE_STRING_SIMPLE("@method").caseCompare(next, 0) == 0) {

			// example line:  @method Integer getAge() getAge(int $int1, int $int2) returns the person's age
			pelet::ClassMemberSymbolClass* methodMember = new pelet::ClassMemberSymbolClass;
			next = MethodFromPhpDoc(scope, currentNamespace, delimsBuffer, &saveState, methodMember);
			allAstItems.push_back(methodMember);
			statements->Push(methodMember);
		}
		next = u_strtok_r(NULL, delimsBuffer, &saveState);
	}
	delete[] buf;
}

pelet::ExpressionObserverClass::ExpressionObserverClass()
: Statements() {
}

pelet::ExpressionObserverClass::~ExpressionObserverClass() {
	CleanupStatements();
}

void pelet::ExpressionObserverClass::StatementOwnership(std::vector<pelet::AstItemClass*> statements) {
	CleanupStatements();
	Statements = statements;
}

void pelet::ExpressionObserverClass::CleanupStatements() {
	std::vector<pelet::AstItemClass*>::iterator it;
	for (it = Statements.begin(); it != Statements.end(); ++it) {
		delete (*it);
	}
}

pelet::AnyExpressionObserverClass::AnyExpressionObserverClass()
: ExpressionObserverClass() {
	
}

void pelet::AnyExpressionObserverClass::ExpressionVariableFound(pelet::VariableClass* expression) {
	CheckVariable(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionAssignmentFound(pelet::AssignmentExpressionClass* expression) {
	CheckExpression(&expression->Destination);
	CheckExpression(expression->Expression);
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionAssignmentCompoundFound(pelet::AssignmentCompoundExpressionClass* expression) {
	CheckExpression(&expression->Variable);
	CheckExpression(expression->RightOperand);
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionBinaryOperationFound(pelet::BinaryOperationClass* expression) {
	CheckExpression(expression->LeftOperand);
	CheckExpression(expression->RightOperand);
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionUnaryOperationFound(pelet::UnaryOperationClass* expression) {
	CheckExpression(expression->Operand);
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionUnaryVariableOperationFound(pelet::UnaryVariableOperationClass* expression) {
	CheckVariable(&expression->Variable);
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionTernaryOperationFound(pelet::TernaryOperationClass* expression) {
	CheckExpression(expression->Expression1);
	CheckExpression(expression->Expression2);
	if (expression->Expression3) {
		CheckExpression(expression->Expression3);
	}
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionInstanceOfOperationFound(pelet::InstanceOfOperationClass* expression) {
	CheckExpression(expression->Expression1);
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionScalarFound(pelet::ScalarExpressionClass* expression) {
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionNewInstanceFound(pelet::NewInstanceExpressionClass* expression) {
	std::vector<pelet::ExpressionClass*>::const_iterator constructorArg = expression->CallArguments.begin();
	for (; constructorArg != expression->CallArguments.end(); ++constructorArg) {
		CheckExpression(*constructorArg);
	}

	// check any function args to any chained method calls.
	std::vector<pelet::VariablePropertyClass>::const_iterator prop = expression->ChainList.begin();
	for (; prop != expression->ChainList.end(); ++prop) {
		std::vector<pelet::ExpressionClass*>::const_iterator chainArg = prop->CallArguments.begin();
		for (; chainArg != prop->CallArguments.end(); ++chainArg) {
			CheckExpression(*chainArg);
		}
	}
	
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionAnonymousClassFound(pelet::AnonymousClassExpressionClass* expression) {
	for (size_t i = 0;i < expression->ConstructorArguments.size(); i++) {
		CheckExpression(expression->ConstructorArguments[i]);
	}
	CheckStatementList(expression->Body);
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::StatementGlobalVariablesFound(pelet::GlobalVariableStatementClass* variables) {
	for (size_t i = 0; i < variables->Variables.size(); ++i) {
		CheckVariable(variables->Variables[i]);
	}
}

void pelet::AnyExpressionObserverClass::StatementStaticVariablesFound(pelet::StaticVariableStatementClass* variables) {
	for (size_t i = 0; i < variables->Variables.size(); ++i) {
		CheckVariable(variables->Variables[i]);
	}
}

void pelet::AnyExpressionObserverClass::ExpressionIncludeFound(pelet::IncludeExpressionClass* expr) {
	CheckExpression(expr->Expression);
}

void pelet::AnyExpressionObserverClass::ExpressionClosureFound(pelet::ClosureExpressionClass* expr) {
	for (size_t i = 0; i < expr->Parameters.size(); ++i) {
		CheckVariable(expr->Parameters[i]);
	}
	
	for (size_t i = 0; i < expr->LexicalVars.size(); ++i) {
		CheckVariable(expr->LexicalVars[i]);
	}

	// check the closure's inner statements
	// we could have nested closures
	for (size_t i = 0; i < expr->Statements.Size(); ++i) {
		if (pelet::StatementClass::EXPRESSION == expr->Statements.TypeAt(i)) {
			CheckExpression((pelet::ExpressionClass*)expr->Statements.At(i));
		}
	}
	
	OnAnyExpression(expr);
}

void pelet::AnyExpressionObserverClass::ExpressionAssignmentListFound(pelet::AssignmentListExpressionClass* expression) {

	// check any array accesses in the destination variables
	// ie $user[$name]
	for (size_t i = 0; i < expression->Destinations.size(); ++i) {
		pelet::VariableClass var = expression->Destinations[i];
		CheckExpression(&var);
	}
	if (expression->Expression) {
		CheckExpression(expression->Expression);
	}
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionIssetFound(pelet::IssetExpressionClass* expression) {

	// check any array accesses in the destination variables
	// ie $user[$name]
	for (size_t i = 0; i < expression->Expressions.size(); ++i) {
		CheckExpression(expression->Expressions[i]);
	}
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionArrayFound(pelet::ArrayExpressionClass* expression) {
	for (size_t i = 0; i < expression->ArrayPairs.size(); ++i) {
		pelet::ArrayPairExpressionClass* pair = expression->ArrayPairs[i];
		if (pair->Key) {
			CheckExpression(pair->Key);
		}
		CheckExpression(pair->Value);
	}
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::ExpressionEvalFound(pelet::EvalExpressionClass* expression) {
	CheckExpression(expression->Expression);
	OnAnyExpression(expression);
}

void pelet::AnyExpressionObserverClass::CheckExpression(pelet::ExpressionClass* expr) {
	switch (expr->ExpressionType) {
	case pelet::ExpressionClass::ARRAY:
		ExpressionArrayFound((pelet::ArrayExpressionClass*)expr);
		break;
	case pelet::ExpressionClass::ASSIGNMENT:
		ExpressionAssignmentFound((pelet::AssignmentExpressionClass*)expr);
		break;
	case pelet::ExpressionClass::ASSIGNMENT_COMPOUND:
		ExpressionAssignmentCompoundFound((pelet::AssignmentCompoundExpressionClass*)expr);
		break;
	case pelet::ExpressionClass::ASSIGNMENT_LIST:
		ExpressionAssignmentListFound((pelet::AssignmentListExpressionClass*)expr);
		break;
	case pelet::ExpressionClass::BINARY_OPERATION:
		ExpressionBinaryOperationFound((pelet::BinaryOperationClass*)expr);
		break;
	case pelet::ExpressionClass::NEW_CALL:
		ExpressionNewInstanceFound((pelet::NewInstanceExpressionClass*)expr);
		break;
	case pelet::ExpressionClass::SCALAR:
		ExpressionScalarFound((pelet::ScalarExpressionClass*)expr);
		break;
	case pelet::ExpressionClass::TERNARY_OPERATION:
		ExpressionTernaryOperationFound((pelet::TernaryOperationClass*)expr);
		break;
	case pelet::ExpressionClass::INSTANCEOF_OPERATION:
		ExpressionInstanceOfOperationFound((pelet::InstanceOfOperationClass*)expr);
		break;
	case pelet::ExpressionClass::UNARY_OPERATION:
		ExpressionUnaryOperationFound((pelet::UnaryOperationClass*)expr);
		break;
	case pelet::ExpressionClass::UNARY_VARIABLE_OPERATION:
		ExpressionUnaryVariableOperationFound((pelet::UnaryVariableOperationClass*)expr);
		break;
	case pelet::ExpressionClass::VARIABLE:
		CheckVariable((pelet::VariableClass*)expr);
		break;
	case pelet::ExpressionClass::INCLUDE:
		ExpressionIncludeFound((pelet::IncludeExpressionClass*)expr);
		break;
	case pelet::ExpressionClass::CLOSURE:
		ExpressionClosureFound((pelet::ClosureExpressionClass*)expr);
		break;
	case pelet::ExpressionClass::ISSET:
		ExpressionIssetFound((pelet::IssetExpressionClass*)expr);
		break;
	case pelet::ExpressionClass::EVAL:
		ExpressionEvalFound((pelet::EvalExpressionClass*)expr);
		break;
	case pelet::ExpressionClass::ARRAY_PAIR:
	
		// we dont get array pairs by themselves, they come in 
		// with the array
		break;
	case pelet::ExpressionClass::ANONYMOUS_CLASS:
		ExpressionAnonymousClassFound((pelet::AnonymousClassExpressionClass*)expr);
		break;
	case pelet::ExpressionClass::UNKNOWN:
	
		// cannot check unknown expressions
		break;
	}
}

void pelet::AnyExpressionObserverClass::CheckVariable(pelet::VariableClass* variable) {
	
	// a variable could contain method calls, array accesses etc
	for (size_t i = 0; i < variable->ChainList.size(); ++i) {
		pelet::VariablePropertyClass prop = variable->ChainList[i];
		if (prop.IsFunction) {

			// check the function parameters
			std::vector<pelet::ExpressionClass*>::const_iterator itArg;
			for (itArg = prop.CallArguments.begin(); itArg != prop.CallArguments.end(); ++itArg) {
				CheckExpression(*itArg);
			}
		}
		else if (prop.IsArrayAccess && prop.ArrayAccess) {

			// check for array accesees ie $user[$name]
			CheckExpression(variable->ChainList[i].ArrayAccess);
		}
		else if (!prop.IsArrayAccess) {
			
			// this is a normal property call
		}
	}
	OnAnyExpression(variable);
}

void pelet::AnyExpressionObserverClass::CheckStatementList(pelet::StatementListClass& stmts) {
	for (size_t i = 0; i < stmts.Size(); ++i) {
		pelet::StatementClass::Types stmtType = stmts.TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == stmtType) {
			CheckExpression((pelet::ExpressionClass*)stmts.At(i));
		} else if (pelet::StatementClass::STATIC_VARIABLE_DECLARATION == stmtType) {
			StatementStaticVariablesFound((pelet::StaticVariableStatementClass*)stmts.At(i));
		} else if (pelet::StatementClass::GLOBAL_VARIABLE_DECLARATION == stmtType) {
			StatementGlobalVariablesFound((pelet::GlobalVariableStatementClass*)stmts.At(i));
		} else if (pelet::StatementClass::METHOD_DECLARATION == stmtType) {
			CheckStatementList(((pelet::ClassMemberSymbolClass*)stmts.At(i))->MethodStatements);
		} else if (pelet::StatementClass::FUNCTION_DECLARATION == stmtType) {
			CheckStatementList(((pelet::ClassMemberSymbolClass*)stmts.At(i))->MethodStatements);
		}
	}
}


pelet::FunctionCallCountObserverClass::FunctionCallCountObserverClass()
: AnyExpressionObserverClass() 
, FunctionName()
, Counter(0) {
	
}

int pelet::FunctionCallCountObserverClass::CountCalls(pelet::StatementListClass* stmts) {
	Counter = 0;
	for (size_t i = 0; i < stmts->Size(); ++i) {
		if (stmts->TypeAt(i) == pelet::StatementClass::EXPRESSION) {
			pelet::ExpressionClass* expr = (pelet::ExpressionClass*)stmts->At(i);
			CheckExpression(expr);
		}
		
	}
	return Counter;
}
		
void pelet::FunctionCallCountObserverClass::OnAnyExpression(pelet::ExpressionClass* expression) {
	if (expression->ExpressionType != pelet::ExpressionClass::VARIABLE) {
		return;
	}
	pelet::VariableClass* var = (pelet::VariableClass*)expression;
	if (var->ChainList.empty()) {
		return;
	}
	if (!var->ChainList[0].IsFunction) {
		return;
	}
	if (var->ChainList[0].Name.caseCompare(FunctionName, 0) == 0) {
		Counter++;
	}
	
	// note that the base class will recurse down this expression CallArguments and 
	// call this method, so we don't need to check CallArguments here
}

pelet::StatementClass::StatementClass(pelet::StatementClass::Types type)
	: AstItemClass()
	, Type(type) {

}

pelet::StatementClass::~StatementClass() {

}

pelet::AstItemClass::AstItemClass() {

}

pelet::AstItemClass::~AstItemClass() {

}

pelet::ConstantStatementClass::ConstantStatementClass()
	: StatementClass(pelet::StatementClass::DEFINE_DECLARATION)
	, Name()
	, NamespaceName()
	, Comment()
	, Value()
	, LineNumber(0) {

}

void pelet::ConstantStatementClass::Init(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* params, int lineNumber) {
	if (functionName) {
		Comment = functionName->Comment;
	}

	// right now will only scalars are captured; so we may have only 1 param
	if (params && params->Size() >= 1 && params->TypeAt(0) == pelet::StatementClass::EXPRESSION) {
		pelet::ExpressionClass* paramExpr =  (pelet::ExpressionClass*)params->At(0);
		if (paramExpr->ExpressionType == pelet::ExpressionClass::SCALAR) {
			Name = ((pelet::ScalarExpressionClass*)paramExpr)->Value;
		}
	}
	if (params && params->Size() >= 2 && params->TypeAt(1) == pelet::StatementClass::EXPRESSION) {
		pelet::ExpressionClass* paramExpr =  (pelet::ExpressionClass*)params->At(1);
		if (paramExpr->ExpressionType == pelet::ExpressionClass::SCALAR) {
			Value = ((pelet::ScalarExpressionClass*)paramExpr)->Value;
		}
	}
	LineNumber = lineNumber;
	NamespaceName = UNICODE_STRING_SIMPLE("\\");
}

void pelet::ConstantStatementClass::Init(pelet::SemanticValueClass* value, int lineNumber, const pelet::QualifiedNameClass& currentNamespace) {
	if (value) {
		Name = value->Lexeme;
		Comment = value->Comment;
	}
	LineNumber = lineNumber;
	NamespaceName = currentNamespace.ToSignature();
}

pelet::StatementListClass::StatementListClass()
	: Statements() {

}

void pelet::StatementListClass::Init(pelet::StatementClass* statement) {
	Push(statement);
}

void pelet::StatementListClass::Init(pelet::StatementListClass* statementList) {
	PushAll(statementList);
}

size_t pelet::StatementListClass::Size() const {
	return Statements.size();
}

pelet::StatementClass::Types pelet::StatementListClass::TypeAt(size_t index) const {
	if (index < Statements.size() && Statements[index] != NULL) {
		return Statements[index]->Type;
	}
	return pelet::StatementClass::NIL;
}

pelet::StatementClass* pelet::StatementListClass::At(size_t index) const {
	if (index < Statements.size()) {
		return Statements[index];
	}
	return NULL;
}

pelet::StatementListClass* pelet::StatementListClass::Push(pelet::StatementClass* statement) {
	if (statement) {
		Statements.push_back(statement);
	}
	return this;
}

pelet::StatementListClass* pelet::StatementListClass::PushAll(const pelet::StatementListClass* statements) {
	if (statements) {
		for (size_t i = 0; i < statements->Statements.size(); ++i) {
			Statements.push_back(statements->Statements[i]);
		}
	}
	return this;
}

pelet::StatementListClass* pelet::StatementListClass::PushFront(pelet::StatementClass* stmt) {
	if (stmt) {
		Statements.insert(Statements.begin(), stmt);
	}
	return this;
}

void pelet::StatementListClass::Clear() {
	Statements.clear();
}

pelet::NamespaceDeclarationClass::NamespaceDeclarationClass()
	: StatementClass(pelet::StatementClass::NAMESPACE_DECLARATION)
	, NamespaceName() 
	, StartingPosition(0) {
}

void pelet::NamespaceDeclarationClass::Init(pelet::QualifiedNameClass* namespaceName, const pelet::TokenPositionClass& startingPosition) {
	
	// declared namespace is always fully qualified according to PHP rules
	namespaceName->MakeAbsolute();
	NamespaceName = namespaceName->ToSignature();
	StartingPosition = startingPosition.Pos;
}

void pelet::NamespaceDeclarationClass::Init(const pelet::TokenPositionClass& startingPosition) {
	NamespaceName = UNICODE_STRING_SIMPLE("\\");
	StartingPosition = startingPosition.Pos;
}

pelet::NamespaceUseClass::NamespaceUseClass()
	: StatementClass(pelet::StatementClass::NAMESPACE_USE)
	, NamespaceName()
	, Alias()
	, LineNumber(0)
	, StartingPos(0) {

}

void pelet::NamespaceUseClass::Init(pelet::QualifiedNameClass* qualifiedName, pelet::SemanticValueClass* aliasValue) {
	qualifiedName->MakeAbsolute();
	UnicodeString alias;
	if (aliasValue) {
		alias = aliasValue->Lexeme;
	}
	Set(qualifiedName, alias);
	LineNumber = qualifiedName->LineNumber;
}

UnicodeString pelet::NamespaceUseClass::Set(pelet::QualifiedNameClass* qualifiedName, UnicodeString alias) {
	UnicodeString fullyQualifiedNamespace = qualifiedName->ToSignature();
	if (alias.isEmpty()) {
		int32_t index = fullyQualifiedNamespace.lastIndexOf(UNICODE_STRING_SIMPLE("\\"));

		//by default alias is the last part of the namespace name
		if (index >= 0) {
			alias.setTo(fullyQualifiedNamespace, index + 1);
		}
	}
	NamespaceName = fullyQualifiedNamespace;
	Alias = alias;
	return Alias;
}

pelet::StatementListClass* pelet::NamespaceUseClass::SetStartingPos(pelet::StatementListClass* namespaceStatements, const pelet::TokenPositionClass& useToken) {
	for (size_t i = 0; i < namespaceStatements->Size(); ++i) {
		pelet::StatementClass::Types type = namespaceStatements->TypeAt(i);
		if (pelet::StatementClass::NAMESPACE_USE == type) {
			pelet::NamespaceUseClass* useStmt = (pelet::NamespaceUseClass*) namespaceStatements->At(i);
			useStmt->StartingPos = useToken.Pos;
		}
	}
	return namespaceStatements;
}


pelet::TraitUseClass::TraitUseClass()
	: StatementClass(pelet::StatementClass::TRAIT_USE_DECLARATION)
	, NamespaceName()
	, ClassName()
	, UsedTraits() {
}

void pelet::TraitUseClass::Init(pelet::QualifiedNameClass* usedTrait,
								const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	if (usedTrait) {
		UsedTraits.push_back(scope.FullyQualify(*usedTrait, currentNamespace));
	}
	NamespaceName = currentNamespace.ToSignature();
	ClassName = scope.ClassName;
}

pelet::TraitUseClass* pelet::TraitUseClass::AppendUse(pelet::QualifiedNameClass* usedTrait,
									 const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	if (usedTrait) {
		UsedTraits.push_back(scope.FullyQualify(*usedTrait, currentNamespace));
	}
	return this;
}

pelet::TraitInsteadOfClass::TraitInsteadOfClass()
	: StatementClass(pelet::StatementClass::TRAIT_INSTEADOF_DECLARATION)
	, NamespaceName()
	, ClassName()
	, TraitUsedClassName()
	, TraitMethodReferenceName()
	, InsteadOfList() {
		
}

void pelet::TraitInsteadOfClass::Init(pelet::QualifiedNameClass* insteadOfClass, 
		  const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	AppendInsteadOf(insteadOfClass, scope, currentNamespace);
	ClassName = scope.ClassName;
	NamespaceName = currentNamespace.ToSignature();
}

pelet::TraitInsteadOfClass* pelet::TraitInsteadOfClass::AppendInsteadOf(pelet::QualifiedNameClass *insteadOfClass, 
																		const pelet::ScopeClass& scope, 
																		const pelet::QualifiedNameClass& currentNamespace) {
	if (insteadOfClass) {
		InsteadOfList.push_back(scope.FullyQualify(*insteadOfClass, currentNamespace));
	}
	return this;
}

pelet::TraitInsteadOfClass* pelet::TraitInsteadOfClass::SetMethodReference(pelet::TraitAliasClass* traitAlias) {
	if (traitAlias) {
		TraitUsedClassName = traitAlias->TraitUsedClassName;
		TraitMethodReferenceName = traitAlias->TraitMethodReferenceName;
	}
	return this;
}

pelet::TraitAliasClass::TraitAliasClass()
	: StatementClass(pelet::StatementClass::TRAIT_ALIAS_DECLARATION)
	, NamespaceName()
	, ClassName()
	, TraitUsedClassName()
	, TraitMethodReferenceName()
	, Alias()
	, Visibility(pelet::TokenClass::PUBLIC) {
}

void pelet::TraitAliasClass::SetMethodReference(pelet::SemanticValueClass* methodName,
												pelet::QualifiedNameClass* className,
												const pelet::ScopeClass& scope, 
												const pelet::QualifiedNameClass& currentNamespace) {
	if (methodName) {
		TraitMethodReferenceName = methodName->Lexeme;
	}
	if (className) {
		TraitUsedClassName = scope.FullyQualify(*className,  currentNamespace);
	}
}

pelet::TraitAliasClass* pelet::TraitAliasClass::SetModifiers(pelet::SemanticValueClass* modifier) {
	if (modifier && pelet::T_PUBLIC == modifier->Token) {
		Visibility = pelet::TokenClass::PUBLIC;
	}
	else if (modifier && pelet::T_PROTECTED == modifier->Token) {
		Visibility = pelet::TokenClass::PROTECTED;
	}
	else if (modifier && pelet::T_PRIVATE == modifier->Token) {
		Visibility = pelet::TokenClass::PRIVATE;
	}
	return this;
}

pelet::TraitAliasClass* pelet::TraitAliasClass::SetAlias(pelet::SemanticValueClass* aliasLexeme) {
	if (aliasLexeme) {
		Alias = aliasLexeme->Lexeme;
	}
	return this;
}

pelet::TraitAliasClass* pelet::TraitAliasClass::SetScope(const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	ClassName = scope.ClassName;
	NamespaceName = currentNamespace.ToSignature();
	return this;
}

pelet::ClassSymbolClass::ClassSymbolClass()
	: StatementClass(pelet::StatementClass::CLASS_DECLARATION)
	, ClassName()
	, NamespaceName()
	, Comment()
	, ExtendsFrom()
	, ImplementsList()
	, StartingLineNumber(0)
	, EndingLineNumber(0)
	, IsAbstract(false)
	, IsFinal(false)
	, IsInterface(false) {

}

void pelet::ClassSymbolClass::GrabClassName(pelet::SemanticValueClass* value) {
	ClassName = value->Lexeme;
}

void pelet::ClassSymbolClass::AppendToComment(pelet::SemanticValueClass* value) {
	Comment.append(value->Comment);
}

void pelet::ClassSymbolClass::Clear() {
	ClassName.remove();
	NamespaceName.remove();
	Comment.remove();
	ExtendsFrom.remove();
	ImplementsList.clear();
	StartingLineNumber = 0;
	EndingLineNumber = 0;
	IsAbstract = false;
	IsFinal = false;
	IsInterface = false;
}

UnicodeString pelet::ClassSymbolClass::ToSignature() const {
	UnicodeString sig;
	if (!IsInterface && !IsAbstract) {
		sig.append(UNICODE_STRING_SIMPLE("class "));
	} else if (!IsInterface && IsAbstract) {
		sig.append(UNICODE_STRING_SIMPLE("abstract class "));
	} else {
		sig.append(UNICODE_STRING_SIMPLE("interface "));
	}

	sig.append(ClassName);
	UnicodeString extends = ExtendsFrom;
	if (!extends.isEmpty()) {
		sig.append(UNICODE_STRING_SIMPLE(" extends "));
		sig.append(extends);
	}
	if (!ImplementsList.empty()) {
		if (IsInterface) {
			sig.append(UNICODE_STRING_SIMPLE(" extends "));
		} else {
			sig.append(UNICODE_STRING_SIMPLE(" implements "));
		}
		for (size_t i = 0; i < ImplementsList.size(); ++i) {
			sig.append(ImplementsList[i]);
			if (i < (ImplementsList.size() - 1)) {
				sig.append(UNICODE_STRING_SIMPLE(", "));
			}
		}
	}
	return sig;
}

UnicodeString pelet::ClassSymbolClass::ImplementsString() const {
	UnicodeString sig;
	for (size_t i = 0; i < ImplementsList.size(); ++i) {
		sig.append(ImplementsList[i]);
		if (i < (ImplementsList.size() - 1)) {
			sig.append(UNICODE_STRING_SIMPLE(", "));
		}
	}
	return sig;
}

pelet::ClassSymbolClass* pelet::ClassSymbolClass::AddToImplements(pelet::QualifiedNameClass* implementsClassName, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	ImplementsList.push_back(scope.FullyQualify(*implementsClassName, currentNamespace));
	return this;
}

pelet::ClassSymbolClass* pelet::ClassSymbolClass::SetExtends(pelet::QualifiedNameClass* extendsClassName, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	ExtendsFrom = scope.FullyQualify(*extendsClassName, currentNamespace);
	return this;
}

pelet::ClassSymbolClass* pelet::ClassSymbolClass::SetAll(pelet::SemanticValueClass* nameValue, 
														   pelet::ClassSymbolClass* classTypeSymbol, 
														   pelet::ClassSymbolClass* extendsSymbol, 
														   pelet::ClassSymbolClass* implementsSymbol, 
														   const pelet::TokenPositionClass& endToken,
														   const pelet::QualifiedNameClass& currentNamespace) {
	if (nameValue) {
		GrabClassName(nameValue);
		StartingLineNumber = nameValue->LineNumber;
	}
	NamespaceName = currentNamespace.ToSignature();
	if (NamespaceName.isEmpty()) {
		NamespaceName = UNICODE_STRING_SIMPLE("\\");
	}
	if (classTypeSymbol) {
		Comment = classTypeSymbol->Comment;
		IsAbstract = classTypeSymbol->IsAbstract;
		IsFinal = classTypeSymbol->IsFinal;
		IsInterface = classTypeSymbol->IsInterface;
		IsTrait = classTypeSymbol->IsTrait;
	}
	if (extendsSymbol) {
		ExtendsFrom = extendsSymbol->ExtendsFrom;
	}
	if (implementsSymbol) {
		ImplementsList = implementsSymbol->ImplementsList;
	}	
	EndingLineNumber = endToken.LineNumber;
	return this;
}

pelet::ClassSymbolClass* pelet::ClassSymbolClass::SetFlags(pelet::SemanticValueClass* commentValue, 
																   bool isAbstract, bool isFinal, bool isInterface, bool isTrait) {
	if (commentValue) {
		AppendToComment(commentValue);
	}
	IsAbstract = isAbstract;
	IsFinal = isFinal;
	IsInterface = isInterface;
	IsTrait = isTrait;
	return this;
}

pelet::ClassSymbolClass* pelet::ClassSymbolClass::MergeModifiers(pelet::ClassSymbolClass* other) {
	if (other->IsAbstract) {
		IsAbstract = other->IsAbstract;
	}
	if (other->IsFinal) {
		IsFinal = other->IsFinal;
	}
	if (other->IsInterface) {
		IsInterface = other->IsInterface;
	}
	if (other->IsTrait) {
		IsTrait = other->IsTrait;
	}
	return this;
}

pelet::ClassMemberSymbolClass::ClassMemberSymbolClass()
	: StatementClass(pelet::StatementClass::METHOD_DECLARATION)
	, MemberName()
	, NamespaceName()
	, ClassName()
	, ParametersList()
	, MethodStatements()
	, Comment()
	, ReturnType()
	, IsReturnNullable(false)
	, IsReturnTypeDeclared(false)
	, StartingLineNumber(0)
	, EndingPosition(0)

	// PHP default access mode is TRUE
	, IsPublicMember(true)
	, IsProtectedMember(false)
	, IsPrivateMember(false)
	, IsStaticMember(false)
	, IsConstMember(false)
	, IsAbstractMember(false)
	, IsFinalMember(false)
	, IsReturnReference(false) 
	, HasVariableArguments(false) {

}

void pelet::ClassMemberSymbolClass::SetNameAndReturnReference(pelet::SemanticValueClass* nameValue, bool isReturnReference, 
		pelet::SemanticValueClass* functionValue, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	MemberName = nameValue->Lexeme;
	IsReturnReference = isReturnReference;

	// a comment may be attached to the function keyword.
	// see NextSemanticValue() function
	AppendToComment(functionValue, scope, declaredNamespace);
}

void pelet::ClassMemberSymbolClass::SetAsConst(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	IsPublicMember = true;
	IsProtectedMember = false;
	IsPrivateMember = false;
	IsStaticMember = true;
	IsConstMember = true;
	IsAbstractMember = false;
	IsFinalMember = false;
	IsReturnReference = false;
	MemberName = nameValue->Lexeme;

	// a comment may be attached to the const keyword.
	// see NextSemanticValue() function
	AppendToComment(commentValue, scope, declaredNamespace);
}

void pelet::ClassMemberSymbolClass::AppendToComment(SemanticValueClass* value, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	Comment.append(value->Comment);
	if (ReturnType.isEmpty()) {
		ReturnType = ReturnTypeFromPhpDocComment(Comment, false, scope, declaredNamespace);
	}
	if (ReturnType.isEmpty()) {
		ReturnType = ReturnTypeFromPhpDocComment(Comment, true, scope, declaredNamespace);
	}
}

void pelet::ClassMemberSymbolClass::SetReturnType(QualifiedNameClass* qualifiedName, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	if (!qualifiedName->IsEmpty()) {
		ReturnType = PhpDocTypeToAbsoluteClassname(qualifiedName->ToSignature(), scope, declaredNamespace);
	}
	IsReturnNullable = false;
	IsReturnTypeDeclared = false;
}

void pelet::ClassMemberSymbolClass::SetReturnType(pelet::TypeHintClass* hint, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	if (!hint->NamespaceName.isEmpty()) {
		ReturnType = PhpDocTypeToAbsoluteClassname(hint->NamespaceName, scope, declaredNamespace);
		IsReturnNullable = hint->IsNullable;
		IsReturnTypeDeclared = true;
	}
}

void pelet::ClassMemberSymbolClass::SetAsPublic() {
	IsPublicMember = true;
	IsProtectedMember = false;
	IsPrivateMember = false;
}

void pelet::ClassMemberSymbolClass::SetAsProtected() {
	IsPublicMember = false;
	IsProtectedMember = true;
	IsPrivateMember = false;
}
void pelet::ClassMemberSymbolClass::SetAsPrivate() {
	IsPublicMember = false;
	IsProtectedMember = false;
	IsPrivateMember = true;
}

void pelet::ClassMemberSymbolClass::Clear() {
	MemberName.remove();
	Comment.remove();
	NamespaceName.remove();
	ClassName.remove();
	ParametersList.Clear();
	MethodStatements.Clear();
	ReturnType.remove();
	IsReturnNullable = false;
	IsReturnTypeDeclared = false;
	StartingLineNumber = 0;
	EndingPosition = 0;

	// PHP default access mode is TRUE
	IsPublicMember = true;
	IsProtectedMember = false;
	IsPrivateMember = false;
	IsStaticMember = false;
	IsConstMember = false;
	IsAbstractMember = false;
	IsFinalMember = false;
	IsReturnReference = false;
	HasVariableArguments = false;
}

UnicodeString pelet::ClassMemberSymbolClass::ToMethodSignature(UnicodeString variablesSignature) const {
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
	} else {
		sig.append(UNICODE_STRING_SIMPLE("function "));
	}
	sig.append(MemberName);
	sig.append(variablesSignature);
	if (IsReturnTypeDeclared && !ReturnType.isEmpty()) {
		sig.append(UNICODE_STRING_SIMPLE(": "));
		if (IsReturnNullable) {
			sig.append(UNICODE_STRING_SIMPLE("?"));
		}
		sig.append(ReturnType);
	}
	return sig;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeBody(pelet::StatementListClass* bodyStatements, 
	const pelet::TokenPositionClass& startingPositionTokenValue, const pelet::TokenPositionClass& endingPositionTokenValue) {
	if (bodyStatements) {
		MethodStatements = *bodyStatements;
	}
	StartingPosition = startingPositionTokenValue.Pos;
	EndingPosition = endingPositionTokenValue.Pos;
	return this;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::Make(pelet::SemanticValueClass* varValue, 
				const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	Type = pelet::StatementClass::METHOD_DECLARATION;
	if (varValue) {
		AppendToComment(varValue, scope, declaredNamespace);
		StartingLineNumber = varValue->LineNumber;
		IsAbstractMember = varValue && pelet::T_ABSTRACT == varValue->Token;
		IsFinalMember = varValue && pelet::T_FINAL == varValue->Token;
		IsConstMember = varValue && pelet::T_CONST == varValue->Token;
		IsStaticMember = varValue && pelet::T_STATIC == varValue->Token;
		if (pelet::T_PUBLIC == varValue->Token) {
			SetAsPublic();
		} 
		else if (pelet::T_PROTECTED == varValue->Token) {
			SetAsProtected();
		} 
		else if (pelet::T_PRIVATE == varValue->Token) {
			SetAsPrivate();
		}
	}
	return this;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeAsPublicVariable(pelet::SemanticValueClass* varValue,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	Type = pelet::StatementClass::PROPERTY_DECLARATION;
	SetNameAndReturnReference(varValue, false, varValue, scope, declaredNamespace);
	SetAsPublic();
	NamespaceName = declaredNamespace.ToSignature();
	if (NamespaceName.isEmpty()) {
		NamespaceName = UNICODE_STRING_SIMPLE("\\");
	}
	ClassName = scope.ClassName;
	if (varValue) {
		StartingLineNumber = varValue->LineNumber;
	}
	return this;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeFunction(pelet::SemanticValueClass* nameValue, bool isReference,
        pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters, 
		const pelet::TokenPositionClass& startingBodyTokenValue, const pelet::TokenPositionClass& endingBodyTokenValue,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace, bool hasVariableArguments) {
	Type = pelet::StatementClass::FUNCTION_DECLARATION;
	SetNameAndReturnReference(nameValue, isReference, functionValue, scope, currentNamespace);
	NamespaceName = currentNamespace.ToSignature();
	ClassName = scope.ClassName;
	if (parameters) {
		ParametersList.Copy(*parameters);
	}
	if (nameValue) {
		StartingLineNumber = nameValue->LineNumber;
	}
	StartingPosition = startingBodyTokenValue.Pos;
	EndingPosition = endingBodyTokenValue.Pos;
	HasVariableArguments = hasVariableArguments;
	return this;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeMethod(pelet::SemanticValueClass* nameValue, pelet::ClassMemberSymbolClass* modifiers,
        bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters,
		pelet::ClassMemberSymbolClass* methodBody,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace, bool hasVariableArguments) {
	Type = pelet::StatementClass::METHOD_DECLARATION;
	SetNameAndReturnReference(nameValue, isReference, functionValue, scope, currentNamespace);
	NamespaceName = currentNamespace.ToSignature();
	if (NamespaceName.isEmpty()) {
		NamespaceName = UNICODE_STRING_SIMPLE("\\");
	}
	ClassName = scope.ClassName;
	if (parameters) {
		ParametersList.Copy(*parameters);
	}
	if (modifiers) {
		IsAbstractMember = modifiers->IsAbstractMember;
		IsFinalMember = modifiers->IsFinalMember;
		IsConstMember = modifiers->IsConstMember;
		IsStaticMember = modifiers->IsStaticMember;

		// comment can only be attached to the modifiers or the function keyword
		// the method may not have any modifiers
		if (Comment.isEmpty() && !modifiers->Comment.isEmpty()) {
			Comment.append(modifiers->Comment);
		}
		if (ReturnType.isEmpty() && !modifiers->ReturnType.isEmpty()) {
			ReturnType = modifiers->ReturnType;
		}
		if (modifiers->IsPublicMember) {
			SetAsPublic();
		}
		if (modifiers->IsProtectedMember) {
			SetAsProtected();
		}
		if (modifiers->IsPrivateMember) {
			SetAsPrivate();
		}
	}
	MethodStatements.PushAll(&methodBody->MethodStatements);
	StartingLineNumber = nameValue->LineNumber;
	StartingPosition = methodBody->StartingPosition;
	EndingPosition = methodBody->EndingPosition;
	HasVariableArguments = hasVariableArguments;
	return this;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::MakeVariable(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue,
        bool isConstant, const int startingLineNumber,
		const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	Type = pelet::StatementClass::PROPERTY_DECLARATION;
	if (isConstant) {
		SetAsConst(nameValue, commentValue, scope, currentNamespace);
	} else {
		SetNameAndReturnReference(nameValue, false, commentValue, scope, currentNamespace);
		if (nameValue && !nameValue->Lexeme.isEmpty() 
			&& nameValue->Lexeme.compareBetween(0, 1, UNICODE_STRING_SIMPLE("$"), 0, 1) != 0) {
			MemberName = UNICODE_STRING_SIMPLE("$") + MemberName;
		}
	}
	NamespaceName = currentNamespace.ToSignature();
	if (NamespaceName.isEmpty()) {
		NamespaceName = UNICODE_STRING_SIMPLE("\\");
	}
	ClassName = scope.ClassName;
	SetAsPublic();
	StartingLineNumber = startingLineNumber;
	if (nameValue) {
		EndingPosition = nameValue->Pos + nameValue->Lexeme.length();
	}
	return this;
}

pelet::StatementListClass* pelet::ClassMemberSymbolClass::MakeVariables(pelet::StatementListClass* variableStatements, 
	pelet::ClassMemberSymbolClass* modifiers, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {

	// set the modifiers on all of the given property declarations
	for (size_t i = 0; i < variableStatements->Size(); ++i) {
		pelet::StatementClass::Types type = variableStatements->TypeAt(i);
		if (pelet::StatementClass::PROPERTY_DECLARATION == type) {
			pelet::ClassMemberSymbolClass* member = (pelet::ClassMemberSymbolClass*)variableStatements->At(i);
			member->IsAbstractMember = modifiers->IsAbstractMember;
			member->IsFinalMember = modifiers->IsFinalMember;
			member->IsConstMember = modifiers->IsConstMember;
			member->IsStaticMember = modifiers->IsStaticMember;
			member->Comment.append(modifiers->Comment);
			if (member->ReturnType.isEmpty() && !modifiers->ReturnType.isEmpty()) {
				member->ReturnType = modifiers->ReturnType;
			}
			if (modifiers->IsPublicMember) {
				member->SetAsPublic();
			}
			if (modifiers->IsProtectedMember) {
				member->SetAsProtected();
			}
			if (modifiers->IsPrivateMember) {
				member->SetAsPrivate();
			}
		}
	}
	return variableStatements;
}

pelet::ClassMemberSymbolClass* pelet::ClassMemberSymbolClass::SetModifier(pelet::SemanticValueClass* modifierValue) {
	if (modifierValue) {
		if (pelet::T_PUBLIC == modifierValue->Token) {
			SetAsPublic();
		} 
		else if (pelet::T_PROTECTED == modifierValue->Token) {
			SetAsProtected();
		} 
		else if (pelet::T_PRIVATE == modifierValue->Token) {
			SetAsPrivate();
		}

		// no else statements here
		// abstract/static could be together with public/private
		if (pelet::T_ABSTRACT == modifierValue->Token) {
			IsAbstractMember = true;
		}
		if (pelet::T_FINAL == modifierValue->Token) {
			IsFinalMember = true;
		}
		if (pelet::T_CONST == modifierValue->Token) {
			IsConstMember = true;
		}
		if (pelet::T_STATIC == modifierValue->Token) {
			IsStaticMember = true;
		}
	}
	return this;
}

UnicodeString pelet::ClassMemberSymbolClass::GetComment() const {
	return Comment;
}

UnicodeString pelet::ClassMemberSymbolClass::GetReturnType() const {
	return ReturnType;
}

pelet::QualifiedNameClass::QualifiedNameClass()
	: Comment()
	, IsAbsolute(false)
	, LineNumber(0)
	, Pos(0)
	, Namespaces()
	, Alias() {

}

void pelet::QualifiedNameClass::Init(SemanticValueClass* value) {
	LineNumber = 0;
	Pos = 0;
	Alias.remove();
	if (value) {
		Comment.setTo(value->Comment);
		AppendName(value);
		LineNumber = value->LineNumber;
		Pos = value->Pos;
	}
}

void pelet::QualifiedNameClass::Clear() {
	Namespaces.clear();
	Alias.remove();
	IsAbsolute = false;
	LineNumber = 0;
	Pos = 0;
}

pelet::QualifiedNameClass* pelet::QualifiedNameClass::AppendName(SemanticValueClass* value) {
	if (value) {
		UnicodeString name = value->Lexeme;
		if (Namespaces.empty() && value) {
			IsAbsolute = value->Lexeme.indexOf(UNICODE_STRING_SIMPLE("\\")) == 0;
			if (IsAbsolute) {
				name.remove();
				value->Lexeme.extract(1, value->Lexeme.length() - 1, name);
			}
		}
		Namespaces.push_back(name);
	}
	return this;
}

pelet::QualifiedNameClass* pelet::QualifiedNameClass::MakeAbsolute() {
	IsAbsolute = true;
	return this;
}

void pelet::QualifiedNameClass::PrependNamespace(const QualifiedNameClass& name) {
	Namespaces.insert(Namespaces.begin(), name.Namespaces.begin(), name.Namespaces.end());
	
	// if we prepend an absolute namespace then this namespace becomes absolute
	IsAbsolute = name.IsAbsolute;
}

UnicodeString pelet::QualifiedNameClass::ToSignature() const {
	UnicodeString ret;
	if (IsAbsolute) {
		ret.append(UNICODE_STRING_SIMPLE("\\"));
	}
	
	std::vector<UnicodeString>::const_iterator nm;
	for (nm = Namespaces.begin(); nm != Namespaces.end(); ++nm) {
		if (Namespaces.begin() != nm) {
			ret.append(UNICODE_STRING_SIMPLE("\\"));
		}
		ret.append(*nm);
	}
	return ret;
}

void pelet::QualifiedNameClass::Init(const UnicodeString& name, int lineNumber, int pos) {
	Namespaces.push_back(name);
	LineNumber = lineNumber;
	Pos = pos;
}

pelet::QualifiedNameClass* pelet::QualifiedNameClass::MakeFromDeclaredNamespace(const pelet::QualifiedNameClass* currentNamespace) {
	if (currentNamespace) {
		IsAbsolute = currentNamespace->IsAbsolute;
		Namespaces = currentNamespace->Namespaces;
	}
	return this;
}

pelet::QualifiedNameClass* pelet::QualifiedNameClass::SetAlias(pelet::SemanticValueClass* alias) {
	Alias = alias->Lexeme;
	return this;
}

void pelet::QualifiedNameClass::SetAlias(const UnicodeString& alias) {
	Alias = alias;
}

UnicodeString pelet::QualifiedNameClass::GetAlias() const {
	return Alias;
}

bool pelet::QualifiedNameClass::IsEmpty() const {
	return Namespaces.empty();
}

pelet::QualifiedNameListClass::QualifiedNameListClass()
: Names() {
}

void pelet::QualifiedNameListClass::Push(pelet::QualifiedNameClass* qualifiedName) {
	Names.push_back(qualifiedName);
}

pelet::UnprefixedNameClass::UnprefixedNameClass()
: AstItemClass()
, NamespaceName()
, Alias() {
}

void pelet::UnprefixedNameClass::Set(pelet::QualifiedNameClass* qualifiedName) {
	NamespaceName = qualifiedName->ToSignature();
	int32_t index = NamespaceName.lastIndexOf(UNICODE_STRING_SIMPLE("\\"));

	//by default alias is the last part of the namespace name
	if (index >= 0) {
		Alias.setTo(NamespaceName, index + 1);
	}
	else {
		Alias = NamespaceName;
	}
}

void pelet::UnprefixedNameClass::Set(pelet::QualifiedNameClass* qualifiedName, pelet::SemanticValueClass* alias) {
		Set(qualifiedName);
		Alias = alias->Lexeme;
}

pelet::UnprefixedNameListClass::UnprefixedNameListClass()
: Names() {
}

void pelet::UnprefixedNameListClass::Push(pelet::UnprefixedNameClass* name) {
	Names.push_back(name);
}

pelet::FunctionImportClass::FunctionImportClass()
: StatementClass(pelet::StatementClass::FUNCTION_IMPORT)
, FunctionName()
, Alias()
, LineNumber(1)
, StartingPos(0) {
}

void pelet::FunctionImportClass::Init(const UnicodeString& functionName, pelet::SemanticValueClass* alias, int lineNumber,
	int startingPos) {
	FunctionName = functionName;
	Alias.remove();
	if (alias) {
		Alias = alias->Lexeme;
	}
	else {
		// the alias is the last part of the fully qualified name
		int32_t index = functionName.lastIndexOf(UNICODE_STRING_SIMPLE("\\"));
		if (index >= 0) {
			Alias.setTo(functionName, index + 1);
		}
		else {
			Alias = functionName;
		}

	}
	LineNumber = lineNumber;
	StartingPos = startingPos;
}

pelet::ConstantImportClass::ConstantImportClass()
: StatementClass(pelet::StatementClass::CONSTANT_IMPORT)
, ConstantName()
, Alias()
, LineNumber(1)
, StartingPos(0) {
}

void pelet::ConstantImportClass::Init(const UnicodeString& constantName, pelet::SemanticValueClass* alias, int lineNumber,
	int startingPos) {
	ConstantName = constantName;
	Alias.remove();
	if (alias) {
		Alias = alias->Lexeme;
	}
	else {
		// the alias is the last part of the fully qualified name
		int32_t index = constantName.lastIndexOf(UNICODE_STRING_SIMPLE("\\"));
		if (index >= 0) {
			Alias.setTo(constantName, index + 1);
		}
		else {
			Alias = constantName;
		}
	}
	LineNumber = lineNumber;
	StartingPos = startingPos;
}

pelet::ParametersListClass::ParametersListClass()
	: Params()
	, OptionalTypes() 
	, Defaults()
	, IsVariadics()
	, IsNullables() {

}

void pelet::ParametersListClass::Create() {
	Params.push_back(UNICODE_STRING_SIMPLE(""));
	OptionalTypes.push_back(UNICODE_STRING_SIMPLE(""));
	Defaults.push_back(UNICODE_STRING_SIMPLE(""));
	IsVariadics.push_back(false);
	IsNullables.push_back(false);
}

void pelet::ParametersListClass::CreateWithOptionalType(pelet::SemanticValueClass* typeValue) {
	Params.push_back(UNICODE_STRING_SIMPLE(""));
	if (typeValue) {
		OptionalTypes.push_back(typeValue->Lexeme);
	} else {
		OptionalTypes.push_back(UNICODE_STRING_SIMPLE(""));
	}
	Defaults.push_back(UNICODE_STRING_SIMPLE(""));
	IsVariadics.push_back(false);
	IsNullables.push_back(false);
}

void pelet::ParametersListClass::CreateWithOptionalType(const UnicodeString& className) {
	Params.push_back(UNICODE_STRING_SIMPLE(""));
	if (!className.isEmpty()) {
		OptionalTypes.push_back(className);
	} else {
		OptionalTypes.push_back(UNICODE_STRING_SIMPLE(""));
	}
	Defaults.push_back(UNICODE_STRING_SIMPLE(""));
	IsVariadics.push_back(false);
	IsNullables.push_back(false);
}

void pelet::ParametersListClass::Clear() {
	Params.clear();
	OptionalTypes.clear();
	Defaults.clear();
	IsVariadics.clear();
	IsNullables.clear();
}

void pelet::ParametersListClass::Copy(const pelet::ParametersListClass& src) {
	Params = src.Params;
	OptionalTypes = src.OptionalTypes;
	Defaults = src.Defaults;
	IsVariadics = src.IsVariadics;
	IsNullables = src.IsNullables;
}

void pelet::ParametersListClass::SetName(SemanticValueClass* value, bool isReference, bool hasDefault) {
	if (value) {
		Params.back().setTo(value->Lexeme);
		if (isReference) {
			Params.back().insert(0, UNICODE_STRING_SIMPLE("&"));
		}
		if (hasDefault) {
			Defaults.back() =  UNICODE_STRING_SIMPLE("...");
		}
	}
}

void pelet::ParametersListClass::SetVariadic(bool isVariadic) {
	IsVariadics.back() = isVariadic;
}

UnicodeString pelet::ParametersListClass::ToSignature() const {
	UnicodeString signature = UNICODE_STRING_SIMPLE("(");
	size_t i = 0;
	for (; i < Params.size(); ++i) {
		if (!OptionalTypes[i].isEmpty()) {
			if (IsNullables[i]) {
				signature.append(UNICODE_STRING_SIMPLE("?"));
			}
			signature.append(OptionalTypes[i]);
			signature.append(UNICODE_STRING_SIMPLE(" "));
		}
		if (IsVariadics[i]) {
			signature.append(UNICODE_STRING_SIMPLE("..."));
		}
		signature.append(Params[i]);
		if (!Defaults[i].isEmpty()) {
			signature.append(UNICODE_STRING_SIMPLE("="));
			signature.append(Defaults[i]);
		}
		
		if (i < (Params.size() - 1)) {
			signature.append(UNICODE_STRING_SIMPLE(", "));
		}
		
	}
	signature.append(UNICODE_STRING_SIMPLE(")"));
	return signature;
}

size_t pelet::ParametersListClass::GetCount() const {
	return Params.size();
}

void pelet::ParametersListClass::Param(size_t index, UnicodeString& param, UnicodeString& optionalType) const {
	if (index < Params.size()) {
		param.setTo(Params[index]);
	}
	if (index < OptionalTypes.size()) {
		optionalType.setTo(OptionalTypes[index]);
	}
}

bool pelet::ParametersListClass::IsVariadicAt(size_t index) const {
	bool isVariadic = false;
	if (index < IsVariadics.size()) {
		isVariadic = IsVariadics[index];
	}
	return isVariadic;
}

pelet::ParametersListClass* pelet::ParametersListClass::Append(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, 
															   bool isReference, bool hasDefault,
															   const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	UnicodeString typeString;
	if (type) {
		typeString = type->ToSignature();
		
		// array, callable type hints are keywords, do not qualify them
		if (typeString == UNICODE_STRING_SIMPLE("\\")) {
			typeString = UNICODE_STRING_SIMPLE("");
		}
		else if (typeString == UNICODE_STRING_SIMPLE("array")) {
			typeString = UNICODE_STRING_SIMPLE("array");
		}
		else if (typeString == UNICODE_STRING_SIMPLE("callable")) {
			typeString = UNICODE_STRING_SIMPLE("callable");
		}
		else {
			typeString = scope.FullyQualify(*type, currentNamespace);
		}
	}
	CreateWithOptionalType(typeString);
	SetName(parameterName, isReference, hasDefault);
	return this;
}

pelet::ParametersListClass* pelet::ParametersListClass::Append(pelet::TypeHintClass* type, pelet::SemanticValueClass* parameterName, 
															   bool isReference, bool hasDefault,
															   const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	UnicodeString typeString;
	if (type) {
		typeString = type->NamespaceName;
		
		// array, callable type hints are keywords, do not qualify them
		if (typeString == UNICODE_STRING_SIMPLE("\\")) {
			typeString = UNICODE_STRING_SIMPLE("");
		}
		else if (typeString == UNICODE_STRING_SIMPLE("array")) {
			typeString = UNICODE_STRING_SIMPLE("array");
		}
		else if (typeString == UNICODE_STRING_SIMPLE("callable")) {
			typeString = UNICODE_STRING_SIMPLE("callable");
		}
	}
	CreateWithOptionalType(typeString);
	SetName(parameterName, isReference, hasDefault);
	if (type) {
		IsNullables.back() = type->IsNullable;
	}
	return this;
}

pelet::ParametersListClass* pelet::ParametersListClass::Append(pelet::ParametersListClass* src) {
	for (size_t i = 0; i < src->Params.size(); i++) {
		Params.push_back(src->Params[i]);
	}
	for (size_t i = 0; i < src->OptionalTypes.size(); i++) {
		OptionalTypes.push_back(src->OptionalTypes[i]);
	}
	for (size_t i = 0; i < src->Defaults.size(); i++) {
		Defaults.push_back(src->Defaults[i]);
	}
	for (size_t i = 0; i < src->IsVariadics.size(); i++) {
		IsVariadics.push_back(src->IsVariadics[i]);
	}
	for (size_t i = 0; i < src->IsNullables.size(); i++) {
		IsNullables.push_back(src->IsNullables[i]);
	}

	return this;
}

void pelet::ParametersListClass::Init(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, 
								      bool isReference, bool hasDefault,
									  const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace) {
	UnicodeString typeString;
	if (type) {
		typeString = type->ToSignature();
		
		// array, callable type hints are keywords, do not qualify them
		if (typeString == UNICODE_STRING_SIMPLE("\\")) {
			typeString = UNICODE_STRING_SIMPLE("");
		}
		else if (typeString == UNICODE_STRING_SIMPLE("array")) {
			typeString = UNICODE_STRING_SIMPLE("array");
		}
		else if (typeString == UNICODE_STRING_SIMPLE("callable")) {
			typeString = UNICODE_STRING_SIMPLE("callable");
		}
		else {
			typeString = scope.FullyQualify(*type, currentNamespace);
		}
	}
	CreateWithOptionalType(typeString);
	SetName(parameterName, isReference, hasDefault);
}

pelet::ExpressionClass::ExpressionClass(const pelet::ScopeClass& scope)
: StatementClass(pelet::StatementClass::EXPRESSION)
, Scope(scope)
, ExpressionType(SCALAR)
, LineNumber(0) 
, Pos(0)
, IsUnpack(false) {

}

void pelet::ExpressionClass::Copy(const pelet::ExpressionClass& src) {
	Scope = src.Scope;
	ExpressionType = src.ExpressionType;
	Type = src.Type;
	LineNumber = src.LineNumber;
	Pos = src.Pos;
    IsUnpack = src.IsUnpack;
}

pelet::ScalarExpressionClass::ScalarExpressionClass()
: ExpressionClass(ScopeClass())
, Value()
, Offsets() {
	ExpressionType = pelet::ExpressionClass::SCALAR;
}

pelet::ScalarExpressionClass::ScalarExpressionClass(const ScopeClass& scope)
: ExpressionClass(scope)
, Value()
, Offsets() {
	ExpressionType = pelet::ExpressionClass::SCALAR;
}

pelet::ScalarExpressionClass::ScalarExpressionClass(const pelet::ScalarExpressionClass& src)
: ExpressionClass(src.Scope) 
, Value()
, Offsets() {
	ExpressionType = pelet::ExpressionClass::SCALAR;
	Copy(src);
}

pelet::ScalarExpressionClass& pelet::ScalarExpressionClass::operator=(const pelet::ScalarExpressionClass& src) {
	Copy(src);
	return *this;
}

void pelet::ScalarExpressionClass::Copy(const pelet::ScalarExpressionClass& src) {
	pelet::ExpressionClass::Copy(src);
	Value = src.Value;
	Offsets = src.Offsets;
}

void pelet::ScalarExpressionClass::Init(pelet::SemanticValueClass* value) {
	if (value) {
		Value = value->Lexeme;
	}
}

pelet::NewInstanceExpressionClass::NewInstanceExpressionClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, ClassName() {
	ExpressionType = pelet::ExpressionClass::NEW_CALL;
}

pelet::NewInstanceExpressionClass::NewInstanceExpressionClass(const pelet::NewInstanceExpressionClass& src)
: ExpressionClass(src.Scope)
, ClassName()
, ChainList() {
	ExpressionType = pelet::ExpressionClass::NEW_CALL;
	Copy(src);
}

pelet::NewInstanceExpressionClass& pelet::NewInstanceExpressionClass::operator=(const pelet::NewInstanceExpressionClass& src) {
	Copy(src);
	return *this;
}

void pelet::NewInstanceExpressionClass::Copy(const pelet::NewInstanceExpressionClass& src) {
	pelet::ExpressionClass::Copy(src);
	ClassName = src.ClassName;
	ChainList = src.ChainList;
}

void pelet::NewInstanceExpressionClass::AddStatementsAsArguments(pelet::StatementListClass* statements) {
	if (statements) {
		for (size_t i = 0; i < statements->Size(); ++i) {
			if (pelet::StatementClass::EXPRESSION == statements->TypeAt(i)) {
				CallArguments.push_back((pelet::ExpressionClass*)statements->At(i));
			}
		}
	}
}

void pelet::NewInstanceExpressionClass::AddToChain(pelet::VariableClass* var) {
	for (size_t i = 0; i < var->ChainList.size(); ++i) {
		ChainList.push_back(var->ChainList[i]);
	}
}

pelet::ArrayPairExpressionClass::ArrayPairExpressionClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, Key(NULL)
, Value(NULL)
, Pairs() {
	ExpressionType = pelet::ExpressionClass::ARRAY_PAIR;
}

pelet::ArrayPairExpressionClass::ArrayPairExpressionClass(const pelet::ArrayPairExpressionClass& src)
: ExpressionClass(src.Scope)
, Key(NULL)
, Value(NULL)
, Pairs() {
	ExpressionType = pelet::ExpressionClass::ARRAY_PAIR;
	Copy(src);
}

pelet::ArrayPairExpressionClass& pelet::ArrayPairExpressionClass::operator=(const pelet::ArrayPairExpressionClass& src) {
	Copy(src);
	return *this;
}

void pelet::ArrayPairExpressionClass::Copy(const pelet::ArrayPairExpressionClass& src) {
	pelet::ExpressionClass::Copy(src);
	Key = src.Key;
	Value = src.Value;
	Pairs = src.Pairs;
}


pelet::ArrayExpressionClass::ArrayExpressionClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, ArrayPairs()
, Offsets() {
	ExpressionType = pelet::ExpressionClass::ARRAY;
}

pelet::ArrayExpressionClass::ArrayExpressionClass(const pelet::ArrayExpressionClass& src)
: ExpressionClass(src.Scope)
, ArrayPairs()
, Offsets() {
	ExpressionType = pelet::ExpressionClass::ARRAY;
	Copy(src);
}

pelet::ArrayExpressionClass& pelet::ArrayExpressionClass::operator=(const pelet::ArrayExpressionClass& src) {
	Copy(src);
	return *this;
}

void pelet::ArrayExpressionClass::Copy(const pelet::ArrayExpressionClass& src) {
	pelet::ExpressionClass::Copy(src);
	ArrayPairs = src.ArrayPairs;
	Offsets = src.Offsets;
}

pelet::VariableClass::VariableClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, Comment()
, PhpDocType()
, ChainList()
, IsReference(false)
, IsIndirect(false)
, IsPhpDocVariable(false) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::VARIABLE;
}

pelet::VariableClass::VariableClass(const pelet::VariableClass& src)
: ExpressionClass(src.Scope)
, Comment()
, PhpDocType()
, ChainList() 
, IsReference(false)
, IsIndirect(false)
, IsPhpDocVariable(false) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::VARIABLE;
	Copy(src);
}

pelet::VariableClass& pelet::VariableClass::operator =(const pelet::VariableClass& src) {
	Copy(src);
	return *this;
}

void pelet::VariableClass::Copy(const pelet::VariableClass& src) {
	pelet::ExpressionClass::Copy(src);
	Comment = src.Comment;
	PhpDocType = src.PhpDocType;
	ChainList = src.ChainList;
	Type = src.Type;
	IsReference = src.IsReference;
	IsIndirect = src.IsIndirect;
	IsPhpDocVariable = src.IsPhpDocVariable;
}

void pelet::VariableClass::AppendToComment(pelet::SemanticValueClass* value) {
	if (value) {
		Comment.append(value->Comment);
	}
}

void pelet::VariableClass::Clear() {
	Comment.remove();
	PhpDocType.remove();
	ChainList.clear();
	Scope.Clear();
	LineNumber = 0;
	IsReference = false;
	IsPhpDocVariable = false;
}

void pelet::VariableClass::AppendToChain(const UnicodeString& propertyValue) {
	pelet::VariablePropertyClass prop;
	prop.Name = propertyValue;
	prop.IsFunction = false;
	prop.IsStatic = false;
	ChainList.push_back(prop);	
}

void pelet::VariableClass::AppendToChain(const UnicodeString& propertyValue,
		std::vector<pelet::ExpressionClass*> callArguments, bool isMethod, bool isStatic) {
	pelet::VariablePropertyClass prop;
	prop.Name = propertyValue;
	prop.CallArguments = callArguments;
	prop.IsFunction = isMethod;
	prop.IsStatic = isStatic;
	ChainList.push_back(prop);	
}

void pelet::VariableClass::AppendToChain(pelet::ExpressionClass* callableExpr) {
	pelet::VariablePropertyClass prop;
	prop.CallableExpression = callableExpr;
	prop.IsCallableExpression = true;
	ChainList.push_back(prop);
}

void pelet::VariableClass::AppendToChain(pelet::ExpressionClass* callableExpr, std::vector<pelet::ExpressionClass*> arguments) {
	pelet::VariablePropertyClass prop;
	prop.CallableExpression = callableExpr;
	prop.CallArguments = arguments;
	prop.IsCallableExpression = true;
	prop.IsFunction = true;
	ChainList.push_back(prop);
}

void pelet::VariableClass::ToStaticFunctionCall(const UnicodeString& className, const UnicodeString& propertyName, bool isMethod) {
	Clear();
	if (!className.isEmpty()) {
		pelet::VariablePropertyClass objectCall;
		objectCall.Name = className;
		ChainList.push_back(objectCall);
	}
	if (!propertyName.isEmpty()) {
		pelet::VariablePropertyClass objectCall;
		objectCall.Name = propertyName;
		objectCall.IsFunction = isMethod;
		objectCall.IsStatic = true;
		ChainList.push_back(objectCall);
	}
}

pelet::SemanticValueClass::SemanticValueClass() 
	: AstItemClass()
	, Lexeme()
	, Comment()
	, Token(0)
	, Pos(0)
	, LineNumber(0) {
		
}

pelet::AssignmentExpressionClass::AssignmentExpressionClass(const pelet::ScopeClass& scope)
	: ExpressionClass(scope)
	, Destination(scope) 
	, Expression(NULL) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::ASSIGNMENT;
}

pelet::AssignmentExpressionClass::AssignmentExpressionClass(const pelet::AssignmentExpressionClass& src)
: ExpressionClass(src.Scope)
, Destination(src.Scope)
, Expression(NULL) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::ASSIGNMENT;
	Copy(src);
}

pelet::AssignmentExpressionClass& pelet::AssignmentExpressionClass::operator=(const pelet::AssignmentExpressionClass& src) {
	Copy(src);
	return *this;
}

void pelet::AssignmentExpressionClass::Copy(const pelet::AssignmentExpressionClass& src) {
	pelet::ExpressionClass::Copy(src);
	Destination.Copy(src.Destination);
	Expression = src.Expression;
}

pelet::AssignmentListExpressionClass::AssignmentListExpressionClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, Destinations() {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::ASSIGNMENT_LIST;
}

pelet::AssignmentListExpressionClass::AssignmentListExpressionClass(const pelet::AssignmentListExpressionClass& src)
: ExpressionClass(src.Scope)
, Destinations() {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::ASSIGNMENT_LIST;
	Copy(src);
}

pelet::AssignmentListExpressionClass& pelet::AssignmentListExpressionClass::operator=(const pelet::AssignmentListExpressionClass& src) {
	Copy(src);
	return *this;
}

void pelet::AssignmentListExpressionClass::Copy(const pelet::AssignmentListExpressionClass& src) {
	pelet::ExpressionClass::Copy(src);
	Destinations = src.Destinations;
}


pelet::AssignmentCompoundExpressionClass::AssignmentCompoundExpressionClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, Variable(scope)
, Operator(0) 
, RightOperand(NULL) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::ASSIGNMENT_COMPOUND;
}

pelet::AssignmentCompoundExpressionClass::AssignmentCompoundExpressionClass(const pelet::AssignmentCompoundExpressionClass& src)
: ExpressionClass(src.Scope)
, Variable(src.Scope)
, Operator(0) 
, RightOperand(NULL) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::ASSIGNMENT_COMPOUND;
	Copy(src);
}

pelet::AssignmentCompoundExpressionClass& pelet::AssignmentCompoundExpressionClass::operator=(const pelet::AssignmentCompoundExpressionClass& src) {
	Copy(src);
	return *this;
}

void pelet::AssignmentCompoundExpressionClass::Copy(const pelet::AssignmentCompoundExpressionClass& src) {
	pelet::ExpressionClass::Copy(src);
	Variable.Copy(src.Variable);
	Operator = src.Operator;
	RightOperand = src.RightOperand;
}

pelet::BinaryOperationClass::BinaryOperationClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, LeftOperand(NULL)
, Operator(0)
, RightOperand(NULL) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::BINARY_OPERATION;
}

pelet::BinaryOperationClass::BinaryOperationClass(const pelet::BinaryOperationClass& src)
: ExpressionClass(src.Scope)
, LeftOperand(NULL)
, Operator(0)
, RightOperand(NULL) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::BINARY_OPERATION;
	Copy(src);
}

pelet::BinaryOperationClass& pelet::BinaryOperationClass::operator=(const pelet::BinaryOperationClass& src) {
	Copy(src);
	return *this;
}

void pelet::BinaryOperationClass::Copy(const pelet::BinaryOperationClass& src) {
	pelet::ExpressionClass::Copy(src);
	LeftOperand = src.LeftOperand;
	Operator = src.Operator;
	RightOperand = src.RightOperand;
}

pelet::UnaryOperationClass::UnaryOperationClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, Operator(0)
, Operand(NULL) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::UNARY_OPERATION;
}

pelet::UnaryOperationClass::UnaryOperationClass(const pelet::UnaryOperationClass& src) 
: ExpressionClass(src.Scope)
, Operator(0)
, Operand(NULL) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::UNARY_OPERATION;
	Copy(src);
}

pelet::UnaryOperationClass& pelet::UnaryOperationClass::operator=(const pelet::UnaryOperationClass& src) {
	Copy(src);
	return *this;
}

void pelet::UnaryOperationClass::Copy(const pelet::UnaryOperationClass& src) {
	pelet::ExpressionClass::Copy(src);
	Operator = src.Operator;
	Operand = src.Operand;
}

pelet::UnaryVariableOperationClass::UnaryVariableOperationClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, Operator(0)
, Variable(scope) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::UNARY_VARIABLE_OPERATION;
}

pelet::UnaryVariableOperationClass::UnaryVariableOperationClass(const pelet::UnaryVariableOperationClass& src)
: ExpressionClass(src.Scope)
, Operator(0)
, Variable(src.Scope) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::UNARY_VARIABLE_OPERATION;
	Copy(src);
}

pelet::UnaryVariableOperationClass& pelet::UnaryVariableOperationClass::operator=(const pelet::UnaryVariableOperationClass& src) {
	Copy(src);
	return *this;
}

void pelet::UnaryVariableOperationClass::Copy(const pelet::UnaryVariableOperationClass& src) {
	pelet::ExpressionClass::Copy(src);
	Operator = src.Operator;
	Variable.Copy(src.Variable);
}

pelet::TernaryOperationClass::TernaryOperationClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, Expression1(NULL)
, Expression2(NULL)
, Expression3(NULL) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::TERNARY_OPERATION;
}

pelet::TernaryOperationClass::TernaryOperationClass(const pelet::TernaryOperationClass& src) 
: ExpressionClass(src.Scope)
, Expression1(NULL)
, Expression2(NULL)
, Expression3(NULL) {
	Type = pelet::StatementClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::TERNARY_OPERATION;
	Copy(src);
}

pelet::TernaryOperationClass& pelet::TernaryOperationClass::operator=(const pelet::TernaryOperationClass& src) {
	Copy(src);
	return *this;
}

void pelet::TernaryOperationClass::Copy(const pelet::TernaryOperationClass& src) {
	pelet::ExpressionClass::Copy(src);
	Expression1 = src.Expression1;
	Expression2 = src.Expression2;
	Expression3 = src.Expression3;
}

pelet::InstanceOfOperationClass::InstanceOfOperationClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, Expression1(NULL)
, ClassName() {
	Type = pelet::ExpressionClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::INSTANCEOF_OPERATION;
}

pelet::InstanceOfOperationClass::InstanceOfOperationClass(const pelet::InstanceOfOperationClass& src)
: ExpressionClass(src.Scope)
, Expression1(NULL)
, ClassName() {
	Type = pelet::ExpressionClass::EXPRESSION;
	ExpressionType = pelet::ExpressionClass::INSTANCEOF_OPERATION;
	Copy(src);
}

pelet::InstanceOfOperationClass& pelet::InstanceOfOperationClass::operator=(const pelet::InstanceOfOperationClass& src) {
	Copy(src);
	return *this;
}

void pelet::InstanceOfOperationClass::Copy(const pelet::InstanceOfOperationClass& src) {
	pelet::ExpressionClass::Copy(src);
	Expression1 = src.Expression1;
	ClassName = src.ClassName;
}

pelet::GlobalVariableStatementClass::GlobalVariableStatementClass()
: StatementClass(pelet::StatementClass::GLOBAL_VARIABLE_DECLARATION)
, Variables() {

}

pelet::StaticVariableStatementClass::StaticVariableStatementClass()
: StatementClass(pelet::StatementClass::STATIC_VARIABLE_DECLARATION)
, Variables() {

}

pelet::ClosureExpressionClass::ClosureExpressionClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope) 
, Parameters() 
, LexicalVars() 
, Statements()
, ReturnType()
, StartingPosition(0)
, EndingPosition(0) {
	ExpressionType = pelet::ExpressionClass::CLOSURE;
}

pelet::ClosureExpressionClass::ClosureExpressionClass(const pelet::ClosureExpressionClass& src)
: ExpressionClass(src.Scope) 
, Parameters() 
, LexicalVars() 
, Statements()
, ReturnType() 
, StartingPosition(0)
, EndingPosition(0) {
	ExpressionType = pelet::ExpressionClass::CLOSURE;
	Copy(src);
}

pelet::ClosureExpressionClass& pelet::ClosureExpressionClass::operator=(const pelet::ClosureExpressionClass& src) {
	Copy(src);
	return *this;
}

void pelet::ClosureExpressionClass::Copy(const pelet::ClosureExpressionClass& src) {
	pelet::ExpressionClass::Copy(src);
	Parameters = src.Parameters;
	LexicalVars = src.LexicalVars;
	Statements.Clear();
	Statements.PushAll(&src.Statements);
	ReturnType = src.ReturnType;
	StartingPosition = src.StartingPosition;
	EndingPosition = src.EndingPosition;
}

void pelet::ClosureExpressionClass::SetReturnType(QualifiedNameClass* qualifiedName, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	if (!qualifiedName->IsEmpty()) {
		ReturnType = PhpDocTypeToAbsoluteClassname(qualifiedName->ToSignature(), scope, declaredNamespace);
	}
}

void pelet::ClosureExpressionClass::SetReturnType(pelet::TypeHintClass* qualifiedName, const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& declaredNamespace) {
	if (!qualifiedName->NamespaceName.isEmpty()) {
		ReturnType = PhpDocTypeToAbsoluteClassname(qualifiedName->NamespaceName, scope, declaredNamespace);
	}
}

pelet::ScopeClass::ScopeClass()
	: NamespaceName()
	, ClassName()
	, MethodName()
	, NamespaceAliases(NULL)
	, FunctionAliases(NULL)
	, ConstantAliases(NULL)
	, AnonymousFunctionCount(-1)
{
}

pelet::ScopeClass::~ScopeClass() {
	if (NamespaceAliases) {
		delete NamespaceAliases;
	}
	if (FunctionAliases) {
		delete FunctionAliases;
	}
	if (ConstantAliases) {
		delete ConstantAliases;
	}
}


pelet::ScopeClass::ScopeClass(const pelet::ScopeClass& src)
	: NamespaceName()
	, ClassName()
	, MethodName()
	, NamespaceAliases(NULL)
	, FunctionAliases(NULL)
	, ConstantAliases(NULL)
	, AnonymousFunctionCount(-1)
{
	Copy(src);
}

void pelet::ScopeClass::Clear() {
	NamespaceName.remove();
	ClassName.remove();
	MethodName.remove();
	if (NamespaceAliases) {
		NamespaceAliases->clear();
	}
	if (FunctionAliases) {
		FunctionAliases->clear();
	}
	if (ConstantAliases) {
		ConstantAliases->clear();
	}
	AnonymousFunctionCount = -1;
}

void pelet::ScopeClass::ClearAliases() {
	if (NamespaceAliases) {
		NamespaceAliases->clear();
	}
	if (FunctionAliases) {
		FunctionAliases->clear();
	}
	if (ConstantAliases) {
		ConstantAliases->clear();
	}
}

void pelet::ScopeClass::Copy(const pelet::ScopeClass& src) {
	NamespaceName = src.NamespaceName;
	ClassName = src.ClassName;
	MethodName = src.MethodName;
	if (!NamespaceAliases && src.NamespaceAliases) {
		NamespaceAliases = new std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>(*src.NamespaceAliases);
	}
	else if (NamespaceAliases && !src.NamespaceAliases) {
		NamespaceAliases->clear();
	}
	else if (NamespaceAliases && src.NamespaceAliases) {
		*NamespaceAliases = *src.NamespaceAliases;
	}

	if (!FunctionAliases && src.FunctionAliases) {
		FunctionAliases = new std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>(*src.FunctionAliases);
	}
	else if (FunctionAliases && !src.FunctionAliases) {
		FunctionAliases->clear();
	}
	else if (FunctionAliases && src.FunctionAliases) {
		*FunctionAliases = *src.FunctionAliases;
	}

	if (!ConstantAliases && src.ConstantAliases) {
		ConstantAliases = new std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>(*src.ConstantAliases);
	}
	else if (ConstantAliases && !src.ConstantAliases) {
		ConstantAliases->clear();
	}
	else if (ConstantAliases && src.ConstantAliases) {
		*ConstantAliases = *src.ConstantAliases;
	}

	AnonymousFunctionCount = src.AnonymousFunctionCount;
}

void pelet::ScopeClass::operator =(const pelet::ScopeClass& scope) {
	Copy(scope);
}

bool pelet::ScopeClass::IsGlobalScope() const {
	return ClassName.isEmpty() && MethodName.isEmpty();
}

bool pelet::ScopeClass::IsGlobalNamespace() const {
	return UNICODE_STRING_SIMPLE("\\").compare(NamespaceName) == 0 || NamespaceName.isEmpty();
}

bool pelet::ScopeClass::IsAnonymousScope() const {
	return AnonymousFunctionCount >= 0;
}

void pelet::ScopeClass::AddNamespaceAlias(const UnicodeString& namespaceName, const UnicodeString& namespaceAlias) {
	if (!NamespaceAliases) {
		NamespaceAliases = new std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>();
	}
	
	// a namespace alias is always fully qualified
	// add the beginning slash if not there
	UnicodeString fullyQualified;
	if (namespaceName.indexOf(UNICODE_STRING_SIMPLE("\\")) != 0) {
		fullyQualified.append(UNICODE_STRING_SIMPLE("\\"));
	}
	fullyQualified.append(namespaceName);
	(*NamespaceAliases)[namespaceAlias] = fullyQualified;
}

void pelet::ScopeClass::AddFunctionAlias(const UnicodeString& namespaceName, const UnicodeString& functionAlias) {
	if (!FunctionAliases) {
		FunctionAliases = new std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>();
	}
	
	// a namespace alias is always fully qualified
	// add the beginning slash if not there
	UnicodeString fullyQualified;
	if (namespaceName.indexOf(UNICODE_STRING_SIMPLE("\\")) != 0) {
		fullyQualified.append(UNICODE_STRING_SIMPLE("\\"));
	}
	fullyQualified.append(namespaceName);
	(*FunctionAliases)[functionAlias] = fullyQualified;
}

void pelet::ScopeClass::AddConstantAlias(const UnicodeString& namespaceName, const UnicodeString& constantAlias) {
	if (!ConstantAliases) {
		ConstantAliases = new std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>();
	}
	
	// a namespace alias is always fully qualified
	// add the beginning slash if not there
	UnicodeString fullyQualified;
	if (namespaceName.indexOf(UNICODE_STRING_SIMPLE("\\")) != 0) {
		fullyQualified.append(UNICODE_STRING_SIMPLE("\\"));
	}
	fullyQualified.append(namespaceName);
	(*ConstantAliases)[constantAlias] = fullyQualified;
}

UnicodeString pelet::ScopeClass::ResolveAlias(const UnicodeString& alias) const {
	UnicodeString fullName;
	if (NamespaceAliases) {
		std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>::const_iterator it = NamespaceAliases->find(alias);
		if (it != NamespaceAliases->end()) {
			fullName = it->second;
		}
	}
	return fullName;
}

UnicodeString pelet::ScopeClass::ResolveFunctionAlias(const UnicodeString& alias) const {
	UnicodeString fullName;
	if (FunctionAliases) {
		std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>::const_iterator it = FunctionAliases->find(alias);
		if (it != FunctionAliases->end()) {
			fullName = it->second;
		}
	}
	return fullName;
}

UnicodeString pelet::ScopeClass::ResolveConstantAlias(const UnicodeString& alias) const {
	UnicodeString fullName;
	if (ConstantAliases) {
		std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>::const_iterator it = ConstantAliases->find(alias);
		if (it != ConstantAliases->end()) {
			fullName = it->second;
		}
	}
	return fullName;
}

std::map<UnicodeString, UnicodeString, pelet::UnicodeStringComparatorClass> pelet::ScopeClass::GetNamespaceAliases() const {
	std::map<UnicodeString, UnicodeString, pelet::UnicodeStringComparatorClass> map;
	if (NamespaceAliases) {
		map.insert(NamespaceAliases->begin(), NamespaceAliases->end());
	}
	return map;
}

UnicodeString pelet::ScopeClass::FullyQualify(const pelet::QualifiedNameClass& name,
											const pelet::QualifiedNameClass& namespaceName) const {
	
	UnicodeString fullyQualified;
	if (name.ToSignature().isEmpty()) {
		return fullyQualified;
	}


	// does name use an alias?
	UnicodeString alias;
	UnicodeString qualified = name.ToSignature();
	int32_t index = qualified.indexOf(UNICODE_STRING_SIMPLE("\\"));
	if (index > 0) {
		alias.setTo(qualified, 0, index);
	}
	else {
		alias.setTo(qualified);
	}
	if (alias == UNICODE_STRING_SIMPLE("parent") ||
		alias == UNICODE_STRING_SIMPLE("static") ||
		alias == UNICODE_STRING_SIMPLE("self")) {

		// these keywords can be used as class names
		return alias;
	}
	UnicodeString fullNamespace = ResolveAlias(alias);
	if (!fullNamespace.isEmpty() && index >= 0) {

		// name is an aliased namespace. for example
		// USE Second\Child AS C;                 C\Result
		// where fullNamespace = \Second\Child alias = C
		// then the fully qualified name should be \Second\Child\Result
		fullyQualified.setTo(qualified, index + 1);
		fullyQualified = fullNamespace + UNICODE_STRING_SIMPLE("\\") + fullyQualified;
	}
	else if (!fullNamespace.isEmpty()) {

		// name is an aliased class. for example
		// USE Symfony\Request AS sfRequest      sfRequest
		// where fullNamespace = \Symfony\Request alias = sfRequest
		fullyQualified = fullNamespace;
	} 
	else if (name.IsAbsolute) {
		
		// no alias but the name is already fully qualified
		fullyQualified = name.ToSignature();
	}
	else {

		// no alias, prepend the curent namespace
		pelet::QualifiedNameClass fullName;
		fullName.PrependNamespace(name);
		fullName.PrependNamespace(namespaceName);
		if (namespaceName.ToSignature().isEmpty() && name.ToSignature().indexOf('\\') > 0) {
			
			// when a relative namespace is seen in a piece of code that does not
			// declare a namespace, then the relative namespace is really an absolute 
			// namespace
			// example : "Util\MyClass" in non-namespaced code is really "\Util\MyClass"
			// 
			fullName.MakeAbsolute();
		}
		fullyQualified = fullName.ToSignature();
	}
	return fullyQualified;
}

UnicodeString pelet::ScopeClass::FullyQualifyFunction(const pelet::QualifiedNameClass& functionName,
											const pelet::QualifiedNameClass& namespaceName) const {
	UnicodeString fullyQualified;
	if (functionName.ToSignature().isEmpty()) {
		return fullyQualified;
	}
	// is the function name an alias?
	UnicodeString aliased = ResolveFunctionAlias(functionName.ToSignature());
	if (!aliased.isEmpty()) {
		return aliased;
	}
	return FullyQualify(functionName, namespaceName);
}

UnicodeString pelet::ScopeClass::FullyQualifyConstant(const pelet::QualifiedNameClass& constantName,
											const pelet::QualifiedNameClass& namespaceName) const {
	UnicodeString fullyQualified;
	if (constantName.ToSignature().isEmpty()) {
		return fullyQualified;
	}
	// is the constant name an alias?
	UnicodeString aliased = ResolveConstantAlias(constantName.ToSignature());
	if (!aliased.isEmpty()) {
		return aliased;
	}
	return FullyQualify(constantName, namespaceName);				
}

void pelet::ScopeClass::SetIsAnonymous(bool isAnonymousFunction, int anonymousFunctionCount) {
	if (isAnonymousFunction) {
		AnonymousFunctionCount = anonymousFunctionCount;
	}
	else {
		AnonymousFunctionCount = -1;
	}
}

int pelet::ScopeClass::GetAnonymousFunctionCount() const {
	return AnonymousFunctionCount;
}

pelet::VariablePropertyClass::VariablePropertyClass()
: Name()
, CallArguments()
, ArrayAccess(NULL)
, CallableExpression(NULL)
, IsFunction(false)
, IsStatic(false) 
, IsArrayAccess(false)
, IsCallableExpression(false) {
}

pelet::VariablePropertyClass::VariablePropertyClass(const pelet::VariablePropertyClass& src) 
: Name()
, CallArguments()
, ArrayAccess(NULL)
, CallableExpression(NULL)
, IsFunction(false)
, IsStatic(false) 
, IsArrayAccess(false)
, IsCallableExpression(false) {
	Copy(src);
}

pelet::VariablePropertyClass& pelet::VariablePropertyClass::operator=(const pelet::VariablePropertyClass& src) {
	Copy(src);
	return *this;
}

void pelet::VariablePropertyClass::Copy(const pelet::VariablePropertyClass& src) {
	Name = src.Name;
	CallArguments = src.CallArguments;
	ArrayAccess = src.ArrayAccess;
	CallableExpression = src.CallableExpression;
	IsFunction = src.IsFunction;
	IsStatic = src.IsStatic;
	IsArrayAccess = src.IsArrayAccess;
	IsCallableExpression = src.IsCallableExpression;
}

pelet::IncludeExpressionClass::IncludeExpressionClass(const pelet::ScopeClass& scope) 
: ExpressionClass(scope)
, File() 
, LineNumber(0) 
, Expression(NULL)
, Scope(scope) {
	ExpressionType = pelet::ExpressionClass::INCLUDE;
}

pelet::IncludeExpressionClass::IncludeExpressionClass(const pelet::IncludeExpressionClass& src) 
: ExpressionClass(src.Scope)
, File() 
, LineNumber(0) 
, Expression(NULL) 
, Scope(src.Scope) {
	ExpressionType = pelet::ExpressionClass::INCLUDE;
	Copy(src);
}

pelet::IncludeExpressionClass& pelet::IncludeExpressionClass::operator=(const pelet::IncludeExpressionClass& src) {
	Copy(src);
	return *this;
}

void pelet::IncludeExpressionClass::Copy(const pelet::IncludeExpressionClass& src) {
	pelet::ExpressionClass::Copy(src);
	File = src.File;
	Expression = src.Expression;
	LineNumber = src.LineNumber;
}

void pelet::IncludeExpressionClass::Init(pelet::StatementClass* stmt, int lineNumber) {
	LineNumber = lineNumber;
	if (stmt && stmt->Type == pelet::StatementClass::EXPRESSION) {
		pelet::ExpressionClass* expr = (pelet::ExpressionClass*) stmt;
		Expression = expr;
		if (expr && pelet::ExpressionClass::SCALAR == expr->ExpressionType) {
			File = ((pelet::ScalarExpressionClass*)expr)->Value;
		}
	}
}

pelet::IssetExpressionClass::IssetExpressionClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, Expressions() {
	ExpressionType = pelet::ExpressionClass::ISSET;
}

	
pelet::IssetExpressionClass::IssetExpressionClass(const pelet::IssetExpressionClass& src) 
: ExpressionClass(src.Scope)
, Expressions() {
	ExpressionType = pelet::ExpressionClass::ISSET;
	Copy(src);
}
	

pelet::IssetExpressionClass& pelet::IssetExpressionClass::operator=(const pelet::IssetExpressionClass& src) {
	Copy(src);
	return *this;
}

void pelet::IssetExpressionClass::Copy(const pelet::IssetExpressionClass& src) {
	pelet::ExpressionClass::Copy(src);
	Expressions = src.Expressions;
}

pelet::EvalExpressionClass::EvalExpressionClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, Expression() {
	ExpressionType = pelet::ExpressionClass::EVAL;
}

	
pelet::EvalExpressionClass::EvalExpressionClass(const pelet::EvalExpressionClass& src) 
: ExpressionClass(src.Scope)
, Expression() {
	ExpressionType = pelet::ExpressionClass::EVAL;
	Copy(src);
}
	

pelet::EvalExpressionClass& pelet::EvalExpressionClass::operator=(const pelet::EvalExpressionClass& src) {
	Copy(src);
	return *this;
}

void pelet::EvalExpressionClass::Copy(const pelet::EvalExpressionClass& src) {
	pelet::ExpressionClass::Copy(src);
	Expression = src.Expression;
}

pelet::AnonymousClassExpressionClass::AnonymousClassExpressionClass(const pelet::ScopeClass& scope)
: ExpressionClass(scope)
, ConstructorArguments()
, ExtendsFrom()
, ImplementsList() {
	ExpressionType = pelet::ExpressionClass::ANONYMOUS_CLASS;
}

pelet::DeclareDirectiveStatementClass::DeclareDirectiveStatementClass()
: StatementClass(pelet::StatementClass::DECLARE_DIRECTIVE_STATEMENT)
, Directives()
, Body() {
}

pelet::TypeHintClass::TypeHintClass()
: AstItemClass()
, NamespaceName()
, IsNullable(false) {
}

void pelet::TypeHintClass::Set(pelet::QualifiedNameClass* namespaceName, bool isNullable) {
	NamespaceName = namespaceName->ToSignature();
	IsNullable = isNullable;
}
