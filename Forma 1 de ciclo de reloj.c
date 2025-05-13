#include <stdio.h>
#include <time.h>

int main() {
    clock_t inicio, fin;
    double tiempo_transcurrido;

    inicio = clock();

    

    fin = clock();

    tiempo_transcurrido = ((double) (fin - inicio)) / CLOCKS_PER_SEC;

    printf("El tiempo de ejecución fue: %f segundos\n", tiempo_transcurrido);

    return 0;
}