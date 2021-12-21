#include <stdio.h>
#include <stdlib.h>

/* 6. Napisati funkciju koja računa i vraća
U svrhu testiranja u funkciji main() deklarirati polje od 10 elemenata i naknadno omogućiti
korisniku njegovo popunjavanje. Iskoristiti to polje kao argument u pozivu navedene funkcije i
ispitati na ekran povratnu vrijednost. Koristiti pokazivačku notaciju. */
int funkcija (int *a, int n);

int main(void) {

  int a[10], i;

  printf("Popunite bolje: \n");

  for (i = 0; i < 10; i++) {
    scanf("%d", a + i);
  }

  int rez = funkcija(a, 10);

  printf("%d", rez);

  return 0;
}

int funkcija (int *a, int n) {

  int zadnjiElement = *(a + n - 1);
  int i, x, suma = 0, rez;

  for (i = 1; i < n - 1; i++) {
    x = i * (*(a + i)) - 1;

    suma += abs(x);
  }

  rez = zadnjiElement * suma;

  return rez;
}