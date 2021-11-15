#include <stdio.h>

/* Omogućiti korisniku unos n (4 ≤ n < 21) vrijednosti elemenata u polje realnih brojeva. Povećati 
vrijednost svakog elemenata većeg od srednje vrijednosti za 10%, a ostalim smanjiti vrijednost za 
10%. */

int main(void) {

  // n varijabla za broj vrijednosti, i brojacka var
  int n, i;

  // a je polje koje stavljamo da ima maksimalno 20 vrijednosti u sebi
  // sv varijabla za srednju vrj, post je varijabla u koju spremamo postotak broja
  float a[20], sv = 0, post;

  do {
    printf("Unesite cijeli broj n iz intervala 4 <= n < 21: ");
    scanf("%d", &n);
  } while (n < 4 || n >= 21);
  
  printf("Unesite %d realnih brojeva da popunite polje: \n", n);

  // popunjavanje polja i racunanje sume
  for (i = 0; i < n; i++) {
    scanf("%f", &a[i]);
    sv += a[i];
  }

  // racunanje srednje vrj
  sv /= n;

  // ako je vece od sv zbrajamo sa post, ako je manje oduzimamo
  for (i = 0; i < n; i++) {

    if (a[i] > sv) {
      post = a[i] * 0.1;
      a[i] += post;
    } 
    else {
      post = a[i] * 0.1;
      a[i] -= post;
    }
  }

  for (i = 0; i < n; i++) {
    printf("%f ", a[i]);
  }

  return 0;
}