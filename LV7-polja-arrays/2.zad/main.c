#include <stdio.h>

/* 2. Omogućiti korisniku unos n (5 ≤ n ≤ 15) vrijednosti elemenata u polje realnih brojeva. Potom 
odrediti i na ekran ispisati koliko je vrijednosti veće od srednje vrijednosti svih elemenata. */

int main(void) {
  
  // n je broj vrijednosti, i brojacka var i z je brojac vrijednosti koje su vece od prosjeka iliti srednje vrj
  int n, i, z = 0;

  // postavljamo automatski da je niz 15 jer je to njegova maksimalna velicina
  float a[15], sv = 0;

  // ako user upise broj koji nije u intervalu trazi se ponovni unos
  printf("Odaberite broj n koji je 5 <= n >= 15\n");
  do {
    scanf("%d", &n);
  } while (n < 5 || n > 15);

  // popunjavanje tablice i zbrajanje sume svih unesenih brojeva
  printf("Unesite %d realnih brojeva da popunite polje: \n");
  for (i = 0; i < n; i++) {
    scanf("%f", &a[i]);
    sv += a[i]; 
  }

  // izracun srednje vrijednosti
  sv /= n;

  // trazimo brojeve koji su veci od srednje vrijednosti i ako nademo povecavamo brojac z
  for (i = 0; i < n; i++) {
    if (a[i] > sv) {
      z++;
    }
  }

  printf("%d vrijednosti je vece od srednje vrijednosti niza (%.2f).", z, sv);
  return 0;
}