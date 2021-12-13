#include <stdio.h>

/* 4. Omogućiti korisniku unos 20 elemenata u polje realnih brojeva. Dodatno, omogućiti korisniku unos
dva realna broja (ponavljati unos sve dok brojevi nisu različiti). Ispisati na ekran one elemente polja
čija je vrijednost veća od manjeg te manja od većeg od unesenih dva broja. Koristiti pokazivačku
notaciju za pristup elementima polja. */

int main(void) {

  float a[20], b, c;

  int i, g = 0, h = 0;

  printf("Ispunite polje: \n");

  for (i = 0; i < 20; i++) {
    scanf("%f", a + i);
  }

  printf("Unesite dva razlicita realna broja: \n");

  do {
    scanf("%f %f", &b, &c);
  } while (b == c);

  float m = b > c ? c : b;
  float v = b > c ? b : c;

  printf("Brojevi veci od manjeg (%.2f): \n", m);
  for (i = 0; i < 20; i++) {
    if (*(a + i) > m) {
      printf("%.2f ", *(a + i));
    }
  }

  printf("\nBrojevi manji od veceg (%.2f): \n", v);
  for (i = 0; i < 20; i++) {
    if (*(a + i) < v) {
      printf("%.2f ", *(a + i));
    }
  }
  return 0;
}