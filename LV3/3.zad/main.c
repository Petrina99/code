#include <stdio.h>

/* 3. Inicijalizirati četiri varijable različitih tipova podataka. Ispisati im vrijednosti na ekran i koliko bajta 
memorije zauzimaju.*/

int main(void) {

  int a = 5;
  char b = 'B';
  double c = 20.34;
  float d = 20.34;

  printf("Integer: %d, memorija: %lu bajta.\n", a, sizeof(a));
  printf("Char: %c, memorija: %lu bajta.\n", b, sizeof(b));
  printf("Double: %lf, memorija: %lu bajta.\n", c, sizeof(c));
  printf("Float: %f, memorija: %lu bajta.\n", d, sizeof(d));

  return 0;
}