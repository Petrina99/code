#include <stdio.h>
#define VEL_POLJA 50
/* Omogućiti korisniku unos n (0 < n ≤ 50) vrijednosti elemenata u polje realnih brojeva. Pronaći 
i ispisati na ekran najveću vrijednost.*/

int main(void) {

  int i, n;
  float max, fp[VEL_POLJA];

  printf("Unesite zeljeni broj elemenata: \n");

  do {
    scanf("%d", &n);
  } while (n < 1 || n >= 50);

  for (i = 0; i < n; i++) {
    printf("Vrijednost elementa broj %d: ", i + 1);
    scanf("%f", &fp[i]);
  }

  max = fp[0];

  for (i = 1; i < n; i++) {
    if (fp[i] > max) {
      max = fp[i];
    }
  }

  printf("Najveca vrijednost %.2f", max);
  return 0;
}