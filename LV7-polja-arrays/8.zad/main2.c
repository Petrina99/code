#include <stdio.h>

int main(void) {

  int a[20], n, i;
  int nula = 0, jed = 0, dva = 0, tri = 0, cet = 0, pet = 0, sest = 0, sed = 0, dev = 0;
  int b = 0;

  for (i = 0; i < 20; i++) {
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
        b++;
        break;
      case 9:
        dev++;
        break;
      default:
        break;
    }
  }

  printf("0: %d ponavljanja\n", nula);
  printf("1: %d ponavljanja\n", jed);
  printf("2: %d ponavljanja\n", dva);
  printf("3: %d ponavljanja\n", tri);
  printf("4: %d ponavljanja\n", cet);
  printf("5: %d ponavljanja\n", pet);
  printf("6: %d ponavljanja\n", sest);
  printf("7: %d ponavljanja\n", sed);
  printf("8: %d ponavljanja\n", b);
  printf("9: %d ponavljanja\n", dev);

  return 0;
}