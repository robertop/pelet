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
#ifndef __PELET_RESOURCEPARSERTYPECLASS_H__
#define __PELET_RESOURCEPARSERTYPECLASS_H__

#include <pelet/ParserTypeClass.h>
#include <pelet/LexicalAnalyzerClass.h>

namespace pelet {

class ResourceParserObserverClass {

public:

	/**
	 * This object will NOT own the observer pointers.
	 * pointers must not be NULL.
	 */
	ResourceParserObserverClass(pelet::ClassObserverClass* classObserver,
		pelet::ClassMemberObserverClass* memberObserver,
		pelet::FunctionObserverClass* functionObserver);

	~ResourceParserObserverClass();

	pelet::SemanticValueClass* LexemeMake();

	void Adopt(pelet::AstItemClass* astItem);

	/*************************************************
	 class members (methods, properties or constants)
	**************************************************/
	pelet::ClassMemberSymbolClass* ClassMemberMakeBody(pelet::StatementListClass* bodyStatements, 
		const pelet::TokenPositionClass& startingPositionTokenValue, const pelet::TokenPositionClass& endingPositionTokenValue);

	pelet::ClassMemberSymbolClass* ClassMemberSymbolMake(pelet::SemanticValueClass* varValue);

	pelet::ClassMemberSymbolClass* ClassMemberSymbolMakeAsPublicVariable(pelet::SemanticValueClass* varValue);

	pelet::StatementListClass* ClassMemberSymbolMakeFunction(pelet::SemanticValueClass* nameValue, 
		bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters,
		const pelet::TokenPositionClass& startingBodyTokenValue, const pelet::TokenPositionClass& endingBodyTokenValue);

	pelet::StatementListClass* ClassMemberSymbolMakeMethod(pelet::SemanticValueClass* nameValue, 
		pelet::ClassMemberSymbolClass* modifiers,
		bool isReference, pelet::SemanticValueClass* functionValue, pelet::ParametersListClass* parameters, 
		pelet::ClassMemberSymbolClass* methodBody);
	
	pelet::StatementListClass* ClassMemberSymbolMakeVariable(pelet::SemanticValueClass* nameValue, pelet::SemanticValueClass* commentValue, bool isConstant, const int endingPosition);
	
	pelet::StatementListClass* ClassMemberSymbolMakeVariables(pelet::StatementListClass* variableStatements, pelet::ClassMemberSymbolClass* modifiers);
	
	pelet::ClassMemberSymbolClass* ClassMemberSymbolSetModifier(pelet::ClassMemberSymbolClass* memberSymbol, pelet::SemanticValueClass* modifierValue);
	
	/*************************************************
	 namespace declarations, usages
	**************************************************/	
	void NamespaceUseAddScope(pelet::NamespaceUseClass* namespaceUse);

	pelet::StatementListClass* NamespaceUseSetStartingPos(pelet::StatementListClass* namespaceStatements, const pelet::TokenPositionClass& useToken);
	
	/*************************************************
	 set the current scope so that it can be used in other places
	**************************************************/
	void SetCurrentClassName(pelet::SemanticValueClass* value);
	
	void SetCurrentMemberName(pelet::SemanticValueClass* value);
	
	void SetCurrentNamespace(pelet::QualifiedNameClass* qualifiedName);

	/*************************************************
	 make a list of statements
	**************************************************/
	pelet::StatementListClass* StatementListAppend(pelet::StatementListClass* statementList, pelet::StatementClass* statement);
	
	pelet::StatementListClass* StatementListMake();
	
	pelet::StatementListClass* StatementListMakeAndAppend(pelet::StatementClass* statement);
	
	pelet::StatementListClass* StatementListMerge(pelet::StatementListClass* a, pelet::StatementListClass* b); 
	
	pelet::StatementListClass* StatementListNil();

	/*************************************************
	 make a function call; only when a define() call is made
	**************************************************/
	pelet::VariableClass* VariableMakeFunctionCall(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber);

	pelet::VariableClass* VariableMakeFunctionCallFromAbsoluteNamespace(pelet::QualifiedNameClass* functionName, pelet::StatementListClass* callArguments, int lineNumber);

	/*************************************************
	 After all of the code has been parsed and statements created; notify the observers
	**************************************************/
	void MakeAst(pelet::StatementListClass* statements);

private:

	/**
	 * Keep track of all statements; that way we can clean them up on exit
	 */
	std::vector<pelet::AstItemClass*> AllStatements;

	/**
	 * the class, method, and namespace that are currently being parsed.
	 */
	ScopeClass Scope;

	/**
	 * The current namespace
	 */
	QualifiedNameClass CurrentNamespace;
	
	/**
	 * This object will NOT own the pointer
	 */
	ClassObserverClass* Class;

	/**
	 * This object will NOT own the pointer
	 */
	ClassMemberObserverClass* Member;

	/**
	 * This object will NOT own the pointer
	 */
	FunctionObserverClass* Function;
};

/**
 * This is the parser type that the bison parser uses. A grammar rule outputs
 * to exactly ONE of these properties
 */
typedef union ResourceParserType {
	pelet::QualifiedNameClass* qualifiedName;
	pelet::StatementClass* statement;
	pelet::ClassSymbolClass* classSymbol;
	pelet::ClassMemberSymbolClass* classMemberSymbol;
	pelet::ParametersListClass* parametersList;
	pelet::TraitUseClass* traitUse;
	pelet::TraitAliasClass* traitAlias;
	pelet::TraitInsteadOfClass* traitInsteadOf;
	pelet::StatementListClass* statementList;
	pelet::SemanticValueClass* lexeme;
	pelet::NamespaceUseClass* namespaceUse;
	pelet::TokenPositionClass token;
	int unused;
	bool isComma;
	bool isReference;
} ResourceParserTypeClass;

/**
 * Get the return type from the '\@return' / '\@var' annotation
 * 
 * @param const UnicodeString& phpDocComment the comment
 * @param bool varAnnotation if false, will return the word after '\@var', else return the word after '\@return'
 * @param scope the scope where the PHPDoc comment is located in
 * @param currentNamespace the current namespace we are in
 * @return UnicodeString
 */
UnicodeString ReturnTypeFromPhpDocComment(const UnicodeString& phpDocComment, bool varAnnotation,
										  const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);

/**
 * Turn a PHPDoc type into a fully qualified class name. The phpdoc type will get
 * qualified according to the same PHP rules as a type hint; the current namespace
 * and any aliases will be correctly accounted for.
 * 
 * @param phpDocType the parsed type in the PHPDoc, ie. in "@return StringClass" then this parameter
 *        should be "StringClass"
 * @param scope the scope where the PHPDoc comment is located in
 * @param currentNamespace the current namespace we are in
 * @param the fully qualified class name
 */
UnicodeString PhpDocTypeToAbsoluteClassname(UnicodeString phpDocType, 
											const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace);

/**
 * parses out the given PHPDoc comment and notifies the member observer of any
 * \@property, \@property-read, \@property-write, and \@method 
 * declarations.
 */
void NotifyMagicMethodsAndProperties(pelet::ClassMemberObserverClass* memberObserver, 
									 const pelet::ScopeClass& scope, const pelet::QualifiedNameClass& currentNamespace,
									 const UnicodeString& phpDocComment, UnicodeString currentNamespaceName, UnicodeString currentClassName, const int lineNumber);

}

int ResourceSemanticValue(pelet::ResourceParserTypeClass* value, pelet::LexicalAnalyzerClass& analyzer, pelet::ResourceParserObserverClass& observers);

void ResourceGrammarError(pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass& observers, std::string msg);


#endif