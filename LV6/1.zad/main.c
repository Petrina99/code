#include <stdio.h>

int main(void) {

     int a, i;

     do {
          printf("Unesite broj od 5 do 25: \n");
          scanf("%d", &a);
     } while (a < 5 || a > 25);

     for (i = 0; i < a; i++) {
          printf("*\n");
     }

     return 0;
}