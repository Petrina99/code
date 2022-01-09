#include <stdio.h>

/* 7. Omogućiti korisniku unos dimenzije kvadratne matrice (2-D polja) realnih brojeva m × m, gdje je 3 
< m < 16 te potom popunjavanje matrice. Pronaći i na ekran ispisati element matrice iznad 
sporedne  dijagonale  s  najmanjom  vrijednosti  te  element  ispod  glavne  dijagonale  s najvećom 
vrijednosti. */

int main(void) {

  int m, i, j, k = 0, h = 0;

  double a[15][15], b[15], c[15], gmax, smin;
  
  printf("Odredite dimenzije matrice: \n");

  do {
    scanf("%d", &m);
  } while (m <= 3 || m >= 16);

  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      scanf("%lf", &a[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      printf("%.2lf ", a[i][j]);
    }

    printf("\n");
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      if (i > j) {
        c[k] = a[i][j];
        k++;
      }
    }
  }

  gmax = c[0];

  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      if (i + j < m - 1) {
        b[h] = a[i][j];
        h++;
      }
    }
  }

  smin = b[0];
  
  for (i = 0; i < m; i++) {
    if (c[i] > gmax) {
      gmax = c[i];
    }

    if (b[i] < smin) {
      smin = b[i];
    }
  }

  printf("Najveci ispod glavne: %.2lf\n", gmax);
  printf("Najmanji iznad sporedne: %.2lf", smin);
  return 0;
}