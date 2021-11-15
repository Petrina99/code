// 2.  Omogućiti korisniku unos realnih brojeva x i y. Izračunati i ispisati na ekran vrijednost izraza  
// |x| × min{x, y}.

#include <stdio.h>
// math.h za fabs i fmin funkciju
#include <math.h>


int main(void) {

  double x, y, rez;

  printf("unesite 2 realna broja: \n");
  scanf("%lf %lf", &x, &y);

  rez = fabs(x) * fmin(x, y);

  printf("%lf", rez);

  return 0;
}