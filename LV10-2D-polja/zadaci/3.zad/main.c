#include <stdio.h>

/*  
3. Omogućiti korisniku unos dimenzija dvije matrice realnih brojeva m x n (1 < m ≤ 5 i 2 < n ≤ 10) kao 
i njihovo popunjavanje te izračunati i na ekran ispisati zbroj i razliku tih matrica [(A ± B)i,j  =  (A)i,j 
±(B)i,j]. */

int main(void) {

     float a[5][10], b[5][10], c[5][10], d[5][10];

     int m, n, i, j;

     printf("Unesite broj redaka <1, 5]: \n");

     do {
          scanf("%d", &m);
     } while (m <= 1 || m > 5);

     printf("Unesite broj stupaca <2, 10]: \n");

     do {
          scanf("%d", &n);
     } while (n <= 2 || n > 10);

     printf("Ispunite prvu matricu: \n");

     for (i = 0; i < m; i++) {
          for (j = 0; j < n; j++) {
               scanf("%f", &a[i][j]);
          }
     }

     printf("Ispunite drugu matricu: \n");

     for (i = 0; i < m; i++) {
          for (j = 0; j < n; j++) {
               scanf("%f", &b[i][j]);
          }
     }
     
     for (i = 0; i < m; i++) {
          for (j = 0; j < n; j++) {
               c[i][j] = a[i][j] + b[i][j];
               d[i][j] = a[i][j] - b[i][j];
          }
     }
     
     for (i = 0; i < m; i++) {
          for (j = 0; j < n; j++) {
               printf("%f ", c[i][j]);
          }

          printf("\n");
     }

     for (i = 0; i < m; i++) {
          for (j = 0; j < n; j++) {
               printf("%f ", d[i][j]);
          }

          printf("\n");
     }
     return 0;
}