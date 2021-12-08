#include <stdio.h>

/*1. Omogućiti  korisniku  unos  elemenata  matrice  A  dimenzija  2  x  4.  Potom,  na  ekran  ispisati 
transponiranu matricu, matrice A [(𝐴𝑇)𝑖,𝑗 =(𝐴)𝑗,𝑖].*/

int main(void) {

     int a[2][4], b[4][2], i, j;

     for (i = 0; i < 2; i++) {
          for (j = 0; j < 4; j++) {
               scanf("%d", &a[i][j]);
          }
     }
     
     for (i = 0; i < 4; i++) {
          for (j = 0; j < 2; j++) {
               b[i][j] = a[j][i];
          }
     }

     for (i = 0; i < 4; i++) {
          for (j = 0; j < 2; j++) {
               printf("%d ", b[i][j]);
          }

          printf("\n");
     }
     
     return 0;
}