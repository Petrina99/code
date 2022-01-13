/* 6. Napisati funkciju koja predano joj polje cijelih brojeva popunjava pseudo-slučajnim brojevima [-
10n, 10n]\[-5n, 7n] (vrijednosti iz [-5n, 7n] nisu dozvoljene), gdje je n generirana pseudo-slučajna
vrijednost. U svrhu testiranja u funkciji main() deklarirati polje od 20 podataka tipa int. Iskoristiti
dobiveno polje pri pozivu napisane funkcije i naknadno ispisati elemente polja na ekran. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuniPolje (int *a, int n);

int main(void) {

  int a[20], n, i;

  srand((unsigned) time(NULL));

  n = rand() % 10;

  popuniPolje(a, n);

  for (i = 0; i < 20; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}

void popuniPolje (int *a, int n) {

  int i, temp;

  for (i = 0; i < 20; i++) {
    do {
      temp = ((-10) * n) + (float) rand() / RAND_MAX * ((10 * n) - (-10 * n));
      *(a + i) = temp;
    } while (temp >= -5 * n && n <= 7 * n);
  }
}