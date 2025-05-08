#include<stdio.h>
#include<string.h>
int main() {
    char mantener[30];
    char palabra1[30];
    char palabra2[30];
    printf("Escriba una palabra: ");
    scanf("%s", &palabra1);
    printf("Escriba otra palabra: ");
    scanf("%s", &palabra2);
    printf("\tAntes\n");
    printf("\tPalabra1: %s\n", palabra1);
    printf("\tPalabra2: %s\n", palabra2);
    strcpy(mantener, palabra1);
    strcpy(palabra1, palabra2);
    strcpy(palabra2, mantener);
    printf("\tDespués\n");
    printf("\tPalabra1: %s\n", palabra1);
    printf("\tPalabra2: %s\n ", palabra2);
    
    printf("\n");
    
    return 0;
    
}