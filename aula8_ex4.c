#include <stdio.h>

int main(void) {
    
    for(int A = 0; A <= 1; A++){
            for(int B = 0; B<= 1; B++) {
                printf("A: %d B: %d    %d || %d = %d\n", A, B, A, B, A || B);
            }

    }    
}