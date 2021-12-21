#include <stdio.h>
#include <string.h>

/* 4. Napisati funkciju koja će odrediti i vratiti koliko se puta u danom stringu pojavljuje traženo slovo.
Traženo slovo također se predaje kao argument funkciji. Na primjeru u main() funkciji pokazati
uporabu napisane funkcije. Koristiti pokazivačku notaciju. */
int trazenoSlovo (char *a, char *b, int n);

int main(void) {

  char a[51];
  char b;

  int i, n;

  printf("Napisite string: \n");

  fgets(a, 51, stdin);

  printf("Unesite trazeno slovo: \n");
  scanf(" %c", &b);

  n = strlen(a) - 1;

  int rez = trazenoSlovo(a, &b, n);

  printf("%d", rez);
  return 0;
}

int trazenoSlovo (char *a, char *b, int n) {

  int i, rez = 0;

  for (i = 0; i < n; i++) {
    if (*(a + i) == *b) {
      rez++;
    }
  }

  return rez;
}