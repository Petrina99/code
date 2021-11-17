/* 6. Omogućiti korisniku unos n (2 < n ≤ 13) vrijednosti elemenata u polje realnih brojeva. Izračunati 
aritmetičku sredinu svih pozitivnih elemenata polja. Pronaći elemente manje od aritmetičke 
sredine i zamijeniti ih s izračunatom aritmetičkom sredinom. Potom na ekran ispisati izmijenjeno 
polje */

#include <stdio.h>

int main(void) {

  int n, i;
  float a[13], sv = 0;

  do {
    printf("Unesite broj n iz intervala 2 < n <= 13: \n");
    scanf("%d", &n);
  } while (n <= 2 || n > 13);
  
  printf("Unesite %d realnih brojeva: \n", n);

  // unos vrijednosti polja i racunanje aritm sredine pozitivnih elemenata 
  for (i = 0; i < n; i++) {
    scanf("%f", &a[i]);

    if (a[i] > 0) {
      sv += a[i];
    }
  }

  sv /= n;

  // zamjena negativnih vrjednosti sa aritm sredinom
  for (i = 0; i < n; i++) {
    if (a[i] < sv) {
      a[i] = sv;
    }
  }

  for (i = 0; i < n; i++) {
    printf("%f ", a[i]);
  }

  return 0;
}