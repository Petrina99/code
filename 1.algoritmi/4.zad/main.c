#include <stdio.h>

/*Pokazati  rad  algoritma  pomoću blok dijagrama koji od korisnika  zahtjeva  unos  broja  M.  Od 
korisnika tražiti unos M brojeva koje je potrebno zbrojiti u jednu varijablu SUM te nakon zbrajanja 
potrebno je ispisati vrijednost varijable SUM. */

int main() {

  int m;
  int sum = 0;
  int x;

  printf("Unesite bilo koji broj: \n");
  scanf(" %d", &m);

  for (int i = 0; i < m; i++) {
    printf("Unesite bilo koji broj: ");
    scanf(" %d", &x);
    sum = sum + x;
  }

  printf("Suma svih brojeva koje ste unjeli iznosi: %d", sum);

  return 0;
}