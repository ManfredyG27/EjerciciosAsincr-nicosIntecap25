#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    if (scanf("%d %d", &a, &b) != 2) { // Intentar leer dos enteros desde la misma línea
        printf("La Entrada invalida.\n");
        return 1; // Código de salida 1
    }

    // Imprimir la suma en el formato requerido
    printf("La suma es: %d\n", a + b);

    return 0; // Código de salida normal

}