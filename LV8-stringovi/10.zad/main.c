#include <stdio.h>
#include <string.h>

/* 10.  Omogućiti korisniku unos dva stringa od maksimalno 20 znakova. Spojiti ta dva stringa u jedan novi 
string  te  ga  potom  ispisati  na  ekran.  Nije  dozvoljeno  koristiti  funkcije  standardne  biblioteke  za 
ostvarivanje zamjene slova */

int main(void) {

     char a[21], b[21], c[42];

     int i, j, m;

     printf("Unesite prvi string do 20 znakova: ");
     fgets(a, 21, stdin);

     printf("Unesite drugi string do 20 znakova: ");
     fgets(b, 21, stdin);

     m = strlen(a) + strlen(b);
     
     for (i = 0; a[i] != '\n'; i++) {
          c[i] = a[i];
     }

     for (i, j = 0; i < m, b[j] != '\n'; i++, j++) {
          c[i] = b[j];
     }

     puts(c);

     return 0;
}