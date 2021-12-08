/* Omogućiti korisniku unos dimenzija matrice realnih brojeva m x n (2 ≤ m < 16 i 3 < n ≤ 8) i 
njeno popunjavanje. Izračunati i ispisati na ekran produkt elemenata svakog retka zasebno. */

#include <stdio.h>


int main(void) {

  int i, j, m, n;

  float a[15][8], produkt;

  do {
    scanf("%d", &m);
  } while (m < 2 || m >= 16);

  do {
    scanf("%d", &n);
  } while (n <= 3 || n > 8);

  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      scanf("%f", &a[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    produkt = 1;

    for (j = 0; j < n; j++) {
      produkt *= a[i][j];
    }

    printf("Produkt %d. rekta iznosi %.2f\n", i + 1, produkt);
  }


  return 0;
}