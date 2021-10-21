/* 6. Omogućiti korisniku unos jednog cijelog broja x koji predstavlja broj dana te iz tog broja izračunati 
i ispisati na ekran broj godina, tjedana i dana prema: 
g = x / 365, 
t = (x % 365) / 7, 
d = x – (g × 365 + t × 7), 
gdje je g, t, d redom predstavlja traženi broj godina, tjedana i dana koji predstavlja zadani broj x. */

#include <stdio.h>


int main(void) {

  int x, g, t, d;

  printf("Unesite broj dana: \n");
  scanf("%d", &x);
 
  g = x / 365;
  t = x % 365 / 7;
  d = x - (g * 365 + t * 7);

  printf("%d godina, %d tjedana i %d dana.", g, t, d);

  return 0;
}