/* Deklarirati  i  inicijalizirati  2-D polje realnih brojeva te izračunati i na ekran ispisati srednju 
vrijednost svih elemenata. */

#include <stdio.h>

int main(void) {

  int i, j;
  
  double sv = 0;

  double d[4][3] = {
      { 1.3, 3.4, 2},
      { 1.6, 2.7, 9.2},
      { 2, 4.6, 123.4},
      { 23.4, 2.2, 3.14}
    };

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 3; j++) {
      sv += d[i][j];
    }
  }

  sv /= (4 * 3);

  printf("%lf", sv);
  return 0;
}