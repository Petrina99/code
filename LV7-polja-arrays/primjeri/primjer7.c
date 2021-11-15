#include <stdio.h>
#define VEL 25
/* Omogućiti  korisniku  unos  vrijednosti  elemenata  u  polje  od  25  realnih  brojeva.  Potom, 
omogućiti korisniku unos broja kojeg će se tražiti. Sekvencijalnim/slijednim pretraživanjem provjeriti 
postoji li traženi broj u polju te ispisati broj izvršenih provjera. */

int main(void) {

  // i je brojacka varijabla za for loop, z je broj izvrsenih provjera
  int i, f, z = 0;

  // deklariramo polje a velicne 25 i varijablu broj u koju spremamo broj koji se trazi
  float a[VEL], broj;

  printf("Unesite %d vrijednosti u polje", VEL);
  // trazimo od korisnika da popune polje vrijednostima
  for (i = 0; i < VEL; i++) {
    scanf("%f", &a[i]);
  }

  // unos broja koji se trazi
  printf("Unesite broj koji se trazi: ");
  scanf("%f", &broj);

  // prolazimo kroz svaki element u polju i usporedujemo ga sa vrijednosti koju trazimo
  // kad ga pronade (ako ga pronade) stavlja da je varijabla f = 1 i izlazi van iz loopa
  // te se svakim ponavljanjem se povecava varijabla z za jedan kojom brojimo izvrsene provjere
  for (i = 0; i < VEL; i++) {
    z++;
    f = 0;
    if (a[i] == broj) {
      f = 1;      
      break;
    }
  }

  // klasicni if else, ako je f == 1 sto znaci da je broj pronaden ak nije ispisi ovo drugo
  if (f == 1) {
    printf("Broj %.2f pronaden je nakon %d ponavljanja.", broj, z);
  } else {
    printf("Broj %.2f nije pronaden.", broj);
  }
  
  return 0;
}