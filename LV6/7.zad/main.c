#include <stdio.h>

int main(void) {

     int a, i;

     scanf("%d", &a);

     for (i = 1; i <= a; i++) {
          if (a % i != 0) {
               continue;
          }
          printf("%d ", i);
     }

     return 0;
}