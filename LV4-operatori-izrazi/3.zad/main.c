/* 3. Omogućiti korisniku unos jednog realnog broja. Ispisati na ekran 1 ukoliko je broj nenegativan, a u 
suprotnom ispisati 0. */

#include <stdio.h>


int main(void) {

  double a;

  printf("Unesite neki realni broj: ");
  scanf("%lf", &a);

  printf("%d", a >= 0);

  return 0;
}