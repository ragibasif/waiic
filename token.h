/*token.h*/
#ifndef __TOKEN_H__
#define __TOKEN_H__

#define ILLEGAL "ILLEGAL"
#define EOF "EOF"
#define IDENT "IDENT" // add, foobar, x, y, ...
#define INT "INT"     // 1343456
#define ASSIGN "="
#define PLUS "+"
#define COMMA ","
#define SEMICOLON ";"
#define LPAREN "("
#define RPAREN ")"
#define LBRACE "{"
#define RBRACE "}"
#define FUNCTION "FUNCTION"
#define LET "LET"

typedef struct {
  char *type;
  char *literal;
} Token;

#endif // __TOKEN_H__
