/* Deklarirati i inicijalizirati dva različita polja, različitih veličina i tipova podataka te ih ispisati 
na ekran */

#include <stdio.h>
#define N 5
#define M 15

int main(void) {

  int i;
  int ip[N] = { 1, 2, 3, 4, 5 };
  float fp[M] = { 1.1, 2.2, 3.3 };

  for (i = 0; i < 5; i++) {
    printf("%d ", ip[i]);
  }

  printf("\n");

  // ispisat ce 1.1, 2.2, 3.3 i onda nule nakon toga
  // to radi jer smo zauzeli mjesta za M brojeva a inicijalizirali smo samo prva 3 mjesta u polju
  // onda ce se ne ispunjena mjesta u polju napuniti nulama
  for (i = 0; i < 15; i++) {
    printf("%.2f ", fp[i]);
  }

  return 0;
}