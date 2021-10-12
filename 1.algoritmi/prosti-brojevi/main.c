#include <stdio.h>
/* Zadan je cijeli broj N. Potrebno je ispisati 

sve proste brojeve do i uključujući N.
*/

int prost(int x) {
  int i;

  for (i = 2; i <= x/2; i++) {
    if (x % i == 0) {
      return 0;
    } 
  }

  return 1;
}

int main() {

  int i;
  int n;

  printf("Unesite bilo koji broj veci od 1 i manji od 10000: ");
  scanf(" %d", &n);
  
  for (i = 2; i <= n; i++) {
    if (prost(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}
