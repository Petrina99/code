#include <stdio.h>
#include <string.h>

/* 3. Omogućiti korisniku unos dva stringa od maksimalno 100 znakova. Ispisati na ekran onaj koji sadrži 
više samoglasnika. */

int main(void) {

     char a[101], b[101];

     int sam_a = 0, sam_b = 0, i;

     fgets(a, 101, stdin);
     fgets(b, 101, stdin);

     for (i = 0; i < strlen(a); i++) {
          switch(a[i]) {
               case 'a':
               case 'A':
               case 'e':
               case 'E':
               case 'i':
               case 'I':
               case 'o':
               case 'O':
               case 'u':
               case 'U':
                    sam_a++;
                    break;
          }
     }

     for (i = 0; i < strlen(b); i++) {
          switch(b[i]) {
               case 'a':
               case 'A':
               case 'e':
               case 'E':
               case 'i':
               case 'I':
               case 'o':
               case 'O':
               case 'u':
               case 'U':
                    sam_b++;
                    break;
          }
     }

     if (sam_a > sam_b) {
          printf("String koji ima vise samoglasnika: \n");
          puts(a);
     } 
     else if (sam_a == sam_b) {
          printf("Stringovi imaju isti broj samoglasnika: \n");
          puts(a);
          puts(b);
     }
     else {
          printf("String koji ima vise samoglasnika: \n");
          puts(b);
     }

     return 0;
}