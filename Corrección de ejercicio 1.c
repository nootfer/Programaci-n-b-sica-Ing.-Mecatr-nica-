#include <stdio.h>
#include <string.h>

int main() {
    char str1[500];
    char str2[500];
    int len1;
    int len2;

    printf("Ingresa la primera palabra: ");
    scanf("%s", str1);

    printf("Ingresa la segunda palabra: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 == len2) {
        printf("Ambas palabras son iguales .\n");
    } else if (len1 > len2) {
        printf("'%s' es mayor que '%s'.\n", str1, str2);
    } else {
        printf("'%s' es mayor que '%s'.\n", str2, str1);
    }

    return 0;
}