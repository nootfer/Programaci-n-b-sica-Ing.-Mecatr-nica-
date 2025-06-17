#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void tablaSinApuntadores() {
    int num;
    printf("Ingresa un número para ver su tabla de multiplicar: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

void tablaConApuntadores() {
    int num;
    int *ptr;
    printf("Ingresa un número para ver su tabla de multiplicar: ");
    scanf("%d", &num);
    ptr = &num;
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", *ptr, i, (*ptr) * i);
    }
}

void productosYTotal() {
    char nombres[5][50];  
    float precios[5];
    int cantidad;
    float total = 0;

    printf("¿Cuántos productos vas a ingresar? (1 a 5): ");
    scanf("%d", &cantidad);

    if (cantidad < 1 || cantidad > 5) {
        printf("Cantidad inválida.\n");
        return;
    }

    for (int i = 0; i < cantidad; i++) {
        printf("Nombre del producto %d: ", i + 1);
        scanf(" %[^\n]", nombres[i]);  
        printf("Precio del producto %d: $", i + 1);
        scanf("%f", &precios[i]);
        total += precios[i];
    }

    printf("\nLista de productos:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%d. %s - $%.2f\n", i + 1, nombres[i], precios[i]);
    }
    printf("Total: $%.2f\n", total);
}

int main() {
    int opcion;
    clock_t inicio, fin;
    double tiempo;

    do {
        printf("\n--- MENÚ DE OPCIONES ---\n");
        printf("1. Tabla de multiplicar (sin apuntadores)\n");
        printf("2. Tabla de multiplicar (con apuntadores)\n");
        printf("3. Ingresar productos y sumar precios\n");
        printf("4. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        inicio = clock(); 

        switch (opcion) {
            case 1:
                tablaSinApuntadores();
                break;
            case 2:
                tablaConApuntadores();
                break;
            case 3:
                productosYTotal();
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida.\n");
                break;
        }

        fin = clock(); 

        tiempo = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
        printf("Tiempo de ejecución: %.6f segundos\n", tiempo);

    } while (opcion != 4);

    return 0;
}