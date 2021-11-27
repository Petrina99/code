/* 12.  Napisati funkciju koja za predani joj broj zbraja sve znamenke broja. Ako je zbroj višeznamenkast, 
proces se ponavlja se dok se ne dođe  do  jednoznamenkastog  zbroja.  Primjerice,  za  argument 
987987 funkcija bi trebala vratiti vrijednost 3, jer je zbroj nakon prvog zbrajanja znamenki 48 (koji 
je  dvoznamenkast),  zatim  kada  se  njegove znamenke zbroje dobije se broj 12 čije se znamenke 
opet moraju zbrojiti što  daje  vrijednost  3.  U  svrhu  testiranja  u  funkciji  main()  pozvati  napisanu 
funkciju s 579859 kao argumentom i na ekran ispisati povratnu vrijednost.  */

#include <stdio.h>

int zbrajanjeZnamenki(int a);

int main(void) {

  int a = 579859;

  int rez = zbrajanjeZnamenki(a);

  printf("%d", rez);

  return 0;
}

int zbrajanjeZnamenki(int a) {

  int zbroj = 0, z;

  while (a != 0) {
    z = a % 10;
    a /= 10;
    zbroj += z;

    if (a == 0 && zbroj > 9) {
      a = zbroj;
      zbroj = 0;
    }
  }

  return zbroj;
}