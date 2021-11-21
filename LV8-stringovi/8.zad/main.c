#include <stdio.h>
#include <string.h>

/* 8. Omogućiti korisniku unos jedne rečenice od maksimalno 220 znakova. Odrediti i na ekran ispisati 
srednju vrijednost svih znakova (njihove ASCII vrijednosti) u stringu osim razmaka i točki koje treba 
preskočiti prilikom izračuna. */

int main(void) {

     char a[221];

     int i;
     float sv = 0;

     fgets(a, 221, stdin);
     
     int n = strlen(a) - 1;
     int m = n;

     for (i = 0; i < n; i++) {
          if (a[i] == ' ' || a[i] == '.') {
               m--;
               continue;
          }
          sv += (int)a[i];
     }

     sv /= m;
     
     printf("Srednja vrijednost znakova iznosi %.2f", sv);

     return 0;
}