#include <stdio.h>
#include <math.h>

int main() {
    int A[10];
    int B[10];
    A[0]=3;
    A[1]=5;
    A[2]=6;
    A[3]=8;
    A[4]=4;
    A[5]=7;
    A[6]=8;
    A[7]=5;
    A[8]=3;
    A[9]=1;
    B[0]=3;
    B[1]=4;
    B[2]=6;
    B[3]=8;
    B[4]=9;
    B[5]=1;
    B[6]=2;
    B[7]=3;
    B[8]=0;
    B[9]=9;
    int res1=A[3]%(B[2]/2);
    int res3=A[0]+A[1+2];
    int res4=A[5]+B[5];
    int res5=(A[3]/B[2])/2;
    printf("%d, %d, %d, %d\n", res1, res3, res4, res5);
    int i=0;
    while(i<10){
    B[i]=(B[i]*A[1])-A[9];
    printf("%d\n", B[i]);
    i++;
    
    }
    
    
    

    printf("Fin\n");
    return 0;
}