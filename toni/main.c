#include <stdio.h>

int zbrajanje(int x, int y);
int max(int z, int j);

int main(void) {

  int i, n;

  scanf("%d %d", &i, &n);

  // int rez = zbrajanje(i, n);
  
  //argumenti
  printf("%d", zbrajanje(i, n));
  printf("%d", max(i, n));
  
  return 0;
}

// parametri
int zbrajanje(int x, int y) {

  int rezultat;

  rezultat = x + y;

  return rezultat;
}

int max(int z, int j) {

  int rezultat = z > j ? z : j;

  return rezultat;
}