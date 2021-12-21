#include <stdio.h>
#include <math.h>

/* 12. Napisati funkciju koja pretvara predani joj binarni broj u cijeli broj. Funkcija prima polje cijelih
brojeva koje je popunjeno 1 i 0 koje tvore svojom kombinacijom binarni broj, a iz te kombinacije 1
i 0 treba kreirati cijeli broj te ga vratiti kao rezultat. U svrhu testiranja u funkciji main() omogućiti
korisniku popunjavanje cijelog polja duljine 10 elemenata isključivo s 0 i 1 (u slučaju krivog unosa
ponoviti unos) te predati polje funkciji. Ispisati povratnu vrijednost funkcije u glavnom dijelu
programa. */

int binarniUInt (int *a, int n);

int main(void) {

  int a[10], i, n;

  printf("Popunite polje sa znamenkom 1 ili 0: \n");

  for (i = 0; i < 10; i++) {

    do {
      scanf("%d", a + i);
    } while (n < 0 && n > 1);
  }

  int rez = binarniUInt(a, 10);

  printf("%d", rez);

  return 0;
}

int binarniUInt (int *a, int n) {

  int b = 0, i, rez = 0;

  for (i = 0; i < n; i++) {
    rez += (*(a + i)) * pow(2, n - 1 - i);
  }

  return rez;
}