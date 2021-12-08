#include <stdio.h>

/* 6. Omogućiti korisniku unos elemenata matrice (2-D polja) A dimenzije 3 × 4. Potom izračunati i na 
ekran ispisati novu matricu B u  kojoj  će  vrijednosti  svakog  retka  biti  zapisane  obrnutim 
redoslijedom u odnosu na A (prvi element u retku će postati zadnji i tako redom).*/


int main(void) {

  int a[3][4], b[3][4], i, j, k = 0, h;

  printf("Ispunite matricu: \n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  for (i = 2; i >= 0; i--) {
    h = 0;
    
    for (j = 3; j >= 0; j--) {
      b[k][h] = a[i][j];
      h++;  
    }

    k++;
  }
  
  printf("Pocetna matrica: \n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", a[i][j]);
    }

    printf("\n");
  }

  printf("Obrnuta matrica: \n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d ", b[i][j]);
    }

    printf("\n");
  }

  return 0;
}