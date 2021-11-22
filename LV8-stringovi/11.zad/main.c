#include <stdio.h>
#include <string.h>

/* 11.  Omogućiti korisniku unos jednog stringa od maksimalno 80 znakova. Potom dodatno omogućiti 
unos jednog znaka. Zamijeniti tim znakom sve znakove u stringu čija je ASCII vrijednost manja od 
aritmetičke sredine svih znakova. Na ekran ispisati izmijenjeni string. */

int main(void) {

  char a[81], z;

  int i, n, sum = 0;

  float sv = 0;

  printf("Unesite string od maksimalno 80 znakova: \n");
  fgets(a, 81, stdin);

  printf("Unesite jedan znak: ");
  scanf("%c", &z);

  n = strlen(a) - 1;

  for (i = 0; i < n; i++) {
    sum += a[i];
  }

  sv = sum / n;

  for (i = 0; i < n; i++) {
    if (a[i] < sv) {
      a[i] = z;
    }
  } 

  puts(a);

  return 0;
}
