#include <stdio.h>

/*  Omogućiti korisniku unos vrijednosti elemenata u polje od 20 realnih brojeva. Pronaći i 
ispisati na ekran najmanju vrijednost. */

int main(void) {

  int i;
  float fp[20], min;

  for (i = 0; i < 20; i++) {
    printf("Unesite vrjednost %d elementa: ", i + 1);
    scanf("%f", &fp[i]);
  }

  min = fp[0];

  for (i = 1; i < 20; i++) {
    if (fp[i] < min) {
      min = fp[i];
    }
  }

  printf("Minimalna vrjednost je %.2f", min);

  return 0;
}