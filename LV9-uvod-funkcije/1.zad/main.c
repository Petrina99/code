/* 1. Napisati funkciju koja će izračunati i vratiti obujam valjka zadanog s polumjerom i visinom 
 
𝑉 = 𝜋∙𝑟2 ∙ℎ. 
 
U main() funkciji na primjeru prikazati uporabu napisane funkciju.  */

#include <stdio.h>

#define PI 3.14

float volumen(int r, int h);

int main(void) {

  int r, h;

  float rez;

  printf("Unesite polumjer: \n");
  scanf("%d", &r);

  printf("Unesite visinu: \n");
  scanf("%d", &h);

  rez = volumen(r, h);

  printf("%f", rez);

  return 0;
}

float volumen(int r, int h) {

  float rezultat = PI * (r * r) * h;


  return rezultat;
}