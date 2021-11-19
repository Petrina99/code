#include <stdio.h>
#include <string.h>

/* 4. Omogućiti korisniku unos jednog stringa od maksimalno 75 znakova. Provjeriti i na ekran ispisati 
odgovarajuću poruku, ima li string oblik adrese e-pošte (sadrži znak @ i nakon njega točku). */

// zadatak jako ocajno postavljen tak da neznam kak ce na lv-u trazit rjesvanje 

int main(void) {

     char a[76];

     int i, c, t = 0;

     fgets(a, 76, stdin);
     
     // prvo trazimo di je @
     for (i = 0; i < strlen(a); i++) {
          if (a[i] == '@') {
               c = i;
               break;
          }
     }

     // postavljamo indeks od znaka @ kao brojac i trazimo tocku nakon njega
     for (c; c < strlen(a); c++) {
          if (a[c] == '.') {
               t = 1;
          }
     }

     if (t == 1) {
          puts("String ima oblik e-poste");
     }
     else {
          puts("String nema oblik e-poste");
     }

     return 0;
}