/* 8. Napisati funkciju koja računa i vraća vrijednost 
𝑦= 𝑥13 − 𝑥1∙𝑥3|𝑥2|+10−3 +5∙𝑥32.  U  svrhu  testiranja  u 
funkciji main() pozvati napisanu funkciju s 1.2, -4.1 i 2.825 kao argumentima te na ekran ispisati 
povratnu vrijednost. */

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

  x2 = x2 < 0 ? -x2 : x2;

  double rez;

  rez = pow(x1, 3) - ((x1 * x3) / (x2 + pow(10, -3)) + 5 * pow(x3, 2));

  return rez;
}