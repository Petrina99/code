#include <stdio.h>

/* 3. Napisati funkciju koja će izračunati i vratiti srednju vrijednost svih cijelih brojeva između m i n (m 
< n). U main() funkciji na primjeru prikazati uporabu napisane funkciju. */

float srednjaVrijednost(int m, int n);

int main(void) {

  int m, n;
  float rez;

  printf("Unesite 2 cijeli broja m i n (m < n): \n");
  scanf("%d %d", &m, &n);

  rez = srednjaVrijednost(m, n);

  printf("Srednja vrijednost svih cijelih brojeva izmedu %d i %d iznosi %f", m, n, rez);
  return 0;
}

float srednjaVrijednost(int m, int n) {

  float sv = 0;
  int i, b = 0;

  for (i = m + 1; i < n; i++) {
    sv += i;
    b++;
  }

  return sv /= b;
}