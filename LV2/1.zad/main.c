/* Pronaći greške u sljedećem tekstu programa. 
  #include <stdio.h> 
 
  int main(void) 
  { 
  int a 
  
  Printf("Unesite cijeli broj:\n"); 
  
  scanf("%d", a); /* ovo je komentar 
  
  print(Unijeli ste broj %d\n, a); 
  
  return ; 
}
*/

/* rjesenje */
#include <stdio.h>

int main(void) {
  /* fali ; poslije a */
  int a;

  /* printf se pise malim slovom */
  printf("Unesite cijeli broj:\n");

  /* fali & (ampersand) pored a */
  scanf("%d", &a);

  /* nije print neg je printf */
  printf("Unijeli ste broj %d\n", a);

  /* fali 0 poslije return */
  return 0;
}