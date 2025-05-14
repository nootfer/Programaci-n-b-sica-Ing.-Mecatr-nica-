#include <stdio.h>
#include <time.h>

int main() {
    clock_t inicio, fin;
    double tiempo_transcurrido;

    inicio = clock();

 int x=17, y;
    int *p;
    p= &x;
    
    printf("El valor de x es %d\n", *p);
    y=*p+3;
    printf("El valor de y es %d\n", y);
    
    fin = clock();

    tiempo_transcurrido = ((double) (fin - inicio)) / CLOCKS_PER_SEC;

    printf("El tiempo de ejecución fue: %f segundos\n", tiempo_transcurrido);

    return 0;
}
