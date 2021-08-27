/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 9 ".\\BISON\\cm.y"

    #define YYPARSER    
    #include "globals.h"
    #include "util.h"
    #include "scan.h"
    #include "parse.h"

    #define YYSTYPE TreeNode *
    int yyerror(char *msg);
    static TreeNode * savedTree;   
    static int yylex(void);


/* Line 189 of yacc.c  */
#line 86 "cm.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     ELSE = 258,
     IF = 259,
     INT = 260,
     RETURN = 261,
     VOID = 262,
     WHILE = 263,
     PLUS = 264,
     MINUS = 265,
     TIMES = 266,
     OVER = 267,
     LT = 268,
     LTE = 269,
     GT = 270,
     GTE = 271,
     EQ = 272,
     NE = 273,
     ASSIGN = 274,
     SEMI = 275,
     COMMA = 276,
     LPAREN = 277,
     RPAREN = 278,
     LBRACKET = 279,
     RBRACKET = 280,
     LKEYS = 281,
     RKEYS = 282,
     NUM = 283,
     ID = 284,
     ERROR = 285,
     ENDFILE = 286
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 159 "cm.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   137

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  114

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    25,
      32,    39,    41,    43,    47,    49,    52,    57,    62,    66,
      70,    73,    76,    78,    81,    83,    85,    87,    89,    91,
      93,    96,    98,   104,   112,   118,   121,   125,   129,   131,
     133,   138,   142,   144,   146,   148,   150,   152,   154,   156,
     160,   162,   164,   166,   170,   172,   174,   176,   180,   182,
     184,   186,   191,   195,   199,   201,   203
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      33,     0,    -1,    34,    -1,    34,    35,    -1,    35,    -1,
      36,    -1,    37,    -1,     5,    60,    20,    -1,     5,    60,
      24,    61,    25,    20,    -1,     5,    60,    22,    38,    23,
      41,    -1,     7,    60,    22,    38,    23,    41,    -1,    39,
      -1,     7,    -1,    39,    21,    40,    -1,    40,    -1,     5,
      60,    -1,     5,    60,    24,    25,    -1,    26,    42,    43,
      27,    -1,    26,    42,    27,    -1,    26,    43,    27,    -1,
      26,    27,    -1,    42,    36,    -1,    36,    -1,    43,    44,
      -1,    44,    -1,    45,    -1,    41,    -1,    46,    -1,    47,
      -1,    48,    -1,    49,    20,    -1,    20,    -1,     4,    22,
      49,    23,    44,    -1,     4,    22,    49,    23,    44,     3,
      44,    -1,     8,    22,    49,    23,    44,    -1,     6,    20,
      -1,     6,    49,    20,    -1,    50,    19,    49,    -1,    51,
      -1,    60,    -1,    60,    24,    49,    25,    -1,    53,    52,
      53,    -1,    53,    -1,    17,    -1,    18,    -1,    13,    -1,
      14,    -1,    15,    -1,    16,    -1,    53,    54,    55,    -1,
      55,    -1,     9,    -1,    10,    -1,    55,    56,    57,    -1,
      57,    -1,    11,    -1,    12,    -1,    22,    49,    23,    -1,
      50,    -1,    58,    -1,    61,    -1,    60,    22,    59,    23,
      -1,    60,    22,    23,    -1,    59,    21,    49,    -1,    49,
      -1,    29,    -1,    28,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    33,    44,    49,    52,    57,    71,    83,
      96,   111,   114,   117,   128,   133,   142,   153,   164,   167,
     170,   173,   184,   189,   200,   205,   208,   211,   214,   217,
     222,   225,   228,   233,   241,   248,   251,   257,   262,   267,
     271,   279,   284,   289,   295,   301,   307,   313,   319,   327,
     332,   337,   343,   351,   356,   361,   367,   375,   378,   381,
     384,   389,   394,   400,   411,   416,   422
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ELSE", "IF", "INT", "RETURN", "VOID",
  "WHILE", "PLUS", "MINUS", "TIMES", "OVER", "LT", "LTE", "GT", "GTE",
  "EQ", "NE", "ASSIGN", "SEMI", "COMMA", "LPAREN", "RPAREN", "LBRACKET",
  "RBRACKET", "LKEYS", "RKEYS", "NUM", "ID", "ERROR", "ENDFILE", "$accept",
  "program", "list_declaration", "declaration", "var_declaration",
  "fun_declaration", "params", "param_list", "param", "compound_decl",
  "local_declarations", "statement_list", "statement", "expression_decl",
  "selection_decl", "iterator_decl", "return_decl", "expression", "var",
  "simple_expression", "relational", "sum_expression", "sum", "term",
  "mult", "fator", "activation", "arg_lista", "identifier", "num", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    36,    37,
      37,    38,    38,    39,    39,    40,    40,    41,    41,    41,
      41,    42,    42,    43,    43,    44,    44,    44,    44,    44,
      45,    45,    46,    46,    47,    48,    48,    49,    49,    50,
      50,    51,    51,    52,    52,    52,    52,    52,    52,    53,
      53,    54,    54,    55,    55,    56,    56,    57,    57,    57,
      57,    58,    58,    59,    59,    60,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     6,
       6,     1,     1,     3,     1,     2,     4,     4,     3,     3,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     5,     7,     5,     2,     3,     3,     1,     1,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     4,     3,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     4,     5,     6,    65,     0,
       0,     1,     3,     7,     0,     0,     0,     0,    12,     0,
      11,    14,    66,     0,     0,    15,     0,     0,     0,     0,
       0,     0,     9,    13,     8,    10,    16,     0,     0,     0,
       0,    31,     0,    20,    22,    26,     0,     0,    24,    25,
      27,    28,    29,     0,    58,    38,    42,    50,    54,    59,
      39,    60,     0,     0,    35,     0,     0,     0,    18,    21,
       0,    19,    23,    30,     0,    51,    52,    45,    46,    47,
      48,    43,    44,     0,     0,    55,    56,     0,     0,     0,
       0,    36,     0,    57,    17,    37,    58,    41,    49,    53,
      62,    64,     0,     0,     0,     0,     0,    61,    40,    32,
      34,    63,     0,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,    19,    20,    21,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      83,    56,    84,    57,    87,    58,    59,   102,    60,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -47
static const yytype_int8 yypact[] =
{
      40,    -1,    -1,    34,    40,   -47,   -47,   -47,   -47,     9,
      26,   -47,   -47,   -47,    55,    23,    55,    -1,   -47,    38,
      44,   -47,   -47,    47,    63,    64,    73,    84,    70,    73,
      80,    10,   -47,   -47,   -47,   -47,   -47,    85,    -1,    35,
      86,   -47,    -3,   -47,   -47,   -47,    48,    65,   -47,   -47,
     -47,   -47,   -47,    89,    87,   -47,   113,    -2,   -47,   -47,
      56,   -47,    -3,    20,   -47,    90,    -3,    88,   -47,   -47,
      75,   -47,   -47,   -47,    -3,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,    -3,    -3,   -47,   -47,    -3,   -16,    -3,
      93,   -47,    94,   -47,   -47,   -47,   -47,    12,    -2,   -47,
     -47,   -47,    61,    99,    92,    92,    -3,   -47,   -47,   110,
     -47,   -47,    92,   -47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -47,   -47,   -47,   111,   -29,   -47,   103,   -47,    98,   -18,
     -47,    91,   -46,   -47,   -47,   -47,   -47,   -39,   -41,   -47,
     -47,    49,   -47,    50,   -47,    46,   -47,   -47,     3,   120
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      65,    72,    44,    67,     9,    10,    42,   100,    32,    85,
      86,    35,    22,     8,    37,    38,    39,    69,    40,    42,
      25,    75,    76,    90,    72,    22,     8,    92,     8,    13,
      41,    14,    42,    15,    11,    95,    31,    43,    22,     8,
      13,    63,    96,    96,    15,     1,    96,     2,    16,   101,
     103,    22,    37,    38,    39,    64,    40,    42,   109,   110,
      17,    26,    18,    22,     8,    27,   113,   111,    41,    37,
      42,    39,    28,    40,    31,    68,    22,     8,    88,    37,
      89,    39,   106,    40,   107,    41,    29,    42,    30,    17,
      34,    31,    71,    22,     8,    41,    37,    42,    39,    31,
      40,    31,    94,    22,     8,    36,    74,    62,    66,    73,
      91,    93,    41,   112,    42,    12,   104,   105,    31,    24,
      22,     8,    75,    76,   108,    33,    77,    78,    79,    80,
      81,    82,    97,    99,    98,    23,     0,    70
};

static const yytype_int8 yycheck[] =
{
      39,    47,    31,    42,     1,     2,    22,    23,    26,    11,
      12,    29,    28,    29,     4,     5,     6,    46,     8,    22,
      17,     9,    10,    62,    70,    28,    29,    66,    29,    20,
      20,    22,    22,    24,     0,    74,    26,    27,    28,    29,
      20,    38,    83,    84,    24,     5,    87,     7,    22,    88,
      89,    28,     4,     5,     6,    20,     8,    22,   104,   105,
       5,    23,     7,    28,    29,    21,   112,   106,    20,     4,
      22,     6,    25,     8,    26,    27,    28,    29,    22,     4,
      24,     6,    21,     8,    23,    20,    23,    22,    24,     5,
      20,    26,    27,    28,    29,    20,     4,    22,     6,    26,
       8,    26,    27,    28,    29,    25,    19,    22,    22,    20,
      20,    23,    20,     3,    22,     4,    23,    23,    26,    16,
      28,    29,     9,    10,    25,    27,    13,    14,    15,    16,
      17,    18,    83,    87,    84,    15,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     7,    33,    34,    35,    36,    37,    29,    60,
      60,     0,    35,    20,    22,    24,    22,     5,     7,    38,
      39,    40,    28,    61,    38,    60,    23,    21,    25,    23,
      24,    26,    41,    40,    20,    41,    25,     4,     5,     6,
       8,    20,    22,    27,    36,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    53,    55,    57,    58,
      60,    61,    22,    60,    20,    49,    22,    49,    27,    36,
      43,    27,    44,    20,    19,     9,    10,    13,    14,    15,
      16,    17,    18,    52,    54,    11,    12,    56,    22,    24,
      49,    20,    49,    23,    27,    49,    50,    53,    55,    57,
      23,    49,    59,    49,    23,    23,    21,    23,    25,    44,
      44,    49,     3,    44
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (YY_("syntax error: cannot back up")); \
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


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

/* Line 1464 of yacc.c  */
#line 28 ".\\BISON\\cm.y"
    { 
                                savedTree = (yyvsp[(1) - (1)]); 
                            ;}
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 33 ".\\BISON\\cm.y"
    { 
                            YYSTYPE t = (yyvsp[(1) - (2)]);
                            if(t != NULL) {     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = (yyvsp[(2) - (2)]);
                                (yyval) = (yyvsp[(1) - (2)]);
                            }
                            else
                                (yyval) = (yyvsp[(2) - (2)]);
                        ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 44 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 49 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 52 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 57 ".\\BISON\\cm.y"
    {
                            //o tipo de expressao é expressao de tipo (TypeK)
                            (yyval) = newExpNode(TypeK);
                            //do tipo INT
                            (yyval)->type = Integer;
                            //de nome "integer"
                            (yyval)->attr.name = "integer";
                            (yyval)->child[0] = (yyvsp[(2) - (3)]);
                            (yyvsp[(2) - (3)])->type = Integer;
                            //filho é statement da variavel
                            (yyvsp[(2) - (3)])->nodekind = StmtK;
                            //tipo de statement é de variavel
                            (yyvsp[(2) - (3)])->kind.stmt = VarK;
                        ;}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 71 ".\\BISON\\cm.y"
    {     
                            (yyval) = newExpNode(TypeK);
                            (yyval)->type = Integer;
                            (yyval)->attr.name = "integer";
                            (yyval)->child[0] = (yyvsp[(2) - (6)]);
                            (yyvsp[(2) - (6)])->type = Integer;
                            (yyvsp[(2) - (6)])->nodekind = StmtK;
                            (yyvsp[(2) - (6)])->kind.stmt = VecK;
                            (yyvsp[(2) - (6)])->attr.val = (yyvsp[(4) - (6)])->attr.val;
                        ;}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 83 ".\\BISON\\cm.y"
    {   
                            (yyval) = newExpNode(TypeK);
                            (yyval)->type = Integer;
                            (yyval)->attr.name = "integer";
                            (yyval)->child[0] = (yyvsp[(2) - (6)]);
                            (yyvsp[(2) - (6)])->type = Integer;
                            (yyvsp[(2) - (6)])->nodekind = StmtK;
                            (yyvsp[(2) - (6)])->kind.stmt = FuncK;
                            (yyvsp[(2) - (6)])->child[0] = (yyvsp[(4) - (6)]);
                            (yyvsp[(2) - (6)])->child[1] = (yyvsp[(6) - (6)]);
                            aggScope((yyvsp[(2) - (6)])->child[0], (yyvsp[(2) - (6)])->attr.name);
                            aggScope((yyvsp[(2) - (6)])->child[1], (yyvsp[(2) - (6)])->attr.name);
                        ;}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 96 ".\\BISON\\cm.y"
    {   
                            (yyval) = newExpNode(TypeK);
                            (yyval)->type = Void;
                            (yyval)->attr.name = "VOID";
                            (yyval)->child[0] = (yyvsp[(2) - (6)]);
                            (yyvsp[(2) - (6)])->type = Void;
                            (yyvsp[(2) - (6)])->nodekind = StmtK;
                            (yyvsp[(2) - (6)])->kind.stmt = FuncK;
                            (yyvsp[(2) - (6)])->child[0] = (yyvsp[(4) - (6)]);
                            (yyvsp[(2) - (6)])->child[1] = (yyvsp[(6) - (6)]);
                            aggScope((yyvsp[(2) - (6)])->child[0], (yyvsp[(2) - (6)])->attr.name);
                            aggScope((yyvsp[(2) - (6)])->child[1], (yyvsp[(2) - (6)])->attr.name);
                        ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 111 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 114 ".\\BISON\\cm.y"
    {;}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 117 ".\\BISON\\cm.y"
    { 
                            YYSTYPE t = (yyvsp[(1) - (3)]);
                            if(t != NULL) {     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = (yyvsp[(3) - (3)]);
                                (yyval) = (yyvsp[(1) - (3)]);
                            }
                            else
                                (yyval) = (yyvsp[(3) - (3)]);
                        ;}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 128 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 133 ".\\BISON\\cm.y"
    {
                            (yyval) = newExpNode(TypeK);
                            (yyval)->type = Integer;
                            (yyval)->attr.name = "integer";
                            (yyval)->child[0] = (yyvsp[(2) - (2)]);
                            (yyvsp[(2) - (2)])->nodekind = StmtK;
                            (yyvsp[(2) - (2)])->kind.stmt = VarK;
                            (yyvsp[(2) - (2)])->type = Integer;
                        ;}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 142 ".\\BISON\\cm.y"
    {     
                            (yyval) = newExpNode(TypeK);
                            (yyval)->type = Integer;
                            (yyval)->attr.name = "integer";
                            (yyval)->child[0] = (yyvsp[(2) - (4)]);
                            (yyvsp[(2) - (4)])->nodekind = StmtK;
                            (yyvsp[(2) - (4)])->kind.stmt = VecK;
                            (yyvsp[(2) - (4)])->type = Integer;
                        ;}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 153 ".\\BISON\\cm.y"
    { 
                            YYSTYPE t = (yyvsp[(2) - (4)]);
                            if(t != NULL){     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = (yyvsp[(3) - (4)]);
                                (yyval) = (yyvsp[(2) - (4)]);
                            }
                            else
                                (yyval) = (yyvsp[(3) - (4)]);
                        ;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 164 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(2) - (3)]);
                        ;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 167 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(2) - (3)]);
                        ;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 170 ".\\BISON\\cm.y"
    {;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 173 ".\\BISON\\cm.y"
    { 
                            YYSTYPE t = (yyvsp[(1) - (2)]);
                            if(t != NULL){     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = (yyvsp[(2) - (2)]);
                                (yyval) = (yyvsp[(1) - (2)]);
                            }
                            else
                                (yyval) = (yyvsp[(2) - (2)]);
                        ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 184 ".\\BISON\\cm.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 189 ".\\BISON\\cm.y"
    { 
                            YYSTYPE t = (yyvsp[(1) - (2)]);
                            if(t != NULL) {     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = (yyvsp[(2) - (2)]);
                                (yyval) = (yyvsp[(1) - (2)]);
                            }
                            else
                                (yyval) = (yyvsp[(2) - (2)]);
                        ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 200 ".\\BISON\\cm.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 205 ".\\BISON\\cm.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 208 ".\\BISON\\cm.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 211 ".\\BISON\\cm.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 214 ".\\BISON\\cm.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 217 ".\\BISON\\cm.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 222 ".\\BISON\\cm.y"
    {
                            (yyval) = (yyvsp[(1) - (2)]);
                        ;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 225 ".\\BISON\\cm.y"
    {;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 228 ".\\BISON\\cm.y"
    { 
                            (yyval) = newStmtNode(IfK);
                            (yyval)->child[0] = (yyvsp[(3) - (5)]);
                            (yyval)->child[1] = (yyvsp[(5) - (5)]);
                        ;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 233 ".\\BISON\\cm.y"
    { 
                            (yyval) = newStmtNode(IfK);
                            (yyval)->child[0] = (yyvsp[(3) - (7)]);
                            (yyval)->child[1] = (yyvsp[(5) - (7)]);
                            (yyval)->child[2] = (yyvsp[(7) - (7)]);
                        ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 241 ".\\BISON\\cm.y"
    { 
                            (yyval) = newStmtNode(WhileK);
                            (yyval)->child[0] = (yyvsp[(3) - (5)]);
                            (yyval)->child[1] = (yyvsp[(5) - (5)]);
                        ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 248 ".\\BISON\\cm.y"
    { 
                            (yyval) = newStmtNode(ReturnK);
                        ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 251 ".\\BISON\\cm.y"
    { 
                            (yyval) = newStmtNode(ReturnK);
                            (yyval)->child[0] = (yyvsp[(2) - (3)]);
                        ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 257 ".\\BISON\\cm.y"
    { 
                            (yyval) = newStmtNode(AssignK);
                            (yyval)->child[0] = (yyvsp[(1) - (3)]);
                            (yyval)->child[1] = (yyvsp[(3) - (3)]);
                        ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 262 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 267 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                            (yyval)->type=Integer;
                        ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 271 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (4)]);
                            (yyval)->kind.exp = VecIndexK;
                            (yyval)->child[0] = (yyvsp[(3) - (4)]);
                            (yyval)->type=Integer;
                        ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 279 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(2) - (3)]);
                            (yyval)->child[0] = (yyvsp[(1) - (3)]);
                            (yyval)->child[1] = (yyvsp[(3) - (3)]);
                        ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 284 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 289 ".\\BISON\\cm.y"
    { 
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = EQ;
                            (yyval)->type=Boolean;
                            (yyval)->attr.name = "==";                           
                        ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 295 ".\\BISON\\cm.y"
    { 
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = NE;  
                            (yyval)->type=Boolean;
                            (yyval)->attr.name = "!=";                           
                        ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 301 ".\\BISON\\cm.y"
    { 
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = LT; 
                            (yyval)->type=Boolean;
                            (yyval)->attr.name = "<";                            
                        ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 307 ".\\BISON\\cm.y"
    { 
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = LTE; 
                            (yyval)->type=Boolean; 
                            (yyval)->attr.name = "<=";                           
                        ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 313 ".\\BISON\\cm.y"
    { 
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = GT;  
                            (yyval)->type=Boolean; 
                            (yyval)->attr.name = ">";                          
                        ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 319 ".\\BISON\\cm.y"
    { 
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = GTE;  
                            (yyval)->type=Boolean;
                            (yyval)->attr.name = ">=";                           
                        ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 327 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(2) - (3)]);
                            (yyval)->child[0] = (yyvsp[(1) - (3)]);
                            (yyval)->child[1] = (yyvsp[(3) - (3)]);
                        ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 332 ".\\BISON\\cm.y"
    {
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 337 ".\\BISON\\cm.y"
    { 
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = PLUS; 
                            (yyval)->type=Integer;  
                            (yyval)->attr.name = "+";                          
                        ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 343 ".\\BISON\\cm.y"
    { 
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = MINUS;   
                            (yyval)->type=Integer; 
                            (yyval)->attr.name = "-";                        
                        ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 351 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(2) - (3)]);
                            (yyval)->child[0] = (yyvsp[(1) - (3)]);
                            (yyval)->child[1] = (yyvsp[(3) - (3)]);
                        ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 356 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 361 ".\\BISON\\cm.y"
    {     
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = TIMES;
                            (yyval)->attr.name = "*";
                            (yyval)->type = Integer;                         
                        ;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 367 ".\\BISON\\cm.y"
    {     
                            (yyval) = newExpNode(OpK);
                            (yyval)->attr.op = OVER;
                            (yyval)->attr.name = "/";
                            (yyval)->type = Integer;                          
                        ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 375 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(2) - (3)]);
                        ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 378 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 381 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 384 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 389 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (4)]);
                            (yyval)->child[0] = (yyvsp[(3) - (4)]);
                            (yyval)->kind.exp = CallK;
                        ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 394 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (3)]);
                            (yyval)->kind.exp = CallK;
                        ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 400 ".\\BISON\\cm.y"
    { 
                            YYSTYPE t = (yyvsp[(1) - (3)]);
                            if(t != NULL){     
                                while(t->sibling != NULL)
                                    t = t->sibling;
                                t->sibling = (yyvsp[(3) - (3)]);
                                (yyval) = (yyvsp[(1) - (3)]);
                            }
                            else
                                (yyval) = (yyvsp[(3) - (3)]);
                        ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 411 ".\\BISON\\cm.y"
    { 
                            (yyval) = (yyvsp[(1) - (1)]);
                        ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 416 ".\\BISON\\cm.y"
    { 
                            (yyval) = newExpNode(IdK);
                            (yyval)->attr.name = copyString(tokenString);
                        ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 422 ".\\BISON\\cm.y"
    { 
                            (yyval) = newExpNode(ConstK);
                            (yyval)->attr.val = atoi(tokenString);
                            (yyval)->type=Integer;
                        ;}
    break;



/* Line 1464 of yacc.c  */
#line 2199 "cm.tab.c"
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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
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
		      yytoken, &yylval);
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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



/* Line 1684 of yacc.c  */
#line 429 ".\\BISON\\cm.y"


int yyerror(char * message) { 
    fprintf(listing,"Syntax error at line %d: %s\n", lineno, message);
    fprintf(listing,"Current token: ");
    printToken(yychar, tokenString);
    Error = TRUE;
    return 0;
}

static int yylex(void){
    return getToken();
}

TreeNode * parse(void){
    yyparse();
    return savedTree;
}

