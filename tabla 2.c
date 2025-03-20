#include <stdio.h>

int main() {
    int arreglo[100];
    int i = 0;
    
    while (i < 100) {
        arreglo[i] = i * 2; 
        printf("%d\n", arreglo[i]); 
        i++;
    }

    printf("Fin\n");
    return 0;
}