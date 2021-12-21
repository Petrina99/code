#include <stdio.h>

/* 3. Napisati funkciju koja će pronaći i vratiti najveću vrijednost elementa polja realnih brojeva. Na
primjeru u main() funkciji pokazati uporabu napisane funkcije. Koristiti pokazivačku notaciju. */
float najvecaVrijednost (float *a, int n);

int main(void) {

  int i;
  float a[5], rez;

  printf("Popunite polje: \n");

  for (i = 0; i < 5; i++) {
    scanf("%f", a + i);
  }

  rez = najvecaVrijednost(a, 5);

  printf("%.2f", rez);
  return 0;
}

float najvecaVrijednost (float *a, int n) {

  int i;
  float max;

  max = *a;

  for (i = 0; i < n; i++) {
    if (*(a + i) > max) {
      max = *(a + i);
    } 
  }

  return max;

}

