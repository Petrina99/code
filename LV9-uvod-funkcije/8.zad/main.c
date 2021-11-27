#include <stdio.h>
#include <math.h>

double izracun(double x1, double x2, double x3);

int main(void) {

  float rez;

  rez = izracun(1.2, -4.1, 2.825);
  
  printf("%lf", rez);

  return 0;
}

double izracun(double x1, double x2, double x3) {

  double y;

  y = pow(x1, 3) - ((x1 * x3) / (fabs(x2) + pow(10, -3))) + (5 * pow(x3, 2));

  return y;
}