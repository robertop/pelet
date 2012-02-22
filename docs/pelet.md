pelet design
============
This doc briefly describes the major design of the pelet parser library.

pelet has the folowing major components:

- PHP lexer (LexicalAnalyzerClass). This is used to tokenize the source code (turn strings into tokens).
- PHP syntax rules (Php53ParserImpl.y, a parser generated with Bison). This used to follow the PHP rules; 
  for example after "function" comes the function name; after "if" comes a "(" and so on...)
- The pelet observers (ParserObserverClass). These are used by the syntax rules; when the syntax rules hit
  an artifact (for example a class) the syntax rules will call the proper observer.
- The pelet parser (ParserClass). This is the "driver", the entry point to the parser library.

To use the parser, a user will create a class that defines the callbacks for each PHP artifact (class, function,
method, etc). The user will register these callbacks with the parser.

When ParserClass::ScanFile is called, the bison parser rules start looking for syntax rules. The parser
will ask the lexer for tokens.  As soon as a specific rule is hit, then the proper parser observer callback
gets called. For example, when the parser hits the "class" rule (ie "class MyClass {") then the class observer
will get called; and the observer will get the identifer ("MyClass") along with other info (signature, comment).
The important thing to note here is that the callbacks happen while ParserClass::ScanFile still has control.
ParserClass::ScanFile does not return control until the entire file has been parsed; multiple callbacks will have
been called before ParserClass::ScanFile returns.  For this reason, it is important that ParserClass::ScanFile
should not be called within any of the observers.

A word on concurrency: The pelet parser does not keep global state (it is a "pure" bison parser), but the pelet
parser is not thread-safe.  If pelet is used on a multi-threaded app, each thread should have its own instance
of pelet::ParserClass.