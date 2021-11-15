/*5. Omogućiti korisniku unos realnih brojeva x i a. Provjeriti je li x unutar intervala [-a, a]. Ukoliko je 
unutar zadanog intervala ispisati na ekran vrijednost 1, a u suprotnom vrijednost 0. */

#include <stdio.h>



int main(void) {

  double x, a;

  printf("Unesite dva realna broja: \n");
  scanf("%lf %lf", &x, &a);

  printf("%d", x <= a && x >= -a);

  return 0;
}