/* 4. Deklarirati polje od 150 cijelih brojeva. Popuniti polje vrijednostima 1 i 0 na sljedeći način: za svaki
element posebno generirani pseudo-slučajni broj iz [0, 1] iz R, te ako je manji od 0.5 spremiti
vrijednost 0, a u suprotnom spremiti vrijednost 1 u trenutni element. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 150
int main(void) {

  int a[N], i;

  float temp;

  srand((unsigned) time(NULL));

  for (i = 0; i < N; i++) {
    temp = (float) rand() / RAND_MAX * 1;
    
    if (temp < 0.5f) {
      a[i] = 0;
    } else {
      a[i] = 1;
    }
  }

  for (i = 0; i < N; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}