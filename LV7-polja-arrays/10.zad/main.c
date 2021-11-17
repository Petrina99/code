#include <stdio.h>

/* 10.  Omogućiti korisniku unos n  (6  ≤ n < 25)  vrijednosti  elemenata  u  polje  cijelih  brojeva.  Zamijeniti 
mjesta prvoj polovici polja s drugom polovicom polja. Npr. zamijeniti mjesta prvom elementu polja 
sa zadnjim elementom, drugom elementu polja s predzadnjim elementom i tako skroz do polovice 
polja. */

int main(void) {

  int n, i, d, a[25], priv[25];

  do {
    printf("Unesite jedan cijeli broj iz intervala [6,25>: \n");
    scanf("%d", &n);
  } while(n < 6 || n >= 25);
  
  printf("unesite %d cijelih brojeva: \n", n);

  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (i = n - 1, d = 0; i >= 0; i--, d++) {
    priv[d] = a[i];
  }

  printf("\nPocetno polje :\n");

  for (i = 0; i < n; i++) {
    printf("%d", a[i]);
  }

  printf("\nObrnuto polje: \n");
  
  for (i = 0; i < n; i++) {
    printf("%d ", priv[i]);    
  } 

  printf("\nDrugi nacin obrtanja: \n");

  for (i = n - 1; i >= 0; i--) {
    printf("%d", a[i]);
  }

  return 0;
}