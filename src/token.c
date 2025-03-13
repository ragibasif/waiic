#include "waiic.h"

/*token*/

static Token *newToken(TokenType type, char *literal) {
  Token *token;
  token->type = type;
  token->literal = literal;
  return token;
}

Token *makeToken(TokenType type) {
  Token *token;
  switch (type) {
  case TOKEN_ILLEGAL:
    token = newToken(TOKEN_ILLEGAL, "ILLEGAL");
    break;
  case TOKEN_EOF:
    token = newToken(TOKEN_EOF, "EOF");
    break;
  case TOKEN_IDENT:
    token = newToken(TOKEN_IDENT, "IDENT");
    break;
  case TOKEN_INT:
    token = newToken(TOKEN_INT, "INT");
    break;
  case TOKEN_ASSIGN:
    token = newToken(TOKEN_ASSIGN, "=");
    break;
  case TOKEN_PLUS:
    token = newToken(TOKEN_PLUS, "+");
    break;
  case TOKEN_COMMA:
    token = newToken(TOKEN_COMMA, ",");
    break;
  case TOKEN_SEMICOLON:
    token = newToken(TOKEN_SEMICOLON, ";");
    break;
  case TOKEN_LPAREN:
    token = newToken(TOKEN_LPAREN, "(");
    break;
  case TOKEN_RPAREN:
    token = newToken(TOKEN_RPAREN, ")");
    break;
  case TOKEN_LBRACE:
    token = newToken(TOKEN_LBRACE, "{");
    break;
  case TOKEN_RBRACE:
    token = newToken(TOKEN_RBRACE, "}");
    break;
  case TOKEN_FUNCTION:
    token = newToken(TOKEN_FUNCTION, "FUNCTION");
    break;
  case TOKEN_LET:
    token = newToken(TOKEN_LET, "LET");
    break;
  default:
    return token; // Unreachable.
  }
  return token;
}

/*lexer*/

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
