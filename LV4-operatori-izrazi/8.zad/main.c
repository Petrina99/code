/* 8. Omogućiti korisniku unos 2 realna broja a  i  b. Korištenjem pomoćne varijable međusobno 
zamijeniti vrijednosti varijablama a i b. Ispisati na ekran vrijednosti varijabli prije i poslije zamjene.*/

#include <stdio.h>

int main(void) {

  double a, b, c;

  printf("Unesite dva realna broja: \n");
  scanf("%lf %lf", &a, &b);

  /* u c spremamo vrijednost pocetnog a, a postaje b, a b postaje c koji je isti kao i pocetni a */
  c = a;
  a = b;
  b = c;

  printf("Varijable prije zamjene: %.2lf i %.2lf \n", b, a);

  printf("Varijable poslije zamjene: %.2f i %.2f", a, b);

  return 0;
}