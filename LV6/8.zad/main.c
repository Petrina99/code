#include <stdio.h>

int main(void) {

     float a, b, c;

     scanf("%f %f %f", &a, &b, &c);

     while (a + b < c || a + c < b || b + c < a) {
          printf("ne postoji takav trokut, molim vas unesite neke druge stranice: ");
          scanf("%f %f %f", &a, &b, &c);
     }

     if (a == b && b == c) {
          printf("jednakostranican");
     }
     else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
          printf("jednakokracan");
     }
     else {
          printf("raznostranican");
     }

     return 0;
}