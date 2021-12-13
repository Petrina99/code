#include <stdio.h>
#include <string.h>

/* . Omogućiti korisniku unos stringa od 80 znakova, zatim ispisati string u obrnutom redoslijedu
koristeći pokazivačku notaciju */

int main(void) {

  char a[81], priv[81];

  int i, b, d = 0;

  fgets(a, 81, stdin);

  b = strlen(a);

  for (i = b - 1; i >= 0; i--) {
    *(priv + d) = *(a + i);
    d++;
  }

  *(priv + d) = '\0';
  
  for (i = 0; *(priv + i) != '\0'; i++) {
    printf("%c", *(priv + i));
  }

  return 0;
}