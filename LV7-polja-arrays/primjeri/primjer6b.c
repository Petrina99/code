#include <stdio.h>
#define VEL 10

// sad radimo isto kao i prosli primjer samo od najmanjeg prema najveceg
// koristimo bubble sort

int main(void) {

  int a[VEL] = { 2, 6, 3, -3, -6, 0, 5, 92, 99, -7 };
  int priv, i, f;

  do {
    f = 0;
    for (i = 0; i < VEL - 1; i++) {
      if (a[i] > a[i + 1]) {
        priv = a[i];
        a[i] = a[i + 1];
        a[i + 1] = priv;
        f = 1;
      }
    }
  } while (f == 1);

  for (i = 0; i < VEL; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}