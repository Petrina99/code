#include <stdio.h>


int main(void) {

     char ocjena;

     int ukupno = 0;

     printf("Unesite ocjenu od A-F, ako zelite prekinuti unos upisite znak !.\n");
     
     while (ocjena != '!') {
          scanf(" %c", &ocjena);

          switch(ocjena) {
               case 'A':
               case 'a':
                    ukupno++;
                    break;
               case 'B':
               case 'b':
                    ukupno++;
                    break;
               case 'C':
               case 'c':
                    ukupno++;
                    break;
               case 'D':
               case 'd':
                    ukupno++;
                    break;
               case 'F':
               case 'f':
                    ukupno++;
                    break;
               default:
                    break;
          }
     }

     printf("Unijeli ste ukupno %d ocjena.\n", ukupno);

     return 0;
}