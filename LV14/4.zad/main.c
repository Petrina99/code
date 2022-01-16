/* 4. Napisati funkciju koja računa zbroj dva vektora predstavljena poljima realnih brojeva (uzeti u obzir
kako oba polja moraju biti iste veličine). Funkcija kao rezultat vraća polje koje je rezultat zbrajanja.
Na primjeru u funkciji main() pokazati uporabu napisane funkcije. Za sva polja dinamički zauzeti
potrebnu memoriju. */


// ne kuzim bas zadatak valjd je šonjo mislio da se zbroje brojevi u poljima

#include <stdio.h>
#include <stdlib.h>

float zbrajanjeVektora (float *a, float *b, float *c, int n);

int main(void) {

  float *a, *b, *c;

  int i, n = 10;

  a = (float *) malloc(n * sizeof(float));
  b = (float *) malloc(n * sizeof(float));
  c = (float *) malloc(n * sizeof(float));

  if (a == NULL && b == NULL && c == NULL) {
    return 1;
  }

  for (i = 0; i < n; i++) {
    *(a + i) = 5.0f + (float) rand() / RAND_MAX * 15.0f;
    *(b + i) = 5.0f + (float) rand() / RAND_MAX * 15.0f;
  }

  for (i = 0; i < n; i++) {
    printf("%.2f ", *(a + i));
  }

  printf("\n");

  for (i = 0; i < n; i++) {
    printf("%.2f ", *(b + i));
  }

  printf("\n");

  zbrajanjeVektora(a, b, c, n);

  for (i = 0; i < n; i++) {
    printf("%.2f ", *(c + i));
  }

  free(a);
  free(b);
  free(c);

  return 0;
}

float zbrajanjeVektora (float *a, float *b, float *c, int n) {

  int i;

  for (i = 0; i < n; i++) {
    *(c + i) = (*(a + i)) + (*(b + i));
  }

  return *c;
}