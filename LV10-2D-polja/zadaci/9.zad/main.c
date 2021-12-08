#include <stdio.h>

/* 9. Omogućiti korisniku unos dimenzije matrice (2-D polja) realnih brojeva m × n, gdje je 3 ≤ m < 13 i 
2 ≤ n < 15 te potom popunjavanje matrice. Izračunati i na ekran ispisati aritmetičku sredinu svakog 
stupca matrice pojedinačno. */

int main(void) {

  int m, n, i, j;

  float a[12][14], b[12][14], sv;

  printf("Unesite broj redova matrice [3, 13>: \n");

  do {
    scanf("%d", &m);
  } while (m < 3 || m >= 13);

  printf("Unesite broj stupaca matrice [2, 15>: \n");

  do {
    scanf("%d", &n);
  } while (n < 2 || n >= 15);

  printf("Popunite prvu matricu: \n");

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%f", &a[i][j]);
    }
  }

  printf("Popunite drugu matricu: \n");
  
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%f", &b[i][j]);
    }
  }

  for (i = 0; i < n; i++) {
    sv = 0;

    for (j = 0; j < m; j++) {
      sv += a[j][i];
    }

    sv = sv / m;

    printf("Aritmeticka sredina %d. stupca 1. matrice iznosi %f\n", i + 1, sv);
  }

  for (i = 0; i < n; i++) {
    sv = 0;

    for (j = 0; j < m; j++) {
      sv += b[j][i];
    }

    sv = sv / m;

    printf("Aritmeticka sredina %d. stupca 2. matrice iznosi %f\n", i + 1, sv);
  }
  return 0;
}