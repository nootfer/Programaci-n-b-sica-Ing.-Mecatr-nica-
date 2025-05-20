#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

void intercambio(int *a, int *b){
    
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}

int main(void) {
    
    int x=2;
    int y=5;
    printf("Antes x= %d, y=%d\n", x, y);
    
    intercambio(&x, &y);
    
    printf("Después x= %d, y=%d\n", x, y);
    
    printf("\n");
    system("Pause");
}

