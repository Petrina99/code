/*  Omogućiti korisniku unos dimenzija matrica realnih brojeva, Amxn i Bnxp, (0 <m < 11, 0 < n ≤ 
10 i 0 < p < 11) i njihovo popunjavanje. Izračunati i ispisati na ekran produkt matrica A i B. */

#include <stdio.h>

int main(void) {

  int m, n, p, i, j, k;

  float a[10][10];
  float b[10][10];

  // c nam je rezultat mnozenja matrica a i b i ona ima dimenzije m x p
  float c[10][10];

  printf("Unesite broj m <0, 11>: \n");

  do {
    scanf("%d", &m);
  } while (m <= 0 || m >= 11);

  printf("Unesite broj n <0, 10]: \n");
  
  do {
    scanf("%d", &n);
  } while (n <= 0 || n > 10);

  printf("Unesite broj p <0, 11>: \n");

  do {
    scanf("%d", &p);
  } while (p <= 0 || p >= 12);
  
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%f", &a[i][j]);
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      scanf("%f", &b[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < p; j++) {
      c[i][j] = 0;

      for (k = 0; k < n; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }

      printf("%f", c[i][j]);
    }

    printf("\n");
  }
  
  return 0;
}