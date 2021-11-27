/* 7. Napisati funkciju koja prima jedan znak i ako taj znak predstavlja veliko slovo potrebno ga je vratiti 
kao malo slovo. U suprotnom vratiti inicijalni (predani) znak. U svrhu testiranja u funkciji  main() 
pozvati funkciju sa znakom učitanim s tipkovnice i na ekran ispisati povratnu vrijednost. */

#include <stdio.h>

char promjenaZnaka(char a);

int main(void) {

  char a;

  scanf(" %c", &a);

  printf("%c", promjenaZnaka(a));

  return 0;
}

char promjenaZnaka(char a) {

  if (a >= 'A' && a <= 'Z') {
    return a += 32;
  } 
  else {
    return a;
  }

}