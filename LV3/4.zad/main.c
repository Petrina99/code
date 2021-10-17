#include <stdio.h>

#define F 20.421E-5
/* 4.  Kreirati na dva različita načina različite realne simboličke konstante napisane znanstvenom notacijom. 
Ispisati na ekran njihove vrijednosti i koliko bajta memorije zauzimaju. */

int main(void) {

  const float A = 1.67145E-25;

  printf("Konstanta A: %e zauzima %lu bajta.\n", A, sizeof(A));

  printf("Konstanta F: %e zauzima %lu bajta.\n", F, sizeof(F));

  return 0;
}