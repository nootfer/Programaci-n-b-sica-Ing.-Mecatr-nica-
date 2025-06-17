#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, i;
    int *arreglo;

    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &x);

    arreglo = (int *)malloc(x*sizeof(int));
    if (arreglo == NULL) {
        exit(1);
    }

    for (i = 0; i < x; i++) {
        printf("Ingresa el valor para el elemento [%d]: ", i);
        scanf("%d", &arreglo[i]);
    }

    printf("Los valores del arreglo son:\n");
    for (i = 0; i < x; i++) {
        printf("Elemento [%d]: %d\n", i, arreglo[i]);
    }

    free(arreglo); 

    return 0;
}
