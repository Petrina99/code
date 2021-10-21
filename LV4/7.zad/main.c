/* 7. Omogućiti korisniku unos duljine tri stranice a, b i c. Ispitati postoji li trokut s takvim stranicama i 
ispisati na ekran 1 ako da, u suprotnom ispisati 0.*/

#include <stdio.h>

int main(void) {

  float a, b, c;
  
  printf("Unesite duljine stranica trokuta: \n");
  scanf("%f %f %f", &a, &b, &c);

  printf("%d", a + b > c && b + c > a && a + c > b);
  
  return 0;
}