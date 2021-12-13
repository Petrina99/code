/* 2. Deklarirati i inicijalizirati cjelobrojnu varijablu te pokazivač na nju. Ispisati joj vrijednost i adresu.
Uvećati joj vrijednost za 10 preko pokazivača te joj ponovo ispisati vrijednost i adresu*/

#include <stdio.h>

int main(void) {

  int a = 10;

  int *p = &a;

  // mozemo napisati i Vrijednost: %d, adresa: %p", *p, p
  printf("Vrijednost: %d, adresa: %p", a, p);

  *p += 10;

  printf("\nVrijednost: %d, adresa: %p", a, p);

  return 0;
}