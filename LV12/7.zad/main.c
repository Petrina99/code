#include <stdio.h>
#include <string.h>

/* 7. Napisati funkciju koja vraća vrijednost -1 ukoliko predani joj string sadrži više malih slova u odnosu
na velika, a u suprotno vraća vrijednost 1. Ukoliko string ne sadrži niti jedno slovo, funkcija vraća
0. U svrhu testiranja u funkciji main() omogućiti korisniku unos stringa od maksimalno 80 znakova
u prethodno deklarirano polje odgovarajuće veličine. Iskoristite navedeni string u pozivu napisane
funkcije i na ekran ispisati povratnu vrijednost. Koristiti pokazivačku notaciju. */

int pregledStringa (char *a, int n);

int main(void) {

  int i, n;

  char a[81];

  printf("Unesite string: \n");

  fgets(a, 81, stdin);

  n = strlen(a) - 1;

  printf("%d", pregledStringa(a, n));


  return 0;
}

int pregledStringa (char *a, int n) {

  int ms = 0, vs = 0, i;

  for (i = 0; i < n; i++) {
    if (*(a + i) >= 'A' && *(a + i) <= 'Z') {
      vs++;
    }
    if (*(a + i) >= 'a' && *(a + i) <= 'z') {
      ms++;
    }
  }

  if (ms > vs) {
    return -1;
  }
  if(vs > ms) {
    return 1;
  }
  if (ms == 0 && vs == 0) {
    return 0;
  }
}