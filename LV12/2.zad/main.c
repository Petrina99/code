#include <stdio.h>

/* 2. Napisati funkciju koja će izračunati i vratiti srednju vrijednost elemenata polja realnih brojeva. Na
primjeru u main() funkciji pokazati uporabu napisane funkcije. Koristiti pokazivačku notaciju.*/
float srednjaVrijednost (float *a, int n);

int main(void) {

  int i;
  float a[5];

  printf("Popunite polje: \n");

  for (i = 0; i < 5; i++) {
    scanf("%f", a + i);
  }

  float rez = srednjaVrijednost(a, 5);

  printf("%.2f", rez);

  return 0;
}

float srednjaVrijednost (float *a, int n) {

  int i;
  float sv = 0;

  for (i = 0; i < n; i++) {
    sv += *(a + i);
  }

  sv /= n;

  return sv;
}