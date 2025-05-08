#include<stdio.h>
#include<string.h>
int main() {
    int n;
    char cad[20];
    printf("Ingresa una palabra: ");
    scanf("%s", cad);
    n=strlen(cad);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        printf("*");
        }
    printf("\n");
    }
    printf("\n");
    
   
    return 0;
    
}