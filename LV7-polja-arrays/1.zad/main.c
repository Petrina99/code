#include <stdio.h>

/* 1. Omogućiti korisniku unos vrijednosti elemenata u polje od 10 cijelih brojeva. Potom ispisati na 
ekran sve indekse kod kojih je vrijednost elemenata djeljiva s 5. */ 

int main(void) {

  int a[10], i;

  printf("unesite 10 cijelih brojeva: ");
  for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  printf("Brojevi kojima su indeksi djeljivi s 5: ");

  for (i = 1; i < 10; i++) {
    if (i % 5 == 0) {
      printf("%d ", a[i]);
    }
  }

  return 0;
}