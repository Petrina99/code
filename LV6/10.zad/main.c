#include <stdio.h>

int main(void) {

     int a, obrnuti = 0;
     
     printf("Unesite neki prirodan broj: ");
     scanf("%d", &a);

     while (a < 0) {
          printf("molim vas unesite prirodan broj");
          scanf("%d", &a);
     }

     while (a != 0) {
          obrnuti = (obrnuti * 10) + (a % 10);
          a /= 10;
     }

     printf("Obrnuti broj: %d", obrnuti);

     return 0;
}