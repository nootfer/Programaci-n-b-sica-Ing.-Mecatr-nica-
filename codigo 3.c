#include <stdio.h>

int main() {
    int num = 0;

    while (num < 100) {
        if (num % 7 != 0) { // Solo imprime si no es divisible por 7
            printf("%d ", num);
        }
        num++;
    }

    return 0;
}