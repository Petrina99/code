/* 6.  Omogućiti korisniku unos tri znaka te odrediti koji ima najmanju ASCII vrijednost. Za svaki od 
preostala dva znaka ispisati vrijednost u heksadekadskom brojevnom sustavu koja je jednaka razlici 
njega i najmanjeg */

#include <stdio.h>


int main(void) {

  char a, b, c;
  int asciiA, asciiB, asciiC;
  printf("Unesite 3 znaka: \n");
  
  scanf(" %c", &a);
  scanf(" %c", &b);
  scanf(" %c", &c);

  asciiA = a;
  asciiB = b;
  asciiC = c;

  printf("%d %d %d\n", asciiA, asciiB, asciiC);

  if (asciiA < asciiB && asciiA < asciiC) {
    printf("%X %X", asciiB - asciiA, asciiC - asciiA);
  }
  if (asciiB < asciiA && asciiB < asciiC) {
    printf("%X %X", asciiA - asciiB, asciiC - asciiB);
  }
  if (asciiC < asciiA && asciiC < asciiB) {
    printf("%X %X", asciiA - asciiC, asciiB - asciiC);
  }

  return 0;
}