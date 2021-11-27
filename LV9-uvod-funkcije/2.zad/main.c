/* 2. Napisati funkciju koja će izračunati i vratiti srednju vrijednost prvih n neparnih prirodnih brojeva. 
U main() funkciji na primjeru prikazati uporabu napisane funkciju. */


#include <stdio.h>

float srednja(int n);

int main(void) {

  int n;
  float rez;

  printf("Unesite neki prirodan broj: \n");

  do {
    scanf("%d", &n);
  } while(n < 1);

  rez = srednja(n);

  printf("%f", rez);

  return 0;
}

float srednja(int n) {

  int i, m = 0;
  float sv = 0;
 
  for (i = 1; i <= n; i++) {
    
    if (i % 2 != 0) {
      sv += i;
      m++;
    }
  }

  sv /= m;

  return sv;
}