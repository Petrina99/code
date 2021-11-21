#include <stdio.h>
#include <string.h>

/* 9. Omogućiti korisniku unos jednog stringa od maksimalno 110 znakova. Potom zamijeniti svako malo 
slovo  ekvivalentnim  velikim  slovom  i  obrnuto.  Na  kraju  ispisati  string  na  ekran.  Nije  dozvoljeno 
koristiti funkcije standardne biblioteke za ostvarivanje zamjene slova. */

int main(void) {

     char a[111];

     int i;

     fgets(a, 111, stdin);

     for (i = 0; i < strlen(a); i++) {
          
          if (a[i] >= 'A' && a[i] <= 'Z') {
               a[i] += 32;
          } else if (a[i] >= 'a' && a[i] <= 'z') {
               a[i] -= 32;
          } else {
               continue;
          } 
     }

     puts(a);

     return 0;
}