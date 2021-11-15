#include <stdio.h>

/*  Omogućiti korisniku unos vrijednosti elemenata u polje od 20 realnih brojeva. Pronaći i 
ispisati na ekran najmanju vrijednost. */

int main(void) {

  int i;
  float fp[20], min;

  // user upisuje vrijednosti i to ponavljamo 20 puta jer imamo 20 mjesta u fp polju
  for (i = 0; i < 20; i++) {
    printf("Unesite vrjednost %d elementa: ", i + 1);
    scanf("%f", &fp[i]);
  }

  // minimum stavljamo da ima pocetnu vrjednost prvog clana niza
  min = fp[0];

  // nakon toga radimo loop koji prolazi kroz svaki clan polja i usporeduje ga s vrijednosti min
  // ako je trenutna vrijednost polja na a[i] mjestu manja od min vrijednost onda taj clan postaje min

  for (i = 1; i < 20; i++) {
    if (fp[i] < min) {
      min = fp[i];
    }
  }

  printf("Minimalna vrjednost je %.2f", min);

  return 0;
}