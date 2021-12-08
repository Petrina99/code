/* Deklarirati  dva  2-D polja različitih veličina i tipova podataka. Oba 2-D  polja  popuniti 
vrijednostima i potom ih ispisati na ekran */

#include <stdio.h>

int main(void) {

  // inicijalizacija polja
  // a ima 6 redova i svaki red ima 5 stupaca ilti elemenata
  int a[6][5], i, j;
  float b[4][4];

  // popunjavanje polja
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 5; j++) {
      a[i][j] = (i * 4) + j + 1;
    }
  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      b[i][j] = ((i * 4) + j + 1) / 10.0;
    }
  }

  // ispis polja

  for (i = 0; i < 6; i++) {

    for (j = 0; j < 5; j++) {
      printf("%d ", a[i][j]);
    }

    // kad se ispise jedan redak prelazimo u novi
    printf("\n");
  }
  
   for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%f ", b[i][j]);
    }

    // kad se ispise jedan redak prelazimo u novi
    printf("\n");
  }

  return 0;
}