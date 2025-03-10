/*lexer.h*/
#ifndef __LEXER_H__
#define __LEXER_H__
#include <stdlib.h>

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

#endif // __LEXER_H__
