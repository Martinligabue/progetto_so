#include <stdio.h>
struct Esempio{
  int a;
  float b;
  char c;
  char *d;
};

int main(int argc, char const *argv[]) {
  struct Esempio x;
  struct Esempio *p;
  p=&x;
  (*p).a=12;
  printf("Valore di x.a: %s\n", x.a);
  x.c='z';
  printf("Valore di x.c: %s\n", x.c);
  x.a=100;
  printf("Valore di x.a: %s\n", x.a);
  (*p).a=300;
  printf("Valore di x.a: %s\n", x.a);
  (*p).c='s'';
  printf("Valore di x.c: %s\n", x.c);
  x.d=&(x.c);
  printf("Valore puntato da x.d: %s\n", *(x.d));
  return 0;
}
