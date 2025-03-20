#include <stdio.h>
#include <stdlib.h> 

int main() {
    int numero=1;
    
    while(numero<=1000){
        printf("%d, ", numero);
        numero++;
    }
    printf("Fin \n");
    system("Pause");  
    return 0;
}