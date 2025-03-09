#include "lexer.h"

Lexer *New(char *input) {
  lexer->input = input;
  return lexer;
}

void readChar() {
  if (lexer->readPosition >= lexer->input)
    ;
}
