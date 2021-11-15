#include <stdio.h>

/*   9. Omogućiti korisniku unos q (5  < q ≤ 12)  vrijednosti  elemenata  u  polje  realnih  brojeva.  Podijeliti 
vrijednosti svakog elementa polja koji ima parni indeks s vrijednosti 10, a koji ima neparni indeks s 
vrijednosti -10. Potom na ekran ispisati izmijenjeno polje. */

int main(void) {

  int q, i;
  float a[12];

  do {
    printf("Unesite broj q iz intervala <5,12]: \n");
    scanf("%d", &q);
  } while (q <= 5 || q > 12);

  printf("Unesite %d realnih brojeva: ", q);

  for (i = 0; i < q; i++) {
    scanf("%f", &a[i]);
  }

  for (i = 0; i < q; i++) {
    if (i % 2 == 0) {
      a[i] /= 10;
    }
    else {
      a[i] /= -10;
    }
  }

  for (i = 0; i < q; i++) {
    printf("%f ", a[i]);
  }

  return 0;
}