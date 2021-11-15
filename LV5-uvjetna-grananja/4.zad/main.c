/* 4.  Omogućiti korisniku unos cijelog broja koji predstavlja dan u tjednu. Potrebno je ispisati riječima 
dan u tjednu u ovisnosti o unesenom broju. U slučaju da je unesen cijeli broj koji ne predstavlja dan 
u tjednu potrebno je ispisati poruku o pogrešnom unosu. Koristiti višestruki if-else. */

#include <stdio.h>


int main(void) {

  int a;

  printf("Unesite jedan cijeli broj od 1 do 7: \n");
  scanf("%d", &a);

  if (a == 1) {
    printf("Ponedjeljak");
  }
  else if (a == 2) {
    printf("Utorak");
  }
  else if (a == 3) {
    printf("Srijeda");
  }
  else if (a == 4) {
    printf("Cetvrtak");
  }
  else if (a == 5) {
    printf("Petak");
  }
  else if (a == 6) {
    printf("Subota");
  }
  else if (a == 7) {
    printf("Nedjelja");
  }
  else {
    printf("Broj koji ste unjeli ne predstavlja niti jedan dan u tjednu.");
  }

  return 0;
}