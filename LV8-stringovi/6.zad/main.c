/* 6. Omogućiti korisniku unos jednog stringa od maksimalno 120 znakova. Odrediti i na ekran ispisati 
koliki postotak znakova čine mala, a koliki velika slova. */

#include <stdio.h>
#include <string.h>

int main(void) {

     char a[121];

     int i, m = 0, v = 0;
     
     float pm, pv; 

     fgets(a, 121, stdin);

     // stavljamo strlen(a) - 1 tak da nebi brojali i zadnji znak '\n'
     int n = strlen(a) - 1;

     for (i = 0; i < n; i++) {
          if (a[i] >= 'A' && a[i] <= 'Z') {
               v++;
          }
          if (a[i] >= 'a' && a[i] <= 'z') {
               m++;
          }
     }

     pm = (m * 1.0f / n * 1.0f) * 100;
     pv = (v * 1.0f / n * 1.0f) * 100;

     printf("Velika slova cine %.2f posto.", pv);
     printf("\nMala slova cine %.2f posto.", pm);
     return 0; 
}