/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "subc.y" /* yacc.c:339  */
                 
/*                 
 * File Name   : subc.y
 * Description : a skeleton bison input
 */

#include "subc.h"

int    yylex ();
int    yyerror (char* s);
void    REDUCE(char* s);
extern struct decl* inttype;
extern struct decl* chartype;
extern struct decl* voidtype;
extern struct id* returnid;


#line 84 "subc.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "subc.tab.h".  */
#ifndef YY_YY_SUBC_TAB_H_INCLUDED
# define YY_YY_SUBC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LOGICAL_OR = 258,
    LOGICAL_AND = 259,
    EQUOP = 260,
    RELOP = 261,
    INCOP = 262,
    DECOP = 263,
    STRUCTOP = 264,
    IF = 265,
    ELSE = 266,
    VOID = 267,
    STRUCT = 268,
    RETURN = 269,
    WHILE = 270,
    FOR = 271,
    BREAK = 272,
    CONTINUE = 273,
    ID = 274,
    CHAR_CONST = 275,
    STRING = 276,
    EQUOPG = 277,
    INTEGER_CONST = 278,
    TYPE = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 20 "subc.y" /* yacc.c:355  */

        int             intVal;
        char            *stringVal;
        struct id       *idptr;
        struct decl     *declptr;
        struct ste      *steptr;

#line 157 "subc.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SUBC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 172 "subc.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    13,     2,     2,     2,     2,     7,     2,
      19,    18,    12,    10,     3,    11,    20,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,     4,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    16,     2,    17,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     5,     6,
       8,     9,    14,    15,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    55,    55,    60,    63,    67,    75,    83,    87,    90,
      95,   101,   105,   111,   110,   121,   133,   144,   154,   167,
     184,   188,   195,   198,   203,   212,   221,   224,   228,   237,
     245,   248,   252,   256,   260,   263,   267,   270,   273,   281,
     288,   291,   294,   297,   300,   303,   306,   310,   314,   320,
     333,   337,   342,   347,   351,   356,   361,   365,   370,   374,
     378,   382,   386,   391,   395,   399,   403,   407,   411,   415,
     423,   431,   439,   447,   455,   464,   468,   472,   476,   480,
     484,   488,   493,   497
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "','", "'='", "LOGICAL_OR",
  "LOGICAL_AND", "'&'", "EQUOP", "RELOP", "'+'", "'-'", "'*'", "'!'",
  "INCOP", "DECOP", "'['", "']'", "')'", "'('", "'.'", "STRUCTOP", "IF",
  "ELSE", "VOID", "STRUCT", "RETURN", "WHILE", "FOR", "BREAK", "CONTINUE",
  "ID", "CHAR_CONST", "STRING", "EQUOPG", "INTEGER_CONST", "TYPE", "';'",
  "'{'", "'}'", "$accept", "program", "ext_def_list", "ext_def",
  "type_specifier", "struct_specifier", "$@1", "func_decl",
  "open_func_param_scope", "pointers", "param_list", "param_decl",
  "def_list", "def", "compound_stmt", "local_defs", "stmt_list", "stmt",
  "expr_e", "const_expr", "expr", "or_expr", "or_list", "and_expr",
  "and_list", "binary", "unary", "args", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    44,    61,   258,   259,    38,   260,   261,
      43,    45,    42,    33,   262,   263,    91,    93,    41,    40,
      46,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,    59,   123,   125
};
# endif

#define YYPACT_NINF -108

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-108)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -108,     5,   128,  -108,  -108,   -18,  -108,  -108,    -9,  -108,
     -20,    -7,  -108,  -108,    17,  -108,  -108,  -108,  -108,    49,
     128,  -108,  -108,   135,  -108,  -108,    -8,    19,  -108,     8,
     167,   135,   135,   135,   135,   135,   135,   135,  -108,  -108,
    -108,  -108,    46,  -108,  -108,    59,  -108,    61,   185,   169,
     138,  -108,    45,  -108,    65,    99,    68,    70,    54,    79,
    -108,  -108,  -108,  -108,    82,  -108,   107,   107,   107,   107,
     107,   107,    84,   161,    87,   135,   135,   135,   135,   135,
     135,   135,  -108,  -108,   135,   126,    74,    76,  -108,    91,
     117,    39,  -108,    53,   135,  -108,    98,   135,   135,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,   107,   185,    15,    72,
    -108,  -108,  -108,   134,  -108,  -108,    41,  -108,  -108,  -108,
     112,   128,  -108,   135,  -108,   137,  -108,   142,   132,  -108,
    -108,   135,  -108,   155,  -108,   181,    66,    66,   135,  -108,
     135,   141,   149,  -108,   162,   183,  -108,    66,   135,  -108,
    -108,   186,    66,  -108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,    11,     0,    10,     3,    21,    12,
       0,    15,    20,     8,     0,     7,    27,     9,    13,     0,
      33,    35,    27,     0,    19,     5,    21,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    67,    66,
      68,    65,     0,    49,    51,    52,    54,    55,    57,    62,
       0,    30,     0,    31,     0,     0,     0,     0,     0,     0,
      40,    32,    37,    34,     0,    14,    75,    69,    76,    70,
      73,    74,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,     0,     0,     0,     0,    16,    11,
      21,     0,    22,     0,     0,    38,     0,     0,    48,    45,
      46,    36,    63,    64,     6,    53,    62,    56,    59,    58,
      60,    61,    50,     0,    81,    82,     0,    78,    79,    17,
       0,     0,    18,     0,    28,     0,    39,     0,     0,    47,
      77,     0,    80,    24,    23,     0,     0,     0,    48,    83,
       0,     0,    41,    43,     0,     0,    29,     0,    48,    25,
      42,     0,     0,    44
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,  -108,  -108,    -1,  -108,  -108,   199,  -108,   -24,
    -108,    92,   190,  -108,   195,  -108,  -108,    50,   -78,  -107,
     -23,  -108,  -108,   139,  -108,   131,   -25,  -108
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    26,     9,    22,    27,    50,    14,
      91,    92,    20,    28,    62,    21,    29,    63,   128,    42,
      64,    44,    45,    46,    47,    48,    49,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      43,     8,    52,    12,    12,     3,    66,    67,    68,    69,
      70,    71,    73,    11,    72,    31,   135,    15,    16,    32,
      33,    34,    35,    36,    78,    79,    80,    37,    13,    51,
      54,    18,    96,   145,    55,    56,    57,    58,    59,    38,
      39,    40,   121,    41,   131,    60,    16,    61,    19,    90,
     106,   106,   106,   106,   106,   106,    53,   122,   112,   132,
     144,   113,   115,    74,    75,    23,   120,    76,    24,   123,
     151,   125,    24,    31,   127,   129,    93,    32,    33,    34,
      35,    36,    79,    80,    94,    37,    25,    97,    54,    98,
     124,    99,    55,    56,    57,    58,    59,    38,    39,    40,
      43,    41,   102,    60,    16,   117,    31,   118,   139,   119,
      32,    33,    34,    35,    36,   129,   100,    43,    37,   101,
      90,    82,    83,    84,   104,   129,    85,    86,    87,    12,
      38,    39,    40,    31,    41,   126,    95,    32,    33,    34,
      35,    36,    31,   133,   114,    37,    32,    33,    34,    35,
      36,   130,     4,     5,    37,   136,    88,    38,    39,    40,
     137,    41,    89,     5,     6,    81,    38,    39,    40,   138,
      41,   140,   147,    81,     6,    82,    83,    84,   146,   103,
      85,    86,    87,    82,    83,    84,   142,   143,    85,    86,
      87,     4,     5,    77,    78,    79,    80,   150,   141,   148,
     149,    10,   153,     6,   152,    17,    65,   107,   108,   109,
     110,   111,    30,   134,   105
};

static const yytype_uint8 yycheck[] =
{
      23,     2,    26,    12,    12,     0,    31,    32,    33,    34,
      35,    36,    37,    31,    37,     7,   123,    37,    38,    11,
      12,    13,    14,    15,     9,    10,    11,    19,    37,    37,
      22,    38,    55,   140,    26,    27,    28,    29,    30,    31,
      32,    33,     3,    35,     3,    37,    38,    39,    31,    50,
      75,    76,    77,    78,    79,    80,    37,    18,    81,    18,
     138,    84,    85,    17,     5,    16,    90,     6,    19,    16,
     148,    94,    19,     7,    97,    98,    31,    11,    12,    13,
      14,    15,    10,    11,    19,    19,    37,    19,    22,    19,
      37,    37,    26,    27,    28,    29,    30,    31,    32,    33,
     123,    35,    18,    37,    38,    31,     7,    31,   131,    18,
      11,    12,    13,    14,    15,   138,    37,   140,    19,    37,
     121,    14,    15,    16,    37,   148,    19,    20,    21,    12,
      31,    32,    33,     7,    35,    37,    37,    11,    12,    13,
      14,    15,     7,    31,    18,    19,    11,    12,    13,    14,
      15,    17,    24,    25,    19,    18,    18,    31,    32,    33,
      18,    35,    24,    25,    36,     4,    31,    32,    33,    37,
      35,    16,    23,     4,    36,    14,    15,    16,    37,    18,
      19,    20,    21,    14,    15,    16,   136,   137,    19,    20,
      21,    24,    25,     8,     9,    10,    11,   147,    17,    37,
      17,     2,   152,    36,    18,    10,    39,    76,    77,    78,
      79,    80,    22,   121,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,    24,    25,    36,    43,    44,    45,
      47,    31,    12,    37,    49,    37,    38,    54,    38,    31,
      52,    55,    46,    16,    19,    37,    44,    47,    53,    56,
      52,     7,    11,    12,    13,    14,    15,    19,    31,    32,
      33,    35,    59,    60,    61,    62,    63,    64,    65,    66,
      48,    37,    49,    37,    22,    26,    27,    28,    29,    30,
      37,    39,    54,    57,    60,    39,    66,    66,    66,    66,
      66,    66,    60,    66,    17,     5,     6,     8,     9,    10,
      11,     4,    14,    15,    16,    19,    20,    21,    18,    24,
      44,    50,    51,    31,    19,    37,    60,    19,    19,    37,
      37,    37,    18,    18,    37,    63,    66,    65,    65,    65,
      65,    65,    60,    60,    18,    60,    67,    31,    31,    18,
      49,     3,    18,    16,    37,    60,    37,    60,    58,    60,
      17,     3,    18,    31,    51,    59,    18,    18,    37,    60,
      16,    17,    57,    57,    58,    59,    37,    23,    37,    17,
      57,    58,    18,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    43,
      44,    44,    44,    46,    45,    45,    47,    47,    47,    48,
      49,    49,    50,    50,    51,    51,    52,    52,    53,    53,
      53,    53,    54,    55,    56,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    58,    58,    59,
      60,    60,    61,    62,    62,    63,    64,    64,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     4,     7,     2,     2,     2,
       1,     1,     1,     0,     6,     2,     6,     7,     7,     0,
       1,     0,     1,     3,     3,     6,     2,     0,     4,     7,
       2,     2,     4,     1,     2,     0,     2,     1,     2,     3,
       1,     5,     7,     5,     9,     2,     2,     1,     0,     1,
       3,     1,     1,     3,     1,     1,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     3,     3,
       4,     3,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 55 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("program->ext_def_list");
        }
#line 1368 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 60 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("ext_def_list->ext_def_list ext_def");
        }
#line 1376 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 63 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("ext_def_list->epsilon");
        }
#line 1384 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 67 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("ext_def->type_specifier pointers ID ;");
                if((yyvsp[-2].intVal) == 1) {
                        declare((yyvsp[-1].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[-3].declptr)))));
                }else {
                        declare((yyvsp[-1].idptr), makevardecl((yyvsp[-3].declptr)));
                }
        }
#line 1397 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 75 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("ext_def->type_specifier pointers ID '[' const_expr ']' ;");
                if((yyvsp[-5].intVal) == 1){
                        declare((yyvsp[-4].idptr), makevardecl(makeptrdecl(makeconstdecl(makearraydecl((yyvsp[-2].intVal),makevardecl((yyvsp[-6].declptr)))))));
                } else{
                        declare((yyvsp[-4].idptr), makeconstdecl(makearraydecl((yyvsp[-2].intVal),makevardecl((yyvsp[-6].declptr)))));
                }
        }
#line 1410 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 83 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("ext_def->func_decl ;");
                pop_scope();
        }
#line 1419 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 87 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("ext_def->type_specifier ;");
        }
#line 1427 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 90 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("ext_def->func_decl compound_stmt");
                pop_scope();
        }
#line 1436 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 95 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("type_specifier->TYPE");
                struct decl* currentdecl = findcurrentdecl((yyvsp[0].idptr));
                if(check_is_type(currentdecl)) (yyval.declptr) = currentdecl;
                else (yyval.declptr) = NULL;
        }
#line 1447 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 101 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("type_specifier->VOID");
                (yyval.declptr) = voidtype;
        }
#line 1456 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 105 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("type_specifier->struct_specifier");
                (yyval.declptr) = (yyvsp[0].declptr);
        }
#line 1465 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 111 "subc.y" /* yacc.c:1646  */
    {
                push_scope();
        }
#line 1473 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 116 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("struct_specifier->STRUCT ID '{' def_list '}'");
                struct ste *fields = pop_scope();
                declare_struct((yyvsp[-4].idptr), ((yyval.declptr)=makestructdecl(fields)));
        }
#line 1483 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 121 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("struct_specifier->STRUCT ID");
                struct decl* declptr = findcurrentdecl_struct((yyvsp[0].idptr));
                if(check_is_struct_type(declptr)) (yyval.declptr) = declptr;
				if( declptr == NULL) (yyval.declptr) = NULL;
                else {
                        printf("%s:%d:error: '%s' already declarized\n",read_filename(), read_line(),(yyvsp[0].idptr)->name);
                        (yyval.declptr) = NULL;
                }
        }
#line 1498 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 133 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("func_decl->type_specifier pointers ID '(' ')'");
                struct ste* formals;
                struct decl* procdecl = (yyvsp[-1].declptr);
                formals = pop_scope();
                procdecl->returndecl = formals->decl;
                procdecl->formals = formals->prev;
                push_scope();
                pushstelist(formals);

        }
#line 1514 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 144 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("func_decl->type_specifier pointers ID '(' VOID ')'");
                struct ste* formals;
                struct decl* procdecl = (yyvsp[-2].declptr);
                formals = pop_scope();
                procdecl->returndecl = formals->decl;
                procdecl->formals = formals->prev;
                push_scope();
                pushstelist(formals);
        }
#line 1529 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 154 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("func_decl->type_specifier pointers ID '(' param_list ')'");
                struct ste* formals;
                struct decl* procdecl = (yyvsp[-2].declptr);
                formals = pop_scope();
                procdecl->returndecl = formals->decl;
                procdecl->formals = formals->prev;
                push_scope();
                pushstelist(formals);
        }
#line 1544 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 167 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("open_func_param_scope -> epsilon");
                struct decl* procdecl = makeprocdecl();
                struct id* name = (yyvsp[(-1) - (0)].idptr);
                declare(name, procdecl);
                push_scope();
//              printf("returnid : %s\n", returnid->name);
                if((yyvsp[(-2) - (0)].intVal) == 1) {
                        declare(returnid, makevardecl(makeptrdecl(makevardecl((yyvsp[(-3) - (0)].declptr)))));
                }
                else {
                        declare(returnid, makevardecl((yyvsp[(-3) - (0)].declptr)));
                }
                (yyval.declptr) = procdecl;
        }
#line 1564 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 184 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("pointer->'*'");
                (yyval.intVal) = 1;
        }
#line 1573 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 188 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("pointer->epsilon");
                (yyval.intVal) = 0;
        }
#line 1582 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 195 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("param_list->param_decl");
        }
#line 1590 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 198 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("param_list->param_list ',' param_decl");
        }
#line 1598 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 203 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("param_decl-> type_specifier pointers ID");
                if((yyvsp[-1].intVal) == 1) {
                        declare((yyvsp[0].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[-2].declptr)))));
                }
                else {
                        declare((yyvsp[0].idptr), makevardecl((yyvsp[-2].declptr)));
                }
        }
#line 1612 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 212 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("param_decl->type_specifier pointers ID '[' const_expr ']'");
                if((yyvsp[-4].intVal) == 1){
                        declare((yyvsp[-3].idptr), makevardecl(makeptrdecl(makeconstdecl(makearraydecl((yyvsp[-1].intVal),makevardecl((yyvsp[-5].declptr)))))));
                } else{
                        declare((yyvsp[-3].idptr), makeconstdecl(makearraydecl((yyvsp[-1].intVal),makevardecl((yyvsp[-5].declptr)))));
                }
        }
#line 1625 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 221 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("def_list->def_list def");
        }
#line 1633 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 224 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("def_list->epsilon");
        }
#line 1641 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 228 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("def->type_specifier pointers ID ';'");
                if((yyvsp[-2].intVal) == 1) {
                        declare((yyvsp[-1].idptr), makevardecl(makeptrdecl(makevardecl((yyvsp[-3].declptr)))));
                }
                else {
                        declare((yyvsp[-1].idptr), makevardecl((yyvsp[-3].declptr)));
                }
        }
#line 1655 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 237 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("def->type_specifier pointers ID '[' const_expr ']' ;");
                if((yyvsp[-5].intVal) == 1){
                        declare((yyvsp[-4].idptr), makevardecl(makeptrdecl(makeconstdecl(makearraydecl((yyvsp[-2].intVal),makevardecl((yyvsp[-6].declptr)))))));
                } else{
                        declare((yyvsp[-4].idptr), makeconstdecl(makearraydecl((yyvsp[-2].intVal),makevardecl((yyvsp[-6].declptr)))));
                }
        }
#line 1668 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 245 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("def->type_specifer ;");
        }
#line 1676 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 248 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("def->type_specifer func_decl ;");
        }
#line 1684 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 252 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("compound_stmt->'{' local_defs stmt_list '}'");
        }
#line 1692 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 256 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("local_defs->def_list");
        }
#line 1700 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 260 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt_list->stmt_list stmt");
        }
#line 1708 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 263 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt_list->epsilon");
        }
#line 1716 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 267 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt->expr ';'");
        }
#line 1724 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 270 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt->compound_stmt");
        }
#line 1732 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 273 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt->RETURN ';'");
                struct decl* returndecl = findcurrentdecl(returnid);
                if(returndecl->type != voidtype){
                        printf("%s:%d:error: return type error (type mismatch)\n",read_filename(), read_line());
                        printf("%s:%d:error: \n",read_filename(), read_line());
                }
        }
#line 1745 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 281 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt->RETURN expr ';'");
                struct decl* returndecl = findcurrentdecl(returnid);
                if(!check_compatible(returndecl, (yyvsp[-1].declptr))){
                        printf("%s:%d:error: return type error (type mismatch)\n",read_filename(), read_line());
                }
        }
#line 1757 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 288 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt->';'");
        }
#line 1765 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 291 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt->IF '(' expr ')' stmt");
        }
#line 1773 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 294 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt->IF '(' expr ')' stmt ELSE stmt");
        }
#line 1781 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 297 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt->WHILE '(' expr ')' stmt");
        }
#line 1789 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 300 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt->FOR '(' expr_e ';' expr_e ';' expr_e ')' stmt");
        }
#line 1797 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 303 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt->BREAK ';'");
        }
#line 1805 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 306 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("stmt->CONTINUE ';'");
        }
#line 1813 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 310 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("expr_e->expr");
                (yyval.declptr) = (yyvsp[0].declptr);
        }
#line 1822 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 314 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("expr_e->epsilon");
                (yyval.declptr) = NULL;
        }
#line 1831 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 320 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("const_expr->expr");
                if(check_is_const((yyvsp[0].declptr)) && check_is_int((yyvsp[0].declptr))){
                        (yyval.intVal) = (yyvsp[0].declptr)->value;
                }
                else {
                        printf("%s:%d:error: index type error(index must be constInt)\n",read_filename(), read_line());
                        (yyval.intVal) = 0;
                }

        }
#line 1847 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 333 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("expr->expr '=' expr");
                (yyval.declptr) = assigndecl((yyvsp[-2].declptr), (yyvsp[0].declptr));
        }
#line 1856 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 337 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("expr->or_expr");
                (yyval.declptr) = (yyvsp[0].declptr);
        }
#line 1865 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 342 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("or_expr->or_list");
                (yyval.declptr) = (yyvsp[0].declptr);
        }
#line 1874 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 347 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("or_list->or_list LOGICAL_OR and_expr");
                (yyval.declptr) = logicalopdecl((yyvsp[-2].declptr),(yyvsp[0].declptr));
        }
#line 1883 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 351 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("or_list->and_expr");
                (yyval.declptr) = (yyvsp[0].declptr);
        }
#line 1892 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 356 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("and_expr->and_list");
                (yyval.declptr) = (yyvsp[0].declptr);
        }
#line 1901 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 361 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("and_list->and_list LOGICAL_AND binary");
                (yyval.declptr) = logicalopdecl((yyvsp[-2].declptr),(yyvsp[0].declptr));
        }
#line 1910 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 365 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("and_list->binary");
                (yyval.declptr) = (yyvsp[0].declptr);
        }
#line 1919 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 370 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("binary->binary RELOP binary");
                (yyval.declptr) = relopdecl((yyvsp[-2].declptr), (yyvsp[0].declptr));
        }
#line 1928 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 374 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("binary->binary EQUOP binary");
                (yyval.declptr) = equopdecl((yyvsp[-2].declptr), (yyvsp[0].declptr));
        }
#line 1937 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 378 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("binary->binary '+' binary");
                (yyval.declptr) = plusdecl((yyvsp[-2].declptr),(yyvsp[0].declptr));
        }
#line 1946 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 382 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("binary->binary '-' binary");
                (yyval.declptr) = minusdecl((yyvsp[-2].declptr),(yyvsp[0].declptr));
        }
#line 1955 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 386 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("binary->unary");
                (yyval.declptr) = (yyvsp[0].declptr);
        }
#line 1964 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 391 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->'(' expr ')'");
                (yyval.declptr) = (yyvsp[-1].declptr);
        }
#line 1973 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 395 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->'(' unary ')'");
                (yyval.declptr) = (yyvsp[-1].declptr);
        }
#line 1982 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 399 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->INTEGER_CONST");
                (yyval.declptr) = makenumconstdecl(inttype, (yyvsp[0].intVal));
        }
#line 1991 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 403 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->CHAR_CONST");
                (yyval.declptr) = makecharconstdecl(chartype, (yyvsp[0].stringVal));
        }
#line 2000 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 407 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->ID");
                (yyval.declptr) = findcurrentdecl((yyvsp[0].idptr));
        }
#line 2009 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 411 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->STRING");
                (yyval.declptr) = makestringconstdecl(chartype, (yyvsp[0].stringVal));
        }
#line 2018 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 415 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->'-' unary");
                if(check_is_int((yyvsp[0].declptr))) (yyval.declptr) = (yyvsp[0].declptr);
                else {
                        printf("%s:%d:error: illegal type for '-' unary op\n",read_filename(), read_line());
                        (yyval.declptr) = NULL;
                }
        }
#line 2031 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 423 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->'!' unary");
                if(check_is_int((yyvsp[0].declptr))) (yyval.declptr) = (yyvsp[0].declptr);
                else {
                        printf("%s:%d:error: illegal type for '!' unary op\n",read_filename(), read_line());
                        (yyval.declptr) = NULL;
                }
        }
#line 2044 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 431 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->unary INCOP");
                if(check_is_int((yyvsp[-1].declptr)) || check_is_char((yyvsp[-1].declptr)) || check_is_ptr((yyvsp[-1].declptr))) (yyval.declptr) = (yyvsp[-1].declptr);
                else {
                        printf("%s:%d:error: illegal type for postfixINCOP\n",read_filename(), read_line());
                        (yyval.declptr) =  NULL;
                }
        }
#line 2057 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 439 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->unary DECOP");
                if(check_is_int((yyvsp[-1].declptr)) || check_is_char((yyvsp[-1].declptr)) || check_is_ptr((yyvsp[-1].declptr))) (yyval.declptr) = (yyvsp[-1].declptr);
                else {
                        printf("%s:%d:error: illegal type for postfixDECOP\n",read_filename(), read_line());
                        (yyval.declptr) =  NULL;
                }
        }
#line 2070 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 447 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->INCOP unary");
                if(check_is_int((yyvsp[0].declptr)) || check_is_char((yyvsp[0].declptr)) || check_is_ptr((yyvsp[0].declptr))) (yyval.declptr) = (yyvsp[0].declptr);
                else {
                        printf("%s:%d:error: illegal type for prefixINCOP\n",read_filename(), read_line());
                        (yyval.declptr) =  NULL;
                }
        }
#line 2083 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 455 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->DECOP unary");
                if(check_is_int((yyvsp[0].declptr)) || check_is_char((yyvsp[0].declptr)) || check_is_ptr((yyvsp[0].declptr))) (yyval.declptr) = (yyvsp[0].declptr);
                else {
                        printf("%s:%d:error: illegal type for DECOP\n",read_filename(), read_line());

                        (yyval.declptr) = NULL;
                }
        }
#line 2097 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 464 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->'&' unary");
                (yyval.declptr) = referdecl((yyvsp[0].declptr));
        }
#line 2106 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 468 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->'*' unary");
                (yyval.declptr) = ptropdecl((yyvsp[0].declptr));
        }
#line 2115 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 472 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->unary '[' expr ']'");
                (yyval.declptr) = arrayaccess((yyvsp[-3].declptr), (yyvsp[-1].declptr));
        }
#line 2124 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 476 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary-> unary '.' ID");
                (yyval.declptr) = structaccess((yyvsp[-2].declptr), (yyvsp[0].idptr));
        }
#line 2133 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 480 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->unary STRUCTOP ID");
                (yyval.declptr) = STRUCTOPdecl((yyvsp[-2].declptr), (yyvsp[0].idptr));
        }
#line 2142 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 484 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->unary '(' args ')'");
                (yyval.declptr) = checkfunctioncall((yyvsp[-3].declptr),(yyvsp[-1].declptr));
        }
#line 2151 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 488 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("unary->unary '(' ')'");
                (yyval.declptr) = checkfunctioncall((yyvsp[-2].declptr), NULL);
        }
#line 2160 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 493 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("args->expr");
                (yyval.declptr) = makeconstdecl((yyvsp[0].declptr)->type);
        }
#line 2169 "subc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 497 "subc.y" /* yacc.c:1646  */
    {
                REDUCE("args->args ',' expr");
                struct decl* argsdecl = (yyvsp[-2].declptr);
                if(argsdecl == NULL || (yyvsp[0].declptr) == NULL) (yyval.declptr) = NULL;
                else{
                        struct decl* exprdecl = makeconstdecl((yyvsp[0].declptr)->type);

                        while(argsdecl->next != NULL){
                                argsdecl = argsdecl->next;
                        }
                        argsdecl->next = exprdecl;
                        (yyval.declptr) = (yyvsp[-2].declptr);
                }
        }
#line 2188 "subc.tab.c" /* yacc.c:1646  */
    break;


#line 2192 "subc.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 513 "subc.y" /* yacc.c:1906  */


/*  Additional C Codes 
        Implemnt REDUCE function here */

int    yyerror (char* s)
{
        fprintf (stderr, "%s\n", s);
}

void    REDUCE( char* s)
{
        //printf("%s\n",s);
}
