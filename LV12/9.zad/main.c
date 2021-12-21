#include <stdio.h>

/* 9. Deklarirati i inicijalizirati cjelobrojnu varijablu. Ispisati joj vrijednost i memorijsku adresu. Napisati
funkciju kojoj se predaje ta varijabla te pomoću funkcije promijeniti joj vrijednost tako da se
udvostruči. Nakon funkcije ispisati joj vrijednost i memorijsku adresu. */

void udvostruci (int *a);

int main(void) {

  int a = 6;

  printf("Vrijednost: %d, memorijska adresa: %p", a, &a);

  udvostruci(&a);

  printf("\nVrijednost: %d, memorijska adresa: %p", a, &a);
  return 0;
}

void udvostruci (int *a) {

  *a *= 2;

}

