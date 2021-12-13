#include <stdio.h>
#include <string.h>

/* 7. Omogućiti korisniku unos jednog stringa od maksimalno 11 znakova. String je potrebno popuniti
isključivo znakovima koji predstavljaju znamenke i prilikom unosa stringa nije ga uvijek potrebno u
potpunosti popuniti. Iz stringa kreirati cijeli broj. Npr. iz stringa "357159" treba kreirati cijeli broj
357159. Ispisati kreirani cijeli broj u glavnom dijelu programa. */

int main(void) {

  char a[12];

  int i, c, b = 0; 

  fgets(a, 12, stdin);

  c = strlen(a);

  for (i = c - 1; i >= 0; i--) {
    b = (b * 10) + (int)(*(a + i));
  }

  // nedovrseno
  for (i = 0; i < c - 1; i++) {
    printf("%c ", a[i]);
  }
  printf("%d", b);

  return 0;
}