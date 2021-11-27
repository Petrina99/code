
/* 14.  Napisati funkciju koja u predanom cijelom broju pronalazi i vraća prvu znamenku.  U  svrhu 
testiranja u funkciji main() omogućiti korisniku popunjavanje cjelobrojnog polja od 10 elemenata, 
pozvati funkciju za svaki element tog polja te izračunati i na ekran ispisati srednju vrijednost prvih 
znamenki svih elemenata tog polja.  */

#include <stdio.h>

int znamenka(int n);

int main(void) {

  int n, a[10], i;

  float sv = 0;

  for (i = 0; i < 10; i++) {
    scanf("%d", &n);
    a[i] = n;
  }

  for (i = 0; i < 10; i++) {
    sv += znamenka(a[i]);
  }

  sv /= 10;

  printf("%f", sv);

  return 0;
}

int znamenka(int n) {

  int znamenka;

  while(n != 0) {
    znamenka = n % 10;
    n /= 10;
  }

  return znamenka;
}