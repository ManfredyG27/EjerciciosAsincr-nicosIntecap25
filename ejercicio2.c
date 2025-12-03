#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Ingresa numeros enteros (0 para salir):\n");

    
    while (1) {
        if (scanf("%d", &n) != 1) {
            printf("Entrada invalida.\n");
            return 1; 
        }

        if (n == 0) {
            printf("Fin.\n");
            break; 
        }

        if (n % 2 == 0) {
            printf("%d es par\n", n);
        } else {
            printf("%d es impar\n", n);
        }
    }

    return 0;
}