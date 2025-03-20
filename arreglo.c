#include <stdio.h>

int main() {
    int arreglo[100];
    int i = 1;
    
    while (i < 100) {
        arreglo[i] = 100-i ; 
        printf("%d\n", arreglo[i]); 
        i++;
    }

    printf("Fin\n");
    return 0;
}