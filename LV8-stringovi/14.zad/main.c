#include <stdio.h>
#include <string.h>

/* 14.  Omogućiti korisniku unos stringa od maksimalno 180 znakova. Provjeriti nalazili se negdje u stringu 
znak dvotočke (:), te ako se on pronađe potrebno je sve iza tog znaka zapisati u novi string te ga 
ispisati na ekran. Primjerice za string "Programiranje 1:Laboratorijske vjezbe 8" novi string bi bio 
"Laboratorijske  vjezbe  8". Ukoliko u stringu nema dvotočke ispisati samo prikladnu poruku na 
ekran. */

int main(void) {

  char a[181], b[181];

  int i, j = 0, n = 0;

  printf("Unesite string od max 180 znakova: \n");
  fgets(a, 181, stdin);

  for (i = 0; a[i] != '\0'; i++) {
    
    if (a[i] == ':') {
      n = i;
      break;
    }
  } 


  for (i = n + 1; a[i] != '\0'; i++) {
    b[j] = a[i];
    j++;
  }

  if (n != 0) {
    printf("%.*s", strlen(b), b);
  } else {
    printf("U stringu se ne nalazi dvotocka");
  }

  return 0;
}