#include <stdio.h>

/* 5. Napisati funkciju koja računa i vraća aritmetičku sredinu pozitivnih djelitelja predanog joj cijelog 
broja. U funkciji main() na primjeru prikazati uporabu napisane funkcije. */

float srednjaVrijednost(int n);

int main(void) {

  int n;
  float rez;

  scanf("%d", &n);

  rez = srednjaVrijednost(n);

  printf("%f", rez);

  return 0;
}

float srednjaVrijednost(int n) {

  int i, j = 0;
  float sv = 0;

  for (i = 1; i <= n; i++) {

    if (n % i == 0) {
      sv += i;
      j++;
    }

  }

  sv /= j;

  return sv;
}