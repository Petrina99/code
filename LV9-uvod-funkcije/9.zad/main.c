/* 9. Omogućiti korisniku unos jednog cijelog broja. Zatim napisati funkciju kojoj se predaje taj broj i iz 
predanog cijelog broja izračunava i vraća broj u obrnutom redoslijedu, npr. Predaje se broj 1234, 
a funkcija vraća 4321. Ispisati izmijenjeni broj u glavnom dijelu programa. */

#include <stdio.h>

int obrnuti(int a);

int main(void) {

  int a;

  printf("Unesite jedan cijeli broj: \n");
  scanf("%d", &a);

  a = obrnuti(a);

  printf("%d", a);
  
  return 0;
}

int obrnuti(int a) {

  int obrnuti = 0;

  while(a != 0) {
    obrnuti = (obrnuti * 10) + (a % 10);
    a /= 10;
  }

  return obrnuti;
}