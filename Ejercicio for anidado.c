#include <stdio.h>

int main() {
    int i;
    printf("Ingresa un número: ");
    scanf("%d", &i);
    for(int x=0; x<i; x++){
        for(int j=0; j<=x; j++){
        printf("*");
        }
    printf("\n");
    }
    printf("\n");
    for(int x=i; x>=1; x--){
        for(int j=1; j<=x; j++){
        printf("*");
        }
    printf("\n");
    }
    
    return 0;
}