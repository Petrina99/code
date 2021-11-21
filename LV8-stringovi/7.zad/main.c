#include <stdio.h>
#include <string.h>

/* 7. Omogućiti korisniku unos dva stringa od maksimalno 50 znakova. Ispisati na ekran onaj string koji 
ima manje velikih slova. Ako oba imaju jednak broj velikih slova, ispisati onaj s manje malih slova 
ili oba ukoliko su i u tom smislu jednaki. */

int main(void) {

     char a[51], b[51];

     int i, ma = 0, mb = 0, va = 0, vb = 0;

     fgets(a, 51, stdin);
     fgets(b, 51, stdin);

     for (i = 0; i < strlen(a); i++) {
          if (a[i] >= 'A' && a[i] <= 'Z') {
               va++;
          }
          if (a[i] >= 'a' && a[i] <= 'z') {
               ma++;
          }
     } 

     for (i = 0; i < strlen(b); i++) {
          if (b[i] >= 'A' && b[i] <= 'Z') {
               vb++;
          }
          if (b[i] >= 'a' && b[i] <= 'z') {
               mb++;
          }
     } 

     if (va == vb) {
          if (ma < mb) {
               puts(a);
          } else if (ma == mb){
               puts(a);
               puts(b);
          } else {
               puts(b);
          }
     } else if (va < vb) {
          puts(a);
     } else {
          puts(b);
     }

     return 0;
}