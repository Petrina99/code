#include <stdio.h>

/* 1. Napisati funkciju koja će vrijednost varijable (cijeli broj) koja joj se preda kao argument uvećati za
jedan, u slučaju da je pozitivna ili umanjiti za jedan u slučaju da je negativna. Funkcija ne treba
ništa vratiti nego treba promjenu načiniti na predanoj joj varijabli. Na primjeru u main() funkciji
pokazati uporabu napisane funkcije. */
void povecaj (int *x);

int main(void) {

  int m;

  int *p = &m;

  printf("Unesite cijeli broj: \n");
  scanf("%d", &m);

  povecaj(p);

  printf("%d", m);

  return 0;
}

void povecaj (int *x) {

  if (*x > 0) {
    *x += 1;
  }
  else {
    *x -= 1;
  }
} 