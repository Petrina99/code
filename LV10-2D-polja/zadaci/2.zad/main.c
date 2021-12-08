#include <stdio.h>

/* 2. <Omogućiti korisniku unos dimenzija matrice realnih brojeva m x n (1 < m < 11 i 5 < n < 9) i njeno 
popunjavanje. Pronaći i na ekran ispisati element matrice s najmanjom vrijednosti.*/

int main(void) {

     int m, n, i, j;
     float a[10][8], min;

     printf("Unesite broj redaka <1, 11>: \n");

     do {
          scanf("%d", &m);
     } while (m <= 1 || m >= 11);

     printf("Unesite broj stupaca <5, 9>: \n");

     do {
          scanf("%d", &n);
     } while (n <= 5 || n >= 9);

     for (i = 0; i < m; i++) {
          for (j = 0; j < n; j++) {
               scanf("%f", &a[i][j]);
          }
     }

     min = a[0][0];

     for (i = 0; i < m; i++) {
          for (j = 0; j < n; j++) {
               if (a[i][j] < min) {
                    min = a[i][j];
               }
          }
     }

     printf("%f", min);
     
     return 0;
}