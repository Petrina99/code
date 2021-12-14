#include <stdio.h>
#include <math.h>
#define N 10
/* 11. U funkciji main() deklarirati polje od 10 elemenata i omogućiti korisniku njegovo popunjavanje.
Potrebno je iskoristiti popunjeno polje u napisanom izraz u nastavku teksta te ispisati na ekran
povratnu vrijednost. Koristiti isključivo pokazivačku notaciju. Izraz slijedi: 
  f(x) = xn * suma [n - 1, i = 1] (i * xi^2 - 1), x = x1,......xn
*/

int main(void) {

  float a[N], rez, sum = 0;

  int i;

  printf("Popunite polje: \n");

  for (i = 0; i < N; i++) {
    scanf("%f", a + i);
  }

  for (i = 1; i < N - 1; i++) {
    sum += fabs((i * (pow(*(a + i), 2)) - 1));
  }

  printf("%.2f ", sum);

  float x = *(a + N - 1);

  sum *= x;

  printf("%.2f ", sum);
  return 0;
}
