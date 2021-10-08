#include <stdio.h>

/*Pokazati rad algoritma pomoću blok dijagrama koji od korisnika traži učitavanje M cijelih brojeva i 
broja N. Učitavanje broja M treba ponavljati sve dok je učitani broj M manji od 20 ili veći od 100. 
Nakon toga učitati M cijelih brojeva i svaki učitani broj pomnožiti s N i zbrojiti u varijablu SUM. Na 
kraju ispisati sumu. */

int main() {

  int sum = 0;
  int m;
  int n;
  int x;

  printf("Unesite bilo koji broj: \n");
  scanf(" %d", &m);

  printf("Unesite jos jedan broj: \n");
  scanf(" %d", &n);

  while (m < 20 || m > 100) {
    printf("Unesite nove brojeve: \n");
    scanf(" %d", &m);
    scanf(" %d", &n);
  } 

  for (int i = 0; i < m; i++) {
      printf("Unesite neki broj: \n");
      scanf(" %d", &x);
      sum = sum + (x * n);
    }

  printf("Suma svih brojeva koje ste unjeli je %d", sum);

  return 0;
}