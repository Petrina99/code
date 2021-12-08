#include <stdio.h>

/* 10.  Omogućiti korisniku unos dimenzije matrice (2-D polja) realnih brojeva m × n, gdje je 2 ≤ m < 12 i 
4 < n ≤ 10 te potom popunjavanje matrice. Izračunati i na ekran ispisati aritmetičku sredinu svakog 
retka matrice pojedinačno. */

int main(void) {

  int m, n, i, j;

  float a[11][10], sv;

  printf("Odredite broj redova matrice [2, 12>: \n");

  do {
    scanf("%d", &m);
  } while (m < 2 || m >= 12);

  printf("Odredite broj stupaca matrice <4, 10]: \n");

  do {
    scanf("%d", &n);
  } while (n <= 4 || n > 10);

  printf("Ispunite matricu: \n");

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%f", &a[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    sv = 0;
    
    for (j = 0; j < n; j++) {
      sv += a[i][j];
    }

    sv /= n;

    printf("Aritmeticka sredina %d. reda iznosi %f\n", i + 1, sv);
  }

  return 0;
}