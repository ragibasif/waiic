#include "lexer.h"

Lexer *New(char *input, size_t size) {
  Lexer *l;
  l->input = input;
  l->size = size;
  return l;
}

void readChar(Lexer *l) {
  if (l->readPosition >= l->size) {
    l->ch = 0;

  } else {
    l->ch = l->input[l->size];
  }
  l->position = l->readPosition;
  l->readPosition++;
}

Token *newToken(TokenType type, char *literal) {
  Token *t;
  t->type = type;
  t->literal = literal;
  return t;
}

Token *makeToken(TokenType type) {
  Token *token;
  switch (type) {
  case ILLEGAL:
    token = newToken(ILLEGAL, "ILLEGAL");
    break;
  case EOF:
    token = newToken(EOF, "EOF");
    break;
  case IDENT:
    token = newToken(IDENT, "IDENT");
    break;
  case INT:
    token = newToken(INT, "INT");
    break;
  case ASSIGN:
    token = newToken(ASSIGN, "=");
    break;
  case PLUS:
    token = newToken(PLUS, "+");
    break;
  case COMMA:
    token = newToken(COMMA, ",");
    break;
  case SEMICOLON:
    token = newToken(SEMICOLON, ";");
    break;
  case LPAREN:
    token = newToken(LPAREN, "(");
    break;
  case RPAREN:
    token = newToken(RPAREN, ")");
    break;
  case LBRACE:
    token = newToken(LBRACE, "{");
    break;
  case RBRACE:
    token = newToken(RBRACE, "}");
    break;
  case FUNCTION:
    token = newToken(FUNCTION, "FUNCTION");
    break;
  case LET:
    token = newToken(LET, "LET");
    break;
  default:
    return token; // Unreachable.
  }
  return token;
}

static void testNextToken() { char *input = "=+(){},;"; }
