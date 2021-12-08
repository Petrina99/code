#include <stdio.h>

/* 5. Omogućiti korisniku unos dimenzije kvadratne matrice (2-D polja) realnih brojeva m × m, gdje je 3 
≤ m < 9. Potom omogućiti mu popunjavanje te matrice. Također omogućiti korisniku unos realnog 
broj 0 < x ≤ 1. Pomnožiti elemente sporedne dijagonale matrice s x te potom prepisati elemente 
glavne dijagonale s njima. Ispisati matricu na ekran. */

int main(void) {

  int m, i, j;

  float a[8][8], b[8], x;

  printf("Unesite dimenzije kvadratne matrice [3, 9>: \n");

  do {
    scanf("%d", &m);
  } while (m < 3 || m >= 9);

  printf("Popunite matricu: \n");

  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      scanf("%f", &a[i][j]);
    }
  }

  printf("Unesite x u intervalu <0, 1]: \n");

  do {
    scanf("%f", &x);
  } while (x <= 0 || x > 1);

  for (i = 0; i < m; i++) {
    b[i] = a[i][m - 1 - i] * x;
  }

  for (i = 0; i < m; i++) {
    a[i][i] = b[i];
  }
  
  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      printf("%f ", a[i][j]);
    }

    printf("\n");
  }

  return 0;
}