#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    char *arreglo;
    char *ptr;
    
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &x);

    
    arreglo = (char *)malloc(x * sizeof(char));

    if (arreglo == NULL) {
        return 1;
    }

    printf("Ingresa %d letras:\n", x);
    ptr = arreglo;
    for (int i = 0; i < x; i++) {
        printf("Letra %d: ", i + 1);
        scanf(" %c", ptr); 
        ptr++;
    }
    
    printf("Arreglo en orden inverso:\n");
    ptr = arreglo + x - 1; 
    for (int i = x - 1; i >= 0; i--) {
        printf("%c ", *ptr);
        ptr--;
    }
    printf("\n");
    free(arreglo);

    return 0;
}