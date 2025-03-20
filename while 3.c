#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 1;
    
    while (x <= 500) {
        int cuadrado = x * x;
        int cubo = x * x * x;
        
        printf("%d, %d, %d\n", x, cuadrado, cubo);
        
        x++; 
    }
    
    printf("Fin\n");
    system("Pause");  
    return 0;
}