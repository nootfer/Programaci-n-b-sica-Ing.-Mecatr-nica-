#include <stdio.h>

int main(){
    int var=1;
    int con=1;
    //Es equivalente a var= var+1
    printf("%d", var++);
    printf("\n");
    printf("%d", var);
    printf("\n");
    //Es equivalente a con= con-1
    printf("%d", con--);
    printf("\n");
    printf("%d",con);
    printf("\n");
    system ("Pause");
    return 0;
}
