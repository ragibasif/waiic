/*lexer.h*/
#ifndef __LEXER_H__
#define __LEXER_H__

/*lexical analysis (lexing) - turning source code into tokens*/

#define MAX_INPUT 255
typedef struct {
  char input[MAX_INPUT];
  int position;     // current position in input (points to current char)
  int readPosition; // current reading position in input (after current char)
  char ch;          // current char under examination
} Lexer;

Lexer *lexer; // make the lexer a global variable

Lexer *New(char *input);

void readChar();

#endif // __LEXER_H__
