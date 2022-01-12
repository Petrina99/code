/* 1. Deklarirati polje od 1000 cijelih brojeva i popuniti ga pseudo-slučajnim brojevima iz [0, 10] iz Z.
Potom izračunati i na ekran ispisati srednju vrijednost elemenata tog polja. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  int a[1000], i, sv = 0;

  srand((unsigned) time(NULL));

  for (i = 0; i < 1000; i++) {
    a[i] = rand() % 11; 
    sv += a[i];
  }

  sv /= 1000;

  printf("Srednja vrijednost polja: %d", sv);

  return 0;
}