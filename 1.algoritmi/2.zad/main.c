#include <stdio.h>

/* Pokazati rad algoritma pomoću blok dijagrama koji od korisnika zahtjeva unos duljine stranica A i 
B  dvaju  kvadrata,  te  nakon  unosa  stranica, tražiti od korisnika  unos  broja  pomoću kojeg će se 
odrediti jedna od slijedećih radnji. Ako se unese jedan od sljedećih brojeva: 
1. Izračunava i na ekran ispisuje zbroj opsega prvog i drugog kvadrata, 
2. Izračunava i na ekran ispisuje omjer površina prvog i drugog kvadrata. */

int main() {

  int a; 
  int b;
  int c;
  float r;

  printf("Unesite duljinu stranica kvadrata A: \n");
  scanf(" %d", &a);

  printf("Unesite duljinu stranica kvadrata B: \n");
  scanf(" %d", &b);

  printf("Unesite broj 1 ili 2 \n1. za izracun zbroja opsega kvadrata\n2. za izracun omjera povrsina kvadrata\n");
  scanf(" %d", &c);

  if (c == 1) {
    r = (4 * a) + (4 * b);
    printf("Zbroj opsega kvadrata iznosi %.f", r);
  } else {
    r = ((float)a * (float)a) / ((float)b * (float)b); 
    printf("Omjer povrsina kvadrata iznosi %.2f", r);
  }

  return 0;
}