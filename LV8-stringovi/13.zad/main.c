#include <stdio.h>
#include <string.h>

/* 13.  Omogućiti korisniku unos jednog stringa od maksimalno 200 znakova. Stvoriti novi string na 
temelju originalnog tako da se izuzmu sva pojavljivanja znaka koji se prvi put javlja u originalnom 
stringu. Ispisati dobiveni string na ekran. Primjerice ako je unesen string "ybdsytxyo", novi string 
bi bio "bdstxo". */

int main(void) {

  char a[201], b[201], priv[201];

  int i, j, n = 0, k;

  fgets(a, 201, stdin);

  // ybdsytxyo
  for (i = 0; a[i] != '\0'; i++) {

    for (j = 0; a[j] != '\0'; j++) {

      if (a[j] == a[i]) {

        if (i == j) {
          continue;
        } else {
          priv[n] = a[i];
          n++;
        }
      }
    
    }
  }
  
  n = 0;
  k = 0;

  for (i = 0; a[i] != '\0'; i++) {

    for (j = 0; priv[j] != '\0'; j++) {
      
      if (a[i] == priv[j]) {
        k = 1;
      } else {
        k = 0;
      }
    }

    if (k == 0) {
      b[n] = a[i];
      n++;
    }
  }

  printf("%.*s", strlen(b), b);

  return 0;
}