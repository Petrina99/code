#include <stdio.h>

int main(void) {

     int a, i, j, isProst;

     scanf("%d", &a);

     if (a > 1) {

          for (i = 2; i <= a; i++) {

               for (j = 2; j <= i/2; j++) {
                    
                    if (i % j == 0) {
                         isProst = 0;
                    } 
                    else {
                         isProst = 1;
                    }
               }
          }

          if (isProst == 1) {
               printf("Broj koji ste unjeli je prost broj.");
          }
          else 
          {
               printf("Broj koji ste unjeli nije prost broj.");
          }
     } 
     else {
          printf("Unijeli ste broj koji nije veci od 1.");
     }

     return 0;
}