#include<stdio.h>
#include<string.h>
int main() {
    int len;
    char origen[500];
    char destino[5000];
    printf("Ingrese una palabra: ");
    scanf("%s", &origen);
    printf("Ingrese otra palabra: ");
    scanf("%s", &destino);
    len=strlen(origen);
    for(int i=0; i<len; i++){
    strcat(origen, destino);
    }
    printf("destino: %s ",  origen); 
    printf("\n");
    
    return 0;
    
}