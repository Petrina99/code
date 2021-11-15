#include <stdio.h>

int main(void) {
    
    int a, i, prost;
    
    printf("Unesite neki cijeli broj: ");
    scanf("%d", &a);
    
    if (a > 1) {
        
        for (i = 2; i <= a/2; i++) {
            
            if (a % i == 0) {
                prost = 0;
                break;
            }
            else {
                prost = 1;
            }
        }
        
        if (prost == 0) {
            printf("nije prost broj");
        }
        else {
            printf("prost broj");
        }
    }
    else {
        printf("Unijeli ste broj koji je manji od 2");
    }
    
    return 0;
}