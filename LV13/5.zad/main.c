/* 5. Napisati funkciju koja u predanom joj stringu postavlja sve znakove koji nisu slova u pseudo-slučajno
generirano veliko slovo. U svrhu testiranja u funkciji main() deklarirati polje od 50 elemenata tipa
char. Omogućiti korisniku unos stringa u dobiveno polje te ga iskoristiti u pozivu napisane funkcije.
Naknadno ispisati string na ekran */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void promjeniString (char *c);

int main(void) {

  char a[50];

  srand((unsigned) time(NULL));

  printf("Ispunite string: \n");

  fgets(a, 50, stdin);

  puts(a);

  promjeniString(a);

  puts(a);
  return 0;
}

void promjeniString (char *c) {

  int i;

  for (i = 0; *(c + i) != '\n'; i++) {

    if ((*(c + i) >= 'A' && *(c + i) <= 'Z') || (*(c + i) >= 'a' && *(c + i) <= 'z')) {
      continue;
    }else {
      *(c + i) = 65 + (float) rand() / RAND_MAX * (90 - 65);
    }
  }
}