#include <stdio.h>

/* Deklarirati i inicijalizirati string proizvoljne veličine. Zamijeniti svaki samoglasnik znakom za 
podcrtavanje te ga potom ispisati na ekran. */

int main(void) {

     char s[] = "proizvoljan string";

     int i;

     for (i = 0; s[i] != '\0'; i++) {
          switch(s[i]) {
               case 'a':
               case 'A':
               case 'e':
               case 'E':
               case 'i':
               case 'I':
               case 'O':
               case 'o':
               case 'U':
               case 'u':
                    s[i] = '_';
                    break;
          }
     }

     puts(s);

     return 0;
}