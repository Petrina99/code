#include <stdio.h>

/* 8. Omogućiti korisniku unos dimenzije kvadratne matrice (2-D polja) realnih brojeva m × m, gdje je 3 
<  m  <  13  te  potom  popunjavanje  matrice.  Ispisati  sve  elemente  ispod  sporedne  i  iznad  glavne 
dijagonale čija je vrijednost veća od 0. */

int main(void) {

  int m, i, j;

  float a[12][12];

  printf("Unesite dimenzije kvadratne matrice <3, 13>: \n");

  do {
    scanf("%d", &m);
  } while (m <= 3 || m >= 13);

  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      scanf("%f", &a[i][j]);
    }
  }

  printf("Iznad glavne dijagonale: \n");

  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      if (i < j && a[i][j] > 0 && i != j) {
        printf("%f ", a[i][j]);
      }
    }
  }

  printf("\nIspod sporedne dijagonale: \n");

  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      if (i + j > m - 1 && a[i][j] > 0 && i != j) {
        printf("%f ", a[i][j]);
      }
    }
  }

  return 0;
}