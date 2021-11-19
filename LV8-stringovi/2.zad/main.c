#include <stdio.h>
#include <string.h>

/* 2. Tražiti od korisnika unos jednog stringa od maksimalno 50 znakova. Provjeriti i na ekran  ispisati 
koliko se puta pojavljuje neka znamenka te na kojim mjestima. */

int main(void) {

     int znamenke[51], i, c = 0;
     char a[51];

     fgets(a, 51, stdin);

     for (i = 0; i < strlen(a); i++) {
          if (a[i] >= '0' && a[i] <= '9') {
               znamenke[c] = i;
               c++;
          }
     }

     printf("Znamenke su se pojavile %d puta.", c);
     printf("Znamenke se pojavljuju na mjestima: \n");
     for (i = 0; i < c; i++) {
          printf("%d ", znamenke[i]);
     }
     return 0;
}