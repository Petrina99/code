#include <stdio.h>

/* 6. Napisati funkciju koja u predanom joj broju pronalazi i vraća razliku najveće i najmanje znamenke. 
U svrhu testiranja u funkciji main() pozvati funkciju s brojem 31962 kao argument i na ekran ispisati 
povratnu vrijednost. */

int razlikaZnamenki(int n);

int main(void) {

  int rez;

  rez = razlikaZnamenki(31962);

  printf("%d", rez);

  return 0;
}

int razlikaZnamenki(int n) {

  int i, z, min, max, a[5];

  for (i = 0; n != 0; i++) {
    
    z = n % 10;
    n /= 10;
    a[i] = z;

  }

  min = a[0];
  max = a[0];

  for (i = 0; i < 5; i++) {

    if (a[i] < min) {
      min = a[i];
    }

    if (a[i] > max) {
      max = a[i];
    }
  }

  return max - min;
}
