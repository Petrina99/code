/* 2. Generirati pseudo-slučajni cijeli broj u [50, 1000] iz Z te zauzeti dinamički memoriju za toliko
podataka tipa double. Popuniti dobiveno polje pseudo-slučajnim brojevima u [0, 1] iz R. Provjeriti
i na ekran ispisati odgovarajuću poruku nalazi li se u polju vrijednost 1. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  int i, n;
  double *p;

  srand((unsigned) time(NULL));

  n = 50 * (float) rand() / RAND_MAX * (1000 - 50);

  p = (double *) malloc(n * sizeof(double));

  if (p == NULL) {
    return 1;
  }

  for (i = 0; i < n; i++) {
    *(p + i) = 0 + (double) rand() / RAND_MAX * 1;
  }

  for (i = 0; i < n; i++) {
    printf("%.2lf ", *(p + i));
  }

  for (i = 0; i < n; i++) {
    if (*(p + i) == 1) {
      printf("\nU polju se nalazi vrijednost 1.");
      break;
    }
  }

  free(p);
  p = NULL;

  return 0;
}