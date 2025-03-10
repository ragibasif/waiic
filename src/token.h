/*token.h*/
#ifndef __TOKEN_H__
#define __TOKEN_H__

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

#endif // __TOKEN_H__
