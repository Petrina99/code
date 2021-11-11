#include <stdio.h>

int main(void) {

     int a, i, isProst;

     scanf("%d", &a);

     if (a > 1) {
          for (i = 2; i <= a/2; i++) {
               if (a % i == 0) {
                    isProst = 0;
               }

               else {
                    isProst = 1;
               }
          }
     }

     if (isProst == 0) {
          printf("Nije prost");
     }
     else {
          printf("Prost");
     }
     return 0;
}