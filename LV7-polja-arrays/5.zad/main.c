/* 5. Omogućiti korisniku unos vrijednosti elemenata u polje od 12 cijelih brojeva. Potom zamijeniti sve 
pozitivne vrijednosti s aritmetičkom sredinom apsolutnih vrijednosti svih brojeva tog polja. Ispisati 
izmijenjeno polje na ekran. */

#include <stdio.h>


int main(void) {

  int a[12], i;
  float sv = 0;

  printf("Unesite 12 cijelih brojeva: \n");
   
  // unos brojeva i racunanje aritmeticke sredine
  for (i = 0; i < 12; i++) {
    scanf("%d", &a[i]);
    if (a[i] < 0) {
      sv += -a[i];
    } 
    else {
      sv += a[i];
    }
  }

  sv /= 12;

  // mjenanje poz vrjednosti sa aritm sredinom
  for (i = 0; i < 12; i++) {
    if (a[i] > 0) {
      a[i] = sv;
    }
  }

  for (i = 0; i < 12; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}