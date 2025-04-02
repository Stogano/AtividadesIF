#include <stdio.h>
//&&
int main() {

    printf("A   B   A && B\n");
    
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            printf("%d   %d     %d\n", A, B, A && B);
        }
    }
    
    return 0;
}

