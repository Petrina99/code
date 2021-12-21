#include <stdio.h>
#include <string.h>

/* 10. Omogućiti korisniku unos jednog stringa od maksimalno 11 znakova. String je potrebno popuniti
isključivo znakovima koji predstavljaju znamenke i prilikom unosa stringa nije ga uvijek potrebno u
potpunosti popuniti. Zatim napisati funkciju koja će primiti popunjeni string i iz stringa kreirati i
vratiti cijeli broj. Npr. iz stringa "357159" treba kreirati i vratiti broj 357159. Ispisati kreirani cijeli
broj u glavnom dijelu programa. Koristiti pokazivačku notaciju. */

int stringUInt (char *a, int n);

int main(void) {

  char a[12], valjan, i, n;

  printf("Popunite string brojkama: \n");

  do {
    fgets(a, 12, stdin);
    valjan = 0;

    n = strlen(a) - 1;
    for (i = 0; i < n; i++) {
      if (*(a + i) >= '0' && *(a + i) <= '9') {
        valjan = 0;
      }
      else {
        valjan = 1;
        break;
      }
    }
  } while (valjan == 1);

  int broj = stringUInt(a, n);

  printf("%d", broj);

  return 0;
}

int stringUInt (char *a, int n) {

  int i, b = 0;

  for (i = 0; i < n; i++) {
    b = (*(a + i) - '0') + (b * 10);
  }

  return b;
}
