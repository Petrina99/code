#include <stdio.h> 

/* 1. Pronaći greške u sljedećem tekstu programa. */

/*
int main(void) 
{ 
const int a = 1101 
char znak = A; 
double broj; 
 
printf("Unesite realni broj: "); 
scanf("%f", broj); 
printf("Unijeli ste: %f"\n, broj); 
 
return 0; 
}*/

int main(void) {

  /* fali dvotocka poslije izraza*/
  const int a = 1101;

  /* A mora ic izmedu single quotesa*/
  char znak = 'A';
  double broj;

  printf("Unesite realni broj: ");

  /* fali ampersand(&) ispred varijable i mora ic %lf jer je double*/
  scanf("%lf", &broj);

  /* \n mora bit unutar navodnika i %lf mora ic takoder */
  printf("Unijeli sste: %lf\n", broj);

  return 0;
}