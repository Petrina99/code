/* 11.  Napisati  funkciju  koja  za  predani  joj  cijeli  broj  pretvara  broj  u  binarni  ekvivalent.  Funkcija  treba 
binarni ekvivalent vratiti kao cijeli broj do maksimalno 8 znamenaka. U svrhu testiranja u funkciji 
main() tražiti od korisnika unos broja iz intervala [1, 128] te pozvati funkciju s unesenim brojem 
kao argumentom  te na ekran ispisati povratnu vrijednost.  */

#include <stdio.h>

void binarni(int n);

int main(void) {

  int n;

  printf("Unesite broj u intervalu od 1 do 128: \n");
  
  do {
    scanf("%d", &n);
  } while (n < 1 || n > 128);

  binarni(n);

  return 0;
}

void binarni(int n) {

  int i = 0, j, a[10];

  while(n != 0) {
    a[i] = n % 2;
    n /= 2;
    i++;
  }

  for (j = i - 1; j >= 0; j--) {
    printf("%d", a[j]);
  }

  return;
}