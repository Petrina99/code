/* 4. Napisati funkciju koja će izračunati i vratiti površinu trokuta zadanog duljinama stranica. Ukoliko 
predane stranice ne čine trokut funkcija vraća vrijednost 0. U main() funkciji na primjeru prikazati 
uporabu napisane funkciju. Za izračun površine trokuta koristiti Heronovu formulu: 
 
𝑃 =√𝑠(𝑠−𝑎)(𝑠−𝑏)(𝑠−𝑐), 
 
gdje je s = (a+b+c)/2 poluopseg, a a, b i c su duljine stranica trokuta. Za izračun korijena koristiti 
funkciju sqrt() za koju je potrebno uključiti zaglavlje math.h, čiji je prototip: double sqrt(double); */

#include <stdio.h>
#include <math.h>

float povrsinaTrokuta(int a, int b, int c);

int main(void) {

  int a, b, c;
  float rez;

  printf("Unesite stranice trokuta: \n");
  scanf("%d %d %d", &a, &b, &c);

  rez = povrsinaTrokuta(a, b, c);

  printf("Povrsina trokuta iznosi %f", rez);

  return 0;
}

float povrsinaTrokuta(int a, int b, int c) {

  float rez, s, formula;

  if (a + c > b && a + b > c && b + c > a) {
    
    s = (a + b +c) / 2;

    formula = s * ((s - a) * (s - b) * (s - c));

    rez = sqrt(formula);

  } else {

    rez = 0;
    
  }

  return rez;
}