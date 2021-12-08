#include <stdio.h>

/* 7. Omogućiti korisniku unos dimenzije kvadratne matrice (2-D polja) realnih brojeva m × m, gdje je 3 
< m < 16 te potom popunjavanje matrice. Pronaći i na ekran ispisati element matrice iznad 
sporedne  dijagonale  s  najmanjom  vrijednosti  te  element  ispod  glavne  dijagonale  s najvećom 
vrijednosti. */

int main(void) {

  int m, i, j, k = 0, h = 0;

  float a[15][15], b[15], c[15], gmax, smin;

  printf("Odredite dimenzije kvadratne matrice <3, 16>: \n");

  do {
    scanf("%d", &m);
  } while (m <= 3 || m >= 16);

  printf("Popunite matricu: \n");

  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      scanf("%f", &a[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      if (i > j) {
        b[k] = a[i][j];
        k++;
      }

      if (i + j < m - 1) {
        c[h] = a[i][j];
        h++;
      }
    }
  }

  gmax = b[0];
  smin = c[0];

  for (i = 0; i <= k; i++) {
    if (b[i] > gmax) {
      gmax = b[i];
    }
  }

  for (i = 0; i <= h; i++) {
    if (c[i] < smin) {
      smin = c[i];
    }
  }

  printf("Najmanji element iznad sporedne dijagonale: %f\n", smin);
  printf("Najveci element ispod glavne dijagonale: %f", gmax);

  return 0;
}