#include <stdio.h>
#include <string.h>

/* 4. Omogućiti korisniku unos jednog stringa od maksimalno 75 znakova. Provjeriti i na ekran ispisati 
odgovarajuću poruku, ima li string oblik adrese e-pošte (sadrži znak @ i nakon njega točku). */

// glup zadatak ko kurac 

int main(void) {

     char a[76];

     int i, c, t = 0;

     fgets(a, 76, stdin);

     for (i = 0; i < strlen(a); i++) {
          if (a[i] == '@') {
               c = i;
               break;
          }
     }

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