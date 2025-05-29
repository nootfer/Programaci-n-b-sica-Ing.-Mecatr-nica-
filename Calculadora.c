#include <stdio.h>
#include<math.h>
#include<stdlib.h>

void suma();
void resta();
void multiplicacion();
void division();

int main() {
    int opcion;

    do {
        printf("\n--- Calculadora ---\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicación\n");
        printf("4. División\n");
        printf("5. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                suma();
                break;
            case 2:
                resta();
                break;
            case 3:
                multiplicacion();
                break;
            case 4:
                division();
                break;
            case 5:
                printf("Saliendo de la calculadora.\n");
                break;
            default:
                printf("Opción inválida. Intenta de nuevo.\n");
        }

    } while(opcion != 5);
    return 0;
}


void suma() {
    float a, b;
    printf("Ingresa una cifra para sumar: ");
    scanf("%f", &a);
    printf("Ingresa otra cifra para sumar: ");
    scanf("%f", &b);
    printf("Resultado: %.2f\n", a + b);
}

void resta() {
    float a, b;
    printf("Ingresa una cifra para restar: ");
    scanf("%f", &a);
    printf("Ingresa otra cifra para restar: ");
    scanf("%f", &b);
    printf("Resultado: %.2f\n", a - b);
}

void multiplicacion() {
    float a, b;
    printf("Ingresa una cifra para multiplicar: ");
    scanf("%f", &a);
    printf("Ingresa otra cifra para multiplicar: ");
    scanf("%f", &b);
    printf("Resultado: %.2f\n", a * b);
}

void division() {
    float a, b;
    printf("Ingresa una cifra para dividir: ");
    scanf("%f", &a);
    printf("Ingresa otra cifra para dividir: ");
    scanf("%f", &b);
    if (b != 0) {
        printf("Resultado: %.2f\n", a / b);
    } else {
        printf("Error: No se puede dividir por cero.\n");
    }
}