/* 6. Omogućiti korisniku unos jednog cijelog broja x koji predstavlja broj dana te iz tog broja izračunati 
i ispisati na ekran broj godina, tjedana i dana prema: 
g = x / 365, 
t = (x % 365) / 7, 
d = x – (g × 365 + t × 7), 
gdje je g, t, d redom predstavlja traženi broj godina, tjedana i dana koji predstavlja zadani broj x. */

#include <stdio.h>


int main(void) {

  int x, t, d;
  float g;

  printf("Unesite broj dana: \n");
  scanf("%d", &x);
 
  g = (float)x / 365;
  t = x % 365 / 7;
  d = x - ((int)g * 365 + t * 7);

  printf("%.2f godina, %d tjedana i %d dana.", g, t, d);

  return 0;
}