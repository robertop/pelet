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
 * @copyright  2009-2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */
#include <pelet/ParserObserverClass.h>
#include <unicode/ustdio.h>
#include <unicode/uchar.h>
#include <unicode/ustring.h>

pelet::ObserverQuadClass::ObserverQuadClass(ClassObserverClass* classObserver, ClassMemberObserverClass* memberObserver,
        FunctionObserverClass* functionObserver, VariableObserverClass* variableObserver,
        ExpressionObserverClass* expressionObserver)
	: Scope()
	, NamespaceAliases()
	, Class(classObserver)
	, Member(memberObserver)
	, Function(functionObserver)
	, Variable(variableObserver)
	, ExpressionObserver(expressionObserver)
	, AllAstItems() {
}

pelet::ObserverQuadClass::~ObserverQuadClass() {
	SemanticValueFree();
}

UnicodeString pelet::ObserverQuadClass::AbsoluteNamespaceClass(const QualifiedNameClass& name) {
	UnicodeString fullyQualified;

	// does name use an alias?
	UnicodeString alias;
	UnicodeString qualified = name.ToSignature();
	int32_t index = qualified.indexOf(UNICODE_STRING_SIMPLE("\\"));
	if (index > 0) {
		alias.setTo(qualified, 0, index);
	}
	const std::map<UnicodeString, UnicodeString, UnicodeStringComparatorClass>::const_iterator it = NamespaceAliases.find(alias);
	if (it != NamespaceAliases.end()) {

		// substitute alias with namespace
		fullyQualified.setTo(qualified, index + 1);
		fullyQualified = it->second + UNICODE_STRING_SIMPLE("\\") + fullyQualified;
	} else {

		// no alias, prepend the curent namespace
		fullyQualified = name.Prepend(CurrentNamespace);
	}
	return fullyQualified;
}

void pelet::ObserverQuadClass::NamespaceAliasClear() {
	NamespaceAliases.clear();
}

void pelet::ObserverQuadClass::NotifyVariablesFromParameterList(pelet::ParametersListClass& parameters, UnicodeString currentNamespaceName, UnicodeString currentClassName, UnicodeString currentMethodName) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	size_t paramCount = parameters.GetCount();
	if (paramCount > 0 && Variable) {
		UnicodeString paramName,
		              paramType;
		UnicodeString comment; // no comment it is lost in the variables
		for (size_t i = 0; i < paramCount; ++i) {
			pelet::VariableClass variable(Scope);
			pelet::ExpressionClass expression(Scope);
			parameters.Param(i, paramName, paramType);
			if (!paramType.isEmpty()) {
				expression.ChainList.push_back(paramType);
				expression.ExpressionType = pelet::ExpressionClass::VARIABLE;
			} else {
				expression.ExpressionType = pelet::ExpressionClass::UNKNOWN;
			}
			variable.ChainList.push_back(paramName);
			Variable->VariableFound(currentNamespaceName, currentClassName, currentMethodName, variable, expression, comment);
		}
	}

	// remove any expressions that were created by the static scalar rules
	// ie default argument values
}

void pelet::ObserverQuadClass::NotifyLocalVariableTypeHint(const UnicodeString& comment) {
	if (!Class && !Member && !Function && !Variable && !ExpressionObserver) {
		return;
	}
	NotifyLocalVariableFromPhpDoc(comment);
}

UnicodeString pelet::ObserverQuadClass::ReturnTypeFromPhpDocComment(const UnicodeString& phpDocComment, bool varAnnotation) {
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
	return PhpDocTypeToAbsoluteClassname(returnType);

}

UnicodeString pelet::ObserverQuadClass::PhpDocTypeToAbsoluteClassname(UnicodeString phpDocType) {

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
		name.AddName(&value);
		return AbsoluteNamespaceClass(name);
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

void pelet::ObserverQuadClass::NotifyLocalVariableFromPhpDoc(const UnicodeString& phpDocComment) {
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
	while (next) {
		if (UNICODE_STRING_SIMPLE("@var").caseCompare(next, 0) == 0) {
			pelet::VariableClass variable(Scope);
			pelet::ExpressionClass expression(Scope);
			UnicodeString variableName;

			// example line: @var string $nameString a string version of a name
			// will be lenient and allow the reverse var then type
			// @var $nameString string
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
			FillNameOrType(next, variableName, variable.PhpDocType);
			if (next) {
				next = u_strtok_r(NULL, delimsBuffer, &saveState);
				FillNameOrType(next, variableName, variable.PhpDocType);
				if (!variableName.isEmpty() && !variable.PhpDocType.isEmpty()) {

					// handle namespaces in the phpDoc
					variable.PhpDocType = PhpDocTypeToAbsoluteClassname(variable.PhpDocType);
					variable.ChainList.push_back(variableName);
					Variable->VariableFound(CurrentNamespace.ToAbsoluteSignature(), Scope.ClassName, Scope.MethodName, variable, expression, phpDocComment);
					next = u_strtok_r(NULL, delimsBuffer, &saveState);
				}
			}
			if (!next) {
				break;
			}
		} else {
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
		}
	}
	delete[] buf;
	delete[] delimsBuffer;
}

void pelet::ObserverQuadClass::NotifyMagicMethodsAndProperties(const UnicodeString& phpDocComment, UnicodeString currentNamespaceName, UnicodeString currentClassName, const int lineNumber) {
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

				// handles namespaces in the magic properties
				memberType = PhpDocTypeToAbsoluteClassname(memberType);
				Member->PropertyFound(currentNamespaceName, currentClassName, memberName, memberType, UNICODE_STRING_SIMPLE(""),
				                      pelet::TokenClass::PUBLIC, false, false, lineNumber);
				memberName.remove();
				memberType.remove();
			}
			if (!next) {
				break;
			}
		} else if (UNICODE_STRING_SIMPLE("@method").caseCompare(next, 0) == 0) {

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

				// handles namespaces in the magic properties
				memberType = PhpDocTypeToAbsoluteClassname(memberType);
				Member->MethodFound(currentNamespaceName, currentClassName, memberName, signature, memberType, UNICODE_STRING_SIMPLE(""),
				                    pelet::TokenClass::PUBLIC, false, lineNumber);
			}
			if (!next) {
				break;
			}
		} else {
			next = u_strtok_r(NULL, delimsBuffer, &saveState);
		}
	}
	delete[] buf;
	delete[] delimsBuffer;
}

pelet::SemanticValueClass* pelet::ObserverQuadClass::SemanticValueInit() {
	pelet::SemanticValueClass* value = new pelet::SemanticValueClass;
	AllAstItems.push_back(value);
	return value;
}

void pelet::ObserverQuadClass::SemanticValueFree() {
	for (size_t i = 0; i < AllAstItems.size(); ++i) {
		delete AllAstItems[i];
	}
	AllAstItems.clear();
}

int NextSemanticValue(pelet::ParserType* value, pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers) {
	int ret = analyzer.NextToken();
	value->semanticValue = observers.SemanticValueInit();

	// ignore these token; there are no parse rules for them
	if (pelet::T_OPEN_TAG == ret) {
		ret = analyzer.NextToken();
	}

	// optimization: SemanticValueInit() method knows when we need to examine
	// comments and will allocate memory only when needed
	pelet::SemanticValueClass commentValue;
	if (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {

		// advance past all comments (there can be more than one consecutive)
		// keep /** and /* comments separate; we only want /* comments to
		// get type hints for local varibles
		while (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {
			if (pelet::T_DOC_COMMENT == ret) {
				analyzer.GetLexeme(value->semanticValue->Comment);
			} else if (pelet::T_COMMENT == ret) {
				analyzer.GetLexeme(commentValue.Comment);
			}
			ret = analyzer.NextToken();
		}
	}
	if (!commentValue.Comment.isEmpty()) {
		observers.NotifyLocalVariableTypeHint(commentValue.Comment);
	}
	if (pelet::T_CLOSE_TAG == ret) {
		ret = ';';
	}
	value->semanticValue->Token = ret;
	analyzer.GetLexeme(value->semanticValue->Lexeme);
	value->semanticValue->Pos = analyzer.GetCharacterPosition();
	value->semanticValue->LineNumber = analyzer.GetLineNumber();
	return ret;
}

void GrammarError(pelet::LexicalAnalyzerClass &analyzer, pelet::ObserverQuadClass& observers, std::string msg) {
	int capacity = msg.length() + 1;
	int written = u_sprintf(analyzer.ParserError.getBuffer(capacity), "%s", msg.c_str());
	analyzer.ParserError.releaseBuffer(written);
	observers.SemanticValueFree();
}

pelet::ExpressionClass* pelet::ObserverQuadClass::AssignmentExpressionFromExpressionFound(pelet::VariableClass* variable, pelet::ExpressionClass* expression) {
	pelet::AssignmentExpressionClass* newExpr =  new pelet::AssignmentExpressionClass(Scope);
	newExpr->Destination = *variable;
	newExpr->Set(*expression);
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::AssignmentExpressionFromNewFound(pelet::VariableClass* variable, pelet::QualifiedNameClass* className) {
	pelet::AssignmentExpressionClass* newExpr =  new pelet::AssignmentExpressionClass(Scope);
	newExpr->Destination = *variable;

	newExpr->ExpressionType = pelet::ExpressionClass::NEW_CALL;
	newExpr->ChainList.push_back(AbsoluteNamespaceClass(*className));
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::AssignmentExpressionFromVariableFound(pelet::VariableClass* variable, pelet::VariableClass* srcVariable) {
	pelet::AssignmentExpressionClass* newExpr =  new pelet::AssignmentExpressionClass(Scope);
	newExpr->Destination = *variable;

	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	for (size_t i = 0; i < srcVariable->ChainList.size(); ++i) {
		newExpr->ChainList.push_back(srcVariable->ChainList[i]);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;

}

pelet::ClassMemberSymbolClass* pelet::ObserverQuadClass::ClassMemberSymbolMake(pelet::SemanticValueClass* varValue) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->Type = pelet::StatementClass::METHOD_DECLARATION;
	if (varValue) {
		newMember->Comment = varValue->Comment;
		newMember->StartingLineNumber = varValue->LineNumber;
	}
	newMember->IsAbstractMember = varValue && pelet::T_ABSTRACT == varValue->Token;
	newMember->IsFinalMember = varValue && pelet::T_FINAL == varValue->Token;
	newMember->IsConstMember = varValue && pelet::T_CONST == varValue->Token;
	newMember->IsStaticMember = varValue && pelet::T_STATIC == varValue->Token;
	if (varValue && pelet::T_PUBLIC == varValue->Token) {
		newMember->SetAsPublic();
	} else if (varValue && pelet::T_PROTECTED == varValue->Token) {
		newMember->SetAsProtected();
	} else if (varValue && pelet::T_PRIVATE == varValue->Token) {
		newMember->SetAsPrivate();
	}
	AllAstItems.push_back(newMember);
	return newMember;
}

pelet::ClassMemberSymbolClass* pelet::ObserverQuadClass::ClassMemberSymbolMakeAsPublicVariable(pelet::SemanticValueClass* varValue) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->Type = pelet::StatementClass::PROPERTY_DECLARATION;
	newMember->SetNameAndReturnReference(varValue, false, varValue);
	newMember->ClassName = Scope.ClassName;
	newMember->SetAsPublic();
	newMember->StartingLineNumber = varValue->LineNumber;
	AllAstItems.push_back(newMember);
	return newMember;
}

pelet::StatementListClass* pelet::ObserverQuadClass::ClassMemberSymbolMakeFunction(pelet::SemanticValueClass* nameValue, bool isReference,
        pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters, 
		pelet::SemanticValueClass* startingBodyTokenValue, pelet::SemanticValueClass* endingBodyTokenValue) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->Type = pelet::StatementClass::FUNCTION_DECLARATION;
	newMember->SetNameAndReturnReference(nameValue, isReference, functionValue);
	newMember->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
	newMember->ClassName = Scope.ClassName;
	if (parameters) {
		newMember->ParametersList = *parameters;
	}
	newMember->StartingLineNumber = nameValue->LineNumber;
	newMember->StartingPosition = startingBodyTokenValue->Pos;
	newMember->EndingPosition = endingBodyTokenValue->Pos;
	AllAstItems.push_back(newMember);
	return StatementListMakeAndAppend(newMember);
}

pelet::StatementListClass* pelet::ObserverQuadClass::ClassMemberSymbolMakeMethod(pelet::SemanticValueClass* nameValue, pelet::ClassMemberSymbolClass* modifiers,
        bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters,
		pelet::ClassMemberSymbolClass* methodBody) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->Type = pelet::StatementClass::METHOD_DECLARATION;
	newMember->SetNameAndReturnReference(nameValue, isReference, functionValue);
	newMember->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
	newMember->ClassName = Scope.ClassName;
	if (parameters) {
		newMember->ParametersList = *parameters;
	}
	newMember->IsAbstractMember = modifiers->IsAbstractMember;
	newMember->IsFinalMember = modifiers->IsFinalMember;
	newMember->IsConstMember = modifiers->IsConstMember;
	newMember->IsStaticMember = modifiers->IsStaticMember;

	// comment can only be attached to the modifiers or the function keyword
	// the method may not have any modifiers
	if (newMember->Comment.isEmpty() && !modifiers->Comment.isEmpty()) {
		newMember->Comment = modifiers->Comment;
	}
	if (modifiers->IsPublicMember) {
		newMember->SetAsPublic();
	}
	if (modifiers->IsProtectedMember) {
		newMember->SetAsProtected();
	}
	if (modifiers->IsPrivateMember) {
		newMember->SetAsPrivate();
	}
	newMember->StartingLineNumber = nameValue->LineNumber;
	newMember->StartingPosition = methodBody->StartingPosition;
	newMember->EndingPosition = methodBody->EndingPosition;
	AllAstItems.push_back(newMember);
	pelet::StatementListClass* list = StatementListMakeAndAppend(newMember);
	return StatementListMerge(list, &methodBody->MethodStatements);
}

pelet::ClassMemberSymbolClass* pelet::ObserverQuadClass::ClassMemberMakeBody(pelet::StatementListClass* bodyStatements, 
	pelet::SemanticValueClass* startingPositionTokenValue, pelet::SemanticValueClass* endingPositionTokenValue) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->MethodStatements = *bodyStatements;
	newMember->StartingPosition = startingPositionTokenValue->Pos;
	newMember->EndingPosition = endingPositionTokenValue->Pos;
	AllAstItems.push_back(newMember);
	return newMember;
}

pelet::StatementListClass* pelet::ObserverQuadClass::ClassMemberSymbolMakeVariable(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue,
        bool isConstant, const int startingLineNumber) {
	pelet::ClassMemberSymbolClass* newMember = new pelet::ClassMemberSymbolClass();
	newMember->Type = pelet::StatementClass::PROPERTY_DECLARATION;
	if (isConstant) {
		newMember->SetAsConst(nameValue, commentValue);
	} else {
		newMember->SetNameAndReturnReference(nameValue, false, commentValue);
	}
	newMember->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
	newMember->ClassName = Scope.ClassName;
	newMember->SetAsPublic();

	newMember->StartingLineNumber = startingLineNumber;
	if (nameValue) {
		newMember->EndingPosition = nameValue->Pos + nameValue->Lexeme.length();
	}
	AllAstItems.push_back(newMember);
	return StatementListMakeAndAppend(newMember);
}

pelet::StatementListClass* pelet::ObserverQuadClass::ClassMemberSymbolMakeVariables(pelet::StatementListClass* variableStatements, pelet::ClassMemberSymbolClass* modifiers) {

	// set the modifiers on all of the given property declarations
	for (size_t i = 0; i < variableStatements->Size(); ++i) {
		pelet::StatementClass::Types type = variableStatements->TypeAt(i);
		if (pelet::StatementClass::PROPERTY_DECLARATION == type) {
			pelet::ClassMemberSymbolClass* member = (pelet::ClassMemberSymbolClass*)variableStatements->At(i);
			member->IsAbstractMember = modifiers->IsAbstractMember;
			member->IsFinalMember = modifiers->IsFinalMember;
			member->IsConstMember = modifiers->IsConstMember;
			member->IsStaticMember = modifiers->IsStaticMember;
			member->Comment = modifiers->Comment;
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

pelet::ClassMemberSymbolClass* pelet::ObserverQuadClass::ClassMemberSymbolSetModifier(pelet::ClassMemberSymbolClass* memberSymbol, pelet::SemanticValueClass* modifierValue) {
	memberSymbol->IsAbstractMember = pelet::T_ABSTRACT == modifierValue->Token;
	memberSymbol->IsFinalMember = pelet::T_FINAL == modifierValue->Token;
	memberSymbol->IsConstMember = pelet::T_CONST == modifierValue->Token;
	memberSymbol->IsStaticMember = pelet::T_STATIC == modifierValue->Token;
	if (pelet::T_PUBLIC == modifierValue->Token) {
		memberSymbol->SetAsPublic();
	} else if (pelet::T_PROTECTED == modifierValue->Token) {
		memberSymbol->SetAsProtected();
	} else if (pelet::T_PRIVATE == modifierValue->Token) {
		memberSymbol->SetAsPrivate();
	}
	return memberSymbol;
}

pelet::ClassSymbolClass* pelet::ObserverQuadClass::ClassSymbolAddToImplements(pelet::ClassSymbolClass* classSymbol, pelet::QualifiedNameClass* implementsClassName) {
	classSymbol->ImplementsList.push_back(AbsoluteNamespaceClass(*implementsClassName));
	return classSymbol;
}

pelet::ClassSymbolClass* pelet::ObserverQuadClass::ClassSymbolAddToImplements(pelet::QualifiedNameClass* implementsClassName) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	newClassSymbol->ImplementsList.push_back(AbsoluteNamespaceClass(*implementsClassName));
	AllAstItems.push_back(newClassSymbol);
	return newClassSymbol;
}

pelet::ClassSymbolClass* pelet::ObserverQuadClass::ClassSymbolExtends(pelet::QualifiedNameClass* extendsClassName) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	newClassSymbol->ExtendsFrom = AbsoluteNamespaceClass(*extendsClassName);
	AllAstItems.push_back(newClassSymbol);
	return newClassSymbol;
}

pelet::StatementListClass* pelet::ObserverQuadClass::ClassSymbolMake(pelet::SemanticValueClass* nameValue, pelet::ClassSymbolClass* classTypeSymbol, pelet::ClassSymbolClass* extendsSymbol, pelet::ClassSymbolClass* implementsSymbol, pelet::SemanticValueClass* endToken) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	newClassSymbol->GrabClassName(nameValue);
	newClassSymbol->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
	newClassSymbol->Comment = classTypeSymbol->Comment;
	newClassSymbol->IsAbstract = classTypeSymbol->IsAbstract;
	newClassSymbol->IsFinal = classTypeSymbol->IsFinal;
	newClassSymbol->IsInterface = classTypeSymbol->IsInterface;
	newClassSymbol->IsTrait = classTypeSymbol->IsTrait;

	if (extendsSymbol) {
		newClassSymbol->ExtendsFrom = extendsSymbol->ExtendsFrom;
	}
	newClassSymbol->ImplementsList = implementsSymbol->ImplementsList;

	newClassSymbol->StartingLineNumber = nameValue->LineNumber;
	newClassSymbol->EndingLineNumber = endToken->LineNumber;

	AllAstItems.push_back(newClassSymbol);
	return StatementListMakeAndAppend(newClassSymbol);
}

pelet::ClassSymbolClass* pelet::ObserverQuadClass::ClassSymbolStart(pelet::SemanticValueClass* commentValue, bool isAbstract, bool isFinal, bool isInterface, bool isTrait) {
	pelet::ClassSymbolClass* newClassSymbol = new pelet::ClassSymbolClass();
	if (commentValue) {
		newClassSymbol->AppendToComment(commentValue);
	}
	newClassSymbol->IsAbstract = isAbstract;
	newClassSymbol->IsFinal = isFinal;
	newClassSymbol->IsInterface = isInterface;
	newClassSymbol->IsTrait = isTrait;

	AllAstItems.push_back(newClassSymbol);
	return newClassSymbol;
}

pelet::StatementListClass* pelet::ObserverQuadClass::ConstantMake(pelet::SemanticValueClass* value, int lineNumber) {
	pelet::ConstantStatementClass* constant = new pelet::ConstantStatementClass();
	if (value) {
		constant->Name = value->Lexeme;
	}
	if (value) {
		constant->Comment = value->Comment;
	}
	constant->LineNumber = lineNumber;
	constant->NamespaceName = CurrentNamespace.ToAbsoluteSignature();

	AllAstItems.push_back(constant);
	return StatementListMakeAndAppend(constant);
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeArray(pelet::StatementListClass* pairStatements) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->ExpressionType = pelet::ExpressionClass::ARRAY;

	// populate the array keys [that are scalar strings]
	for (size_t i = 0; i < pairStatements->Size(); ++i) {
		pelet::StatementClass::Types type =  pairStatements->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* pairExpr = (pelet::ExpressionClass*) pairStatements->At(i);
			if (pelet::ExpressionClass::SCALAR == pairExpr->ExpressionType) {
				newExpr->ArrayKeys.push_back(pairExpr->FirstValue());
			}
		}
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeAssignmentList(pelet::StatementListClass* assignmentList) {
	pelet::AssignmentListExpressionClass* newExpr = new pelet::AssignmentListExpressionClass(Scope);
	
	for (size_t i = 0; i < assignmentList->Size(); ++i) {
		pelet::StatementClass::Types type =  assignmentList->TypeAt(i);
		if (pelet::StatementClass::VARIABLE == type) {
			pelet::VariableClass* singleVariable = (pelet::VariableClass*) assignmentList->At(i);
			if (singleVariable->ChainList.size() <= 1) {
				newExpr->Destinations.push_back(*singleVariable);
			}
		}
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeClassConstant(pelet::QualifiedNameClass* className, pelet::SemanticValueClass* constantName) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->ExpressionType = pelet::ExpressionClass::FUNCTION_CALL;
	newExpr->ChainList.push_back(AbsoluteNamespaceClass(*className));
	if (constantName) {
		newExpr->ChainList.push_back(UNICODE_STRING_SIMPLE("::") + constantName->Lexeme);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::VariableClass* pelet::ObserverQuadClass::VariableMakeFunctionCall(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);

	newVar->LineNumber = lineNumber;
	if (functionName) {
		newVar->Comment = functionName->Comment;
	}
	// not sure how to resolve the namespace here; since a functions fallback to the root namespace
	newVar->ChainList.push_back(AbsoluteNamespaceClass(*functionName) + UNICODE_STRING_SIMPLE("()"));
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			newVar->CallArguments.push_back(*singleExpr);
		}
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::ObserverQuadClass::VariableMakeFunctionCallFromAbsoluteNamespace(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	functionName->MakeAbsolute();
	newVar->ChainList.push_back(functionName->ToAbsoluteSignature() + UNICODE_STRING_SIMPLE("()"));
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			newVar->CallArguments.push_back(*singleExpr);
		}
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::ObserverQuadClass::VariableMakeFunctionCallFromCurrentNamespace(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	newVar->ChainList.push_back(AbsoluteNamespaceClass(*functionName) + UNICODE_STRING_SIMPLE("()"));
	for (size_t i = 0; i < callArguments->Size(); ++i) {
		pelet::StatementClass::Types type =  callArguments->TypeAt(i);
		if (pelet::StatementClass::EXPRESSION == type) {
			pelet::ExpressionClass* singleExpr = (pelet::ExpressionClass*) callArguments->At(i);
			newVar->CallArguments.push_back(*singleExpr);
		}
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeGlobalVariable(pelet::SemanticValueClass* value) {
	pelet::AssignmentExpressionClass* newExpr = new pelet::AssignmentExpressionClass(Scope);
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	if (value) {
		newExpr->Destination.ChainList.push_back(value->Lexeme);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeNewInstanceCall(pelet::QualifiedNameClass* className) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->ExpressionType = pelet::ExpressionClass::NEW_CALL;
	newExpr->ChainList.push_back(AbsoluteNamespaceClass(*className));
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeObject(pelet::ExpressionClass* srcExpression) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->Copy(*srcExpression);
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeScalar(pelet::ExpressionClass* srcExpression) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->Copy(*srcExpression);
	newExpr->ExpressionType = pelet::ExpressionClass::SCALAR;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeScalar(pelet::SemanticValueClass* srcValue) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->ExpressionType = pelet::ExpressionClass::SCALAR;
	if (srcValue) {
		newExpr->Comment = srcValue->Comment;
	}
	if (srcValue) {
		newExpr->ChainList.push_back(srcValue->Lexeme);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeScalarFromConstant(pelet::QualifiedNameClass* constantName) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->ExpressionType = pelet::ExpressionClass::FUNCTION_CALL;
	newExpr->ChainList.push_back(constantName->ToSignature());
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::VariableClass* pelet::ObserverQuadClass::VariableMakeStaticMethodCall(pelet::QualifiedNameClass* className, pelet::SemanticValueClass* methodName, pelet::StatementListClass* callArguments, int lineNumber) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	newVar->ChainList.push_back(AbsoluteNamespaceClass(*className));
	if (methodName) {
		newVar->ChainList.push_back(UNICODE_STRING_SIMPLE("::") + methodName->Lexeme + UNICODE_STRING_SIMPLE("()"));
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeStaticVariable(pelet::SemanticValueClass* nameValue) {
	pelet::AssignmentExpressionClass* newExpr = new pelet::AssignmentExpressionClass(Scope);
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	if (nameValue) {
		newExpr->Destination.ChainList.push_back(nameValue->Lexeme);
	}
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::VariableClass* pelet::ObserverQuadClass::VariableAppendArrayOffset(pelet::VariableClass* arrayVariable, pelet::ExpressionClass* offsetExpr) {
	if (pelet::ExpressionClass::SCALAR == offsetExpr->ExpressionType) {
		arrayVariable->ArrayKey = offsetExpr->FirstValue();
	}
	return arrayVariable;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionNil() {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->Type = pelet::ExpressionClass::NIL;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::IncludeFound(pelet::ExpressionClass* expr, const int lineNumber) {
	pelet::ExpressionClass* newExpr = new pelet::ExpressionClass(Scope);
	newExpr->Copy(*expr);
	newExpr->Type = pelet::ExpressionClass::INCLUDE_STATEMENT;
	newExpr->LineNumber = lineNumber;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

void pelet::ObserverQuadClass::MakeAst(pelet::StatementListClass* statements) {

	// go through the list of statements and send the correct notifications
	for (size_t i = 0; i < statements->Size(); ++i) {
		pelet::StatementClass::Types type = statements->TypeAt(i);
		pelet::StatementClass* stmt = statements->At(i);
		switch(type) {
		case pelet::StatementClass::ASSIGNMENT:
			if (ExpressionObserver) {
				pelet::AssignmentExpressionClass* expr = (pelet::AssignmentExpressionClass*)stmt;
				ExpressionObserver->ExpressionFound(*expr);
			}
			if (Variable) {
				pelet::AssignmentExpressionClass* expr = (pelet::AssignmentExpressionClass*)stmt;
				Variable->VariableFound(expr->Destination.Scope.NamespaceName, 
					expr->Destination.Scope.ClassName, expr->Destination.Scope.MethodName, 
					expr->Destination, *expr, expr->Comment);
			}
			break;
		case pelet::StatementClass::CLASS_DECLARATION:
			if (Class || Member) {
				pelet::ClassSymbolClass* classSymbol = (pelet::ClassSymbolClass*) stmt;
				if (Class) {
					Class->ClassFound(classSymbol->NamespaceName, classSymbol->ClassName, classSymbol->ToSignature(),
					                  classSymbol->Comment, classSymbol->StartingLineNumber);
				}
				if (Member) {
					NotifyMagicMethodsAndProperties(classSymbol->Comment, classSymbol->NamespaceName,
					                                classSymbol->ClassName, classSymbol->StartingLineNumber);
				}
				if (Class) {
					Class->ClassEnd(classSymbol->NamespaceName, classSymbol->ClassName, classSymbol->EndingLineNumber);
				}
			}
			break;
		case pelet::StatementClass::DEFINE_DECLARATION:
			if (Class) {
				pelet::ConstantStatementClass* constant = (pelet::ConstantStatementClass*) stmt;
				Class->DefineDeclarationFound(constant->NamespaceName, constant->Name, constant->Value, constant->Comment, constant->LineNumber);
			}
			break;
		case pelet::StatementClass::EXPRESSION:
			if (ExpressionObserver) {
				pelet::ExpressionClass* expr = (pelet::ExpressionClass*)stmt;
				ExpressionObserver->ExpressionFound(*expr);
			}
			if (Class) {

				// check for define() function calls, these are constants
				pelet::ExpressionClass * expr = (pelet::ExpressionClass*)stmt;
				if (expr->CallArguments.size() == (size_t)2 && expr->ChainList.size() == 1) {
					if (expr->ChainList[0].caseCompare(UNICODE_STRING_SIMPLE("define()"), 0) == 0) {
						Class->DefineDeclarationFound(UNICODE_STRING_SIMPLE(""), expr->CallArguments[0].FirstValue(),
						                              expr->CallArguments[1].FirstValue(),
						                              expr->Comment, expr->LineNumber);
					}
				}
			}
			break;
		case pelet::StatementClass::FUNCTION_DECLARATION:
			if (Function || Variable) {
				pelet::ClassMemberSymbolClass* memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;

				// remove the 'public' we are re-using the ClassMember symbol which always assumes a
				// method signature
				// didnt feel like writing a whole other class for just for functions when functions and
				// methods are almost identical
				UnicodeString signature = memberSymbol->ToMethodSignature(memberSymbol->ParametersList.ToSignature());
				int32_t index = signature.indexOf(UNICODE_STRING_SIMPLE("function"));
				signature.setTo(signature, index);
				UnicodeString comment = memberSymbol->Comment;
				UnicodeString returnType = ReturnTypeFromPhpDocComment(comment, false);
				if (Function) {
					Function->FunctionFound(memberSymbol->NamespaceName, memberSymbol->MemberName, signature,
					                        returnType, memberSymbol->Comment, memberSymbol->StartingLineNumber);
				}
				if (Variable) {
					NotifyVariablesFromParameterList(memberSymbol->ParametersList, memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName);
				}
				if (Function) {
					Function->FunctionScope(memberSymbol->NamespaceName, memberSymbol->MemberName,
						memberSymbol->StartingPosition, memberSymbol->EndingPosition);
				}
			}
			break;
		case pelet::StatementClass::INCLUDE_STATEMENT:
			if (Class) {
				pelet::ExpressionClass* expr = (pelet::ExpressionClass*)stmt;
				if (pelet::ExpressionClass::SCALAR == expr->ExpressionType) {
					Class->IncludeFound(expr->FirstValue(), expr->LineNumber);
				} else {

					// not sure what to do for include statements
					// with variables; ie. " include $file; "
					// for now just propagate an empty name
					UnicodeString empty;
					Class->IncludeFound(empty, expr->LineNumber);
				}
			}
			break;
		case pelet::StatementClass::ASSIGNMENT_LIST:
			if (Variable) {
				pelet::AssignmentListExpressionClass* expr = (pelet::AssignmentListExpressionClass*)stmt;
				for (size_t i = 0; i < expr->Destinations.size(); ++i) {
					Variable->VariableFound(expr->Scope.NamespaceName, 
						expr->Scope.ClassName, expr->Scope.MethodName, 
						expr->Destinations[i], *expr, expr->Comment);
				}
			}
			break;
		case pelet::StatementClass::METHOD_DECLARATION:
			if (Member || Variable) {
				pelet::ClassMemberSymbolClass* memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;
				UnicodeString comment = memberSymbol->Comment;
				UnicodeString propType = ReturnTypeFromPhpDocComment(comment, false);
				UnicodeString signature = memberSymbol->ToMethodSignature(memberSymbol->ParametersList.ToSignature());
				pelet::TokenClass::TokenIds visibility = pelet::TokenClass::PUBLIC;
				if (memberSymbol->IsProtectedMember) {
					visibility = pelet::TokenClass::PROTECTED;
				} else if (memberSymbol->IsPrivateMember) {
					visibility = pelet::TokenClass::PRIVATE;
				}
				UnicodeString className = memberSymbol->ClassName;
				bool isStatic = memberSymbol->IsStaticMember;
				if (Member) {
					Member->MethodFound(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName, signature,
					                    propType, comment, visibility, isStatic, memberSymbol->StartingLineNumber);
				}
				if (Variable) {
					NotifyVariablesFromParameterList(memberSymbol->ParametersList, memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName);
				}
				if (Member) {
					Member->MethodScope(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName, 
						memberSymbol->StartingPosition, memberSymbol->EndingPosition);
				}
			}
			break;
		case pelet::StatementClass::NAMESPACE_DECLARATION:
			if (Class) {
				pelet::NamespaceDeclarationClass* declaration = (pelet::NamespaceDeclarationClass*) stmt;
				Class->NamespaceDeclarationFound(declaration->NamespaceName, declaration->StartingPosition);
			}
			break;
		case pelet::StatementClass::NAMESPACE_USE:
			if (Class) {
				pelet::NamespaceUseClass* namespaceUse = (pelet::NamespaceUseClass*) stmt;
				Class->NamespaceUseFound(namespaceUse->NamespaceName, namespaceUse->Alias, namespaceUse->StartingPos);
			}
			break;
		case pelet::StatementClass::NIL:

			// NIL is anything we want to skip on purpose
			break;
		case pelet::StatementClass::VARIABLE:

			// we only want variables that are in assignments for now
			break;
		case pelet::StatementClass::PROPERTY_DECLARATION:
			if (Member) {
				pelet::ClassMemberSymbolClass* memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;
				UnicodeString comment = memberSymbol->Comment;
				UnicodeString propType = ReturnTypeFromPhpDocComment(comment, true);

				pelet::TokenClass::TokenIds visibility = pelet::TokenClass::PUBLIC;
				if (memberSymbol->IsProtectedMember) {
					visibility = pelet::TokenClass::PROTECTED;
				} else if (memberSymbol->IsPrivateMember) {
					visibility = pelet::TokenClass::PRIVATE;
				}
				UnicodeString className = memberSymbol->ClassName;
				bool isStatic = memberSymbol->IsStaticMember;
				bool isConst = memberSymbol->IsConstMember;
				Member->PropertyFound(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName,
				                      propType, comment, visibility, isConst, isStatic, memberSymbol->StartingLineNumber);
			}
			break;
		case pelet::StatementClass::TRAIT_ALIAS_DECLARATION:
			if (Member) {
				pelet::TraitAliasClass* traitAlias = (pelet::TraitAliasClass*) stmt;
				Member->TraitAliasFound(traitAlias->NamespaceName, traitAlias->ClassName,
				                        traitAlias->TraitUsedClassName, traitAlias->TraitMethodReferenceName, traitAlias->Alias, traitAlias->Visibility);
			}
			break;
		case pelet::StatementClass::TRAIT_INSTEADOF_DECLARATION:
			if (Member) {
				pelet::TraitInsteadOfClass* traitInsteadOf = (pelet::TraitInsteadOfClass*) stmt;
				Member->TraitInsteadOfFound(traitInsteadOf->NamespaceName, traitInsteadOf->ClassName,
				                            traitInsteadOf->TraitUsedClassName, traitInsteadOf->TraitMethodReferenceName, traitInsteadOf->InsteadOfList);
			}
			break;
		case pelet::StatementClass::TRAIT_USE_DECLARATION:
			if (Member) {
				pelet::TraitUseClass* traitUse = (pelet::TraitUseClass*) stmt;
				for (size_t i = 0; i < traitUse->UsedTraits.size(); ++i) {
					Member->TraitUseFound(traitUse->NamespaceName, traitUse->ClassName, traitUse->UsedTraits[i]);
				}
			}
			break;
		}
	}
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceDeclarationFound(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* namespaceTokenValue) {
	pelet::NamespaceDeclarationClass* newNamespace = new pelet::NamespaceDeclarationClass();
	newNamespace->NamespaceName = namespaceName->ToAbsoluteSignature();
	newNamespace->StartingPosition = namespaceTokenValue->Pos;
	AllAstItems.push_back(newNamespace);
	return StatementListMakeAndAppend(newNamespace);
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceGlobalDeclarationFound(pelet::SemanticValueClass* namespaceTokenValue) {
	pelet::NamespaceDeclarationClass* newNamespace = new pelet::NamespaceDeclarationClass();
	newNamespace->StartingPosition = namespaceTokenValue->Pos;
	newNamespace->NamespaceName = UNICODE_STRING_SIMPLE("\\");
	AllAstItems.push_back(newNamespace);
	return StatementListMakeAndAppend(newNamespace);
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::NamespaceNameAppend(pelet::QualifiedNameClass* namespaceName, pelet::SemanticValueClass* nameValue) {
	namespaceName->AddName(nameValue);
	return namespaceName;
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::NamespaceNameMake(pelet::SemanticValueClass* nameValue) {
	QualifiedNameClass* qualifiedName = new pelet::QualifiedNameClass();
	qualifiedName->GrabNameAndComment(nameValue);
	AllAstItems.push_back(qualifiedName);
	return qualifiedName;
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceUse(pelet::QualifiedNameClass* namespaceName) {
	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	UnicodeString alias = useStatement->Set(namespaceName, UNICODE_STRING_SIMPLE(""));

	// dont worry about duplicate aliases, since its incorrect PHP
	NamespaceAliases[alias] = namespaceName->ToAbsoluteSignature();

	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceUseAbsolute(pelet::QualifiedNameClass* namespaceName) {
	namespaceName->MakeAbsolute();

	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	UnicodeString alias = useStatement->Set(namespaceName, UNICODE_STRING_SIMPLE(""));

	// dont worry about duplicate aliases, since its incorrect PHP
	NamespaceAliases[alias] = namespaceName->ToAbsoluteSignature();

	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceUseAbsoluteAlias(pelet::QualifiedNameClass* namespaceName, 
		pelet::SemanticValueClass* aliasValue) {
	namespaceName->MakeAbsolute();

	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	if (aliasValue) {
		UnicodeString alias = useStatement->Set(namespaceName, aliasValue->Lexeme);

		// dont worry about duplicate aliases, since its incorrect PHP
		NamespaceAliases[alias] = namespaceName->ToAbsoluteSignature();
	}
	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceUseAlias(pelet::QualifiedNameClass* namespaceName, 
		pelet::SemanticValueClass* aliasValue) {
	pelet::NamespaceUseClass* useStatement = new pelet::NamespaceUseClass;
	if (aliasValue) {
		UnicodeString alias = useStatement->Set(namespaceName, aliasValue->Lexeme);

		// dont worry about duplicate aliases, since its incorrect PHP
		NamespaceAliases[alias] = namespaceName->ToAbsoluteSignature();
	}
	AllAstItems.push_back(useStatement);
	return StatementListMakeAndAppend(useStatement);
}

pelet::StatementListClass* pelet::ObserverQuadClass::NamespaceUseSetStartingPos(pelet::StatementListClass* namespaceStatements, pelet::SemanticValueClass* useToken) {
	for (size_t i = 0; i < namespaceStatements->Size(); ++i) {
		pelet::StatementClass::Types type = namespaceStatements->TypeAt(i);
		if (pelet::StatementClass::NAMESPACE_USE == type) {
			pelet::NamespaceUseClass* useStmt = (pelet::NamespaceUseClass*) namespaceStatements->At(i);
			useStmt->StartingPos = useToken->Pos;
		}
	}
	return namespaceStatements;
}

pelet::ParametersListClass* pelet::ObserverQuadClass::ParametersListAppend(pelet::ParametersListClass* parametersList, pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference) {
	UnicodeString typeString = AbsoluteNamespaceClass(*type);
	if (typeString == UNICODE_STRING_SIMPLE("\\")) {
		typeString = UNICODE_STRING_SIMPLE("");
	}
	if (typeString == UNICODE_STRING_SIMPLE("\\array")) {
		typeString = UNICODE_STRING_SIMPLE("");
	}
	if (typeString == UNICODE_STRING_SIMPLE("\\callable")) {
		typeString = UNICODE_STRING_SIMPLE("");
	}
	parametersList->CreateWithOptionalType(typeString);
	parametersList->SetName(parameterName, isReference);
	return parametersList;

	return parametersList;
}

pelet::ParametersListClass* pelet::ObserverQuadClass::ParametersListCreate(pelet::QualifiedNameClass* type, pelet::SemanticValueClass* parameterName, bool isReference) {
	pelet::ParametersListClass* parametersList = new pelet::ParametersListClass;

	UnicodeString typeString = AbsoluteNamespaceClass(*type);
	if (typeString == UNICODE_STRING_SIMPLE("\\")) {
		typeString = UNICODE_STRING_SIMPLE("");
	}
	if (typeString == UNICODE_STRING_SIMPLE("\\array")) {
		typeString = UNICODE_STRING_SIMPLE("");
	}
	parametersList->CreateWithOptionalType(typeString);
	parametersList->SetName(parameterName, isReference);

	AllAstItems.push_back(parametersList);
	return parametersList;
}

pelet::ParametersListClass* pelet::ObserverQuadClass::ParametersListNil() {
	pelet::ParametersListClass* parametersList = new pelet::ParametersListClass;

	AllAstItems.push_back(parametersList);
	return parametersList;
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::QualifiedNameCreate(pelet::SemanticValueClass* nameValue) {
	pelet::QualifiedNameClass* qualifiedName = new pelet::QualifiedNameClass;
	qualifiedName->GrabNameAndComment(nameValue);
	AllAstItems.push_back(qualifiedName);
	return qualifiedName;
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::QualifiedNameMakeAbsolute(pelet::QualifiedNameClass* qualifiedName) {
	qualifiedName->MakeAbsolute();
	return qualifiedName;
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::QualifiedNameMakeFromCurrentNamespace(pelet::QualifiedNameClass* qualifiedName) {
	qualifiedName->Prepend(CurrentNamespace);
	return qualifiedName;
}

pelet::QualifiedNameClass* pelet::ObserverQuadClass::QualifiedNameNil() {
	pelet::QualifiedNameClass* qualifiedName = new pelet::QualifiedNameClass;
	AllAstItems.push_back(qualifiedName);
	return qualifiedName;
}

pelet::SemanticValueClass* pelet::ObserverQuadClass::SemanticValueNil() {
	pelet::SemanticValueClass* value = new pelet::SemanticValueClass;
	AllAstItems.push_back(value);
	return value;
}

pelet::StatementListClass* pelet::ObserverQuadClass::StatementListAppend(pelet::StatementListClass* statementList, pelet::StatementClass* statement) {
	statementList->Push(statement);
	return statementList;
}

pelet::StatementListClass* pelet::ObserverQuadClass::StatementListMake() {
	pelet::StatementListClass* statementList =  new pelet::StatementListClass;
	AllAstItems.push_back(statementList);
	return statementList;
}

pelet::StatementListClass* pelet::ObserverQuadClass::StatementListMakeAndAppend(pelet::StatementClass* statement) {
	pelet::StatementListClass* statementList =  new pelet::StatementListClass;
	statementList->Push(statement);

	AllAstItems.push_back(statementList);
	return statementList;
}

pelet::StatementListClass* pelet::ObserverQuadClass::StatementListMerge(pelet::StatementListClass* a, pelet::StatementListClass* b) {
	a->PushAll(b);
	return a;
}

pelet::StatementListClass* pelet::ObserverQuadClass::StatementListNil() {
	pelet::StatementListClass* statementList =  new pelet::StatementListClass;
	AllAstItems.push_back(statementList);
	return statementList;
}

void pelet::ObserverQuadClass::SetCurrentClassName(pelet::SemanticValueClass* value) {
	Scope.ClassName = value ? value->Lexeme : UNICODE_STRING_SIMPLE("");
}

void pelet::ObserverQuadClass::SetCurrentMemberName(pelet::SemanticValueClass* value) {
	Scope.MethodName = value ? value->Lexeme : UNICODE_STRING_SIMPLE("");
}

void pelet::ObserverQuadClass::SetCurrentNamespace(pelet::QualifiedNameClass* qualifiedName) {
	NamespaceAliases.clear();
	if (qualifiedName) {
		CurrentNamespace = *qualifiedName;
		Scope.NamespaceName = qualifiedName->ToAbsoluteSignature();
	} else {
		CurrentNamespace.Clear();
		CurrentNamespace.MakeAbsolute();
		Scope.NamespaceName.remove();
	}
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeAsAssignmentExpression(pelet::VariableClass* variable) {
	pelet::AssignmentExpressionClass* newExpr =  new pelet::AssignmentExpressionClass(Scope);
	newExpr->Destination = *variable;
	newExpr->Comment = variable->Comment;
	newExpr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	newExpr->ChainList = variable->ChainList;
	newExpr->CallArguments = variable->CallArguments;
	AllAstItems.push_back(newExpr);
	return newExpr;
}

pelet::TraitAliasClass* pelet::ObserverQuadClass::TraitAliasMake(pelet::TraitAliasClass* traitMethodReference, pelet::ClassMemberSymbolClass* traitModifiers) {
	pelet::TraitAliasClass* newAlias = new pelet::TraitAliasClass;
	newAlias->TraitUsedClassName = traitMethodReference->TraitUsedClassName;
	newAlias->TraitMethodReferenceName = traitMethodReference->TraitMethodReferenceName;
	if (traitModifiers->IsPublicMember) {
		newAlias->Visibility = pelet::TokenClass::PUBLIC;
	} else if (traitModifiers->IsProtectedMember) {
		newAlias->Visibility = pelet::TokenClass::PROTECTED;
	} else if (traitModifiers->IsPrivateMember) {
		newAlias->Visibility = pelet::TokenClass::PRIVATE;
	}
	AllAstItems.push_back(newAlias);
	return newAlias;
}

pelet::TraitAliasClass* pelet::ObserverQuadClass::TraitAliasMake(pelet::TraitAliasClass* traitMethodReference, pelet::ClassMemberSymbolClass* traitModifiers, pelet::SemanticValueClass* aliasValue) {
	pelet::TraitAliasClass* newAlias = new pelet::TraitAliasClass;
	newAlias->TraitUsedClassName = traitMethodReference->TraitUsedClassName;
	newAlias->TraitMethodReferenceName = traitMethodReference->TraitMethodReferenceName;
	if (traitModifiers->IsPublicMember) {
		newAlias->Visibility = pelet::TokenClass::PUBLIC;
	} else if (traitModifiers->IsProtectedMember) {
		newAlias->Visibility = pelet::TokenClass::PROTECTED;
	} else if (traitModifiers->IsPrivateMember) {
		newAlias->Visibility = pelet::TokenClass::PRIVATE;
	}
	if (aliasValue) {
		newAlias->Alias = aliasValue->Lexeme;
	}
	AllAstItems.push_back(newAlias);
	return newAlias;
}

pelet::TraitAliasClass* pelet::ObserverQuadClass::TraitAliasMakeMethodReferenceList(pelet::QualifiedNameClass* qualifiedName, pelet::SemanticValueClass* methodName) {
	pelet::TraitAliasClass* newAlias = new pelet::TraitAliasClass;
	newAlias->TraitUsedClassName = AbsoluteNamespaceClass(*qualifiedName);
	if (methodName) {
		newAlias->TraitMethodReferenceName = methodName->Lexeme;
	}
	AllAstItems.push_back(newAlias);
	return newAlias;
}

pelet::TraitAliasClass* pelet::ObserverQuadClass::TraitAliasMakeMethodReferenceList(pelet::SemanticValueClass* methodName) {
	pelet::TraitAliasClass* newAlias = new pelet::TraitAliasClass;
	if (methodName) {
		newAlias->TraitMethodReferenceName = methodName->Lexeme;
	}
	AllAstItems.push_back(newAlias);
	return newAlias;
}

pelet::TraitInsteadOfClass* pelet::ObserverQuadClass::TraitInsteadOfAppendReferenceList(pelet::TraitInsteadOfClass* traitInsteadOf, pelet::QualifiedNameClass* qualifiedName) {
	traitInsteadOf->InsteadOfList.push_back(AbsoluteNamespaceClass(*qualifiedName));
	return traitInsteadOf;
}

pelet::TraitInsteadOfClass* pelet::ObserverQuadClass::TraitInsteadOfMake(pelet::TraitAliasClass* traitMethodReference, pelet::TraitInsteadOfClass* traitInsteadOfList) {
	pelet::TraitInsteadOfClass* newInsteadOf = new pelet::TraitInsteadOfClass;
	newInsteadOf->TraitUsedClassName =  traitMethodReference->TraitUsedClassName;
	newInsteadOf->TraitMethodReferenceName = traitMethodReference->TraitMethodReferenceName;
	newInsteadOf->InsteadOfList = traitInsteadOfList->InsteadOfList;
	AllAstItems.push_back(newInsteadOf);
	return newInsteadOf;
}

pelet::TraitInsteadOfClass* pelet::ObserverQuadClass::TraitInsteadOfMakeReferenceList(pelet::QualifiedNameClass* qualifiedName) {
	pelet::TraitInsteadOfClass* newInsteadOf = new pelet::TraitInsteadOfClass;
	newInsteadOf->InsteadOfList.push_back(AbsoluteNamespaceClass(*qualifiedName));
	AllAstItems.push_back(newInsteadOf);
	return newInsteadOf;
}

pelet::TraitUseClass* pelet::ObserverQuadClass::TraitUseAppend(pelet::TraitUseClass* traitUse, pelet::QualifiedNameClass* qualifiedName) {
	traitUse->AppendUse(AbsoluteNamespaceClass(*qualifiedName));
	return traitUse;
}

pelet::StatementListClass* pelet::ObserverQuadClass::TraitUseMake(pelet::TraitUseClass* traitsUsed, pelet::StatementListClass* traitAdaptations) {
	pelet::StatementListClass* list = StatementListMake();
	traitsUsed->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
	traitsUsed->ClassName = Scope.ClassName;
	list->Push(traitsUsed);
	for (size_t i = 0; i < traitAdaptations->Size(); ++i) {
		pelet::StatementClass::Types type = traitAdaptations->TypeAt(i);
		if (pelet::StatementClass::TRAIT_ALIAS_DECLARATION == type) {
			pelet::TraitAliasClass* traitDeclaration = (pelet::TraitAliasClass* )traitAdaptations->At(i);
			traitDeclaration->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
			traitDeclaration->ClassName = Scope.ClassName;
			list->Push(traitDeclaration);
		} else if (pelet::StatementClass::TRAIT_INSTEADOF_DECLARATION == type) {
			pelet::TraitInsteadOfClass* insteadOfDeclaration = (pelet::TraitInsteadOfClass* )traitAdaptations->At(i);
			insteadOfDeclaration->NamespaceName = CurrentNamespace.ToAbsoluteSignature();
			insteadOfDeclaration->ClassName = Scope.ClassName;
			list->Push(insteadOfDeclaration);
		}
	}
	return list;
}

pelet::TraitUseClass* pelet::ObserverQuadClass::TraitUseStart(pelet::QualifiedNameClass* qualifiedName) {
	pelet::TraitUseClass* newTraitUse = new pelet::TraitUseClass;
	newTraitUse->AppendUse(AbsoluteNamespaceClass(*qualifiedName));
	AllAstItems.push_back(newTraitUse);
	return newTraitUse;
}
pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionMakeFromVariable(pelet::VariableClass* variableValue) {
	pelet::ExpressionClass* expr = new pelet::ExpressionClass(Scope);
	expr->ExpressionType = pelet::ExpressionClass::VARIABLE;
	expr->ChainList = variableValue->ChainList;
	expr->CallArguments = variableValue->CallArguments;
	expr->LineNumber = variableValue->LineNumber;
	expr->Comment = variableValue->Comment;
	AllAstItems.push_back(expr);
	return expr;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionAppendToChain(pelet::ExpressionClass* expression, pelet::VariableClass* variable) {
	for (size_t i = 0; i < variable->ChainList.size(); ++i) {
		expression->ChainList.push_back(variable->ChainList[i]);
	}
	return expression;
}

pelet::ExpressionClass* pelet::ObserverQuadClass::ExpressionAppendToChain(pelet::ExpressionClass* expression, pelet::ExpressionClass* restExpression) {
	for (size_t i = 0; i < restExpression->ChainList.size(); ++i) {
		UnicodeString prop;
		if (i == 0) {
			prop = UNICODE_STRING_SIMPLE("->") + restExpression->ChainList[i];
		}
		else {
			prop = restExpression->ChainList[i];
		}
		expression->ChainList.push_back(prop);
	}
	return expression;
}

pelet::VariableClass* pelet::ObserverQuadClass::VariableAppendToChain(pelet::VariableClass* variable, bool isMethod) {
	if (!variable->ChainList.empty() && isMethod) {
		variable->ChainList.back().append(UNICODE_STRING_SIMPLE("()"));
	}
	return variable;
}

pelet::VariableClass* pelet::ObserverQuadClass::VariableAppendToChain(pelet::VariableClass* variableProperties, pelet::VariableClass* newVariableProperty) {
	if (!newVariableProperty->ChainList.empty()) {
		variableProperties->ChainList.push_back(newVariableProperty->ChainList.front());
	}
	return variableProperties;
}

pelet::VariableClass* pelet::ObserverQuadClass::VariableMake(pelet::VariableClass* baseName, pelet::VariableClass* firstProperty, bool isFirstPropertyMethod, pelet::VariableClass* restProperties) {
	if (firstProperty && !firstProperty->ChainList.empty()) {
		UnicodeString prop = UNICODE_STRING_SIMPLE("->") + firstProperty->ChainList[0];
		if (isFirstPropertyMethod) {
			prop = UNICODE_STRING_SIMPLE("->") + firstProperty->ChainList[0] + UNICODE_STRING_SIMPLE("()");
		}
		baseName->ChainList.push_back(prop);
	}
	if (restProperties) {
		for (size_t i = 0; i < restProperties->ChainList.size(); ++i) {
			baseName->ChainList.push_back(UNICODE_STRING_SIMPLE("->") + restProperties->ChainList[i]);
		}
	}
	return baseName;
}

pelet::VariableClass* pelet::ObserverQuadClass::VariableNil() {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::ObserverQuadClass::VariableStart(pelet::SemanticValueClass* variableValue) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	if (variableValue) {
		newVar->ChainList.push_back(variableValue->Lexeme);
		newVar->Comment = variableValue->Comment;
		newVar->LineNumber = variableValue->LineNumber;
	}
	AllAstItems.push_back(newVar);
	return newVar;
}

pelet::VariableClass* pelet::ObserverQuadClass::VariableStartStaticMember(pelet::QualifiedNameClass* className, pelet::VariableClass* memberName) {
	pelet::VariableClass* newVar = new pelet::VariableClass(Scope);
	if (className && memberName) {
		newVar->ChainList.push_back(AbsoluteNamespaceClass(*className));
		if (memberName->ChainList.size() == 1) {
			newVar->ChainList.push_back(UNICODE_STRING_SIMPLE("::") + memberName->ChainList[0]);
		}
	}
	AllAstItems.push_back(newVar);
	return newVar;
}
