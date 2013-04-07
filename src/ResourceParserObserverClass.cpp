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
#include <pelet/ResourceParserObserverClass.h>
#include <pelet/TokenClass.h>
#include <unicode/ustring.h>

#include <algorithm>

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

int pelet::ResourceLex(pelet::ResourceParserTypeClass* value, pelet::LexicalAnalyzerClass& analyzer, 
						  pelet::ResourceParserObserverClass& observers) {
	int ret = analyzer.NextToken();

	// ignore these token; there are no parse rules for them
	if (pelet::T_OPEN_TAG == ret || pelet::T_OPEN_TAG_WITH_ECHO == ret) {
		ret = analyzer.NextToken();
	}

	// most of the lexer tokens will just end up being token types since we do
	// not care about the lexemes (source code strings).  Only in a few cases
	// we really care about the source code contents. only for identifiers
	//
	if (pelet::T_ABSTRACT == ret ||
		pelet::T_CLASS == ret ||
		pelet::T_COMMENT == ret ||
		pelet::T_CONST  == ret ||
		pelet::T_CONSTANT_ENCAPSED_STRING == ret ||
		pelet::T_LNUMBER == ret || 
		pelet::T_DNUMBER == ret ||
		pelet::T_DOC_COMMENT == ret ||
		pelet::T_ENCAPSED_AND_WHITESPACE == ret ||
		pelet::T_FINAL == ret ||
		pelet::T_FUNCTION == ret ||
		pelet::T_INTERFACE == ret ||
		pelet::T_PRIVATE == ret ||
		pelet::T_PROTECTED == ret ||
		pelet::T_PUBLIC == ret ||
		pelet::T_STATIC == ret ||
		pelet::T_STRING == ret ||
		pelet::T_STRING_VARNAME == ret ||
		pelet::T_TRAIT == ret ||
		pelet::T_VAR == ret ||
		pelet::T_VARIABLE == ret) {
		value->lexeme = new pelet::SemanticValueClass;
		observers.Adopt(value->lexeme);

		// advance past all comments (there can be more than one consecutive)
		if (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {
			while (pelet::T_DOC_COMMENT == ret || pelet::T_COMMENT == ret) {
				if (pelet::T_DOC_COMMENT == ret) {
					analyzer.GetLexeme(value->lexeme->Comment);
				}
				ret = analyzer.NextToken();
			}
		}

		// since there is no grammar rule for the close PHP tag
		// treat the close tag as an end of statement
		if (pelet::T_CLOSE_TAG == ret) {
			ret = ';';
		}
		value->lexeme->Token = ret;
		analyzer.GetLexeme(value->lexeme->Lexeme);
		value->lexeme->Pos = analyzer.GetCharacterPosition();
		value->lexeme->LineNumber = analyzer.GetLineNumber();
	}
	else {
		
		// since there is no grammar rule for the close PHP tag
		// treat the close tag as an end of statement
		if (pelet::T_CLOSE_TAG == ret) {
			ret = ';';
		}
		value->token.Token = ret;
		value->token.Pos = analyzer.GetCharacterPosition();
		value->token.LineNumber = analyzer.GetLineNumber();
	}
	return ret;
}

void pelet::ResourceGrammarError(pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass& observers, std::string msg) {
	int capacity = msg.length() + 1;
	int written = u_sprintf(analyzer.ParserError.getBuffer(capacity), "%s", msg.c_str());
	analyzer.ParserError.releaseBuffer(written);
}



void pelet::NotifyMagicMethodsAndProperties(pelet::ClassMemberObserverClass* memberObserver, 
											const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace,
											const UnicodeString& phpDocComment, UnicodeString currentNamespaceName, 
											UnicodeString currentClassName, const int lineNumber) {
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
				memberType = pelet::PhpDocTypeToAbsoluteClassname(memberType, scope, currentNamespace);
				memberObserver->PropertyFound(currentNamespaceName, currentClassName, memberName, memberType, UNICODE_STRING_SIMPLE(""),
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
				memberType = pelet::PhpDocTypeToAbsoluteClassname(memberType, scope, currentNamespace);
				memberObserver->MethodFound(currentNamespaceName, currentClassName, memberName, signature, memberType, UNICODE_STRING_SIMPLE(""),
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

pelet::ResourceParserObserverClass::ResourceParserObserverClass(pelet::ClassObserverClass* classObserver,
		pelet::ClassMemberObserverClass* memberObserver,
		pelet::FunctionObserverClass* functionObserver)
	: DoCaptureScalars(false)
	, DoCaptureCallArguments(false)
	, DoCaptureProperties(false)
	, AllStatements() 
	, Scope()
	, DeclaredNamespace()
	, Class(classObserver)
	, Member(memberObserver)
	, Function(functionObserver) {

}

pelet::ResourceParserObserverClass::~ResourceParserObserverClass() {
	for (size_t i = 0; i < AllStatements.size(); ++i) {
		delete AllStatements[i];
	}
	AllStatements.clear();
}

void pelet::ResourceParserObserverClass::Adopt(pelet::AstItemClass* astItem) {
	AllStatements.push_back(astItem);
}

void pelet::ResourceParserObserverClass::NamespaceUseAddScope(pelet::NamespaceUseClass* namespaceUse) {

	// dont worry about duplicate aliases, since its incorrect PHP
	Scope.AddNamespaceAlias(namespaceUse->NamespaceName, namespaceUse->Alias);
}

void pelet::ResourceParserObserverClass::SetCurrentClassName(pelet::SemanticValueClass* value) {
	Scope.ClassName = value ? value->Lexeme : UNICODE_STRING_SIMPLE("");
}

void pelet::ResourceParserObserverClass::SetCurrentMemberName(pelet::SemanticValueClass* value) {
	Scope.MethodName = value ? value->Lexeme : UNICODE_STRING_SIMPLE("");
}

void pelet::ResourceParserObserverClass::SetDeclaredNamespace(pelet::QualifiedNameClass* qualifiedName) {
	Scope.ClearAliases();
	if (qualifiedName) {
		
		// setting to true because the namespace declaration is always absolute according to PHP rules
		qualifiedName->IsAbsolute = true;
		DeclaredNamespace = *qualifiedName;
		
		Scope.NamespaceName = DeclaredNamespace.ToSignature();
	} else {
		DeclaredNamespace.Clear();
		
		// setting to true because the namespace declaration is always absolute according to PHP rules
		DeclaredNamespace.IsAbsolute = true;
		Scope.NamespaceName.remove();
	}
}

void pelet::ResourceParserObserverClass::DeclareAssignedProperties(pelet::StatementListClass* classStatements) {
	if (NULL == classStatements || classStatements->Size() == 0) {
		return;
	}

	pelet::StatementListClass filteredStatements;
	std::vector<UnicodeString> propertyNames;

	// loop through each statement, if it is a duplicate property dont add it 
	// to the filtered list
	// since statements holds pointers that are owned by AllStatements vector, we don't
	// have to delete them
	for (size_t i = 0; i < classStatements->Size(); ++i) {
		pelet::StatementClass::Types type = classStatements->TypeAt(i);
		if (pelet::StatementClass::PROPERTY_DECLARATION == type) {
			pelet::ClassMemberSymbolClass* member = (pelet::ClassMemberSymbolClass*)classStatements->At(i);
			UnicodeString propertyName = member->MemberName;
			if (propertyNames.end() == std::find(propertyNames.begin(), propertyNames.end(), propertyName)) {
				filteredStatements.Push(member);
				propertyNames.push_back(propertyName);
			}
		}
		else {
			filteredStatements.Push(classStatements->At(i));
		}
	}
	classStatements->Clear();
	classStatements->PushAll(&filteredStatements);
}

void pelet::ResourceParserObserverClass::MakeAst(pelet::StatementListClass* statements) {

	// go through the list of statements and send the correct notifications
	for (size_t i = 0; i < statements->Size(); ++i) {
		pelet::StatementClass::Types type = statements->TypeAt(i);
		pelet::StatementClass* stmt = statements->At(i);
		pelet::ClassSymbolClass* classSymbol;
		pelet::ConstantStatementClass* constant;
		pelet::ClassMemberSymbolClass* memberSymbol;
		UnicodeString signature;
		UnicodeString comment;
		pelet::TokenClass::TokenIds visibility;
		pelet::NamespaceDeclarationClass* declaration;
		pelet::NamespaceUseClass* namespaceUse;
		pelet::TraitAliasClass* traitAlias;
		pelet::TraitUseClass* traitUse;
		pelet::TraitInsteadOfClass* traitInsteadOf;
		pelet::IncludeStatementClass* include;
		switch(type) {
		case pelet::StatementClass::ASSIGNMENT:
			break;
		case pelet::StatementClass::CLASS_DECLARATION:
			if (Class) {
				classSymbol = (pelet::ClassSymbolClass*) stmt;
				Class->ClassFound(classSymbol->NamespaceName, classSymbol->ClassName, classSymbol->ToSignature(),
								  classSymbol->Comment, classSymbol->StartingLineNumber);
			}
			if (Member) {
				classSymbol = (pelet::ClassSymbolClass*) stmt;

				// TODO this is wrong; as we have finished parsing at this point Scope and DeclaredNamespace are 
				// not correct
				NotifyMagicMethodsAndProperties(Member, Scope, DeclaredNamespace, classSymbol->Comment, classSymbol->NamespaceName,
													classSymbol->ClassName, classSymbol->StartingLineNumber);
			}
			if (Class) {
				classSymbol = (pelet::ClassSymbolClass*) stmt;
				Class->ClassEnd(classSymbol->NamespaceName, classSymbol->ClassName, classSymbol->EndingLineNumber);
			}
			break;
		case pelet::StatementClass::DEFINE_DECLARATION:
			if (Class) {
				constant = (pelet::ConstantStatementClass*) stmt;
				Class->DefineDeclarationFound(constant->NamespaceName, constant->Name, constant->Value, constant->Comment, constant->LineNumber);
			}
			break;
		case pelet::StatementClass::EXPRESSION:
			break;
		case pelet::StatementClass::FUNCTION_DECLARATION:
			if (Function) {
				memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;

				// remove the 'public' we are re-using the ClassMember symbol which always assumes a
				// method signature
				// didnt feel like writing a whole other class for just for functions when functions and
				// methods are almost identical
				signature = memberSymbol->ToMethodSignature(memberSymbol->ParametersList.ToSignature());
				signature.setTo(signature, signature.indexOf(UNICODE_STRING_SIMPLE("function")));


				Function->FunctionFound(memberSymbol->NamespaceName, memberSymbol->MemberName, signature,
										memberSymbol->GetReturnType(), memberSymbol->GetComment(), memberSymbol->StartingLineNumber);
				Function->FunctionScope(memberSymbol->NamespaceName, memberSymbol->MemberName,
						memberSymbol->StartingPosition, memberSymbol->EndingPosition);
			}
			break;
		case pelet::StatementClass::INCLUDE_STATEMENT:
			if (Class) {
				include = (pelet::IncludeStatementClass*) stmt;
				Class->IncludeFound(include->File, include->LineNumber);
			}
			break;
		case pelet::StatementClass::ASSIGNMENT_LIST:
			break;
		case pelet::StatementClass::METHOD_DECLARATION:
			if (Member) {
				memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;
				comment = memberSymbol->GetComment();
				signature = memberSymbol->ToMethodSignature(memberSymbol->ParametersList.ToSignature());
				visibility = pelet::TokenClass::PUBLIC;
				if (memberSymbol->IsProtectedMember) {
					visibility = pelet::TokenClass::PROTECTED;
				} else if (memberSymbol->IsPrivateMember) {
					visibility = pelet::TokenClass::PRIVATE;
				}
				Member->MethodFound(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName, signature,
									memberSymbol->GetReturnType(), comment, visibility, memberSymbol->IsStaticMember, memberSymbol->StartingLineNumber);
				Member->MethodScope(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName, 
					memberSymbol->StartingPosition, memberSymbol->EndingPosition);
			}
			break;
		case pelet::StatementClass::NAMESPACE_DECLARATION:
			if (Class) {
				declaration = (pelet::NamespaceDeclarationClass*) stmt;
				Class->NamespaceDeclarationFound(declaration->NamespaceName, declaration->StartingPosition);
			}
			break;
		case pelet::StatementClass::NAMESPACE_USE:
			if (Class) {
				namespaceUse = (pelet::NamespaceUseClass*) stmt;
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
				memberSymbol = (pelet::ClassMemberSymbolClass*) stmt;
				comment = memberSymbol->GetComment();
				visibility = pelet::TokenClass::PUBLIC;
				if (memberSymbol->IsProtectedMember) {
					visibility = pelet::TokenClass::PROTECTED;
				} else if (memberSymbol->IsPrivateMember) {
					visibility = pelet::TokenClass::PRIVATE;
				}
				Member->PropertyFound(memberSymbol->NamespaceName, memberSymbol->ClassName, memberSymbol->MemberName,
									  memberSymbol->GetReturnType(), comment, visibility, memberSymbol->IsConstMember, memberSymbol->IsStaticMember, memberSymbol->StartingLineNumber);
			}
			break;
		case pelet::StatementClass::TRAIT_ALIAS_DECLARATION:
			if (Member) {
				traitAlias = (pelet::TraitAliasClass*) stmt;
				Member->TraitAliasFound(traitAlias->NamespaceName, traitAlias->ClassName,
										traitAlias->TraitUsedClassName, traitAlias->TraitMethodReferenceName, traitAlias->Alias, traitAlias->Visibility);
			}
			break;
		case pelet::StatementClass::TRAIT_INSTEADOF_DECLARATION:
			if (Member) {
				traitInsteadOf = (pelet::TraitInsteadOfClass*) stmt;
				Member->TraitInsteadOfFound(traitInsteadOf->NamespaceName, traitInsteadOf->ClassName,
											traitInsteadOf->TraitUsedClassName, traitInsteadOf->TraitMethodReferenceName, traitInsteadOf->InsteadOfList);
			}
			break;
		case pelet::StatementClass::TRAIT_USE_DECLARATION:
			if (Member) {
				traitUse = (pelet::TraitUseClass*) stmt;
				for (size_t i = 0; i < traitUse->UsedTraits.size(); ++i) {
					Member->TraitUseFound(traitUse->NamespaceName, traitUse->ClassName, traitUse->UsedTraits[i]);
				}
			}
			break;
		case pelet::StatementClass::SCALAR:
			break;
		}
	}
}

const pelet::ScopeClass& pelet::ResourceParserObserverClass::GetScope() const {
	return Scope;
}

const pelet::QualifiedNameClass& pelet::ResourceParserObserverClass::GetDeclaredNamespace() const {
	return DeclaredNamespace;
}