#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1; // Código de salida 1
    }
    
    printf("La suma es: %d\n", a + b);

    return 0;
}