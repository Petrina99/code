/* 8.  Omogućiti korisniku unos jednog znaka te ako je unešeni znak samoglasnik ispisati koji je po redu 
(od samoglasnika) i ispisati njegovu ASCII vrijednost. Ako unešeni znak nije samoglasnik ispisati 
odgovarajuću poruku. */

#include <stdio.h>

int main(void) {

  char a;

  printf("Unesite neko slovo: \n");
  scanf(" %c", &a);

  switch(a) {
    case 'A':
      printf("Unijeli ste 1. samoglasnik po redu. ASCII vrijednost: %d", a);
      break;
    case 'a':
      printf("Unijeli ste 1. samoglasnik po redu. ASCII vrijednost: %d", a);
      break;
    case 'E':
      printf("Unijeli ste 2. samoglasik po redu. ASCII vrijednost: %d", a);
      break;
    case 'e':
      printf("Unijeli ste 2. samoglasik po redu. ASCII vrijednost: %d", a);
      break;
    case 'I':
      printf("Unijeli ste 3. samoglasik po redu. ASCII vrijednost: %d", a);
      break;
    case 'i':
      printf("Unijeli ste 3. samoglasik po redu. ASCII vrijednost: %d", a);
      break;
    case 'O':
      printf("Unijeli ste 4. samoglasik po redu. ASCII vrijednost: %d", a);
      break;
    case 'o':
      printf("Unijeli ste 4. samoglasik po redu. ASCII vrijednost: %d", a);
      break;
    case 'U':
      printf("Unijeli ste 3. samoglasik po redu. ASCII vrijednost: %d", a);
      break;
    case 'u':
      printf("Unijeli ste 3. samoglasik po redu. ASCII vrijednost: %d", a);
      break;
    default:
      printf("Niste unijeli samoglasnik");
  }

  return 0;
}