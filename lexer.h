/*lexer.h*/
#ifndef __LEXER_H__
#define __LEXER_H__

/*lexical analysis (lexing) - turning source code into tokens*/

typedef struct {
  char *input;
  int position;
  int readPosition;
  char ch;
} Lexer;

Lexer *New(char *input) {
  Lexer *lexer;
  lexer->input = input;
  return lexer;
}

#endif // __LEXER_H__
