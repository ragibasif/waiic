/*token.h*/
#ifndef __TOKEN_H__
#define __TOKEN_H__

typedef enum {
  ILLEGAL,
  EOF,
  IDENT,
  INT,
  ASSIGN,
  PLUS,
  COMMA,
  SEMICOLON,
  LPAREN,
  RPAREN,
  LBRACE,
  RBRACE,
  FUNCTION,
  LET,
} TokenType;

typedef struct {
  TokenType type;
  char *literal;
} Token;

#endif // __TOKEN_H__
