#include <stdio.h>

/* 4. Omogućiti korisniku unos dimenzija kvadratne matrice m x m (2 ≤ m ≤ 10) i njeno popunjavanje. 
Odrediti i na ekran ispisati najmanju vrijednost na glavnoj te najveću vrijednost  na  sporednoj 
dijagonali. */

int main(void) {

     int m, i, j, ming, mins;
     int a[10][10];

     printf("Unesite dimenzije kvadratne matrice [2, 10]: \n");

     do {
          scanf("%d", &m);
     } while (m < 2 || m > 10);

     for (i = 0; i < m; i++) {
          for (j = 0; j < m; j++) {
               scanf("%d", &a[i][j]);
          }
     }

     ming = a[0][0];
     mins = a[0][m - 1];

     for (i = 0; i < m; i++) {
          if (a[i][i] < ming) {
               ming = a[i][i];
          }
          if (a[i][m - 1 - i] < mins) {
               mins = a[i][m - 1 - i];
          }
     }

     printf("Najmanja vr. na gl. dijagonali: %d\n", ming);
     printf("Najmanja vr. na sp. dijagonali: %d", mins);

     return 0;
}