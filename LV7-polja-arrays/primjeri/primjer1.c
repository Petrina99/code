#include <stdio.h>

/* Deklarirati tri različita polja, različitih veličina i tipova podataka. Popuniti sva polja*/
int main(void) {

  int i;
  int ip[10];
  float fp[15];
  char cp[26];

  // punimo brojevima od 1 do 10
  for (i = 0; i < 10; i++) {
    ip[i] = i + 1;
  }

  // od 0.1 do 1.5
  for (i = 0; i < 15; i++) {
    fp[i] = i + 1 /10.0f;
  } 

  // slovima od A-Z (eng abeceda)
  for (i = 0; i < 26; i++) {
    cp[i] = 'A' + i;
  }

  // ispisujemo sva slova
  for (i = 0; i < 26; i++) {
    printf("%c ", cp[i]);
  }
  return 0;
}