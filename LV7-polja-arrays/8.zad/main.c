#include <stdio.h>

/* 8. Omogućiti korisniku popunjavanje cjelobrojnog polja od 20 elemenata. Osigurati da svaka unesena 
vrijednost  bude  u  [0,  9], ukoliko nije, tražiti ponovni unos. Prebrojati i ispisati koliko se puta 
ponovila pojedina vrijednost i za svaku ispisati broj ponavljanja. */

int main(void) {

  int a[20], n, i;
  int nula = 0, jed = 0, dva = 0, tri = 0, cet = 0, pet = 0, sest = 0, sed = 0, osam = 0, dev = 0;

  for (i = 0; i < 3; i++) {
    printf("unesite broj u intervalu [0,9]: ");
    scanf("%d", &n);
    
    while (n < 0 || n > 9) {
      printf("broj koji ste unijeli ne pripada intervalu [0,9]\n ponovno unesite broj: ");
      scanf("%d", &n);
    }

    a[i] = n;
  }

  for (i = 0; i < 20; i++) {
    switch(a[i]) {
      case 0:
        nula++;
        break;
      case 1:
        jed++;
        break;
      case 2:
        dva++;
        break;
      case 3:
        tri++;
        break;
      case 4:
        cet++;
        break;
      case 5:
        pet++;
        break;
      case 6:
        sest++;
        break;
      case 7:
        sed++;
        break;
      case 8:
        osam++;
        break;
      case 9:
        dev++;
        break;
      default:
        break;
    }
  }

  printf("1: %d ponavljanja\n", jed);
  printf("2: %d ponavljanja\n", dva);
  printf("3: %d ponavljanja\n", tri);
  printf("4: %d ponavljanja\n", cet);
  printf("5: %d ponavljanja\n", pet);
  printf("6: %d ponavljanja\n", sest);
  printf("7: %d ponavljanja\n", sed);
  printf("8: %d ponavljanja\n", osam);
  printf("9: %d ponavljanja\n", dev);

  return 0;
}