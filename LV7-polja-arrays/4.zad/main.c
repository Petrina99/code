/* Omogućiti korisniku unos q (4 < q ≤ 12) vrijednosti elemenata u polje realnih brojeva. Podijeliti 
vrijednost  svakog elementa  polja koji  ima  neparni  indeks  s  vrijednosti  2  te  nakon  toga  na ekran 
ispisati polje. */

#include <stdio.h>

int main(void) {

  int q, i;
  float a[12];

  do {
    printf("Unesite broj q iz intervala 4 < q <= 12: \n");
    scanf("%d", &q);
  } while(q <= 4 || q > 12);

  printf("Unesite %d realnih brojeva: \n", q);

  for (i = 0; i < q; i++) {
    scanf("%f", &a[i]);
  }

  // trazenje neparnog indeksa i djeljenje vrjednosti na tom indeksu sa 2
  for (i = 0; i < q; i++) {
    if (i % 2 != 0) {
      a[i] /= 2;
    }
  }

  for (i = 0; i < q; i++) {
    printf("%f ", a[i]);
  }

  return 0;
}