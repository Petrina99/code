#include <stdio.h>

int main(void) {

     int a, b;

     printf("Unesite cijeli broj: \n");
     scanf("%d", &a);

     printf("Unesite drugi cijeli broj da bude veci od prethodnog: \n");
     scanf("%d", &b);

     while (a > b || a == b) {
          printf("Unesite broj veci od prethodnog: \n");
          scanf("%d", &b);
     }

     int i;
     for (i = a + 1; i < b; i++) {
          printf("%d ", i);
     }

     return 0;
}