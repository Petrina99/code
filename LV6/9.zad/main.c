#include <stdio.h>

int main(void) {
     
     int i, znamenka, bz, sum = 0;
     float avg;

     for (i = 100; i <= 999; i++) {
          znamenka = i % 10;

          if (znamenka % 3 == 0) {
               printf("%d ", i);
               sum += i;
               bz++;
          }
     } 

     avg = (float)sum / (float)bz;
     printf("\nAritmeticka sredina: %.2f", avg);
     return 0;
}