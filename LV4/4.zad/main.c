/* 4. Omogućiti korisniku unos mase u kilogramima te visine u metrima. Izračunati te ispisati na ekran 
indeks tjelesne mase l = m / (h2), gdje je m masa, a h visina. */

#include <stdio.h>


int main(void) {

  float masa;
  float visina;

  float rez;
  printf("Unesite svoju masu u kg: ");
  scanf("%f", &masa);

  printf("Unesite svoju visinu u metrima: ");
  scanf("%f", &visina);

  rez = masa / (visina * visina);

  /* tu sam stavio da mi ispise sam 2 decimale al moze ic i samo %f */
  printf("Vas indeks tjelesne mase iznosi: %.2f", rez);

  return 0;
}