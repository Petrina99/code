/* Pronaći greške u sljedećem tekstu programa. */

/* #include <stdio> 
 
  int main(void){ 
    
  int a, 
  int b; 
    
  print("Unesite dvije cjelobrojne vrijednosti!"); 
    
  scan("%f, a&); 
  scanf("%d", b); 
    
  printf("&d &f", a, &b); 
    
  return 0; 
} */ 

/* fali .h */
#include <stdio.h>

int main(void) {
  
  /* fali ; poslije a */
  int a;
  int b;

  /* nije print nego printf */
  printf("Unesite dvije cjelobrojne vrijednosti!");

  /* nije scan nego scanf, & ide prije varijable a, varijabla a je integer tak da mora ic %d a ne %f */
  scanf("%d", &a);

  /* fali & ispred varijable b */
  scanf("%d", &b);

  /* ide %d a ne &d jer se & (ampersand) koristi za pridruzivanje vrjednosti nekoj varijabli,
     ide %d a ne &f jer je varijabla integer a ne float
     & ispred b je visak treba ic samo b jer mu ne pridruzujemo nista nego ga samo printamo u konzolu
  */
  printf("%d %d", a, b);

  return 0;
}