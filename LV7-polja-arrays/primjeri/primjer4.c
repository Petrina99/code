#include <stdio.h>
#define VEL_POLJA 50
/* Omogućiti korisniku unos n (0 < n ≤ 50) vrijednosti elemenata u polje realnih brojeva. Pronaći 
i ispisati na ekran najveću vrijednost.*/

int main(void) {

  int i, n;
  float max, fp[VEL_POLJA];

  printf("Unesite zeljeni broj elemenata: \n");

  // sa while tjeramo usera da upise broj koji je veci od 0 i manji i jednak od 50
  // prijevod 'nudi useru input sve dok input nije unutar intervala < 0, 50 ]
  do {
    scanf("%d", &n);
  } while (n < 1 || n >= 50);

  // nakon sto user upise n koji ima vrijednost u intervalu < 0, 50] onda dajemo useru da upise n cijeli brojeva
  // svaki broj koji user upise sprema se na i mjesto u polju
  for (i = 0; i < n; i++) {
    printf("Vrijednost elementa broj %d: ", i + 1);
    scanf("%f", &fp[i]);
  }

  // nakon sto smo popunili cijelo polje brojevima onda stavljamo vrijednost max da bude vrijednost 0-tog (1.)
  // mjesta u polju
  max = fp[0];

  // isto kao i kad smo trazili najmanji broj samo stavljamo ako je trenutni broj na i mjestu u polju veci od
  // trenutne vrijednost max-a onda ta vrijednost postaje max
  for (i = 1; i < n; i++) {
    if (fp[i] > max) {
      max = fp[i];
    }
  }

  printf("Najveca vrijednost %.2f", max);
  return 0;
}