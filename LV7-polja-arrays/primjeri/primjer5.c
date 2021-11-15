#include <stdio.h>
#define VEL 20
/* Omogućiti korisniku unos vrijednosti elemenata u polje od 20 realnih brojeva. Sortirati polje 
od najmanjeg prema najvećem i ispisati ga takvog na ekran */

// primjer selection sorta

int main(void) {

  // deklariramo 2 brojacke varijable za nase for loopove
  int i, j;

  // deklariramo polje a koje ima velicinu od 20 mjesta, i varijablu priv (privremeno) gdje spremamo trenutnu
  // vrijednost u nasem for loopu
  float a[VEL], priv;

  // korisnik puni polje vrijednostima
  for (i = 0; i < VEL; i++) {
    scanf("%f", &a[i]);
  }

  // radimo loop u loopu
  /* prvi loop sa brojacem i redom gleda vrijednosti polja te onda loop sa brojecem j usporeduje taj broj sa ostalim elementima polja */
  // ako je vrijednost a[i] veca od vrijednosti a[j] zamjenjujemo im mjesta pomocu varijable priv u koju privremeno
  // spremamo vrijednost a[i]

  /* npr. imamo polje a[5] = { 3, 2, 0, 4, 5 }
     prvi loop uzima vrijednost nultog mjesta polja iliti a[i] (i = 0) (a[0] = 3) i usporeduje ga redom sa ostalim vrijednostima
     drugi loop ima vrijednost i + 1 sto znaci 0 + 1 (j = 1) a[j] = a[1] = 2
     a[i] > a[j] (3 > 2) i onda 3 stavljamo u privremenu varijablu sto znaci da je priv = 3
     na mjestu a[0] stavljamo vrijednost a[j] sto je 2
     a na mjesto a[1] stavljamo vrijednost 3
     i onda sljedeci loop nam je i = 1, i j = 2 i tak radimo skroz dok ne prodemo kroz sve iteme u polju
  */
  for (i = 0; i < VEL - 1; i++) {
    for (j = i + 1; j < VEL; j++) {
      if (a[i] > a[j]) {
        priv = a[i];
        a[i] = a[j];
        a[j] = priv;
      }
    }
  }

  // ispisujemo novo sortirano polje 
  for (i = 0; i < VEL; i++) {
    printf("%.2f ", a[i]);
  }

  return 0;
}