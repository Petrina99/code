/* 1. Napisati funkciju koja ฤe izraฤunati i vratiti obujam valjka zadanog s polumjerom i visinom 
 
๐ = ๐โ๐2 โโ. 
 
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