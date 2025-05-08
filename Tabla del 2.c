#include <stdio.h>
int main (){
int miarreglito[1000];
int  i= 0;
while ( i<100){
    miarreglito[i]=2*(i+1);
    i++;
}
i=0;
while(i<100){
printf("2*%d=%d\n", i+1,miarreglito[i]);
i++;
}
return 0;
}