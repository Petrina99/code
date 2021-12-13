#include <stdio.h>

/* 5. Omogućiti korisniku unos 3 ≤ m < 17 elemenata u polje cijelih brojeva. Odrediti i na ekran ispisati
sve parne elemente djeljive s tri. Koristiti pokazivačku notaciju za pristup elementima polja. */

int main(void) {

  int a[16], m, i;

  printf("Unesite m [3, 17>: \n");

  do {
    scanf("%d", &m);
  } while (m < 3 || m >= 17);

  printf("Ispunite polje: \n");

  for (i = 0; i < m; i++) {
    scanf("%d", a + i);
  }

  for (i = 0; i < m; i++) {
    if (*(a + i) % 2 == 0 && *(a + i) % 3 == 0) {
      printf("%d ", *(a + i));
    }
  }

  return 0;
}