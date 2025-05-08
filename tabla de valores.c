#include <stdio.h>

int main() {
    int A; 

    printf("A\tA+2\tA+4\tA+6\n");

    for (A = 3; A <= 12; A += 3) { 
        printf("%d\t%d\t%d\t%d\n", A, A + 2, A + 4, A + 6);
    }

    return 0;
}