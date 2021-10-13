#include <stdio.h>

/* Omogućiti korisniku unos cijelog broja koji predstavlja njegovu visinu u centimetrima te još jednog 
cijelog broja koji predstavlja njegovu masu u kilogramima. Potom ispisati poruku "Vasa visina je x, 
a masa y.", gdje su x i y unesena vrijednost za visinu, odnosno masu. */

int main(void) {

  int x;
  int y;

  printf("Unesite svoju visinu u centimetrima (cjeli broj):\n");
  scanf("%d", &x);

  printf("Unesite svoju masu u kilogramima (cijeli broj):\n");
  scanf("%d", &y);

  printf("Vaša visina je %d cm, a masa %d kg.", x, y);

  return 0;
}