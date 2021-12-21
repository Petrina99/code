#include <stdio.h>

/* 8. Omogućiti korisniku unos 4 < m < 21 vrijednosti u polje cijelih brojeva. Predati funkciji popunjeno
polje, te odrediti element s najvećom i element s najmanjom vrijednosti unutar polja i pomoću
funkcije "vratiti" najveću i najmanju vrijednost. U glavnom dijelu programa kreirati i popuniti polje,
te ispisati najveću i najmanju vrijednost. Koristiti pokazivačku notaciju. */
void maxMinVrijednosti (int *a, int m, int *max, int *min);

int main(void) {

  int a[20], m, i, max, min;

  printf("Unesite broj m u intervalu <4, 21>: ");

  do { 
    scanf("%d", &m);
  } while (m <= 4 || m >= 21);

  printf("Popunite polje cijelim brojevima: \n");

  for (i = 0; i < m; i++) {
    scanf("%d", a + i);
  }

  max = *a;
  min = *a;

  maxMinVrijednosti(a, m, &max, &min);

  printf("Najvece vrijednost polja: %d, najmanja vrijednost polja: %d", max, min);

  return 0;
}

void maxMinVrijednosti (int *a, int m, int *max, int *min) {

  int i;

  for (i = 0; i < m; i++) {

    if (*(a + i) > *max) {
      *max = *(a + i); 
    }

    if (*(a + i) < *min) {
      *min = *(a + i);
    }

  }
}