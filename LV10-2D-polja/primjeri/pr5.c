/*  Omogućiti korisniku unos elemenata kvadratne matrice dimenzija 4x4. Izračunati i na ekran 
ispisati zbroj elemenata glavne dijagonale i produkt elemenata sporedne dijagonale. */

#include <stdio.h>


int main(void) {

  float a[4][4], zgd, psd;

  int i, j;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%f", &a[i][j]);
    }
  }

  zgd = 0;

  for (i = 0; i < 4; i++) {
    zgd += a[i][i];
  }

  psd = 1;

  for (i = 0; i < 4; i++) {
    psd *= a[i][4-1-i];
  }

  printf("Zbroj elem. gl. dijag. je %f, a produkt sporedne dijag. %f\n", zgd, psd); 

  return 0;
}