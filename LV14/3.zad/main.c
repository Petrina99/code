/* 3. Omogućiti korisniku unos željene duljine stringa (1 ≤ m < 500). Dinamički zauzeti potrebnu
memoriju (uzeti u obzir i mjesto potrebno za null znak). Potom, omogućiti korisniku unos rečenice
od maksimalno m znakova. Odrediti i na ekran ispisati koliko se puta pojavljuje razmak. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int m, i, razmak = 0;
  char *p;

  printf("Unesite zeljenu duljinu strina [1, 500>: \n");

  do {
    scanf("%d ", &m);
  } while (m < 1 || m >= 500);

  p = (char *) malloc((m + 1) * sizeof(char));

  if (p == NULL) {
    return 1;
  }

  fgets(p, m + 1, stdin);

  for (i = 0; *(p + i) != '\n'; i++) {
    if (*(p + i) == ' ') {
      razmak++;
    }
  }

  printf("Razmak se pojavio %d puta u stringu.", razmak);

  free(p);
  p = NULL;

  return 0;
}