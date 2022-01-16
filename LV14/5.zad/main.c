/* 5. Napisati funkciju koja u predanom joj stringu postavlja sve znakove u pseudo-slučajno generirane
znamenke (pripaziti da prvi znak u stringu ne bude '0'). U glavnom dijelu programa omogućiti
korisniku unos broja n (1 <= n <= 11), te dinamički zauzeti memoriju za n podataka tipa char koji će
predstavljati string. Iskoristiti string pri pozivu napisane funkcije i naknadno ispisati izmijenjeni
string. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void izmjeniString(char *c, int n);

int main(void) {

  int n;

  char *c;

  srand((unsigned) time(NULL));

  printf("Unesite n [1, 11]: \n");

  do {
    scanf("%d ", &n);
  } while (n < 1 || n > 11);

  c = (char *) malloc(n * sizeof(char));

  if (c == NULL) {
    return 1;
  }

  fgets(c, n + 1, stdin);

  puts(c);

  izmjeniString(c, n);

  puts(c);

  free(c);

  return 0;
}

void izmjeniString (char *c, int n) {

  int i;
  
  do {
    for (i = 0; i < n; i++) {
      *(c + i) = 48 + (float) rand() / RAND_MAX * (57 - 48);
    }
  } while (*(c + 0) == '0');
  
}