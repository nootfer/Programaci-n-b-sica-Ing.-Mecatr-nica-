#include <stdio.h>
int main (){
int n;
int i;
int suma=0;
printf("ingrese un número: ");
scanf("%d", &n);
for(i=1; i<=n; i++){
 suma+=i;
}
printf("La suma de 1 hasta %d es: %d\n", n, suma);
return 0;
}