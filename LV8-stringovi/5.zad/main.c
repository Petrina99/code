/* 5. Omogućiti korisniku unos jednog stringa od maksimalno 80 znakova. Pronaći i na ekran ispisati 
koliko se puta u njemu pojavljuje slog "ma". */

#include <stdio.h>
#include <string.h>

int main(void) {

     char a[81];

     int i, c = 0;

     fgets(a, 81, stdin);
     
     // sam trazimo dva uzastopna indeksa koji se sastoje od m i a
     for (i = 0; i < strlen(a); i++) {
          if (a[i] == 'm' && a[i+1] == 'a') {
               c++;
          }
     }

     printf("Slog 'ma' pojavljuje se %d puta u stringu.", c);

     return 0;
}