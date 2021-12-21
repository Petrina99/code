#include <stdio.h>

/* 5. Napisati funkciju koja računa i vraća
Na primjeru u funkciji main() pokazati uporabu napisane funkcije. Koristiti pokazivačku notaciju. */
int funkcija (int *a, int n);

int main(void) {

  int a[10], i;

  printf("Ispunite polje: \n");

  for (i = 0; i < 10; i++) {
    scanf("%d", a + i);
  }

  int rez = funkcija(a, 10);

  printf("Rezultat je %d", rez);

  return 0;
}

int funkcija (int *a, int n) {

  int i, rez = 0;

  for (i = 1; i < n; i++) {
    rez += i * ((*(a + i)) * (*(a + i)));
  }

  return rez;
} 