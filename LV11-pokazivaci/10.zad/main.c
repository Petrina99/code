#include <stdio.h>

/* 10. Omogućiti korisniku unos 10 znakova koji moraju biti mala slova (ponoviti unos dok god se ne
unese malo slovo) te popuniti polje koje predstavlja string maksimalne duljine 11 znakova. Kreirati
novi string koji treba popuniti velikim slovima tako da se iz prvog stringa sva mala slova pretvore u
velika slova. Ispisati prvi i drugi string. Koristiti isključivo pokazivačku notaciju. */

int main(void) {

  int i;

  char a[11], b[11], n;

  printf("Unesite 10 malih slova: \n");

  for (i = 0; i < 10; i++) {

    do {
      scanf("%c", &n);
    } while (n <= 'a' || n >= 'z');

    *(a + i) = n;
  }

  for (i = 0; *(a + i) != '\0'; i++) {
    *(b + i) = *(a + i) - 32; 
  }

  *(b + i) = '\0';

  puts(a);
  puts(b);

  return 0;


  return 0;
}