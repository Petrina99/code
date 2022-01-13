/* 7. Napisati funkciju koja generira i vraća cijeli broj iz [a, b] koji je paran. U svrhu testiranja u funkciji
main() pozvati napisanu funkciju 100 puta s -1355 i 2797 kao argumentima te svaki put na ekran
ispisati povratnu vrijednost. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vratiBroj (int a, int b);

int main(void) {

  int rez, i;

  for (i = 0; i < 100; i++) {
    rez = vratiBroj(-1355, 2797);
    printf("%d ", rez);
  }
  
  return 0;
}

int vratiBroj (int a, int b) {

  int rez;

  do {
    rez = a + (float) rand() / RAND_MAX * (b - a);
  } while (rez % 2 != 0);

  return rez;
}