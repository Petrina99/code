/* 10.  Omogućiti korisniku unos duljine tri stranice trokuta a, b i c. Zatim te tri stranice poslati u funkciju 
koja vraća 0 ako stranice ne čine trokut, 1 ako je trokut jednakostraničan, 2 ako je trokut  
jednakokračan i 3 ako je trokut raznostraničan. U glavnom dijelu programa ispisati odgovarajuću 
poruku, ako stranice ne tvore trokut, a ako stranice čine trokut, ispisati kakav trokuta čine stranice.  */

#include <stdio.h>

int trokut(int a, int b, int c);

int main(void) {

  int a, b, c, rez;

  printf("Unesite tri stranice trokuta: \n");
  scanf("%d %d %d", &a, &b, &c);

  rez = trokut(a, b, c);

  if (rez == 0) {
    printf("Takav trokut ne postoji.");
  } 
  else if (rez == 1) {
    printf("Jednakostranican trokut.");
  }
  else if (rez == 2) {
    printf("Jednakokracan trokut.");
  }
  else {
    printf("Raznostranican trokut.");
  }
  
  return 0;
}

int trokut(int a, int b, int c) {

  if (a + c > b && a + b > c && b + c > a) {

    if (a == b && b == c) {
      return 1;
    } 
    else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
      return 2;
    }
    else {
      return 3;
    }

  } 
  else {

    return 0;

  }
}