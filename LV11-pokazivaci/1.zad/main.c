#include <stdio.h>

/* 1. Deklarirati i inicijalizirati realnu varijablu te pokazivač na nju. Koristeći operator uvećavanja
(inkrementiranja) povećati vrijednost varijable preko pokazivača. (Napomena: operator (sufiks)
uvećavanja ima veći prioritet u odnosu na operator dereferenciranja pa je potrebno koristiti
zagrade). */

int main(void) {

  float a = 4.2;

  float *p = &a;

  (*p)++;

  printf("%.1f", *p);

  return 0;
}