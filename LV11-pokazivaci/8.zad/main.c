#include <stdio.h>

/* 8. Omogućiti korisniku unos 5 < n <= 20 elemenata u polje realnih brojeva. Zamijeniti mjesta
elementima prve polovice polja s drugom polovicom i to na način da se zamjena napravi prvog i
zadnjeg elementa, zatim drugo i predzadnje i tako do polovice polja koristeći pokazivačku notaciju.
Ispisati izmijenjeno polje u glavnom dijelu programa. */

int main(void) {

  int n, i, m;

  float a[20], priv[20];

  printf("Unesite n <5, 20]: \n");

  do {
    scanf("%d", &n);
  } while (n <= 5 || n > 20);

  printf("Popunite polje realnih br: \n");

  for (i = 0; i < n; i++) {
    scanf("%f", a + i);
  }

  m = n - 1;

  for (i = 0; i < n; i++) {
    *(priv + m) = *(a + i);
    m--;
  }

  for (i = 0; i < n; i++) {
    *(a + i) = *(priv + i);
  }

  for (i = 0; i < n; i++) {
    printf("%.2f ", *(a + i));
  }

  return 0;
}