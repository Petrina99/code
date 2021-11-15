#include <stdio.h>

/*  Omogućiti korisniku unos tri cijela broja koji predstavljaju stranice trokuta, pripaziti prilikom unosa 
da svaka stranica trokuta bude dva puta veća od prethodne unesene. Ispisati stranice trokuta na 
standardni izlaz u obrnutom smjeru od unosa.

  pripaziti prilikom unosa da svaka stranica trokuta bude dva puta veca od prethodne ????? koji kurac

  */

int main(void) {

  int a;
  int b;
  int c;

  printf("Unesite cijeli broj koji predstavlja stranicu trokuta a:\n");
  scanf("%d", &a);

  printf("Unesite stranicu b:\n");
  scanf("%d", &b);

  printf("Unesite stranicu c:\n");
  scanf("%d", &c);

  b = (a * 2) + b;
  c = (b * 2) + c;

  printf("Stranica c: %d, stranica b: %d, stranica a: %d", c, b, a);

  return 0;
}