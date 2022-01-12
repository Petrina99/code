/* 3. Napisati funkciju koja popunjava cjelobrojno polje pseudo-slučajnim brojevima. Generirani brojevi
trebaju biti unutar zadanog intervala [a, b] iz Z. Na primjeru u funkciji main() pokazati uporabu
napisane funkcije. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
void popuniPolje (int a, int b, int *c, int n);

int main(void) {

  int a, b, i, c[N];

  srand((unsigned) time(NULL));

  printf("Unesite a: \n");
  scanf("%d", &a);

  printf("Unesite b: \n");
  scanf("%d", &b);

  popuniPolje(a, b, c, N);
  
  for (i = 0; i < N; i++) {
    printf("%d ", c[i]);
  }

  return 0;
}

void popuniPolje (int a, int b, int *c, int n) {

  int i;

  for (i = 0; i < N; i++) {
    *(c + i) = a + (float) rand() / RAND_MAX * (b - a);
  }
}