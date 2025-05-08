#include <stdio.h>
#include <string.h>

int main() {
    char palabra[500];
    char invertir[500];
    int i;
    int j; 
    int len;

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    len = strlen(palabra);

    for (i = 0, j = len - 1; j >= 0; i++, j--) {
        invertir[i] = palabra[j];
    }
    invertir[i] = '\0';

    if (strcmp(palabra, invertir) == 0) {
        printf("La palabra '%s' es un palíndromo.\n", palabra);
    } else {
        printf("La palabra '%s' no es un palíndromo.\n", palabra);
    }

    return 0;
}