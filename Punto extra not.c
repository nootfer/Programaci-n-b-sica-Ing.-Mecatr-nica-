#include <stdio.h>
#include <stdlib.h> 

int main() {
    int HST;
    double PH = 72;  
    printf("Ingrese sus horas semanales trabajadas: ");
    scanf("%d", &HST);

    if (HST <= 40) {
        printf("Tu salario es: %d\n", HST * PH);  
    } else {
        double salario = (40 * PH) + (1.5 * PH * (HST - 40)); 
        printf("Tu salario es: %f\n", salario); 
    }

    system("Pause");  
    return 0;
}