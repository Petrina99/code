/* 8. Napisati funkciju koja u predano joj polje cijelih brojeva popunjava pseudo-slučajnim parnim
brojevima [1000, 10000) . Izdvojiti korak provjere generiranje parnog broja u posebnu funkciju. U
svrhu testiranja u funkciji main() deklarirati polje od 20 elemenata podataka tipa short. Iskoristiti
dobiveno polje pri pozivu napisane funkcije i naknadno ispisati elemente polja na ekran */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int provjera (short int a);
void popuniPolje (short int *a, int n);

int main(void) {

  int i;

  short int a[20];

  srand((unsigned) time(NULL));

  popuniPolje(a, 20);

  for (i = 0; i < 20; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}

void popuniPolje (short int *a, int n) {

  int i, temp;

  for (i = 0; i < n; i++) {
    do {
      temp = 1000 + (float) rand() / RAND_MAX * (10000 - 1000);
      *(a + i) = temp;
    } while (provjera(temp) == 0);
  }
}

int provjera (short int a) {

  if (a % 2 == 0) {
    return 1;
  } else {
    return 0;
  }

}