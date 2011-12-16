
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         php53parse
#define yylex           php53lex
#define yyerror         php53error
#define yylval          php53lval
#define yychar          php53char
#define yydebug         php53debug
#define yynerrs         php53nerrs


/* Copy the first part of user declarations.  */


	
/**
 * This software is released under the terms of the MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to th	`e following conditions:
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
 #include <language/UCharBufferedFileClass.h>
 #include <language/LexicalAnalyzerClass.h>
 #include <language/SymbolTableClass.h>
 #include <unicode/unistr.h>
 #include <string>
 #include <stack>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
 typedef struct SymbolStruct {
	int Token;
	mvceditor::SymbolClass* Symbol;
 } Symbol_t;
 
 static void FreeSymbol(Symbol_t& value);
 
 static void CopySymbol(Symbol_t& from, Symbol_t& to);
 
 static void SetSymbolType(Symbol_t& value, mvceditor::SymbolClass::Types type);
 
 static void MakeVariable(Symbol_t& value, mvceditor::SymbolClass::Types type, mvceditor::SymbolTableClass& symbolTable);
 
 static void MakeTempVariable(Symbol_t& value, mvceditor::SymbolTableClass& symbolTable);
 
 static void MakeTempVariableAndStack(const UnicodeString& object, Symbol_t& property, Symbol_t& lookahead, mvceditor::SymbolTableClass& symbolTable, std::stack<UnicodeString>& variableStack);

 
  #define YYSTYPE Symbol_t
 
 int php53lex(YYSTYPE* value, mvceditor::LexicalAnalyzerClass &analyzer);
 void php53error(mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::SymbolTableClass& symbolTable, std::stack<UnicodeString> variableStack, std::string msg);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_END_OF_FILE = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_CONTINUE = 332,
     T_GOTO = 333,
     T_FUNCTION = 334,
     T_CONST = 335,
     T_RETURN = 336,
     T_TRY = 337,
     T_CATCH = 338,
     T_THROW = 339,
     T_USE = 340,
     T_GLOBAL = 341,
     T_PUBLIC = 342,
     T_PROTECTED = 343,
     T_PRIVATE = 344,
     T_FINAL = 345,
     T_ABSTRACT = 346,
     T_STATIC = 347,
     T_VAR = 348,
     T_UNSET = 349,
     T_ISSET = 350,
     T_EMPTY = 351,
     T_HALT_COMPILER = 352,
     T_CLASS = 353,
     T_INTERFACE = 354,
     T_EXTENDS = 355,
     T_IMPLEMENTS = 356,
     T_OBJECT_OPERATOR = 357,
     T_DOUBLE_ARROW = 358,
     T_LIST = 359,
     T_ARRAY = 360,
     T_CLASS_C = 361,
     T_METHOD_C = 362,
     T_FUNC_C = 363,
     T_LINE = 364,
     T_FILE = 365,
     T_COMMENT = 366,
     T_DOC_COMMENT = 367,
     T_OPEN_TAG = 368,
     T_OPEN_TAG_WITH_ECHO = 369,
     T_CLOSE_TAG = 370,
     T_WHITESPACE = 371,
     T_START_HEREDOC = 372,
     T_END_HEREDOC = 373,
     T_DOLLAR_OPEN_CURLY_BRACES = 374,
     T_CURLY_OPEN = 375,
     T_PAAMAYIM_NEKUDOTAYIM = 376,
     T_NAMESPACE = 377,
     T_NS_C = 378,
     T_DIR = 379,
     T_NS_SEPARATOR = 380,
     T_ERROR_UNTERMINATED_COMMENT = 381,
     T_ERROR_UNTERMINATED_STRING = 382,
     T_ERROR_UNTERMINATED_BACKTICK = 383
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5246

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  157
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  179
/* YYNRULES -- Number of rules.  */
#define YYNRULES  462
/* YYNRULES -- Number of states.  */
#define YYNSTATES  892

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   383

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   155,     2,   153,    47,    31,     2,
     148,   149,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   150,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   156,    30,     2,   154,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   151,    29,   152,    50,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    54,
      58,    60,    62,    66,    69,    74,    80,    85,    86,    90,
      91,    93,    95,    97,   102,   104,   107,   111,   112,   113,
     123,   124,   125,   138,   139,   140,   148,   149,   150,   160,
     161,   162,   163,   176,   177,   184,   187,   191,   194,   198,
     201,   205,   209,   213,   217,   221,   223,   226,   232,   233,
     234,   245,   246,   247,   258,   259,   266,   268,   269,   270,
     271,   272,   273,   292,   296,   300,   302,   303,   305,   308,
     309,   310,   321,   323,   327,   329,   331,   333,   334,   336,
     337,   348,   349,   358,   359,   367,   369,   372,   375,   376,
     379,   381,   382,   385,   386,   389,   391,   395,   396,   399,
     401,   404,   406,   411,   413,   418,   420,   425,   429,   435,
     439,   444,   449,   455,   456,   457,   464,   465,   471,   473,
     475,   477,   482,   483,   484,   492,   493,   494,   503,   504,
     507,   508,   512,   514,   515,   518,   522,   528,   533,   538,
     544,   552,   559,   560,   562,   564,   566,   567,   569,   571,
     574,   578,   582,   587,   591,   593,   595,   598,   603,   607,
     613,   615,   619,   622,   623,   624,   629,   632,   633,   643,
     645,   649,   651,   653,   654,   656,   658,   661,   663,   665,
     667,   669,   671,   673,   677,   683,   685,   689,   695,   700,
     704,   706,   707,   709,   710,   715,   717,   718,   726,   730,
     735,   736,   744,   745,   750,   753,   757,   761,   765,   769,
     773,   777,   781,   785,   789,   793,   797,   800,   803,   806,
     809,   810,   815,   816,   821,   822,   827,   828,   833,   837,
     841,   845,   849,   853,   857,   861,   865,   869,   873,   877,
     881,   884,   887,   890,   893,   897,   901,   905,   909,   913,
     917,   921,   925,   929,   933,   934,   935,   943,   944,   950,
     952,   955,   958,   961,   964,   967,   970,   973,   976,   977,
     981,   983,   988,   992,   995,   996,  1007,  1009,  1010,  1015,
    1019,  1024,  1026,  1029,  1030,  1036,  1037,  1045,  1046,  1053,
    1054,  1062,  1063,  1071,  1072,  1080,  1081,  1089,  1090,  1096,
    1098,  1100,  1104,  1107,  1109,  1113,  1116,  1118,  1120,  1121,
    1122,  1129,  1131,  1134,  1135,  1138,  1139,  1142,  1146,  1147,
    1149,  1151,  1152,  1156,  1158,  1160,  1162,  1164,  1166,  1168,
    1170,  1172,  1174,  1176,  1180,  1183,  1185,  1187,  1191,  1194,
    1197,  1200,  1205,  1207,  1211,  1213,  1215,  1217,  1221,  1224,
    1226,  1230,  1234,  1235,  1238,  1239,  1241,  1247,  1251,  1255,
    1257,  1259,  1261,  1263,  1265,  1267,  1268,  1275,  1277,  1280,
    1281,  1285,  1286,  1291,  1292,  1294,  1297,  1301,  1305,  1307,
    1309,  1311,  1313,  1316,  1318,  1323,  1328,  1330,  1332,  1337,
    1338,  1340,  1342,  1343,  1346,  1351,  1356,  1358,  1360,  1364,
    1366,  1369,  1373,  1375,  1377,  1378,  1384,  1385,  1386,  1389,
    1395,  1399,  1403,  1405,  1412,  1417,  1422,  1425,  1428,  1431,
    1433,  1436,  1438,  1439,  1445,  1449,  1453,  1460,  1464,  1466,
    1468,  1470,  1475,  1480,  1483,  1486,  1491,  1494,  1497,  1499,
    1500,  1505,  1509
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     158,     0,    -1,   159,    -1,    -1,   159,   160,   162,    -1,
      -1,    71,    -1,   161,   144,    71,    -1,   171,    -1,   202,
      -1,   203,    -1,   116,   148,   149,   150,    -1,   141,   161,
     150,    -1,    -1,   141,   161,   151,   163,   159,   152,    -1,
      -1,   141,   151,   164,   159,   152,    -1,   104,   165,   150,
      -1,   167,   150,    -1,   165,     8,   166,    -1,   166,    -1,
     161,    -1,   161,    90,    71,    -1,   144,   161,    -1,   144,
     161,    90,    71,    -1,   167,     8,    71,    13,   294,    -1,
      99,    71,    13,   294,    -1,    -1,   168,   169,   170,    -1,
      -1,   171,    -1,   202,    -1,   203,    -1,   116,   148,   149,
     150,    -1,   172,    -1,    71,    26,    -1,   151,   168,   152,
      -1,    -1,    -1,    65,   148,   300,   149,   173,   171,   174,
     228,   232,    -1,    -1,    -1,    65,   148,   300,   149,    26,
     175,   168,   176,   230,   233,    68,   150,    -1,    -1,    -1,
      82,   148,   177,   300,   149,   178,   227,    -1,    -1,    -1,
      81,   179,   171,    82,   148,   180,   300,   149,   150,    -1,
      -1,    -1,    -1,    84,   148,   254,   150,   181,   254,   150,
     182,   254,   149,   183,   218,    -1,    -1,    91,   148,   300,
     149,   184,   222,    -1,    95,   150,    -1,    95,   300,   150,
      -1,    96,   150,    -1,    96,   300,   150,    -1,   100,   150,
      -1,   100,   257,   150,    -1,   100,   304,   150,    -1,   105,
     239,   150,    -1,   111,   241,   150,    -1,    80,   253,   150,
      -1,    75,    -1,   300,   150,    -1,   113,   148,   200,   149,
     150,    -1,    -1,    -1,    86,   148,   304,    90,   185,   217,
     216,   149,   186,   219,    -1,    -1,    -1,    86,   148,   257,
      90,   187,   304,   216,   149,   188,   219,    -1,    -1,    88,
     189,   148,   221,   149,   220,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   190,   151,   168,   152,   102,   148,
     191,   283,   192,    73,   149,   193,   151,   168,   152,   194,
     195,    -1,   103,   300,   150,    -1,    97,    71,   150,    -1,
     196,    -1,    -1,   197,    -1,   196,   197,    -1,    -1,    -1,
     102,   148,   283,   198,    73,   149,   199,   151,   168,   152,
      -1,   201,    -1,   200,     8,   201,    -1,   304,    -1,   205,
      -1,   207,    -1,    -1,    31,    -1,    -1,   270,   204,    71,
     206,   148,   234,   149,   151,   168,   152,    -1,    -1,   210,
      71,   211,   208,   214,   151,   242,   152,    -1,    -1,   212,
      71,   209,   213,   151,   242,   152,    -1,   117,    -1,   110,
     117,    -1,   109,   117,    -1,    -1,   119,   283,    -1,   118,
      -1,    -1,   119,   215,    -1,    -1,   120,   215,    -1,   283,
      -1,   215,     8,   283,    -1,    -1,   122,   217,    -1,   304,
      -1,    31,   304,    -1,   171,    -1,    26,   168,    85,   150,
      -1,   171,    -1,    26,   168,    87,   150,    -1,   171,    -1,
      26,   168,    89,   150,    -1,    71,    13,   294,    -1,   221,
       8,    71,    13,   294,    -1,   151,   223,   152,    -1,   151,
     150,   223,   152,    -1,    26,   223,    92,   150,    -1,    26,
     150,   223,    92,   150,    -1,    -1,    -1,   223,    93,   300,
     226,   224,   168,    -1,    -1,   223,    94,   226,   225,   168,
      -1,    26,    -1,   150,    -1,   171,    -1,    26,   168,    83,
     150,    -1,    -1,    -1,   228,    66,   148,   300,   149,   229,
     171,    -1,    -1,    -1,   230,    66,   148,   300,   149,    26,
     231,   168,    -1,    -1,    67,   171,    -1,    -1,    67,    26,
     168,    -1,   235,    -1,    -1,   236,    73,    -1,   236,    31,
      73,    -1,   236,    31,    73,    13,   294,    -1,   236,    73,
      13,   294,    -1,   235,     8,   236,    73,    -1,   235,     8,
     236,    31,    73,    -1,   235,     8,   236,    31,    73,    13,
     294,    -1,   235,     8,   236,    73,    13,   294,    -1,    -1,
     283,    -1,   124,    -1,   238,    -1,    -1,   257,    -1,   304,
      -1,    31,   302,    -1,   238,     8,   257,    -1,   238,     8,
     304,    -1,   238,     8,    31,   302,    -1,   239,     8,   240,
      -1,   240,    -1,    73,    -1,   153,   301,    -1,   153,   151,
     300,   152,    -1,   241,     8,    73,    -1,   241,     8,    73,
      13,   294,    -1,    73,    -1,    73,    13,   294,    -1,   242,
     243,    -1,    -1,    -1,   247,   244,   251,   150,    -1,   252,
     150,    -1,    -1,   248,   270,   204,    71,   245,   148,   234,
     149,   246,    -1,   150,    -1,   151,   168,   152,    -1,   249,
      -1,   112,    -1,    -1,   249,    -1,   250,    -1,   249,   250,
      -1,   106,    -1,   107,    -1,   108,    -1,   111,    -1,   110,
      -1,   109,    -1,   251,     8,    73,    -1,   251,     8,    73,
      13,   294,    -1,    73,    -1,    73,    13,   294,    -1,   252,
       8,    71,    13,   294,    -1,    99,    71,    13,   294,    -1,
     253,     8,   300,    -1,   300,    -1,    -1,   255,    -1,    -1,
     255,     8,   256,   300,    -1,   300,    -1,    -1,   123,   148,
     258,   323,   149,    13,   300,    -1,   304,    13,   300,    -1,
     304,    13,    31,   304,    -1,    -1,   304,    13,    31,    63,
     284,   259,   292,    -1,    -1,    63,   284,   260,   292,    -1,
      62,   300,    -1,   304,    24,   300,    -1,   304,    23,   300,
      -1,   304,    22,   300,    -1,   304,    21,   300,    -1,   304,
      20,   300,    -1,   304,    19,   300,    -1,   304,    18,   300,
      -1,   304,    17,   300,    -1,   304,    16,   300,    -1,   304,
      15,   300,    -1,   304,    14,   300,    -1,   303,    60,    -1,
      60,   303,    -1,   303,    59,    -1,    59,   303,    -1,    -1,
     300,    27,   261,   300,    -1,    -1,   300,    28,   262,   300,
      -1,    -1,   300,     9,   263,   300,    -1,    -1,   300,    11,
     264,   300,    -1,   300,    10,   300,    -1,   300,    29,   300,
      -1,   300,    31,   300,    -1,   300,    30,   300,    -1,   300,
      44,   300,    -1,   300,    42,   300,    -1,   300,    43,   300,
      -1,   300,    45,   300,    -1,   300,    46,   300,    -1,   300,
      47,   300,    -1,   300,    41,   300,    -1,   300,    40,   300,
      -1,    42,   300,    -1,    43,   300,    -1,    48,   300,    -1,
      50,   300,    -1,   300,    33,   300,    -1,   300,    32,   300,
      -1,   300,    35,   300,    -1,   300,    34,   300,    -1,   300,
      36,   300,    -1,   300,    39,   300,    -1,   300,    37,   300,
      -1,   300,    38,   300,    -1,   300,    49,   284,    -1,   148,
     300,   149,    -1,    -1,    -1,   300,    25,   265,   300,    26,
     266,   300,    -1,    -1,   300,    25,    26,   267,   300,    -1,
     332,    -1,    58,   300,    -1,    57,   300,    -1,    56,   300,
      -1,    55,   300,    -1,    54,   300,    -1,    53,   300,    -1,
      52,   300,    -1,    64,   290,    -1,    -1,    51,   268,   300,
      -1,   296,    -1,   124,   148,   326,   149,    -1,   154,   291,
     154,    -1,    12,   300,    -1,    -1,   270,   204,   148,   269,
     234,   149,   271,   151,   168,   152,    -1,    98,    -1,    -1,
     104,   148,   272,   149,    -1,   272,     8,    73,    -1,   272,
       8,    31,    73,    -1,    73,    -1,    31,    73,    -1,    -1,
     161,   148,   274,   237,   149,    -1,    -1,   141,   144,   161,
     148,   275,   237,   149,    -1,    -1,   144,   161,   148,   276,
     237,   149,    -1,    -1,   282,   140,    71,   148,   277,   237,
     149,    -1,    -1,   282,   140,   310,   148,   278,   237,   149,
      -1,    -1,   312,   140,    71,   148,   279,   237,   149,    -1,
      -1,   312,   140,   310,   148,   280,   237,   149,    -1,    -1,
     310,   148,   281,   237,   149,    -1,   111,    -1,   161,    -1,
     141,   144,   161,    -1,   144,   161,    -1,   161,    -1,   141,
     144,   161,    -1,   144,   161,    -1,   282,    -1,   285,    -1,
      -1,    -1,   314,   121,   286,   318,   287,   288,    -1,   314,
      -1,   288,   289,    -1,    -1,   121,   318,    -1,    -1,   148,
     149,    -1,   148,   300,   149,    -1,    -1,    78,    -1,   328,
      -1,    -1,   148,   237,   149,    -1,    69,    -1,    70,    -1,
      79,    -1,   128,    -1,   129,    -1,   143,    -1,   125,    -1,
     126,    -1,   127,    -1,   142,    -1,   136,    78,   137,    -1,
     136,   137,    -1,   293,    -1,   161,    -1,   141,   144,   161,
      -1,   144,   161,    -1,    42,   294,    -1,    43,   294,    -1,
     124,   148,   297,   149,    -1,   295,    -1,   282,   140,    71,
      -1,    72,    -1,   335,    -1,   161,    -1,   141,   144,   161,
      -1,   144,   161,    -1,   293,    -1,   155,   328,   155,    -1,
     136,   328,   137,    -1,    -1,   299,   298,    -1,    -1,     8,
      -1,   299,     8,   294,   122,   294,    -1,   299,     8,   294,
      -1,   294,   122,   294,    -1,   294,    -1,   301,    -1,   257,
      -1,   304,    -1,   304,    -1,   304,    -1,    -1,   313,   121,
     318,   308,   305,   306,    -1,   313,    -1,   306,   307,    -1,
      -1,   121,   318,   308,    -1,    -1,   148,   309,   237,   149,
      -1,    -1,   315,    -1,   322,   315,    -1,   282,   140,   310,
      -1,   312,   140,   310,    -1,   315,    -1,   314,    -1,   273,
      -1,   315,    -1,   322,   315,    -1,   311,    -1,   315,    61,
     317,   156,    -1,   315,   151,   300,   152,    -1,   316,    -1,
      73,    -1,   153,   151,   300,   152,    -1,    -1,   300,    -1,
     320,    -1,    -1,   310,   319,    -1,   320,    61,   317,   156,
      -1,   320,   151,   300,   152,    -1,   321,    -1,    71,    -1,
     151,   300,   152,    -1,   153,    -1,   322,   153,    -1,   323,
       8,   324,    -1,   324,    -1,   304,    -1,    -1,   123,   148,
     325,   323,   149,    -1,    -1,    -1,   327,   298,    -1,   327,
       8,   300,   122,   300,    -1,   327,     8,   300,    -1,   300,
     122,   300,    -1,   300,    -1,   327,     8,   300,   122,    31,
     302,    -1,   327,     8,    31,   302,    -1,   300,   122,    31,
     302,    -1,    31,   302,    -1,   328,   329,    -1,   328,    78,
      -1,   329,    -1,    78,   329,    -1,    73,    -1,    -1,    73,
      61,   330,   331,   156,    -1,    73,   121,    71,    -1,   138,
     300,   152,    -1,   138,    72,    61,   300,   156,   152,    -1,
     139,   304,   152,    -1,    71,    -1,    74,    -1,    73,    -1,
     114,   148,   333,   149,    -1,   115,   148,   304,   149,    -1,
       7,   300,    -1,     6,   300,    -1,     5,   148,   300,   149,
      -1,     4,   300,    -1,     3,   300,    -1,   304,    -1,    -1,
     333,     8,   334,   304,    -1,   282,   140,    71,    -1,   312,
     140,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   203,   203,   207,   207,   208,   212,   213,   217,   218,
     219,   220,   221,   222,   222,   224,   224,   226,   227,   231,
     232,   236,   237,   238,   239,   243,   244,   248,   248,   249,
     254,   255,   256,   257,   262,   263,   267,   268,   268,   268,
     269,   269,   269,   270,   270,   270,   271,   271,   271,   275,
     277,   279,   272,   281,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   296,   297,
     295,   300,   301,   299,   303,   303,   304,   305,   306,   307,
     308,   309,   305,   311,   312,   317,   318,   322,   323,   328,
     328,   328,   333,   334,   338,   342,   346,   351,   352,   357,
     357,   363,   362,   369,   368,   378,   379,   380,   384,   385,
     389,   392,   394,   397,   399,   403,   404,   408,   409,   414,
     415,   419,   420,   425,   426,   431,   432,   437,   438,   443,
     444,   445,   446,   451,   452,   452,   453,   453,   458,   459,
     464,   465,   470,   472,   472,   476,   478,   478,   482,   484,
     488,   490,   495,   496,   501,   502,   503,   504,   505,   506,
     507,   508,   513,   514,   515,   520,   521,   526,   527,   528,
     529,   530,   531,   535,   536,   541,   542,   543,   548,   549,
     550,   551,   557,   558,   563,   563,   564,   565,   565,   571,
     572,   576,   577,   581,   582,   586,   587,   591,   592,   593,
     594,   595,   596,   600,   601,   602,   603,   607,   608,   612,
     613,   618,   619,   623,   623,   624,   628,   628,   629,   637,
     638,   638,   639,   639,   645,   646,   647,   648,   649,   650,
     651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
     661,   661,   662,   662,   663,   663,   664,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   691,   694,   694,   696,
     697,   698,   699,   700,   701,   702,   703,   704,   705,   705,
     706,   707,   708,   709,   710,   710,   715,   718,   720,   724,
     725,   726,   727,   731,   731,   738,   738,   741,   741,   744,
     744,   747,   747,   750,   750,   753,   753,   756,   756,   762,
     763,   764,   765,   769,   770,   771,   777,   778,   783,   784,
     783,   786,   791,   792,   797,   801,   802,   803,   807,   808,
     809,   814,   815,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   836,   837,   838,   839,   840,
     841,   842,   843,   847,   851,   852,   853,   854,   855,   856,
     857,   858,   863,   864,   867,   869,   873,   874,   875,   876,
     880,   881,   886,   891,   895,   903,   899,   914,   927,   928,
     933,   942,   942,   945,   949,   950,   954,   955,   960,   964,
     965,   970,   971,   972,   976,   977,   978,   983,   984,   988,
     989,   994,   995,   995,   999,  1000,  1001,  1005,  1006,  1010,
    1011,  1015,  1016,  1021,  1022,  1022,  1023,  1028,  1029,  1033,
    1034,  1035,  1036,  1037,  1038,  1039,  1040,  1044,  1045,  1046,
    1047,  1053,  1054,  1054,  1055,  1056,  1057,  1058,  1063,  1064,
    1065,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1080,  1081,
    1081,  1085,  1086
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_END_OF_FILE", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE",
  "T_EVAL", "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR",
  "T_LOGICAL_XOR", "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL",
  "T_SL_EQUAL", "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'['", "T_CLONE",
  "T_NEW", "T_EXIT", "T_IF", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER",
  "T_DNUMBER", "T_STRING", "T_STRING_VARNAME", "T_VARIABLE",
  "T_NUM_STRING", "T_INLINE_HTML", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING", "T_ECHO",
  "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR", "T_ENDFOR", "T_FOREACH",
  "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE", "T_AS", "T_SWITCH",
  "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_CONTINUE", "T_GOTO",
  "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY", "T_CATCH", "T_THROW",
  "T_USE", "T_GLOBAL", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL",
  "T_ABSTRACT", "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY",
  "T_HALT_COMPILER", "T_CLASS", "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS",
  "T_OBJECT_OPERATOR", "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY", "T_CLASS_C",
  "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG",
  "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_PAAMAYIM_NEKUDOTAYIM",
  "T_NAMESPACE", "T_NS_C", "T_DIR", "T_NS_SEPARATOR",
  "T_ERROR_UNTERMINATED_COMMENT", "T_ERROR_UNTERMINATED_STRING",
  "T_ERROR_UNTERMINATED_BACKTICK", "'('", "')'", "';'", "'{'", "'}'",
  "'$'", "'`'", "'\"'", "']'", "$accept", "start", "top_statement_list",
  "$@1", "namespace_name", "top_statement", "$@2", "$@3",
  "use_declarations", "use_declaration", "constant_declaration",
  "inner_statement_list", "$@4", "inner_statement", "statement",
  "unticked_statement", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11",
  "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20",
  "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "$@27", "$@28",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "$@29",
  "unticked_class_declaration_statement", "$@30", "$@31",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@32", "$@33", "case_separator",
  "while_statement", "elseif_list", "$@34", "new_elseif_list", "$@35",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@36", "$@37", "method_body",
  "variable_modifiers", "method_modifiers", "non_empty_member_modifiers",
  "member_modifier", "class_variable_declaration",
  "class_constant_declaration", "echo_expr_list", "for_expr",
  "non_empty_for_expr", "$@38", "expr_without_variable", "$@39", "$@40",
  "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47", "$@48", "$@49",
  "$@50", "function", "lexical_vars", "lexical_var_list", "function_call",
  "$@51", "$@52", "$@53", "$@54", "$@55", "$@56", "$@57", "$@58",
  "class_name", "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@59", "$@60",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@61",
  "variable_properties", "variable_property", "method_or_not", "$@62",
  "variable_without_objects", "static_member", "variable_class_name",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@63", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@64", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@65",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@66", "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,    40,    41,
      59,   123,   125,    36,    96,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   157,   158,   160,   159,   159,   161,   161,   162,   162,
     162,   162,   162,   163,   162,   164,   162,   162,   162,   165,
     165,   166,   166,   166,   166,   167,   167,   169,   168,   168,
     170,   170,   170,   170,   171,   171,   172,   173,   174,   172,
     175,   176,   172,   177,   178,   172,   179,   180,   172,   181,
     182,   183,   172,   184,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   185,   186,
     172,   187,   188,   172,   189,   172,   172,   190,   191,   192,
     193,   194,   172,   172,   172,   195,   195,   196,   196,   198,
     199,   197,   200,   200,   201,   202,   203,   204,   204,   206,
     205,   208,   207,   209,   207,   210,   210,   210,   211,   211,
     212,   213,   213,   214,   214,   215,   215,   216,   216,   217,
     217,   218,   218,   219,   219,   220,   220,   221,   221,   222,
     222,   222,   222,   223,   224,   223,   225,   223,   226,   226,
     227,   227,   228,   229,   228,   230,   231,   230,   232,   232,
     233,   233,   234,   234,   235,   235,   235,   235,   235,   235,
     235,   235,   236,   236,   236,   237,   237,   238,   238,   238,
     238,   238,   238,   239,   239,   240,   240,   240,   241,   241,
     241,   241,   242,   242,   244,   243,   243,   245,   243,   246,
     246,   247,   247,   248,   248,   249,   249,   250,   250,   250,
     250,   250,   250,   251,   251,   251,   251,   252,   252,   253,
     253,   254,   254,   256,   255,   255,   258,   257,   257,   257,
     259,   257,   260,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     261,   257,   262,   257,   263,   257,   264,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   265,   266,   257,   267,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   268,   257,
     257,   257,   257,   257,   269,   257,   270,   271,   271,   272,
     272,   272,   272,   274,   273,   275,   273,   276,   273,   277,
     273,   278,   273,   279,   273,   280,   273,   281,   273,   282,
     282,   282,   282,   283,   283,   283,   284,   284,   286,   287,
     285,   285,   288,   288,   289,   290,   290,   290,   291,   291,
     291,   292,   292,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   294,   294,   294,   294,   294,
     294,   294,   294,   295,   296,   296,   296,   296,   296,   296,
     296,   296,   297,   297,   298,   298,   299,   299,   299,   299,
     300,   300,   301,   302,   303,   305,   304,   304,   306,   306,
     307,   309,   308,   308,   310,   310,   311,   311,   312,   313,
     313,   314,   314,   314,   315,   315,   315,   316,   316,   317,
     317,   318,   319,   318,   320,   320,   320,   321,   321,   322,
     322,   323,   323,   324,   325,   324,   324,   326,   326,   327,
     327,   327,   327,   327,   327,   327,   327,   328,   328,   328,
     328,   329,   330,   329,   329,   329,   329,   329,   331,   331,
     331,   332,   332,   332,   332,   332,   332,   332,   333,   334,
     333,   335,   335
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     2,     3,
       1,     1,     3,     2,     4,     5,     4,     0,     3,     0,
       1,     1,     1,     4,     1,     2,     3,     0,     0,     9,
       0,     0,    12,     0,     0,     7,     0,     0,     9,     0,
       0,     0,    12,     0,     6,     2,     3,     2,     3,     2,
       3,     3,     3,     3,     3,     1,     2,     5,     0,     0,
      10,     0,     0,    10,     0,     6,     1,     0,     0,     0,
       0,     0,    18,     3,     3,     1,     0,     1,     2,     0,
       0,    10,     1,     3,     1,     1,     1,     0,     1,     0,
      10,     0,     8,     0,     7,     1,     2,     2,     0,     2,
       1,     0,     2,     0,     2,     1,     3,     0,     2,     1,
       2,     1,     4,     1,     4,     1,     4,     3,     5,     3,
       4,     4,     5,     0,     0,     6,     0,     5,     1,     1,
       1,     4,     0,     0,     7,     0,     0,     8,     0,     2,
       0,     3,     1,     0,     2,     3,     5,     4,     4,     5,
       7,     6,     0,     1,     1,     1,     0,     1,     1,     2,
       3,     3,     4,     3,     1,     1,     2,     4,     3,     5,
       1,     3,     2,     0,     0,     4,     2,     0,     9,     1,
       3,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     5,     1,     3,     5,     4,     3,
       1,     0,     1,     0,     4,     1,     0,     7,     3,     4,
       0,     7,     0,     4,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       0,     4,     0,     4,     0,     4,     0,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     0,     0,     7,     0,     5,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     3,
       1,     4,     3,     2,     0,    10,     1,     0,     4,     3,
       4,     1,     2,     0,     5,     0,     7,     0,     6,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     5,     1,
       1,     3,     2,     1,     3,     2,     1,     1,     0,     0,
       6,     1,     2,     0,     2,     0,     2,     3,     0,     1,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     3,     2,     2,
       2,     4,     1,     3,     1,     1,     1,     3,     2,     1,
       3,     3,     0,     2,     0,     1,     5,     3,     3,     1,
       1,     1,     1,     1,     1,     0,     6,     1,     2,     0,
       3,     0,     4,     0,     1,     2,     3,     3,     1,     1,
       1,     1,     2,     1,     4,     4,     1,     1,     4,     0,
       1,     1,     0,     2,     4,     4,     1,     1,     3,     1,
       2,     3,     1,     1,     0,     5,     0,     0,     2,     5,
       3,     3,     1,     6,     4,     4,     2,     2,     2,     1,
       2,     1,     0,     5,     3,     3,     6,     3,     1,     1,
       1,     4,     4,     2,     2,     4,     2,     2,     1,     0,
       4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   288,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,     0,   343,
     344,     6,   364,   407,    65,   345,     0,    46,     0,     0,
       0,    74,     0,     0,     0,     0,   296,     0,     0,    77,
       0,     0,     0,     0,     0,   319,     0,     0,     0,     0,
     105,   110,     0,     0,   349,   350,   351,   346,   347,     0,
       0,   352,   348,     0,     0,    76,    29,   419,   338,     0,
     366,     4,     0,     8,    34,     9,    10,    95,    96,     0,
       0,   381,    97,   400,     0,   369,   290,     0,   380,     0,
     382,     0,   403,     0,   387,   399,   401,   406,     0,   279,
     365,     6,   319,     0,    97,   457,   456,     0,   454,   453,
     293,   260,   261,   262,   263,     0,   286,   285,   284,   283,
     282,   281,   280,     0,     0,   320,     0,   239,   384,     0,
     237,   224,     0,     0,   320,   326,   222,   327,     0,   331,
     401,     0,     0,   287,     0,    35,     0,   210,     0,    43,
     211,     0,     0,     0,    55,     0,    57,     0,     0,     0,
      59,   381,     0,   382,     0,     0,     0,    21,     0,    20,
     175,     0,     0,   174,   107,   106,   180,     0,     0,     0,
       0,     0,   216,   427,   441,     0,   354,     0,     0,     0,
     439,     0,    15,     0,   368,     0,    27,     0,   339,     0,
     340,     0,     0,     0,   303,     0,    18,   108,   103,    98,
       0,     0,   244,     0,   246,   274,   240,   242,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,   238,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   317,     0,     0,   409,     0,   420,   402,
       0,     0,   289,     0,   322,     0,     0,     0,   322,     0,
     341,     0,   328,   402,   336,     0,     0,     0,    64,     0,
       0,     0,   212,   215,   381,   382,     0,     0,    56,    58,
      84,     0,    60,    61,    29,    83,    23,     0,     0,    17,
       0,   176,   382,     0,    62,     0,     0,    63,     0,    92,
      94,   458,     0,     0,     0,   426,     0,   432,     0,   374,
     442,     0,   353,   440,   364,     0,     0,   438,   371,   437,
     367,     5,    12,    13,   307,   273,    36,     0,     0,   292,
     370,     7,   166,     0,     0,   101,   111,    99,   294,   461,
     396,   394,     0,     0,   248,     0,   277,     0,     0,     0,
     249,   251,   250,   265,   264,   267,   266,   268,   270,   271,
     269,   259,   258,   253,   254,   252,   255,   256,   257,   272,
       0,   218,   235,   234,   233,   232,   231,   230,   229,   228,
     227,   226,   225,   166,   462,   397,   417,     0,   412,   393,
     411,   416,   410,     0,     0,   455,   321,     0,     0,   321,
     396,   166,   223,   397,     0,   337,    37,   209,     0,     0,
      49,   213,    71,    68,     0,     0,    53,     0,     0,     0,
       0,     0,     0,   356,     0,   355,    26,   362,    27,     0,
      22,    19,     0,   173,   181,   178,     0,     0,   459,   451,
     452,    11,     0,   423,     0,   422,   436,   383,     0,   291,
     375,   428,     0,   444,     0,   445,   447,   305,     3,     5,
     166,     0,    28,    30,    31,    32,   408,     0,     0,   165,
     381,   382,     0,     0,     0,   323,   109,   113,     0,     0,
       0,   162,   309,   311,   395,   245,   247,     0,     0,   241,
     243,     0,   219,     0,   313,   315,     0,   413,   391,   385,
     409,     0,   404,   405,     0,   329,    40,     0,    47,    44,
     211,     0,     0,     0,     0,     0,     0,     0,   359,   360,
     372,     0,     0,   358,     0,     0,    24,   177,     0,    93,
      67,     0,   424,   426,     0,     0,   431,     0,   430,   448,
     450,   449,     0,     0,   166,    16,     3,     0,     0,   169,
     304,     0,    25,     0,   325,     0,     0,   112,   115,   183,
     162,   164,     0,   152,     0,   163,   166,   166,   278,   275,
     220,   318,   166,   166,   418,   166,   389,     0,     0,   342,
     333,    29,    38,     0,     0,     0,   214,   117,     0,   117,
     119,   127,     0,    29,   125,    75,   133,   133,    54,   379,
       0,   374,   357,   363,     0,   179,   460,   426,   421,     0,
     435,   434,     0,   443,     0,     0,    14,   308,     0,     0,
     381,   382,   324,   114,   183,     0,   193,     0,   297,   162,
       0,   154,     0,     0,     0,   341,     0,     0,     0,   386,
     414,   415,   330,    27,   142,     0,    29,   140,    45,    50,
       0,     0,   120,     0,     0,    27,   133,     0,   133,     0,
       0,   361,   375,   373,    78,     0,   217,     0,   429,   446,
     306,    33,   172,   193,   116,     0,   197,   198,   199,   202,
     201,   200,   192,   104,   182,   184,     0,   191,   195,     0,
       0,     0,     0,     0,   155,     0,   310,   312,   276,   221,
     314,   316,   392,     0,   388,     0,   332,   145,   148,     0,
      27,   211,   118,    72,    69,   128,     0,     0,     0,     0,
       0,     0,   129,   378,   377,     0,   425,   433,   102,     0,
       0,    97,   196,     0,   186,    29,     0,    29,     0,   158,
       0,   157,   393,   334,   150,     0,     0,    39,    48,     0,
       0,     0,     0,   126,     0,   131,     0,   138,   139,   136,
     130,     0,    79,     0,   205,     0,     0,     0,    27,     0,
     301,     0,    27,   159,     0,   156,   390,     0,     0,     0,
       0,   149,   141,    51,    29,   123,    73,    70,   132,   134,
      29,   376,     0,   208,     0,     0,   185,   187,     0,   100,
     302,     0,   298,   295,     0,   161,     0,    29,     0,     0,
       0,    27,    29,    27,     0,   206,   203,     0,   207,     0,
     299,   160,     0,    27,    42,   143,    29,   121,    52,     0,
      27,    80,     0,   162,   300,     0,     0,    27,   124,     0,
     204,     0,   146,   144,     0,    29,     0,    29,   122,    27,
     189,    29,   188,    27,    81,    27,    86,   190,     0,    82,
      85,    87,     0,    88,    89,     0,     0,    90,     0,    29,
      27,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    80,    81,   479,   341,   178,   179,
      82,   206,   347,   482,   805,    84,   527,   664,   601,   727,
     290,   604,   158,   603,   530,   731,   830,   537,   533,   772,
     532,   771,   162,   174,   745,   812,   859,   876,   879,   880,
     881,   885,   888,   318,   319,    85,    86,   220,    87,   500,
      88,   497,   356,    89,   355,    90,   499,   576,   577,   671,
     609,   848,   806,   615,   435,   618,   677,   832,   810,   779,
     668,   728,   856,   764,   867,   767,   799,   582,   583,   584,
     488,   489,   182,   183,   187,   646,   704,   750,   837,   872,
     705,   706,   707,   708,   785,   709,   156,   291,   292,   531,
      91,   325,   655,   280,   368,   369,   363,   365,   367,   654,
     507,   125,   501,   114,   712,   791,    93,   352,   564,   480,
     586,   587,   592,   593,   403,    94,   585,   146,   147,   424,
     600,   662,   726,   153,   209,   422,    95,   446,   447,    96,
     620,   471,   621,   172,    98,   466,    99,   100,   596,   659,
     724,   519,   595,   101,   102,   103,   104,   105,   106,   107,
     413,   409,   517,   410,   411,   108,   464,   465,   627,   328,
     329,   199,   200,   472,   562,   109,   322,   551,   110
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -594
static const yytype_int16 yypact[] =
{
    -594,    58,    70,  -594,  1446,  3836,  3836,   -76,  3836,  3836,
    3836,  3836,  3836,  3836,  3836,  -594,  3836,  3836,  3836,  3836,
    3836,  3836,  3836,   199,   199,  3836,   363,   -73,   -70,  -594,
    -594,    55,  -594,  -594,  -594,  -594,  3836,  -594,   -62,   -59,
     -57,  -594,     7,  2439,  2566,   116,  -594,   127,  2693,  -594,
    3836,   -22,   -16,    72,    90,   154,    82,    98,   125,   185,
    -594,  -594,   187,   198,  -594,  -594,  -594,  -594,  -594,   227,
      74,  -594,  -594,   237,  3836,  -594,  -594,   202,   122,   259,
     -92,  -594,    11,  -594,  -594,  -594,  -594,  -594,  -594,   288,
     302,  -594,   372,  -594,   273,  -594,  -594,  4351,  -594,   178,
    1185,   268,  -594,   278,   307,  -594,    53,  -594,    68,  -594,
    -594,  -594,  -594,   291,   372,  5031,  5031,  3836,  5031,  5031,
    5131,  -594,  -594,   388,  -594,  3836,  -594,  -594,  -594,  -594,
    -594,  -594,  -594,   317,   237,   -71,   299,  -594,  -594,   323,
    -594,  -594,   321,   237,   324,   337,  -594,  -594,   340,   366,
       0,    68,  2820,  -594,  3836,  -594,    12,  5031,  2312,  -594,
    3836,  3836,   353,  3836,  -594,  4392,  -594,  4433,   358,   501,
    -594,   368,  5031,   729,   373,  4475,   237,   -28,    13,  -594,
    -594,   140,    18,  -594,  -594,  -594,   510,    21,   199,   199,
     199,   377,  -594,  2947,    -8,   189,  -594,  3963,   199,   263,
    -594,   237,  -594,   345,   -81,  4516,   375,  3836,   282,   383,
     266,   282,   156,   460,  -594,   469,  -594,   422,  -594,  -594,
     -53,     3,  -594,  3836,  -594,   516,  -594,  -594,  3836,  3836,
    3836,  3836,  3836,  3836,  3836,  3836,  3836,  3836,  3836,  3836,
    3836,  3836,  3836,  3836,  3836,  3836,  3836,   363,  -594,  -594,
    -594,  3074,  3836,  3836,  3836,  3836,  3836,  3836,  3836,  3836,
    3836,  3836,  3836,  -594,    46,   135,  3836,  3836,   202,   -39,
     403,  4557,  -594,   237,   -60,   121,   144,   237,   324,   115,
     405,   115,  -594,   -36,  -594,  4599,  4641,  3836,  -594,   472,
    3836,   408,   547,  5031,   478,   938,   488,  4682,  -594,  -594,
    -594,   974,  -594,  -594,  -594,  -594,    95,   491,   -22,  -594,
    3836,  -594,  -594,   -16,  -594,   974,   504,  -594,    24,  -594,
    -594,  -594,    28,   429,   431,   176,   199,  4891,   430,   576,
    -594,   515,  -594,  -594,   526,   413,   440,  -594,  -594,  -594,
     -80,  -594,  -594,  -594,  -594,  -594,  -594,  1573,  4099,  -594,
    -594,  -594,  3201,   577,   160,  -594,   476,  -594,  -594,   445,
     449,   -36,    68,  3836,  5108,  3836,  -594,  3836,  3836,  3836,
    2489,  2616,  2741,  2868,  2868,  2868,  2868,  1704,  1704,  1704,
    1704,   527,   527,   195,   195,   195,   388,   388,   388,  -594,
      75,  5131,  5131,  5131,  5131,  5131,  5131,  5131,  5131,  5131,
    5131,  5131,  5131,  3201,   450,   451,  -594,  3836,  -594,   457,
     -15,  -594,  5031,   446,  4140,  -594,   131,   445,   450,   324,
    -594,  3201,  -594,  -594,   135,  -594,   581,  5031,   461,  4724,
    -594,  -594,  -594,  -594,   595,    30,  -594,   974,   974,   462,
     -43,   467,   237,   179,   473,  -594,  -594,  -594,   463,   541,
    -594,  -594,  4181,  -594,  -594,   604,   199,   470,  -594,  -594,
    -594,  -594,   471,  -594,    31,  -594,  -594,  -594,  3328,  -594,
    3455,  -594,   251,  -594,  3836,  -594,  -594,  -594,   475,  -594,
    3201,   477,  -594,  -594,  -594,  -594,  -594,   199,   479,   613,
      32,    84,   974,   480,   237,   324,  -594,   503,   160,   481,
     482,   172,  -594,  -594,   -36,  5071,  5131,  3836,  4990,  5176,
    5197,   363,  -594,   484,  -594,  -594,  4225,  -594,  -594,  -594,
    3836,  3836,  -594,  -594,   486,  -594,  -594,  2312,  -594,  -594,
    3836,  3836,   199,    79,   974,   558,  1726,    -9,  -594,  -594,
     974,   494,   237,   194,   565,   535,  -594,  -594,   974,  -594,
    -594,   199,  -594,   176,   626,   199,  5031,   199,  4932,  -594,
    -594,  -594,   487,   347,  3201,  -594,   490,   496,   497,  -594,
    -594,  3582,  -594,   237,   324,   160,   489,   640,  -594,  -594,
     172,  -594,   500,   642,     6,  -594,  3201,  3201,  5154,  -594,
    -594,  -594,  3201,  3201,  -594,  3201,  -594,   498,  4266,  -594,
    -594,  -594,  -594,  3836,  1879,   502,  5031,   531,   199,   531,
    -594,  -594,   643,  -594,  -594,  -594,   505,   508,  -594,   538,
     532,   672,   207,  -594,   536,  -594,  -594,   176,  -594,  3836,
    -594,  -594,  3709,  -594,   533,   534,  -594,  -594,   537,   199,
      33,   110,   324,   640,  -594,   160,   655,   539,   582,   174,
     616,   677,   542,   545,  3836,   405,   546,   548,   549,   575,
    -594,  -594,   578,   295,  -594,  4766,  -594,  -594,  -594,  -594,
      79,   553,  -594,   554,   974,   619,  -594,   338,  -594,   162,
     974,  -594,   974,  -594,  -594,    34,  5131,   199,  5031,  -594,
    -594,  -594,  -594,   827,  -594,   634,  -594,  -594,  -594,  -594,
    -594,  -594,  -594,  -594,  -594,  -594,   608,   438,  -594,    22,
     561,   566,   564,    14,   703,   974,  -594,  -594,  5154,  -594,
    -594,  -594,  -594,   135,  -594,   135,  -594,  -594,   223,   567,
     635,  3836,  -594,  -594,  -594,  -594,   569,   399,   570,  3836,
      -3,   333,  -594,  -594,   601,   160,  -594,  -594,  -594,   712,
     654,   372,  -594,   661,  -594,  -594,    20,  -594,   660,   722,
     974,  -594,   457,  -594,   344,   588,  2312,  -594,  -594,   589,
     591,  2032,  2032,  -594,   605,  -594,  4309,  -594,  -594,  -594,
    -594,   974,  -594,   974,   728,    26,   685,   744,   607,   696,
    -594,    35,   618,   759,   974,  -594,  -594,   625,   749,   708,
    3836,  -594,  -594,  -594,  -594,  -594,  -594,  -594,  -594,  -594,
    -594,  -594,   704,  -594,   974,   705,  -594,  -594,   974,  -594,
    -594,   118,  -594,  -594,   974,  -594,  3836,  -594,   629,  4807,
    2185,   693,  -594,   277,   632,  -594,   770,   636,  -594,   713,
    -594,  -594,  4849,   717,  -594,  -594,  -594,  -594,  -594,   644,
     315,  -594,   974,   172,  -594,   764,  2312,   707,  -594,   645,
    -594,   648,  -594,  -594,   649,  -594,   322,  -594,  -594,   641,
    -594,  -594,  -594,   454,  -594,   646,   698,  -594,   656,  -594,
     698,  -594,   160,  -594,  -594,   730,   653,  -594,   659,  -594,
     662,  -594
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -594,  -594,  -325,  -594,   -23,  -594,  -594,  -594,  -594,   514,
    -594,  -271,  -594,  -594,     2,  -594,  -594,  -594,  -594,  -594,
    -594,  -594,  -594,  -594,  -594,  -594,  -594,  -594,  -594,  -594,
    -594,  -594,  -594,  -594,  -594,  -594,  -594,  -594,  -594,  -594,
     -75,  -594,  -594,  -594,   350,   465,   466,  -110,  -594,  -594,
    -594,  -594,  -594,  -594,  -594,  -594,  -594,  -594,   233,   214,
     146,  -594,    52,  -594,  -594,  -594,  -593,  -594,  -594,    49,
    -594,  -594,  -594,  -594,  -594,  -594,  -594,  -570,  -594,   177,
    -390,  -594,  -594,   518,  -594,   183,  -594,  -594,  -594,  -594,
    -594,  -594,  -594,   126,  -594,  -594,  -594,  -521,  -594,  -594,
      -4,  -594,  -594,  -594,  -594,  -594,  -594,  -594,  -594,  -594,
    -594,  -594,  -594,    -2,  -594,  -594,  -594,  -594,  -594,  -594,
    -594,  -594,  -594,  -594,  -594,   540,  -339,  -240,  -594,  -594,
    -594,  -594,  -594,  -594,  -594,   173,  -180,   617,  -594,  -594,
    -594,   213,  -594,   657,   658,  -475,   474,   686,  -594,  -594,
    -594,    73,  -594,  -210,  -594,   795,  -594,   -21,   -12,  -594,
     316,  -416,  -594,  -594,  -594,     1,   210,   285,  -594,  -594,
    -594,   427,   271,  -594,  -594,  -594,  -594,  -594,  -594
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -399
static const yytype_int16 yytable[] =
{
     135,   135,    92,   144,   270,   149,    83,   389,   525,   605,
     647,   360,   569,   513,   150,   496,   478,   616,   357,   215,
     287,   308,   266,   777,   679,   266,   313,   151,   177,   316,
     753,   524,   456,   448,   815,   541,   458,   650,   535,   553,
    -167,  -170,   553,   821,   171,   758,   520,   203,  -320,   111,
     204,   789,   213,   330,   405,   408,   214,   180,     3,  -322,
    -321,   266,   307,   213,   213,   360,   405,   344,   477,   420,
      -2,   423,   117,   213,   359,   152,    33,   214,   154,   651,
     630,   155,   631,   737,   213,   741,   159,   759,   344,   160,
     567,   161,  -168,   790,   196,   358,   269,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,  -395,
     608,   274,   267,   331,   266,   267,   213,   404,  -171,    33,
     278,   445,   176,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   445,   521,   181,   511,   283,
    -398,    33,   617,  -384,  -384,   111,   111,   778,    33,   839,
     111,   267,    33,   306,   566,   163,    77,   294,   135,   578,
     289,   216,   288,   309,   692,   135,   135,   135,   314,  -384,
    -384,   317,   754,   457,   635,   135,   816,   459,   340,   536,
     554,  -167,  -170,   746,   822,   449,   112,   168,    33,   184,
     112,   840,   417,  -398,    33,   194,   652,   653,   169,    77,
     208,  -394,   656,   657,   267,   658,   406,   185,    33,   361,
     770,   111,   747,    33,   408,   418,   133,    33,   201,   134,
     133,   268,   362,   134,   144,   202,   149,   186,    77,   194,
     188,   111,    77,  -168,   337,   150,   578,   249,   250,   213,
     244,   245,   246,   111,   247,   111,   189,   111,   151,    33,
     416,   112,   361,   361,   419,   739,   740,   445,   445,  -171,
     197,   198,   194,   361,   361,   362,   362,   361,    77,   361,
     111,   590,    33,   190,    77,   213,   362,   362,   443,   477,
     362,   133,   362,   861,   134,   177,   407,   112,    77,   765,
     766,   310,   443,    77,   197,   198,   581,    77,   581,   462,
     194,   493,   135,   135,   494,   195,   694,   762,   111,   763,
     112,   350,   445,   493,   742,   493,   494,   133,   494,  -320,
     134,  -153,   559,   213,   560,   561,   332,   197,   198,    77,
     663,   495,   194,   191,  -322,   192,   194,   211,   213,   194,
     133,   337,   675,   134,   337,    92,   193,  -321,   490,   483,
     504,   213,    77,   207,   445,   194,   222,   223,   224,   217,
     445,   -41,   -41,   -41,   196,   197,   198,   135,   445,  -137,
    -137,  -137,   225,   218,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   730,   247,   197,   198,   490,
     338,   197,   198,   219,   197,   198,   782,  -135,  -135,  -135,
     797,   798,   361,   221,   443,   443,   263,   490,   264,   543,
     197,   198,   222,   223,   224,   362,   739,   740,   265,  -137,
     738,   739,   740,   135,   111,   201,    33,   247,   225,   275,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   273,   247,   276,   135,   277,   333,  -135,   213,   443,
     339,   574,   870,   871,   112,   495,   490,   279,   495,   333,
     281,   339,   333,   339,   788,   780,   792,   282,   144,   213,
     149,   774,   739,   740,   445,   342,   343,   137,   140,   150,
     445,   296,   445,   634,   142,   210,   212,   143,   300,   135,
     135,   443,   151,   408,   301,   408,    77,   443,   302,   622,
    -147,  -147,  -147,   315,   304,   443,   324,   346,   135,   602,
     135,   351,   135,   831,   135,   445,  -194,   349,   614,   833,
     353,   354,   366,   884,   696,   697,   698,   699,   700,   701,
     642,   358,   495,   421,   428,   431,   843,   495,   430,   434,
     490,   850,   450,   136,   136,   475,   145,   640,   432,   241,
     242,   243,   244,   245,   246,   857,   247,   455,   460,   469,
     445,   461,   490,   490,   470,   135,   473,   474,   490,   490,
     492,   490,   476,   502,   869,   498,   873,   503,   514,   515,
     875,   445,   522,   445,   135,   518,   667,   526,   534,   528,
     540,   542,   546,   544,   445,   545,   135,   548,   890,   552,
     550,   571,   495,   575,   573,   568,   495,   565,   570,   612,
     580,   332,   579,   591,   445,   599,   623,   624,   445,   629,
     644,   786,   636,   633,   445,   637,   638,   135,   645,   648,
     649,   443,   669,   670,   660,   676,   674,   443,   678,   443,
     680,    97,   115,   116,   135,   118,   119,   120,   121,   122,
     123,   124,   445,   126,   127,   128,   129,   130,   131,   132,
     682,   681,   141,   690,   684,   689,   711,   691,   710,   714,
     715,   716,   443,   157,   717,   720,   723,   721,   722,   725,
     165,   167,   733,   734,   751,   749,    46,   175,   736,   138,
     138,   361,   755,   361,   756,   757,   760,   768,   769,   773,
     775,   136,   495,   781,   362,   783,   362,   784,   136,   136,
     136,   205,   787,   793,   173,   794,   800,   443,   136,   802,
     803,   814,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   695,   808,   817,   818,   443,   819,
     443,   696,   697,   698,   699,   700,   701,   702,   801,   820,
     823,   443,   824,   826,   271,   827,   828,   834,   836,   844,
     849,   851,   272,   852,   853,  -151,   854,   145,  -384,  -384,
     862,   443,   864,   874,   858,   443,   865,   866,   877,   868,
     878,   443,   887,   886,   882,   883,   549,   703,   643,   285,
     889,   286,   484,   485,   891,    97,   732,   293,   139,   139,
     297,   148,   451,   673,   807,   809,   713,   693,   719,   443,
     495,   453,   847,   752,   683,   796,   597,   685,   628,   311,
       0,   444,     0,     0,     0,     0,     0,   295,     0,     0,
     327,     0,     0,     0,   335,   444,     0,     0,   863,   495,
       0,     0,     0,     0,   348,   136,   136,   312,     0,     0,
       0,     0,     0,     0,   320,   321,   323,     0,     0,   303,
     364,     0,     0,     0,   336,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,     0,     0,     0,     0,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
       0,     0,     0,   412,   414,     0,   695,     0,     0,     0,
     136,     0,   454,   696,   697,   698,   699,   700,   701,   702,
       0,     0,     0,     0,   427,     0,     0,   429,     0,     0,
       0,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,     0,     0,     0,     0,   452,     0,     0,
       0,     0,     0,     0,     0,     0,   139,   444,   444,   748,
       0,     0,     0,   139,   139,   139,     0,     0,     0,     0,
       0,     0,     0,   139,     0,     0,   136,  -384,  -384,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,   463,   467,     0,     0,     0,   437,   438,     0,     0,
     505,     0,   506,     0,   508,   509,   510,   136,   433,     0,
       0,     0,   444,     0,     0,     0,     0,     0,   491,     0,
       0,     0,   148,    29,    30,   111,     0,     0,     0,     0,
       0,   145,     0,    35,   538,   539,     0,     0,     0,     0,
       0,     0,     0,     0,   516,     0,     0,     0,     0,     0,
       0,     0,   136,   136,   444,     0,   512,     0,     0,     0,
     444,     0,     0,     0,     0,   112,     0,     0,   444,   491,
       0,   136,     0,   136,     0,   136,     0,   136,   439,    64,
      65,    66,    67,    68,     0,     0,     0,   491,     0,   572,
     440,     0,     0,     0,     0,   441,    71,    72,   442,     0,
     139,   139,     0,     0,     0,   556,     0,   558,     0,     0,
       0,   563,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   320,     0,     0,     0,     0,     0,   136,     0,
       0,   611,     0,     0,     0,     0,     0,   619,     0,     0,
       0,     0,     0,     0,   588,   625,   491,   136,     0,     0,
       0,     0,     0,   467,     0,     0,     0,   412,   598,   136,
       0,     0,     0,     0,    97,   139,     0,   293,   606,     0,
       0,     0,     0,    97,     0,     0,     0,     0,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     136,     0,     0,     0,   444,     0,     0,     0,   607,   610,
     444,     0,   444,     0,     0,     0,     0,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   626,     0,   463,
       0,   467,     0,   467,  -384,  -384,     0,     0,     0,     0,
     491,   139,     0,     0,     0,   444,     0,   641,     0,     0,
     665,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   491,   491,     0,     0,     0,     0,   491,   491,
       0,   491,   139,     0,     0,     0,   686,     0,     0,   688,
       0,   735,     0,     0,   672,     0,     0,   743,     0,   744,
     444,     0,     0,     0,     0,     0,   148,     0,     0,     0,
       0,   718,     0,   463,     0,     0,     0,     0,     0,     0,
       0,   444,     0,   444,     0,   467,     0,   139,   139,     0,
       0,     0,   761,     0,   444,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,     0,   139,     0,
     139,     0,   139,     0,   444,     0,   610,     0,   444,     0,
       0,     0,     0,     0,   444,     0,     0,     0,     0,     0,
       0,     0,     0,   467,     0,     0,     0,   795,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   293,     0,
       0,     0,   444,     0,     0,     0,   776,     0,   811,     0,
     813,     0,     0,   139,     0,     0,     0,     0,     0,     0,
       0,   825,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,    97,     0,     0,     0,     0,    97,    97,
       0,   835,     0,     0,   139,   838,     0,     0,     0,     0,
       0,   841,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     8,     9,     0,     0,     0,   829,    10,     0,
       0,     0,     0,     0,     0,   139,     0,     0,     0,   860,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,   842,     0,     0,     0,    97,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,    97,     0,    29,    30,    31,    32,    33,
       0,    34,     0,     0,     0,    35,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,    46,    47,    48,    49,     0,    50,
      51,    52,     0,     0,     0,    53,    54,    55,     0,    56,
      57,    58,    59,    60,    61,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,     5,     6,     7,     8,
       9,     0,    69,     0,     0,    10,     0,    70,    71,    72,
      73,     0,     0,     0,    74,     0,    75,    76,     0,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,     0,    29,    30,    31,    32,    33,     0,    34,     0,
       0,     0,    35,    36,    37,    38,     0,    39,     0,    40,
       0,    41,     0,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    48,    49,     0,    50,     0,    52,     0,
       0,     0,    53,    54,    55,     0,    56,    57,    58,   481,
      60,    61,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   113,    71,    72,    73,     0,     0,
       0,    74,     0,    75,    76,     0,    77,    78,    79,     5,
       6,     7,     8,     9,     0,     0,     0,     0,    10,     0,
    -399,  -399,  -399,  -399,   239,   240,   241,   242,   243,   244,
     245,   246,   613,   247,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,     0,     0,    29,    30,    31,    32,    33,
       0,    34,     0,     0,     0,    35,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,    46,     0,    48,    49,     0,    50,
       0,    52,     0,     0,     0,     0,     0,    55,     0,    56,
      57,    58,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,   113,    71,    72,
      73,     0,     0,     0,    74,     0,    75,    76,     0,    77,
      78,    79,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   666,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    35,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    48,
      49,     0,    50,     0,    52,     0,     0,     0,     0,     0,
      55,     0,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     113,    71,    72,    73,     0,     0,     0,    74,     0,    75,
      76,     0,    77,    78,    79,     5,     6,     7,     8,     9,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   804,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,     0,
       0,    29,    30,    31,    32,    33,     0,    34,     0,     0,
       0,    35,    36,    37,    38,     0,    39,     0,    40,     0,
      41,     0,     0,    42,     0,     0,     0,    43,    44,    45,
      46,     0,    48,    49,     0,    50,     0,    52,     0,     0,
       0,     0,     0,    55,     0,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,    69,     0,
       0,     0,     0,   113,    71,    72,    73,     0,     0,     0,
      74,     0,    75,    76,     0,    77,    78,    79,     5,     6,
       7,     8,     9,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   846,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    48,    49,     0,    50,     0,
      52,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     5,     6,     7,     8,     9,
       0,    69,     0,     0,    10,     0,   113,    71,    72,    73,
       0,     0,     0,    74,     0,    75,    76,     0,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,     0,
       0,    29,    30,    31,    32,    33,     0,    34,     0,     0,
       0,    35,    36,    37,    38,     0,    39,     0,    40,     0,
      41,     0,     0,    42,     0,     0,     0,    43,    44,    45,
      46,     0,    48,    49,     0,    50,     0,    52,     0,     0,
       0,     0,     0,    55,     0,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,     5,     6,     7,     8,     9,     0,    69,     0,
       0,    10,     0,   113,    71,    72,    73,     0,     0,     0,
      74,     0,    75,    76,     0,    77,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
     111,    32,    33,     0,     0,     0,     0,     0,    35,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    46,   247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     5,
       6,     7,     8,     9,     0,    69,     0,     0,    10,     0,
     113,    71,    72,    73,     0,     0,     0,    74,     0,   164,
       0,     0,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,     0,     0,     0,     0,    29,    30,   111,    32,    33,
       0,     0,     0,     0,     0,    35,     0,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    46,   247,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
      57,    58,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,     5,     6,     7,     8,
       9,     0,    69,     0,     0,    10,     0,   113,    71,    72,
      73,     0,     0,     0,    74,     0,   166,     0,     0,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,     0,    29,    30,   111,    32,    33,     0,     0,     0,
       0,     0,    35,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     5,     6,     7,     8,     9,     0,    69,
       0,     0,    10,     0,   113,    71,    72,    73,     0,     0,
       0,    74,     0,   170,     0,     0,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,     0,     0,     0,     0,    29,
      30,   111,    32,    33,     0,     0,     0,     0,     0,    35,
    -399,  -399,  -399,  -399,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,    57,    58,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
       5,     6,     7,     8,     9,     0,    69,     0,     0,    10,
       0,   113,    71,    72,    73,     0,     0,     0,    74,   284,
       0,     0,     0,    77,    78,    79,     0,     0,   326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,     0,    29,    30,   111,    32,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,     5,     6,     7,
       8,     9,     0,    69,     0,     0,    10,     0,   113,    71,
      72,    73,     0,     0,     0,    74,     0,     0,     0,     0,
      77,    78,    79,     0,     0,   390,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,     0,
       0,     0,     0,    29,    30,   111,    32,    33,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,    57,    58,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,     5,     6,     7,     8,     9,     0,
      69,     0,     0,    10,     0,   113,    71,    72,    73,     0,
       0,     0,    74,     0,     0,     0,     0,    77,    78,    79,
       0,     0,   487,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,     0,     0,     0,     0,
      29,    30,   111,    32,    33,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,    57,    58,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     5,     6,     7,     8,     9,     0,    69,     0,     0,
      10,     0,   113,    71,    72,    73,     0,     0,     0,    74,
       0,     0,     0,     0,    77,    78,    79,     0,     0,   555,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,     0,     0,     0,     0,    29,    30,   111,
      32,    33,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,    57,    58,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,     5,     6,
       7,     8,     9,     0,    69,     0,     0,    10,     0,   113,
      71,    72,    73,     0,     0,     0,    74,     0,     0,     0,
       0,    77,    78,    79,     0,     0,   557,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
       0,     0,     0,     0,    29,    30,   111,    32,    33,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     5,     6,     7,     8,     9,
       0,    69,     0,     0,    10,     0,   113,    71,    72,    73,
       0,     0,     0,    74,     0,     0,     0,     0,    77,    78,
      79,     0,     0,   639,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,     0,     0,     0,
       0,    29,    30,   111,    32,    33,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,    57,    58,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,     5,     6,     7,     8,     9,     0,    69,     0,
       0,    10,     0,   113,    71,    72,    73,     0,     0,     0,
      74,     0,     0,     0,     0,    77,    78,    79,     0,     0,
     687,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
     111,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     5,
       6,     7,     8,     9,     0,    69,     0,     0,    10,     0,
     113,    71,    72,    73,     0,     0,     0,    74,     0,     0,
       0,     0,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,     0,     0,     0,     0,    29,    30,   111,    32,    33,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
      57,    58,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,     5,     6,     7,     8,
       9,     0,    69,     0,     0,    10,     0,   113,    71,    72,
      73,     0,     0,     0,    74,     0,     0,     0,     0,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,     0,    29,    30,   111,   334,    33,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   113,    71,    72,    73,   222,   223,
     224,    74,     0,     0,     0,     0,    77,    78,    79,     0,
       0,     0,     0,     0,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,     0,   247,   222,
     223,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,     0,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,     0,     0,     0,   222,   223,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,   486,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,     0,   247,   222,   223,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   523,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,     0,   247,     0,     0,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   547,   225,   777,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,     0,   247,     0,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,   594,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,   222,   223,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,   661,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       0,   247,   222,   223,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,   778,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,     0,   247,     0,   222,   223,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,   248,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,     0,   247,   222,   223,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   298,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,     0,   247,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,   299,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,   247,     0,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   305,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,     0,   247,     0,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   345,   225,     0,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,   222,   223,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   415,   225,     0,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       0,   247,     0,   222,   223,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   425,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     0,   247,     0,   222,   223,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     426,   225,     0,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,     0,   247,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   436,   225,     0,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,   247,     0,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   529,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,     0,   247,     0,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   729,   225,     0,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,   222,   223,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   845,   225,     0,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       0,   247,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   855,   222,
     223,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   468,     0,   225,   589,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   632,     0,   225,     0,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   224,
     247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   225,   247,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     0,   247,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,     0,   247,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,   247
};

static const yytype_int16 yycheck[] =
{
      23,    24,     4,    26,   114,    26,     4,   247,   424,   530,
     580,   221,   487,   403,    26,   354,   341,    26,    71,     8,
       8,     8,    61,    26,   617,    61,     8,    26,    51,     8,
       8,   421,     8,   304,     8,    78,     8,    31,     8,     8,
       8,     8,     8,     8,    48,    31,    61,    70,   140,    71,
      73,    31,   144,    61,   264,   265,   148,    73,     0,   140,
     140,    61,    90,   144,   144,   275,   276,   148,   148,   279,
       0,   281,   148,   144,    71,   148,    73,   148,   148,    73,
     555,    26,   557,   676,   144,   678,   148,    73,   148,   148,
     480,   148,     8,    73,   137,   148,   108,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   148,
      31,   134,   151,   121,    61,   151,   144,    71,     8,    73,
     143,   301,   144,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   315,   151,   153,    63,   151,
     140,    73,   151,    59,    60,    71,    71,   150,    73,    31,
      71,   151,    73,   176,   479,   148,   153,   161,   181,   498,
     158,   150,   150,   150,   639,   188,   189,   190,   150,    59,
      60,   150,   150,   149,   564,   198,   150,   149,   201,   149,
     149,   149,   149,   149,   149,    90,   111,    71,    73,   117,
     111,    73,    71,   140,    73,    73,   586,   587,    71,   153,
      78,   148,   592,   593,   151,   595,    71,   117,    73,   221,
     731,    71,   687,    73,   424,    71,   141,    73,   144,   144,
     141,   153,   221,   144,   247,   151,   247,    73,   153,    73,
     148,    71,   153,   149,    78,   247,   575,    59,    60,   144,
      45,    46,    47,    71,    49,    71,   148,    71,   247,    73,
     273,   111,   264,   265,   277,    93,    94,   437,   438,   149,
     138,   139,    73,   275,   276,   264,   265,   279,   153,   281,
      71,   511,    73,   148,   153,   144,   275,   276,   301,   148,
     279,   141,   281,   853,   144,   308,   151,   111,   153,    66,
      67,   151,   315,   153,   138,   139,   124,   153,   124,   123,
      73,   141,   325,   326,   144,    78,   645,   723,    71,   725,
     111,   155,   492,   141,   152,   141,   144,   141,   144,   140,
     144,   149,    71,   144,    73,    74,   137,   138,   139,   153,
     601,   354,    73,   148,   140,   148,    73,    78,   144,    73,
     141,    78,   613,   144,    78,   347,   148,   140,   352,   347,
     362,   144,   153,   151,   534,    73,     9,    10,    11,    71,
     540,    66,    67,    68,   137,   138,   139,   390,   548,    92,
      93,    94,    25,    71,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   666,    49,   138,   139,   403,
     137,   138,   139,    31,   138,   139,   745,    92,    93,    94,
      66,    67,   424,   140,   437,   438,   148,   421,   140,   442,
     138,   139,     9,    10,    11,   424,    93,    94,   121,   152,
      92,    93,    94,   456,    71,   144,    73,    49,    25,   140,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   144,    49,   140,   487,   144,   195,   152,   144,   492,
     199,   494,   150,   151,   111,   498,   480,   140,   501,   208,
     140,   210,   211,   212,   755,   152,   757,   121,   511,   144,
     511,    92,    93,    94,   674,   150,   151,    23,    24,   511,
     680,   148,   682,   156,   141,    78,    79,   144,   150,   532,
     533,   534,   511,   723,    13,   725,   153,   540,   150,   542,
      66,    67,    68,    13,   151,   548,   149,   152,   551,   527,
     553,    71,   555,   804,   557,   715,    98,   154,   536,   810,
      71,   119,    26,   882,   106,   107,   108,   109,   110,   111,
     573,   148,   575,   148,    82,     8,   827,   580,   150,    71,
     564,   832,    71,    23,    24,   152,    26,   571,    90,    42,
      43,    44,    45,    46,    47,   846,    49,    73,   149,   149,
     760,   150,   586,   587,     8,   608,    71,    61,   592,   593,
      13,   595,   152,   148,   865,   119,   867,   148,   148,   148,
     871,   781,   156,   783,   627,   148,   604,    26,    13,   148,
     148,   144,    71,   140,   794,   152,   639,    13,   889,   148,
     150,     8,   645,   120,   144,   148,   649,   152,   149,    71,
     148,   137,   151,   149,   814,   149,    71,   102,   818,    13,
     151,   751,   152,   156,   824,   149,   149,   670,     8,   149,
       8,   674,   150,   122,   156,   150,    13,   680,   150,   682,
     122,     4,     5,     6,   687,     8,     9,    10,    11,    12,
      13,    14,   852,    16,    17,    18,    19,    20,    21,    22,
       8,   149,    25,   149,   148,   152,   104,   150,   149,    73,
      13,   149,   715,    36,   149,   149,   121,   149,   149,   121,
      43,    44,   149,   149,   706,    71,    98,    50,    89,    23,
      24,   723,   151,   725,   148,   151,    13,   150,    83,   150,
     150,   181,   745,   122,   723,    13,   725,    73,   188,   189,
     190,    74,    71,    73,    48,    13,   148,   760,   198,   150,
     149,    13,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    99,   150,    71,    13,   781,   152,
     783,   106,   107,   108,   109,   110,   111,   112,   766,    73,
     152,   794,    13,   148,   117,    26,    68,    73,    73,   150,
      87,   149,   125,    13,   148,    68,    73,   247,    59,    60,
      26,   814,    85,   152,   150,   818,   151,   149,   152,   150,
     102,   824,   149,    73,   148,   880,   456,   152,   575,   152,
     151,   154,   347,   347,   152,   158,   670,   160,    23,    24,
     163,    26,   308,   609,   772,   776,   649,   644,   655,   852,
     853,   313,   830,   707,   621,   762,   520,   627,   553,   181,
      -1,   301,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,
     193,    -1,    -1,    -1,   197,   315,    -1,    -1,   856,   882,
      -1,    -1,    -1,    -1,   207,   325,   326,   181,    -1,    -1,
      -1,    -1,    -1,    -1,   188,   189,   190,    -1,    -1,   150,
     223,    -1,    -1,    -1,   198,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    -1,    -1,    -1,    -1,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,    -1,   266,   267,    -1,    99,    -1,    -1,    -1,
     390,    -1,   315,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,    -1,    -1,   287,    -1,    -1,   290,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,   310,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   181,   437,   438,   152,
      -1,    -1,    -1,   188,   189,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   198,    -1,    -1,   456,    59,    60,    -1,
      -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,
      -1,   325,   326,    -1,    -1,    -1,    42,    43,    -1,    -1,
     363,    -1,   365,    -1,   367,   368,   369,   487,    90,    -1,
      -1,    -1,   492,    -1,    -1,    -1,    -1,    -1,   352,    -1,
      -1,    -1,   247,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,   511,    -1,    79,   437,   438,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   407,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   532,   533,   534,    -1,   390,    -1,    -1,    -1,
     540,    -1,    -1,    -1,    -1,   111,    -1,    -1,   548,   403,
      -1,   551,    -1,   553,    -1,   555,    -1,   557,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,   421,    -1,   492,
     136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,
     325,   326,    -1,    -1,    -1,   468,    -1,   470,    -1,    -1,
      -1,   474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,   608,    -1,
      -1,   534,    -1,    -1,    -1,    -1,    -1,   540,    -1,    -1,
      -1,    -1,    -1,    -1,   507,   548,   480,   627,    -1,    -1,
      -1,    -1,    -1,   487,    -1,    -1,    -1,   520,   521,   639,
      -1,    -1,    -1,    -1,   527,   390,    -1,   530,   531,    -1,
      -1,    -1,    -1,   536,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     670,    -1,    -1,    -1,   674,    -1,    -1,    -1,   532,   533,
     680,    -1,   682,    -1,    -1,    -1,    -1,   687,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   551,    -1,   553,
      -1,   555,    -1,   557,    59,    60,    -1,    -1,    -1,    -1,
     564,   456,    -1,    -1,    -1,   715,    -1,   571,    -1,    -1,
     603,   604,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   586,   587,    -1,    -1,    -1,    -1,   592,   593,
      -1,   595,   487,    -1,    -1,    -1,   629,    -1,    -1,   632,
      -1,   674,    -1,    -1,   608,    -1,    -1,   680,    -1,   682,
     760,    -1,    -1,    -1,    -1,    -1,   511,    -1,    -1,    -1,
      -1,   654,    -1,   627,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   781,    -1,   783,    -1,   639,    -1,   532,   533,    -1,
      -1,    -1,   715,    -1,   794,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   551,    -1,   553,    -1,
     555,    -1,   557,    -1,   814,    -1,   670,    -1,   818,    -1,
      -1,    -1,    -1,    -1,   824,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   687,    -1,    -1,    -1,   760,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   731,    -1,
      -1,    -1,   852,    -1,    -1,    -1,   739,    -1,   781,    -1,
     783,    -1,    -1,   608,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   794,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   627,   766,    -1,    -1,    -1,    -1,   771,   772,
      -1,   814,    -1,    -1,   639,   818,    -1,    -1,    -1,    -1,
      -1,   824,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,   800,    12,    -1,
      -1,    -1,    -1,    -1,    -1,   670,    -1,    -1,    -1,   852,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   687,   826,    -1,    -1,    -1,   830,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,   856,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,   101,    -1,   103,
     104,   105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,    -1,   109,   110,   111,    -1,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,   148,    -1,   150,   151,    -1,   153,   154,   155,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    26,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    -1,   100,   101,    -1,   103,
      -1,   105,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,    -1,    -1,
     111,    -1,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,   150,
     151,    -1,   153,   154,   155,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,
      -1,    -1,    -1,   111,    -1,   113,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,   150,   151,    -1,   153,   154,   155,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,     3,     4,     5,     6,     7,
      -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,   148,    -1,   150,   151,    -1,   153,   154,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,
      -1,    -1,    -1,   111,    -1,   113,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,     3,     4,     5,     6,     7,    -1,   136,    -1,
      -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,   150,   151,    -1,   153,   154,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    98,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,     3,
       4,     5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,   150,
      -1,    -1,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    98,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,   148,    -1,   150,    -1,    -1,   153,
     154,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
      -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,   148,    -1,   150,    -1,    -1,   153,   154,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,    -1,    -1,    12,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,   149,
      -1,    -1,    -1,   153,   154,   155,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
     153,   154,   155,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,    -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,   153,   154,   155,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,   136,    -1,    -1,
      12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,   153,   154,   155,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,     3,     4,
       5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,   153,   154,   155,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,     3,     4,     5,     6,     7,
      -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,   154,
     155,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,     3,     4,     5,     6,     7,    -1,   136,    -1,
      -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,   153,   154,   155,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,     3,
       4,     5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,
     154,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,     9,    10,
      11,   148,    -1,    -1,    -1,    -1,   153,   154,   155,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   152,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   150,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   150,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   149,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   149,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   149,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    11,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    25,    49,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   158,   159,     0,   160,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    69,
      70,    71,    72,    73,    75,    79,    80,    81,    82,    84,
      86,    88,    91,    95,    96,    97,    98,    99,   100,   101,
     103,   104,   105,   109,   110,   111,   113,   114,   115,   116,
     117,   118,   123,   124,   125,   126,   127,   128,   129,   136,
     141,   142,   143,   144,   148,   150,   151,   153,   154,   155,
     161,   162,   167,   171,   172,   202,   203,   205,   207,   210,
     212,   257,   270,   273,   282,   293,   296,   300,   301,   303,
     304,   310,   311,   312,   313,   314,   315,   316,   322,   332,
     335,    71,   111,   141,   270,   300,   300,   148,   300,   300,
     300,   300,   300,   300,   300,   268,   300,   300,   300,   300,
     300,   300,   300,   141,   144,   161,   282,   303,   304,   312,
     303,   300,   141,   144,   161,   282,   284,   285,   312,   314,
     315,   322,   148,   290,   148,    26,   253,   300,   179,   148,
     148,   148,   189,   148,   150,   300,   150,   300,    71,    71,
     150,   257,   300,   304,   190,   300,   144,   161,   165,   166,
      73,   153,   239,   240,   117,   117,    73,   241,   148,   148,
     148,   148,   148,   148,    73,    78,   137,   138,   139,   328,
     329,   144,   151,   161,   161,   300,   168,   151,    78,   291,
     328,    78,   328,   144,   148,     8,   150,    71,    71,    31,
     204,   140,     9,    10,    11,    25,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    49,   150,    59,
      60,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   148,   140,   121,    61,   151,   153,   315,
     204,   300,   300,   144,   161,   140,   140,   144,   161,   140,
     260,   140,   121,   315,   149,   300,   300,     8,   150,   171,
     177,   254,   255,   300,   257,   304,   148,   300,   150,   150,
     150,    13,   150,   150,   151,   150,   161,    90,     8,   150,
     151,   301,   304,     8,   150,    13,     8,   150,   200,   201,
     304,   304,   333,   304,   149,   258,    31,   300,   326,   327,
      61,   121,   137,   329,    72,   300,   304,    78,   137,   329,
     161,   164,   150,   151,   148,   149,   152,   169,   300,   154,
     155,    71,   274,    71,   119,   211,   209,    71,   148,    71,
     310,   315,   322,   263,   300,   264,    26,   265,   261,   262,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   284,
      31,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   281,    71,   310,    71,   151,   310,   318,
     320,   321,   300,   317,   300,   149,   161,    71,    71,   161,
     310,   148,   292,   310,   286,   149,   149,   300,    82,   300,
     150,     8,    90,    90,    71,   221,   149,    42,    43,   124,
     136,   141,   144,   161,   282,   293,   294,   295,   168,    90,
      71,   166,   300,   240,   294,    73,     8,   149,     8,   149,
     149,   150,   123,   304,   323,   324,   302,   304,   122,   149,
       8,   298,   330,    71,    61,   152,   152,   148,   159,   163,
     276,   116,   170,   171,   202,   203,   152,    31,   237,   238,
     257,   304,    13,   141,   144,   161,   283,   208,   119,   213,
     206,   269,   148,   148,   315,   300,   300,   267,   300,   300,
     300,    63,   304,   237,   148,   148,   300,   319,   148,   308,
      61,   151,   156,   152,   237,   318,    26,   173,   148,   149,
     181,   256,   187,   185,    13,     8,   149,   184,   294,   294,
     148,    78,   144,   161,   140,   152,    71,   152,    13,   201,
     150,   334,   148,     8,   149,    31,   300,    31,   300,    71,
      73,    74,   331,   300,   275,   152,   159,   237,   148,   302,
     149,     8,   294,   144,   161,   120,   214,   215,   283,   151,
     148,   124,   234,   235,   236,   283,   277,   278,   300,    26,
     284,   149,   279,   280,   152,   309,   305,   317,   300,   149,
     287,   175,   171,   180,   178,   254,   300,   304,    31,   217,
     304,   294,    71,    26,   171,   220,    26,   151,   222,   294,
     297,   299,   161,    71,   102,   294,   304,   325,   324,    13,
     302,   302,   122,   156,   156,   237,   152,   149,   149,    31,
     257,   304,   161,   215,   151,     8,   242,   234,   149,     8,
      31,    73,   237,   237,   266,   259,   237,   237,   237,   306,
     156,   152,   288,   168,   174,   300,    26,   171,   227,   150,
     122,   216,   304,   216,    13,   168,   150,   223,   150,   223,
     122,   149,     8,   298,   148,   323,   300,    31,   300,   152,
     149,   150,   302,   242,   283,    99,   106,   107,   108,   109,
     110,   111,   112,   152,   243,   247,   248,   249,   250,   252,
     149,   104,   271,   236,    73,    13,   149,   149,   300,   292,
     149,   149,   149,   121,   307,   121,   289,   176,   228,   149,
     168,   182,   217,   149,   149,   294,    89,   223,    92,    93,
      94,   223,   152,   294,   294,   191,   149,   302,   152,    71,
     244,   270,   250,     8,   150,   151,   148,   151,    31,    73,
      13,   294,   318,   318,   230,    66,    67,   232,   150,    83,
     254,   188,   186,   150,    92,   150,   300,    26,   150,   226,
     152,   122,   283,    13,    73,   251,   204,    71,   168,    31,
      73,   272,   168,    73,    13,   294,   308,    66,    67,   233,
     148,   171,   150,   149,    26,   171,   219,   219,   150,   226,
     225,   294,   192,   294,    13,     8,   150,    71,    13,   152,
      73,     8,   149,   152,    13,   294,   148,    26,    68,   300,
     183,   168,   224,   168,    73,   294,    73,   245,   294,    31,
      73,   294,   300,   168,   150,   149,    26,   171,   218,    87,
     168,   149,    13,   148,    73,   149,   229,   168,   150,   193,
     294,   234,    26,   171,    85,   151,   149,   231,   150,   168,
     150,   151,   246,   168,   152,   168,   194,   152,   102,   195,
     196,   197,   148,   197,   283,   198,    73,   149,   199,   151,
     168,   152
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (analyzer, symbolTable, variableStack, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, analyzer)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, analyzer, symbolTable, variableStack); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::SymbolTableClass& symbolTable, std::stack<UnicodeString>& variableStack)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer, symbolTable, variableStack)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvceditor::LexicalAnalyzerClass &analyzer;
    mvceditor::SymbolTableClass& symbolTable;
    std::stack<UnicodeString>& variableStack;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (analyzer);
  YYUSE (symbolTable);
  YYUSE (variableStack);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::SymbolTableClass& symbolTable, std::stack<UnicodeString>& variableStack)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, analyzer, symbolTable, variableStack)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvceditor::LexicalAnalyzerClass &analyzer;
    mvceditor::SymbolTableClass& symbolTable;
    std::stack<UnicodeString>& variableStack;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer, symbolTable, variableStack);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::SymbolTableClass& symbolTable, std::stack<UnicodeString>& variableStack)
#else
static void
yy_reduce_print (yyvsp, yyrule, analyzer, symbolTable, variableStack)
    YYSTYPE *yyvsp;
    int yyrule;
    mvceditor::LexicalAnalyzerClass &analyzer;
    mvceditor::SymbolTableClass& symbolTable;
    std::stack<UnicodeString>& variableStack;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , analyzer, symbolTable, variableStack);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, analyzer, symbolTable, variableStack); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::SymbolTableClass& symbolTable, std::stack<UnicodeString>& variableStack)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, analyzer, symbolTable, variableStack)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    mvceditor::LexicalAnalyzerClass &analyzer;
    mvceditor::SymbolTableClass& symbolTable;
    std::stack<UnicodeString>& variableStack;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (analyzer);
  YYUSE (symbolTable);
  YYUSE (variableStack);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::SymbolTableClass& symbolTable, std::stack<UnicodeString>& variableStack);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::SymbolTableClass& symbolTable, std::stack<UnicodeString>& variableStack)
#else
int
yyparse (analyzer, symbolTable, variableStack)
    mvceditor::LexicalAnalyzerClass &analyzer;
    mvceditor::SymbolTableClass& symbolTable;
    std::stack<UnicodeString>& variableStack;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    { ;}
    break;

  case 3:

    {;}
    break;

  case 4:

    {;}
    break;

  case 6:

    {;}
    break;

  case 7:

    {;}
    break;

  case 8:

    {;}
    break;

  case 9:

    {;}
    break;

  case 10:

    {;}
    break;

  case 11:

    {;}
    break;

  case 12:

    {;}
    break;

  case 13:

    {;}
    break;

  case 14:

    {;}
    break;

  case 15:

    {;}
    break;

  case 16:

    {;}
    break;

  case 17:

    {;}
    break;

  case 18:

    {;}
    break;

  case 21:

    {;}
    break;

  case 22:

    {;}
    break;

  case 23:

    {;}
    break;

  case 24:

    {;}
    break;

  case 25:

    {;}
    break;

  case 26:

    {;}
    break;

  case 27:

    {;}
    break;

  case 28:

    {;}
    break;

  case 33:

    {;}
    break;

  case 34:

    {;}
    break;

  case 35:

    {;}
    break;

  case 37:

    {;}
    break;

  case 38:

    {;}
    break;

  case 39:

    {;}
    break;

  case 40:

    {;}
    break;

  case 41:

    {;}
    break;

  case 42:

    {;}
    break;

  case 43:

    {;}
    break;

  case 44:

    {;}
    break;

  case 45:

    {;}
    break;

  case 46:

    {;}
    break;

  case 47:

    {;}
    break;

  case 48:

    {;}
    break;

  case 49:

    {;}
    break;

  case 50:

    {;}
    break;

  case 51:

    {;}
    break;

  case 52:

    {;}
    break;

  case 53:

    {;}
    break;

  case 54:

    {;}
    break;

  case 55:

    {;}
    break;

  case 56:

    {;}
    break;

  case 57:

    {;}
    break;

  case 58:

    {;}
    break;

  case 59:

    {;}
    break;

  case 60:

    {;}
    break;

  case 61:

    {;}
    break;

  case 65:

    {;}
    break;

  case 66:

    {;}
    break;

  case 68:

    {;}
    break;

  case 69:

    {;}
    break;

  case 70:

    {;}
    break;

  case 71:

    {;}
    break;

  case 72:

    {;}
    break;

  case 73:

    {;}
    break;

  case 74:

    {;}
    break;

  case 75:

    {;}
    break;

  case 77:

    {;}
    break;

  case 78:

    {;}
    break;

  case 79:

    {;}
    break;

  case 80:

    {;}
    break;

  case 81:

    {;}
    break;

  case 82:

    {;}
    break;

  case 83:

    {;}
    break;

  case 84:

    {;}
    break;

  case 85:

    {;}
    break;

  case 86:

    {;}
    break;

  case 87:

    {;}
    break;

  case 88:

    {;}
    break;

  case 89:

    {;}
    break;

  case 90:

    {;}
    break;

  case 91:

    {;}
    break;

  case 94:

    {;}
    break;

  case 95:

    {;}
    break;

  case 96:

    {;}
    break;

  case 97:

    {;}
    break;

  case 98:

    {;}
    break;

  case 99:

    {;}
    break;

  case 100:

    {;}
    break;

  case 101:

    {;}
    break;

  case 102:

    {;}
    break;

  case 103:

    {;}
    break;

  case 104:

    {;}
    break;

  case 105:

    {;}
    break;

  case 106:

    {;}
    break;

  case 107:

    {;}
    break;

  case 108:

    {;}
    break;

  case 109:

    {;}
    break;

  case 110:

    {;}
    break;

  case 115:

    {;}
    break;

  case 116:

    {;}
    break;

  case 117:

    {;}
    break;

  case 118:

    {;}
    break;

  case 119:

    {;}
    break;

  case 120:

    {;}
    break;

  case 127:

    {;}
    break;

  case 128:

    {;}
    break;

  case 129:

    {;}
    break;

  case 130:

    {;}
    break;

  case 131:

    {;}
    break;

  case 132:

    {;}
    break;

  case 133:

    {;}
    break;

  case 134:

    {;}
    break;

  case 135:

    {;}
    break;

  case 136:

    {;}
    break;

  case 137:

    {;}
    break;

  case 143:

    {;}
    break;

  case 144:

    {;}
    break;

  case 146:

    {;}
    break;

  case 147:

    {;}
    break;

  case 154:

    {;}
    break;

  case 155:

    {;}
    break;

  case 156:

    {;}
    break;

  case 157:

    {;}
    break;

  case 158:

    {;}
    break;

  case 159:

    {;}
    break;

  case 160:

    {;}
    break;

  case 161:

    {;}
    break;

  case 162:

    {;}
    break;

  case 163:

    {;}
    break;

  case 164:

    {;}
    break;

  case 165:

    {;}
    break;

  case 166:

    {;}
    break;

  case 167:

    {;}
    break;

  case 168:

    {;}
    break;

  case 169:

    {;}
    break;

  case 170:

    {;}
    break;

  case 171:

    {;}
    break;

  case 172:

    {;}
    break;

  case 173:

    {;}
    break;

  case 174:

    {;}
    break;

  case 175:

    {;}
    break;

  case 176:

    {;}
    break;

  case 177:

    {;}
    break;

  case 178:

    {;}
    break;

  case 179:

    {;}
    break;

  case 180:

    {;}
    break;

  case 181:

    {;}
    break;

  case 184:

    {;}
    break;

  case 187:

    {;}
    break;

  case 188:

    {;}
    break;

  case 189:

    {;}
    break;

  case 190:

    {;}
    break;

  case 191:

    {;}
    break;

  case 192:

    {;}
    break;

  case 193:

    {;}
    break;

  case 194:

    {;}
    break;

  case 195:

    {;}
    break;

  case 196:

    {;}
    break;

  case 197:

    {;}
    break;

  case 198:

    {;}
    break;

  case 199:

    {;}
    break;

  case 200:

    {;}
    break;

  case 201:

    {;}
    break;

  case 202:

    {;}
    break;

  case 203:

    {;}
    break;

  case 204:

    {;}
    break;

  case 205:

    {;}
    break;

  case 206:

    {;}
    break;

  case 207:

    {;}
    break;

  case 208:

    {;}
    break;

  case 209:

    {;}
    break;

  case 210:

    {;}
    break;

  case 211:

    {;}
    break;

  case 212:

    {;}
    break;

  case 213:

    {;}
    break;

  case 214:

    {;}
    break;

  case 215:

    {;}
    break;

  case 216:

    {;}
    break;

  case 217:

    {;}
    break;

  case 218:

    { 
			SetSymbolType((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]).Symbol ? (yyvsp[(3) - (3)]).Symbol->Type : mvceditor::SymbolClass::PRIMITIVE);  
			if ((yyvsp[(3) - (3)]).Symbol) {
				(yyvsp[(1) - (3)]).Symbol->TypeLexeme = (yyvsp[(3) - (3)]).Symbol->TypeLexeme;
			}
			MakeVariable((yyvsp[(1) - (3)]), (yyvsp[(1) - (3)]).Symbol->Type, symbolTable);
		;}
    break;

  case 219:

    {;}
    break;

  case 220:

    {;}
    break;

  case 221:

    {;}
    break;

  case 222:

    {;}
    break;

  case 223:

    { 
			CopySymbol((yyval), (yyvsp[(2) - (4)])); 
			SetSymbolType((yyval), mvceditor::SymbolClass::OBJECT);  
			(yyval).Symbol->TypeLexeme = (yyvsp[(2) - (4)]).Symbol->Lexeme;
		;}
    break;

  case 224:

    {;}
    break;

  case 225:

    {;}
    break;

  case 226:

    {;}
    break;

  case 227:

    {;}
    break;

  case 228:

    {;}
    break;

  case 229:

    {;}
    break;

  case 230:

    {;}
    break;

  case 231:

    {;}
    break;

  case 232:

    {;}
    break;

  case 233:

    {;}
    break;

  case 234:

    {;}
    break;

  case 235:

    {;}
    break;

  case 236:

    {;}
    break;

  case 237:

    {;}
    break;

  case 238:

    {;}
    break;

  case 239:

    {;}
    break;

  case 240:

    {;}
    break;

  case 241:

    {;}
    break;

  case 242:

    {;}
    break;

  case 243:

    {;}
    break;

  case 244:

    {;}
    break;

  case 245:

    {;}
    break;

  case 246:

    {;}
    break;

  case 247:

    {;}
    break;

  case 248:

    {;}
    break;

  case 249:

    {;}
    break;

  case 250:

    {;}
    break;

  case 251:

    {;}
    break;

  case 252:

    {;}
    break;

  case 253:

    {;}
    break;

  case 254:

    {;}
    break;

  case 255:

    {;}
    break;

  case 256:

    {;}
    break;

  case 257:

    {;}
    break;

  case 258:

    {;}
    break;

  case 259:

    {;}
    break;

  case 260:

    { ;}
    break;

  case 261:

    { ;}
    break;

  case 262:

    {;}
    break;

  case 263:

    {;}
    break;

  case 264:

    {;}
    break;

  case 265:

    {;}
    break;

  case 266:

    {;}
    break;

  case 267:

    {;}
    break;

  case 268:

    {;}
    break;

  case 269:

    {;}
    break;

  case 270:

    {;}
    break;

  case 271:

    {;}
    break;

  case 272:

    {;}
    break;

  case 273:

    {;}
    break;

  case 274:

    {;}
    break;

  case 275:

    {;}
    break;

  case 276:

    {;}
    break;

  case 277:

    {;}
    break;

  case 278:

    {;}
    break;

  case 279:

    {;}
    break;

  case 280:

    {;}
    break;

  case 281:

    {;}
    break;

  case 282:

    {;}
    break;

  case 283:

    { SetSymbolType((yyval), mvceditor::SymbolClass::ARRAY); ;}
    break;

  case 284:

    { SetSymbolType((yyval), mvceditor::SymbolClass::OBJECT); ;}
    break;

  case 285:

    {;}
    break;

  case 286:

    {;}
    break;

  case 287:

    {;}
    break;

  case 288:

    {;}
    break;

  case 289:

    {;}
    break;

  case 290:

    {;}
    break;

  case 291:

    { SetSymbolType((yyval), mvceditor::SymbolClass::ARRAY); ;}
    break;

  case 292:

    {;}
    break;

  case 293:

    {;}
    break;

  case 294:

    {;}
    break;

  case 295:

    {;}
    break;

  case 296:

    {;}
    break;

  case 299:

    {;}
    break;

  case 300:

    {;}
    break;

  case 301:

    {;}
    break;

  case 302:

    {;}
    break;

  case 303:

    {;}
    break;

  case 304:

    {
			CopySymbol((yyval), (yyvsp[(1) - (5)])); 
			SetSymbolType((yyval), mvceditor::SymbolClass::FUNCTION);
		;}
    break;

  case 305:

    {;}
    break;

  case 306:

    {;}
    break;

  case 307:

    {;}
    break;

  case 308:

    {;}
    break;

  case 309:

    {;}
    break;

  case 310:

    {;}
    break;

  case 311:

    {;}
    break;

  case 312:

    {;}
    break;

  case 313:

    {;}
    break;

  case 314:

    {;}
    break;

  case 315:

    {;}
    break;

  case 316:

    {;}
    break;

  case 317:

    {;}
    break;

  case 318:

    { ;}
    break;

  case 319:

    {;}
    break;

  case 320:

    {;}
    break;

  case 321:

    {;}
    break;

  case 322:

    {;}
    break;

  case 323:

    {;}
    break;

  case 324:

    {;}
    break;

  case 325:

    {;}
    break;

  case 326:

    {;}
    break;

  case 327:

    {;}
    break;

  case 328:

    {;}
    break;

  case 329:

    {;}
    break;

  case 330:

    {;}
    break;

  case 331:

    {;}
    break;

  case 334:

    {;}
    break;

  case 335:

    {;}
    break;

  case 336:

    {;}
    break;

  case 337:

    {;}
    break;

  case 338:

    {;}
    break;

  case 339:

    {;}
    break;

  case 340:

    {;}
    break;

  case 341:

    {;}
    break;

  case 342:

    {;}
    break;

  case 343:

    {;}
    break;

  case 344:

    {;}
    break;

  case 345:

    {;}
    break;

  case 346:

    {;}
    break;

  case 347:

    {;}
    break;

  case 348:

    {;}
    break;

  case 349:

    {;}
    break;

  case 350:

    {;}
    break;

  case 351:

    {;}
    break;

  case 352:

    {;}
    break;

  case 353:

    {;}
    break;

  case 354:

    {;}
    break;

  case 355:

    {;}
    break;

  case 356:

    {;}
    break;

  case 357:

    {;}
    break;

  case 358:

    {;}
    break;

  case 359:

    {;}
    break;

  case 360:

    {;}
    break;

  case 361:

    {;}
    break;

  case 362:

    {;}
    break;

  case 363:

    {;}
    break;

  case 364:

    {;}
    break;

  case 365:

    {;}
    break;

  case 366:

    {;}
    break;

  case 367:

    {;}
    break;

  case 368:

    {;}
    break;

  case 369:

    {;}
    break;

  case 370:

    {;}
    break;

  case 371:

    {;}
    break;

  case 372:

    {;}
    break;

  case 373:

    {;}
    break;

  case 376:

    {;}
    break;

  case 377:

    {;}
    break;

  case 378:

    {;}
    break;

  case 379:

    {;}
    break;

  case 380:

    {;}
    break;

  case 381:

    {;}
    break;

  case 382:

    {;}
    break;

  case 383:

    {;}
    break;

  case 384:

    {;}
    break;

  case 385:

    { 
				if ((yyvsp[(1) - (4)]).Symbol->Type == mvceditor::SymbolClass::FUNCTION) {
					(yyvsp[(4) - (4)]).Token = '(';
				}
				MakeTempVariableAndStack((yyvsp[(1) - (4)]).Symbol->Lexeme, (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]), symbolTable, variableStack);
			;}
    break;

  case 386:

    { 
				variableStack.pop();
				SetSymbolType((yyval), mvceditor::SymbolClass::OBJECT);
			;}
    break;

  case 387:

    {
				if ((yyvsp[(1) - (1)]).Symbol && (yyvsp[(1) - (1)]).Symbol->Type == mvceditor::SymbolClass::FUNCTION) {
					CopySymbol((yyval), (yyvsp[(1) - (1)]));
					MakeTempVariable((yyval), symbolTable);
				}
				else {
					CopySymbol((yyval), (yyvsp[(1) - (1)]));
				}
			;}
    break;

  case 388:

    { variableStack.pop(); ;}
    break;

  case 389:

    {;}
    break;

  case 390:

    {
			MakeTempVariableAndStack(variableStack.top(), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]), symbolTable, variableStack);
		;}
    break;

  case 391:

    {;}
    break;

  case 392:

    { ;}
    break;

  case 393:

    { ;}
    break;

  case 394:

    {;}
    break;

  case 395:

    {;}
    break;

  case 396:

    {;}
    break;

  case 397:

    {;}
    break;

  case 398:

    {;}
    break;

  case 399:

    {;}
    break;

  case 400:

    {;}
    break;

  case 401:

    {;}
    break;

  case 402:

    {;}
    break;

  case 403:

    {;}
    break;

  case 404:

    {;}
    break;

  case 405:

    {;}
    break;

  case 406:

    {;}
    break;

  case 407:

    {;}
    break;

  case 408:

    {;}
    break;

  case 409:

    {;}
    break;

  case 410:

    {;}
    break;

  case 411:

    {;}
    break;

  case 412:

    {;}
    break;

  case 413:

    {;}
    break;

  case 414:

    {;}
    break;

  case 415:

    {;}
    break;

  case 416:

    {;}
    break;

  case 417:

    {;}
    break;

  case 418:

    {;}
    break;

  case 419:

    {;}
    break;

  case 420:

    {;}
    break;

  case 423:

    {;}
    break;

  case 424:

    {;}
    break;

  case 425:

    {;}
    break;

  case 426:

    {;}
    break;

  case 427:

    {;}
    break;

  case 428:

    {;}
    break;

  case 429:

    {;}
    break;

  case 430:

    {;}
    break;

  case 431:

    {;}
    break;

  case 432:

    {;}
    break;

  case 433:

    {;}
    break;

  case 434:

    {;}
    break;

  case 435:

    {;}
    break;

  case 436:

    {;}
    break;

  case 437:

    {;}
    break;

  case 438:

    {;}
    break;

  case 439:

    {;}
    break;

  case 440:

    {;}
    break;

  case 441:

    { ;}
    break;

  case 442:

    {;}
    break;

  case 443:

    {;}
    break;

  case 444:

    {;}
    break;

  case 445:

    {;}
    break;

  case 446:

    {;}
    break;

  case 447:

    {;}
    break;

  case 448:

    {;}
    break;

  case 449:

    {;}
    break;

  case 450:

    {;}
    break;

  case 451:

    {;}
    break;

  case 452:

    {;}
    break;

  case 453:

    {;}
    break;

  case 454:

    {;}
    break;

  case 455:

    {;}
    break;

  case 456:

    {;}
    break;

  case 457:

    {;}
    break;

  case 458:

    {;}
    break;

  case 459:

    {;}
    break;

  case 460:

    {;}
    break;

  case 461:

    {;}
    break;

  case 462:

    {;}
    break;



      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (analyzer, symbolTable, variableStack, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (analyzer, symbolTable, variableStack, yymsg);
	  }
	else
	  {
	    yyerror (analyzer, symbolTable, variableStack, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, analyzer, symbolTable, variableStack);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, analyzer, symbolTable, variableStack);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (analyzer, symbolTable, variableStack, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, analyzer, symbolTable, variableStack);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, analyzer, symbolTable, variableStack);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





int php53lex(YYSTYPE* value, mvceditor::LexicalAnalyzerClass &analyzer) {
	int ret = analyzer.NextToken();
	
	// ignore these token; there are no parse rules for them
	if (T_OPEN_TAG == ret) {
		ret = analyzer.NextToken();	
	}
	if (T_DOC_COMMENT == ret) {
		
		// advance past all DOC comments (there can be more than one consecutive)
		while (T_DOC_COMMENT == ret) {
			ret = analyzer.NextToken();
		}
	}
	if (T_CLOSE_TAG == ret) {
		ret = ';';
	}
	
	value->Token = ret;
	value->Symbol = NULL;
	switch (ret) {
	case T_VARIABLE:
		value->Symbol = new mvceditor::SymbolClass();	
		analyzer.GetLexeme(value->Symbol->Lexeme);
		value->Symbol->Pos = analyzer.GetCharacterPosition();
		break;
	case T_STRING:
		value->Symbol = new mvceditor::SymbolClass();
		analyzer.GetLexeme(value->Symbol->Lexeme);
		value->Symbol->Pos = analyzer.GetCharacterPosition();
		break;
	case T_CONSTANT_ENCAPSED_STRING:
		value->Symbol = new mvceditor::SymbolClass();
		value->Symbol->Type = mvceditor::SymbolClass::PRIMITIVE;
		analyzer.GetLexeme(value->Symbol->Lexeme);
		value->Symbol->Pos = analyzer.GetCharacterPosition();
		break;
	case T_LNUMBER:
	case T_DNUMBER:
		value->Symbol = new mvceditor::SymbolClass();
		value->Symbol->Type = mvceditor::SymbolClass::PRIMITIVE;
		analyzer.GetLexeme(value->Symbol->Lexeme);
		value->Symbol->Pos = analyzer.GetCharacterPosition();
		break;
	default:	
		break;
	}
	return ret;
}

void php53error(mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::SymbolTableClass& symbolTable, std::stack<UnicodeString> variableStack, std::string msg) {
	int capacity = msg.length() + 1;
	int written = u_sprintf(analyzer.ParserError.getBuffer(capacity), "%s", msg.c_str());
	analyzer.ParserError.releaseBuffer(written);
}

void FreeSymbol(Symbol_t& value) {
	if (value.Symbol) {
		delete value.Symbol;
		value.Symbol = NULL;
	}	
}

void CopySymbol(Symbol_t& from, Symbol_t& to) {
	if (!to.Symbol && from.Symbol) {
	to.Symbol = new mvceditor::SymbolClass();
		to.Symbol->Copy(*from.Symbol);
	}
}

void SetSymbolType(Symbol_t& value, mvceditor::SymbolClass::Types type) {
	if (!value.Symbol) {
		value.Symbol = new mvceditor::SymbolClass();
	}
	value.Symbol->Type = type;
}

void MakeVariable(Symbol_t& value, mvceditor::SymbolClass::Types type, mvceditor::SymbolTableClass& symbolTable) {
	SetSymbolType(value, type);
	symbolTable.Push(value.Symbol);
}

void MakeTempVariable(Symbol_t& value, mvceditor::SymbolTableClass& symbolTable) {
	UnicodeString newVarName;
	int capacity = 10;
	int written = u_sprintf(newVarName.getBuffer(capacity), "$tmp%d", symbolTable.GetSymbolCount());
	newVarName.releaseBuffer(written);
	value.Symbol->SourceSignature = value.Symbol->Lexeme;
	value.Symbol->Lexeme = newVarName;
	
	symbolTable.Push(value.Symbol);
} 

void MakeTempVariableAndStack(const UnicodeString& object, Symbol_t& property, Symbol_t& lookahead, mvceditor::SymbolTableClass& symbolTable, std::stack<UnicodeString>& variableStack) {
	UnicodeString newVarName;
	int capacity = 10;
	int written = u_sprintf(newVarName.getBuffer(capacity), "$tmp%d", symbolTable.GetSymbolCount());
	newVarName.releaseBuffer(written);
	if ('(' == lookahead.Token && object.startsWith(UNICODE_STRING_SIMPLE("$"))) {
		property.Symbol->Type = mvceditor::SymbolClass::METHOD;
		property.Symbol->SourceSignature = object + UNICODE_STRING_SIMPLE("->") + property.Symbol->Lexeme;
		property.Symbol->Lexeme = newVarName;
	}
	else if ('(' == lookahead.Token && !object.startsWith(UNICODE_STRING_SIMPLE("$"))) {
		property.Symbol->Type = mvceditor::SymbolClass::PRIMITIVE; // dont know the function return type yet
		property.Symbol->SourceSignature = object;
		property.Symbol->Lexeme = newVarName;
	}
	else {
		property.Symbol->Type = mvceditor::SymbolClass::PROPERTY;
		property.Symbol->SourceSignature = object + UNICODE_STRING_SIMPLE("->") + property.Symbol->Lexeme;
		property.Symbol->Lexeme = newVarName;
	}
	symbolTable.Push(property.Symbol);
	variableStack.push(newVarName);
}
