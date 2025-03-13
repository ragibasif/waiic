/*lexer.h*/
#ifndef __LEXER_H__
#define __LEXER_H__
#include "token.h"
#include <stdlib.h> // size_t

typedef struct {
  char *input;      // input string
  size_t size;      // size of the input string
  int position;     // current position in input (points to current char)
  int readPosition; // current reading position in input (after current char)
  char ch;          // current char under examination
} Lexer;

Lexer *New(char *input, size_t size);

void readChar(Lexer *l);

Token *newToken(TokenType type, char *literal);

Token *makeToken(TokenType type);

#endif // __LEXER_H__
