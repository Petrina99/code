#include <stdio.h>


int main(void) {

     char ocjena;
     int a = 0;
     int b = 0;
     int c = 0;
     int d = 0;
     int f = 0;
     int ukupno = 0;
     int nevazace = 0;

     while (ocjena != '!') {
          printf("Unesite ocjenu od A-F, ako zelite prekinuti unos upisite znak !.\n");
          scanf(" %c", &ocjena);

          switch(ocjena) {
               case 'A':
               case 'a':
                    a++;
                    ukupno++;
                    break;
               case 'B':
               case 'b':
                    b++;
                    ukupno++;
                    break;
               case 'C':
               case 'c':
                    c++;
                    ukupno++;
                    break;
               case 'D':
               case 'd':
                    d++;
                    ukupno++;
                    break;
               case 'F':
               case 'f':
                    f++;
                    ukupno++;
                    break;
               default:
                    nevazace++;
                    ukupno++;
                    break;
          }
     }

     printf("Unijeli ste ukupno %d ocjena.\n", ukupno);
     printf("A ocjena: %d\n", a);
     printf("B ocjena: %d\n", b);
     printf("C ocjena: %d\n", c);
     printf("D ocjena: %d\n", d);
     printf("F ocjena: %d\n", f);
     printf("Nevazeci unosi: %d\n", nevazace);

     return 0;
}