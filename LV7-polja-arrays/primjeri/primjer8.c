/* Omogućiti korisniku unos vrijednosti elemenata u polje od 20 realnih brojeva. Nakon toga 
izračunati  standardnu  devijaciju  tih  vrijednosti  i  ispisati  ju  na  ekran.  Standardnu  devijaciju  računati 
prema korijen iz 1/n * suma od (x - x crtano) na kvadrat */

#include <stdio.h>
#include <math.h>

#define N 20

int main(void) {

  int i;
  float a[N], sum = 0, sumKvadrata = 0, avg, rez;

  // trazimo unos 20 elemenata koje stavljamo u niz
  printf("Unesite %d elemenata u niz: ", N);
  for (i = 0; i < N; i++) {
    scanf("%f", &a[i]);
  }

  // zbrajamo sumu svih vrijednosti polja
  for (i = 0; i < N; i++) {
    sum += a[i];
  }

  // racunamo srednju vrijednost
  avg = sum / N;

  // radimo sumu kvadrata svake vrijednosti polja oduzete od srednje vrijednosti
  for (i = 0; i < N; i++) {
    sumKvadrata += (a[i] - avg) * (a[i] - avg);
  }

  // samo djelimo sumu kvadrata sa N jer je tako pisalo u formuli za standarnu devijaciju
  rez = sqrt(sumKvadrata/N);

  printf("suma: %f ", sum);
  printf("suma kvadrata: %f ", sumKvadrata);
  printf("srednja vrijednost: %f ", avg);
  printf("rez: %f ", rez);

  return 0;
}