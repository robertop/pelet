The coding standards for pelet are simple: They are only a few but the must always be followed, no exceptions.

1. Class names will be prefixed with "Class" example: TestClass, StringClass. This takes the guess work out of
   coming up with instance names.
2. No code in a header file (inline functions), ever! Otherwise it gets tricky to find out where a function is
   defined.
3. File names, Functions, Methods, Class Properties, will always be CamelCase, first letter is capitalized. This
   makes it easy to distinguish class member variables  / functions and local variables.
4. Brace must be in the same line.
5. No global or static variables.
6. Use Tabs for indentation, not spaces.

Example:

class StringClass {

public:

	StringClass();
	
	int Length() const;

private:

	char* Buffer;
	
	int BufferSize;
};

int StringClass::Length() const {
	int len;
	for (len = 0; len < BufferSize; ++i) {
		if (Buffer[len] == '\0') {
			break;
		}
	}
	return len;
}