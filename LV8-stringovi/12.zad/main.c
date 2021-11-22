#include <stdio.h>
#include <string.h>
#include <math.h>

/* 12.  Omogućiti korisniku unos jednog stringa od maksimalno 60 znakova. Potom prebrojati sve 
samoglasnike u stringu. Ako je broj samoglasnika q, zamijeniti sve znakove u stringu čija je ASCII 
vrijednost veća od r = max{32, 10q} sa znakom čija je ASCII vrijednost jednaka r. Na ekran ispisati 
izmijenjeni string. */

int main(void) {

  char a[61];

  int i, r, q = 0;

  printf("Unesite string od max 60 znakova: \n");
  fgets(a, 61, stdin);

  for (i = 0; i < strlen(a) - 1; i++) {
    switch(a[i]) {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        q++;
    }
  }

  q *= 10;

  r = 32 > q ? 32 : q;

  for (i = 0; i < strlen(a) - 1; i++) {
    
    if (a[i] > r) {
      a[i] = r;
    }
  }

  puts(a);

  return 0;
}