#include <stdio.h>

int main(void) {

     float broj; 

     float sum = 0;
     float avg = 0;

     int unosi = 0;

     while (unosi < 8) {

          printf("Unesite broj od -5 do 5: \n");
          scanf("%f", &broj);

          if (broj >= -5 && broj <= 5) {
               sum += broj;
               unosi++;
          } 
          else {
               printf("Broj koji ste unjeli ne pripada intervalu od -5 do 5. Probajte ponovno: \n");
               scanf("%f", &broj);
          }
     }

     avg = sum / 8;

     printf("Srednja vrijednost unesenih brojeva iznosi: %.2f", avg);

     return 0;
}