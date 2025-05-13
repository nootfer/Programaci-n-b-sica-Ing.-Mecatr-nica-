#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *p, y;

void func() {
    int x = 40;
    p = &x;
    y = *p;
    *p = 23;
}
int main(void){
func();
y=*p;
*p=25;
printf("El valor de y es %d\n El valor de *p es %d\n El valor de p es %p", y, *p, p);

}
