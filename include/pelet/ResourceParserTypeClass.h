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
	 * If TRUE, then the parser will capture scalar values. This is used to build an AST only in 
	 * cases for calls to define() and include()/require(). Only in these cases do we want
	 * to know the scalar values; turning this functionality off is done for performance 
	 * reasons.
	 */
	bool DoCaptureScalars;

	/**
	 * This object will NOT own the observer pointers.
	 * pointers must not be NULL.
	 */
	ResourceParserObserverClass(pelet::ClassObserverClass* classObserver,
		pelet::ClassMemberObserverClass* memberObserver,
		pelet::FunctionObserverClass* functionObserver);

	~ResourceParserObserverClass();

	/**
	 * @param astItem the pointer to manager.  Once this method is called, this
	 *        object will own the pointer. the pointer will be deleted when
	 *        this object goes out of scope.
	 */
	void Adopt(pelet::AstItemClass* astItem);

	/*************************************************
	 namespace declarations, usages
	**************************************************/	
	void NamespaceUseAddScope(pelet::NamespaceUseClass* namespaceUse);
	
	/*************************************************
	 set / get the current scope so that it can be used in other places
	**************************************************/
	void SetCurrentClassName(pelet::SemanticValueClass* value);
	
	void SetCurrentMemberName(pelet::SemanticValueClass* value);
	
	void SetCurrentNamespace(pelet::QualifiedNameClass* qualifiedName);

	const pelet::ScopeClass& GetScope() const;

	const pelet::QualifiedNameClass& GetCurrentNamespace() const;
	
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
 * to exactly ONE of these . All of these pointers will be
 * Adopt() by ResourceParserObserverClass; that way they get cleaned up
 * when the ResourceParserObserverClass object goes out of scope.
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