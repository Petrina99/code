/* 7. Omogućiti  korisniku  unos  n  (2  <  n  <  13)  vrijednosti elemenata u polje realnih brojeva. Pronaći 
najmanju i najveću vrijednost u polju i zamijeniti njihova mjesta u polju. Potom na ekran ispisati 
izmijenjeno polje. */

#include <stdio.h>

int main(void) {

  int n, i, m, b;
  float a[13], sv = 0, min, max;

  do {
    printf("Unesite broj n iz intervala 2 < n < 13: \n");
    scanf("%d", &n);
  } while (n <= 2 || n >= 13);

  printf("Unesite %d realnih brojeva: \n", n);

  // punjenje polja brojevima
  for (i = 0; i < n; i++) {
    scanf("%f", &a[i]);
  }

  // max pocento stavljamo da ima vrijednoost prvog elementa polja
  max = a[0];
  
  // u m varijablu spremamo indeks od najveceg broja, max varijabla - spremamo najveci broj
  for (i = 0; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
      m = i;
    }
  }

  // isto kao max
  min = a[0];

  // isto kao gore samo sto u b stavlamo indeks najmanjeg broja, min najmanji broj
  for (i = 0; i < n; i++) {
    if (a[i] < min) {
      min = a[i];
      b = i;
    }
  }

  // zamjenimo im mjesta
  a[m] = min;
  a[b] = max;

  for (i = 0; i < n; i++) {
    printf("%.2f ", a[i]);
  }

  return 0;
}