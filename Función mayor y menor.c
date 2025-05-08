#include<stdio.h>
#include<stdlib.h>

int maximo(int a, int b);

int main(){

    int a, b;
    
    printf("Ingrese un número: ");
    scanf("%d", &a);
    
    printf("Ingrese otro número: ");
    scanf("%d", &b);
    
    printf("El mayor es %d\n: ", maximo(a,b));
    
    system("Pause");
    return 0;
}
int maximo(int a, int b){

    if(a>b)
    return a;
   else
    return b;
}