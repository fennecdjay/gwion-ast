#ifndef __SCANNER
#define __SCANNER

typedef struct Scanner_ {
  void* scanner;
  Ast ast;
  SymTable *st;
  struct PP_* pp;
  struct PPArg_ *ppa;
  uint line;
  uint pos;
} Scanner;

#endif
