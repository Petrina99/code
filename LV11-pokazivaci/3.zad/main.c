/* 3. Omogućiti korisniku unos m (4 < m < 21) elemenata u polje cijelih brojeva. Odrediti i na ekran
ispisati element s najvećom i element s najmanjom vrijednosti. Koristiti pokazivačku notaciju za
pristup elementima polja. */

#include <stdio.h>

int main(void) {

  int a[20], m, i, min, max;

  printf("Unesite m iz intervala <4,21>: \n");

  do {
    scanf("%d", &m);
  } while (m <= 4 || m >= 21);

  printf("Popunite polje: \n");

  for (i = 0; i < m; i++) {
    scanf("%d", a + i);
  }

  min = a[0];
  max = a[0];

  for (i = 0; i < m; i++) {
    if (*(a + i) < min) {
      min = *(a + i);
    }
    if (*(a + i) > max) {
      max = *(a + i);
    }
  }

  printf("Min: %d, max: %d", min, max);

  return 0;
} 