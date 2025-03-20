#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1= 0;
    
    while (numero1 < 1000 ) {
        
        printf("%d, ", numero1);
        
        numero1+=3; 
        
        
    } 
   
    printf("Fin\n");
    system("Pause");  
    return 0;
}