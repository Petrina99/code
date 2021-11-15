/* 5.  Omogućiti korisniku unos ocjena koje su predstavljene velikim ili malim slovima od A do F te ispisati 
postotak za određenu ocjenu (A: 90 – 100, B: 80 – 89, C: 70 – 79, D: 60 – 69, F: 0 – 59). U slučaju da 
je unesen znak koji ne predstavlja ocjenu potrebno je ispisati poruku o pogrešci. Koristiti switch-
case. */ 

#include <stdio.h>

int main(void) {

  char a;

  printf("Unesite vasu ocjenu prikazanu slovima od A do F: \n");
  scanf(" %c", &a);

  switch(a) {
    case 'A': 
      printf("Postotak za vasu ocjenu je 90%% - 100%%");
      break;
    case 'a': 
      printf("Postotak za vasu ocjenu je 90%% - 100%%");
      break;
    case 'B':
      printf("Postotak za vasu ocjenu je 80%% - 89%%");
      break;
    case 'b':
      printf("Postotak za vasu ocjenu je 80%% - 89%%");
      break;
    case 'C':
      printf("Postotak za vasu ocjenu je 70%% - 79%%");
      break;
    case 'c':
      printf("Postotak za vasu ocjenu je 70%% - 79%%");
      break;
    case 'D':
      printf("Postotak za vasu ocjenu je 60%% - 69%%");
      break;
    case 'd':
      printf("Postotak za vasu ocjenu je 60%% - 69%%");
      break;
    case 'F':
      printf("Postotak za vasu ocjenu je 0%% - 59%%");
      break;
    case 'f':
      printf("Postotak za vasu ocjenu je 0%% - 59%%");
      break;
    default:
      printf("Unijeli ste znak koji ne predstavlja niti jednu ocjenu.");
  }

  return 0;
}