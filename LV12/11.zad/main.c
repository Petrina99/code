#include <stdio.h>

/* 11. Omogućiti korisniku unos 5 < n <= 20 elemenata u polje realnih brojeva. Napisati funkciju koja će
primiti to polje realnih brojeva i zamijeniti mjesta elementima prve polovice polja s drugom
polovicom i to na način da se zamjena napravi prvog i zadnjeg elementa, zatim drugo i predzadnje
i tako do polovice polja. Ispisati izmijenjeno polje u glavnom dijelu programa. Koristiti pokazivačku
notaciju */
void inverzPolja (float *a, int m);

int main(void) {

  float a[20];

  int m, i;

  printf("Unesite broj m u intervalu <5, 20]: ");

  do {
    scanf("%d", &m);
  } while (m <= 5 || m > 20);

  printf("Popunite polje: \n");

  for (i = 0; i < m; i++) {
    scanf("%f", a + i);
  }
  
  for (i = 0; i < m; i++) {
    printf("%.2f ", *(a + i));
  }

  printf("\n");

  inverzPolja(a, m);

  for (i = 0; i < m; i++) {
    printf("%.2f ", *(a + i));
  }

  return 0;
}

void inverzPolja (float *a, int m) {

  int i, j;
  
  float b[20];

  for (i = 0; i < m; i++) {
    *(b + i) = *(a + m - 1 - i);
  }

  for (i = 0; i < m; i++) {
    *(a + i) = *(b + i);
  }
}