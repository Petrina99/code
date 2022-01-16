/* 1. Omogućiti korisniku unos željene veličine polja realnih brojeva. Dinamički zauzeti potrebnu
memoriju. Popuniti polje pseudo-slučajnim brojevima u [−100, 100] iz R. Pronaći i na ekran ispisati
najmanju i najveću vrijednost elemenata u polju.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  int i, n;

  float *p, min, max;

  printf("Unesite zeljenu velicinu polja: \n");

  scanf("%d", &n);

  srand((unsigned) time(NULL));
  p = (float *) malloc(n * sizeof(float));

  if (p == NULL) {
    return 1;
  }

  for (i = 0; i < n; i++) {
    *(p + i) = -100.0f + (float) rand() / RAND_MAX * 200.0f;
  }

  min = p[0];
  max = p[0];

  for (i = 0; i < n; i++) {
    if (*(p + i) < min) {
      min = *(p + i);
    }

    if (*(p + i) > max) {
      max = *(p + i);
    }
  }

  printf("Najveci element polja je %.2f\n", max);
  printf("Najmanji element polja je %.2f\n", min);

  free(p);
  p = NULL;

  return 0;
}