/* 2. Deklarirati matricu (2-D polje) realnih brojeva dimenzija 20 x 20 i popuniti ju pseudo-slučajnim
brojevima iz [-5, 5] iz R. Pronaći i na ekran ispisati najveću i najmanju vrijednost u polju */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  int i, j;

  float a[20][20], min, max;

  srand((unsigned) time(NULL));

  for (i = 0; i < 20; i++) {
    for (j = 0; j < 20; j++) {
      a[i][j] = -5.0f + (float) rand() / RAND_MAX * (5.0f - (-5.0f));
    }
  }

  min = a[0][0];
  max = a[0][0];

  for (i = 0; i < 20; i++) {
    for (j = 0; j < 20; j++) {
      printf("%.2f ", a[i][j]);
    }

    printf("\n");
  }

  for (i = 0; i < 20; i++) {
    for (j = 0; j < 20; j++) {
      if (a[i][j] < min) {
        min = a[i][j];
      }

      if (a[i][j] > max) {
        max = a[i][j];
      }
    }
  }

  printf("Max: %.2f, min: %.2f ", max, min);
  return 0;
}