/*waiic.h*/
#ifndef __WAIIC_H__
#define __WAIIC_H__
#include <stdlib.h>

/*token*/

/*#define ILLEGAL "ILLEGAL"*/
/*#define EOF "EOF"*/
/*#define IDENT "IDENT" // add, foobar, x, y, ...*/
/*#define INT "INT"     // 1343456*/
/*#define ASSIGN "="*/
/*#define PLUS "+"*/
/*#define COMMA ","*/
/*#define SEMICOLON ";"*/
/*#define LPAREN "("*/
/*#define RPAREN ")"*/
/*#define LBRACE "{"*/
/*#define RBRACE "}"*/
/*#define FUNCTION "FUNCTION"*/
/*#define LET "LET"*/

typedef enum {
  TOKEN_ILLEGAL,
  TOKEN_EOF,
  TOKEN_IDENT,
  TOKEN_INT,
  TOKEN_ASSIGN,
  TOKEN_PLUS,
  TOKEN_COMMA,
  TOKEN_SEMICOLON,
  TOKEN_LPAREN,
  TOKEN_RPAREN,
  TOKEN_LBRACE,
  TOKEN_RBRACE,
  TOKEN_FUNCTION,
  TOKEN_LET,
} TokenType;

typedef struct {
  TokenType type;
  char *literal;
} Token;

/*Token *newToken(TokenType type, char *literal);*/
/*Token *makeToken(TokenType type);*/

/*lexer*/

/*lexical analysis (lexing) - turning source code into tokens*/

typedef struct {
  char *input;      // input string
  size_t size;      // size of the input string
  int position;     // current position in input (points to current char)
  int readPosition; // current reading position in input (after current char)
  char ch;          // current char under examination
} Lexer;

Lexer *lexer; // make the lexer a global variable

Lexer *New(char *input, size_t size);

void readChar();
#endif // __WAIIC_H__
