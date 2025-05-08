#include <stdio.h>
#include <string.h>

int main() {
    char palabra[500];
    int contar[256] = {0};
    int i;
    printf("Ingresa una palabra: ");
    scanf("%s", palabra);
    for (i = 0; palabra[i] != '\0'; i++) {
        contar[(int)palabra[i]]++;
    }
    printf("Frecuencia de letras:\n");
    for (i = 0; i < 256; i++) {
        if (contar[i] > 0) {
            printf("'%c' se repite %d veces\n", i, contar[i]);
        }
    }

    return 0;
}