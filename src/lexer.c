#include "lexer.h"
#include "token.h"

static void testNextToken() { char *input = "=+(){},;"; }

Lexer *New(char *input, size_t size) {
  /*FIX: potential memory leak? Should the caller handle the memory of callee?*/
  lexer->input = input;
  lexer->size = size;
  return lexer;
}

void readChar() {
  if (lexer->readPosition >= lexer->size) {
    lexer->ch = 0;

  } else {
    lexer->ch = lexer->input[lexer->size];
  }
  lexer->position = lexer->readPosition;
  lexer->readPosition++;
}
