#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
int main(){
    char cadena[10];
    
    printf("Un int ocupa %d  bytes\n", sizeof(int)); 
    printf("Un char ocupa %d bytes\n", sizeof(char)); 
    printf("Un float ocupa %d bytes\n", sizeof(float)); 
    printf("Un double ocupa %d bytes\n", sizeof(double)); 
    printf("Cadena ocupa %d bytes\n", sizeof(cadena)); 
    
    
    printf("\n");
    return 0;
}