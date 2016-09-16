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
    IF = 262,
    READ = 263,
    ELSE = 264,
    THEN = 265,
    GT = 266,
    EQ = 267,
    WHILE = 268,
    OUTPUT = 269,
    GTE = 270,
    NOT = 271,
    DO = 272,
    BEGINX = 273,
    BOOLEAN = 274,
    INTEGER_NUM = 275,
    AND = 276,
    INTEGER = 277,
    LTE = 278,
    OR = 279,
    LT = 280,
    ASSIGNMENT = 281,
    PROGRAM = 282
  };
#endif
/* Tokens.  */
#define NEQ 258
#define END 259
#define VAR 260
#define IDENTIFIER 261
#define IF 262
#define READ 263
#define ELSE 264
#define THEN 265
#define GT 266
#define EQ 267
#define WHILE 268
#define OUTPUT 269
#define GTE 270
#define NOT 271
#define DO 272
#define BEGINX 273
#define BOOLEAN 274
#define INTEGER_NUM 275
#define AND 276
#define INTEGER 277
#define LTE 278
#define OR 279
#define LT 280
#define ASSIGNMENT 281
#define PROGRAM 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "code.y" /* yacc.c:1909  */

   TOKEN_INFO info;
   DLIST dlist;

#line 113 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
