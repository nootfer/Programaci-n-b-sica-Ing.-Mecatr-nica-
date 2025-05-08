#include<stdio.h>
#include<stdlib.h>

struct CD{
    char titulo[1000];
    char artista[50];
    char num_canciones[1000];
    char anio[1000];
    char precio[1000];
};

int main(void){
    struct CD cd1;
    printf("Ingresa el título:\n");
    scanf("%s", &cd1.titulo);
    
    printf("Ingresa el nombre del artista:\n");
    scanf("%s", &cd1.artista);
    
    
    printf("Ingresa el número de canción:\n");
    scanf("%s", &cd1.num_canciones);
    
    
    printf("Ingresa el año;\n");
    scanf("%s", &cd1.anio);
    
    
    printf("Ingresa el precio:\n");
    scanf("%s", &cd1.precio);
    
    printf("%s\n", cd1.titulo);
    printf("%s\n", cd1.artista);
    printf("%s\n", cd1.num_canciones);
    printf("%s\n", cd1.anio);
    printf("%s\n", cd1.precio);
    
    return 0;
}
