#include <stdio.h>

/* 2. Omogućiti korisniku unos dva znaka. Ispisati ih potom na ekran i njihove ASCII vrijednosti u oktalnom 
i heksadecimalnom brojevnom sustavu. */

int main(void) {

  char znak1;
  char znak2;

  printf("Unesite bilo koji znak: ");
  scanf(" %c", &znak1);

  printf("Unesite bilo koji znak: ");
  scanf(" %c", &znak2);

  printf("ASCII vrjednost prvok znaka je %d, OKT: %o, HEX: %x\n", znak1, znak1, znak1);

  printf("ASCII vrjednost drugog znaka je %d, OKT: %o, HEX: %x\n", znak2, znak2, znak2);

  return 0;
}