#include <stdio.h>

/* Pokazati  rad algoritma pomoću blok dijagram za računanje opsega  i površine pravokutnika. 
Korisnik treba učitati stranice pravokutnika A i B, te broj kojim se odlučuje koja će se radnja izvršiti. 
Ako korisnik učita broj 1 algoritam treba ispisati opseg pravokutnika, a ako učita broj 2, onda treba 
ispisati površinu pravokutnika. */

int main() {

  int a;
  int b;
  int c;
  int r;

  printf("Unesite stranice pravokutnika: \n");
  printf("A: ");
  scanf(" %d", &a);
  printf("B: ");
  scanf(" %d", &b);

  printf("Unesite broj 1 za izracun opsega ili 2 za izracun povrsine:\n");
  scanf(" %d", &c);

  if (c == 1) {
    r = 2 * (a + b);
    printf("Opseg pravokutnika iznosi %d cm", r);
  } else {
    r = a * b;
    printf("Povrsina pravokutnika iznosi %d cm", r);
  }


  return 0;
}