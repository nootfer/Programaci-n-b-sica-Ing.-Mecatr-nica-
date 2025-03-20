#include <stdio.h>

int main() {
    int sueldo;
    int tiempo;

    printf("¿Cuántos años llevas trabajando? ");
    scanf("%d", &tiempo);

    if (tiempo >= 5) {
        printf("¿Cuál es su sueldo? ");
        scanf("%d", &sueldo);
        int x = sueldo*0.1; 
        if (x >= 1000) {
            printf("¡Felicidades, puedes acceder al crédito hipotecario!\n");
        } else {
            printf("Lo sentimos, no pudo ser beneficiario del crédito hipotecario\n");
        }
    } else {
        printf("Lo sentimos, no pudo ser beneficiario del crédito hipotecario\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
    