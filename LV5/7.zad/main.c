/* 7.  Omogućiti korisniku unos duljine tri stranice a, b i c. Ispisati postoji li trokut s takvim stranicama i 
ako postoji, ispisati na ekran kakav je (jednakostraničan, jednakokračan, raznostraničan). */

#include <stdio.h>


int main(void) {

  double a, b, c;
  
  printf("Unesite duljine stranica trokuta: \n");
  scanf("%lf %lf %lf", &a, &b, &c);

  if (a + b > c && a + c > b && b + c > a) {

    if (a == b && a == c) {
      printf("Trokut je jednakostranican. ");
    }
    if (a == b || a == c || b == c) {
      printf("Trokut je jednakokracan. ");
    }
    if (a != b && a != c && b != c) {
      printf("Trokut je raznostranican. ");
    }
  } 
  else {
    printf("Takav trokut ne postoji. ");
  }

  return 0;
}