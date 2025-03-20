#include <stdio.h>
#include <stdlib.h> 

int main() {
    int descuento=10;
    int descuentoCliente=20;
    int cliente=0;
    int z=0;
    z=(cliente)? descuentoCliente:descuento;
    printf("el descuento es de %d \% \n", z);
    system("Pause");  
    return 0;
}