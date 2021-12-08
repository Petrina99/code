/*  Omogućiti korisniku unos dimenzija matrice realnih brojeva m x n (0 < m < 11 i 0 < n ≤ 5) i 
njeno popunjavanje. Izračunati i ispisati na ekran zbroj elemenata svakog stupca zasebno */

#include <stdio.h>

int main(void) {

  int m, n, i, j;

  float a[10][5], zbroj;

  printf("Unesite broj redaka matrice u intervalu <0, 11>: \n");

  do {
    scanf("%d", &m);

  } while (m < 1 || m > 10);

  printf("Unesite broj stupaca matrice u intervalu <0, 5]: \n");

  do {
    scanf("%d", &n);

  } while (n < 1 || n > 5);

  printf("Popunite matricu brojevima: \n");

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%f", &a[i][j]);
    }
  }

  for (i = 0; i < n; i++) {
    zbroj = 0;

    for (j = 0; j < m; j++) {
      zbroj += a[j][i];
    }

    printf("Zbroj %d. stupca je %.2f.\n", i + 1, zbroj);
  }

  return 0;
}