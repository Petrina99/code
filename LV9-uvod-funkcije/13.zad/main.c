/* 13.  Napisati funkciju koja za predani joj cijeli broj računa i vraća zbroj faktorijela znamenki. Primjerice, 
za argument 234 funkcija bi trebala izračunati i vratiti vrijednost 2! + 3! + 4! = 32. U svrhu testiranja 
u  funkciji  main()  pozvati  napisanu  funkciju s 123 te potom s −321 kao argumentom i ispisati na 
ekran povratnu vrijednost. */

#include <stdio.h>
#include <math.h>

int faktorijel(int a);

int main(void) {

  int rez;

  rez = faktorijel(123);
  printf("%d", rez);

  rez = faktorijel(-321);
  printf("\n%d", rez);

  return 0;
}

int faktorijel(int a) {

  int i = 0, j, z, znamenke[10], rez = 1, b, sum = 0;

  // posto zbrajamo samo faktorijel znamenki onda stavljamo aps vrijednost broja
  a = fabs(a);

  for (i = 0; a != 0; i++) {
    z = a % 10;
    a /= 10;
    znamenke[i] = z;
  }

  for (j = 0; j < i; j++) {
    rez = 1;

    for (b = znamenke[j]; b > 0; b--) {
      rez *= b;
    }

    sum += rez;
  }

  return sum;
}