#include <stdio.h>

int main(void) {

     int a, znamenka;
     int produkt = 1;

     scanf("%d", &a);

     while (a != 0) {
          znamenka = a % 10;
          a /= 10;
          produkt *= znamenka;
     }

     printf("Prodkut znamenki iznosi: %d", produkt);

     return 0;
}