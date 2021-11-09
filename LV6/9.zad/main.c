#include <stdio.h>

int main(void) {
     
     int i, znamenka;
     int broj = 0;

     float avg = 0;
     int sum = 0;

     for (i = 100; i < 1000; i++) {
          znamenka = i % 10;

          if (znamenka % 3 == 0 && znamenka != 0) {
               sum += i;
               printf("%d ", i);
               broj++;
          }
          else {
               continue;
          }
     }

     avg = sum / broj;
     printf("\nAritmeticka sredina brojeva iznosi %.2f", avg);

     return 0;
}