#include <stdio.h>
#define VEL 20
/* Omogućiti korisniku unos vrijednosti elemenata u polje od 20 realnih brojeva. Sortirati polje 
od najmanjeg prema najvećem i ispisati ga takvog na ekran */

int main(void) {

  int i, j;
  float a[VEL], priv;

  for (i = 0; i < VEL; i++) {
    scanf("%f", &a[i]);
  }

  for (i = 0; i < VEL - 1; i++) {
    for (j = i + 1; j < VEL; j++) {
      if (a[i] > a[j]) {
        priv = a[i];
        a[i] = a[j];
        a[j] = priv;
      }
    }
  }

  for (i = 0; i < VEL; i++) {
    printf("%.2f ", a[i]);
  }
  return 0;
}