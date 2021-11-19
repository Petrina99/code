#include <stdio.h>
#include <string.h>


/* 1. Tražiti od korisnika unos jedne rečenice od maksimalno 200 znakova. Odrediti i na ekran ispisati 
broj riječi u rečenici. */

int main(void) {

     int i, m, c = 1;
     char a[201];

     fgets(a, 201, stdin);

     m = strlen(a);

     // svaki put kad naletimo na razmak broj rijeci se povecava
     for (i = 0; i < m; i++) {
          if (a[i] == ' ' || a[i] == ',' || a[i] == '.') {
               c++;
          } 
     }

     // ako user sam stisne enter
     if (a[0] == '\n') {
          c = 0;
     }

     printf("Recenica koju ste unijeli ima %d rijeci.", c);

     return 0;
}