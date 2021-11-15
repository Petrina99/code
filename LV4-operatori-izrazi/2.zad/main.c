/* 2. Pronaći greške u sljedećem tekstu programa. 
    #include <studio.h> 
 
  int main{ 
 
  a = 5; 
  b = 7; 
  float c; 
    
  c = a / b; 
    
  print("%f", c >= 0.1f && c <= 1.0f) 
  
  return 0; 
  }

*/

/* nije studio.h neg je stdio.h */
#include <stdio.h>

/* fali zagrada nakon imenovanja funkcije main */
int main(void) {
  
  /* fali float ispred a i b iako smo mogli pisat i int pa radit typecasting kod racunanja al posto nije navedeno nis u zadatku stavio sam float */
  float a = 5;
  float b = 7;
  float c;

  /* ak nam je c float onda i a i b koje djelimo da bi dobili vrijednost c moraju bit float */
  c = a / b;

  /* nemoze ic %f jer ce nam ovaj izraz pored (c >= 0.1f && c <= 1.0f) vratit 1 ili 0 koji su int */
  printf("%d", c >= 0.1f && c <= 1.0f);
  
  return 0;
}