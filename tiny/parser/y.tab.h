/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    NEQ = 258,
    END = 259,
    VAR = 260,
    IDENTIFIER = 261,
    BOOLEAN_FALSE = 262,
    IF = 263,
    READ = 264,
    ELSE = 265,
    BOOLEAN_TRUE = 266,
    THEN = 267,
    MOD = 268,
    GT = 269,
    EQ = 270,
    WHILE = 271,
    OUTPUT = 272,
    GTE = 273,
    NOT = 274,
    DO = 275,
    BEGINX = 276,
    BOOLEAN = 277,
    INTEGER_NUM = 278,
    AND = 279,
    INTEGER = 280,
    EXP = 281,
    LTE = 282,
    OR = 283,
    LT = 284,
    ASSIGNMENT = 285,
    PROGRAM = 286
  };
#endif
/* Tokens.  */
#define NEQ 258
#define END 259
#define VAR 260
#define IDENTIFIER 261
#define BOOLEAN_FALSE 262
#define IF 263
#define READ 264
#define ELSE 265
#define BOOLEAN_TRUE 266
#define THEN 267
#define MOD 268
#define GT 269
#define EQ 270
#define WHILE 271
#define OUTPUT 272
#define GTE 273
#define NOT 274
#define DO 275
#define BEGINX 276
#define BOOLEAN 277
#define INTEGER_NUM 278
#define AND 279
#define INTEGER 280
#define EXP 281
#define LTE 282
#define OR 283
#define LT 284
#define ASSIGNMENT 285
#define PROGRAM 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "code.y" /* yacc.c:1909  */

   TOKEN_INFO info;
   DLIST dlist;

#line 121 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
