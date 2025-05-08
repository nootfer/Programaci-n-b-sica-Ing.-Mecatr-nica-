#include <stdio.h>
#include <string.h>

int main() {
    char str1[500];
    char str2[500];
    int len;

    printf("Ingresa la primera palabra: ");
    scanf("%s", str1);

    printf("Ingresa la segunda palabra: ");
    scanf("%s", str2);

    len=strcmp(str1, str2);

    if (len==0) {
        printf("Ambas palabras son iguales .\n");
    } else if (len>0) {
        printf("'%s' es mayor que '%s'.\n", str1, str2);
    } else if(len<0) {
        printf("'%s' es mayor que '%s'.\n", str2, str1);
    }else{
    printf("Ambas palabras son iguales");
    }

    return 0;
}