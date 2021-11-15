/* 3.  Omogućiti korisniku unos cijelog broja koji predstavlja dan u tjednu. Potrebno je ispisati riječima 
dan u tjednu u ovisnosti o unesenom broju. U slučaju da je unesen cijeli broj koji ne predstavlja dan 
u tjednu potrebno je ispisati poruku o pogrešnom unosu. Koristiti switch-case.*/

#include <stdio.h>

int main(void) {

  int a;

  printf("Unesite jedan cijeli broj od 1 do 7: \n");
  scanf("%d", &a);

  switch(a) {
    case 1:
      printf("Ponedjeljak.");
      break;
    case 2:
      printf("Utorak");
      break;
    case 3:
      printf("Srijeda");
      break;
    case 4:
      printf("Cetvrtak");
      break;
    case 5:
      printf("Petak");
      break;
    case 6:
      printf("Subota");
      break;
    case 7:
      printf("Nedjelja");
      break;
    default:
      printf("Broj koji ste unjeli ne predstavlja niti jedan dan u tjednu.");
  }

  return 0;
}