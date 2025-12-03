#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    double *valores;
    double suma = 0.0, min, max;
    int i; // Declarar aquí

    // Leer N
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("N invalido.\n");
        return 1; // Código de salida 1
    }

    valores = (double *)malloc(N * sizeof(double));
    if (valores == NULL) {
        printf("Sin memoria.\n");
        return 1; // Código de salida 1
    }

    // Leer N valores reales
    for (i = 0; i < N; i++) {
        if (scanf("%lf", &valores[i]) != 1) {
            printf("Entrada invalida.\n");
            free(valores); // Liberar memoria antes de salir
            return 1;
        }
    }

    min = max = valores[0]; // Inicializar min y max con el primer valor

    // Calcular suma, min y max
    for (i = 0; i < N; i++) {
        suma += valores[i];
        if (valores[i] < min) min = valores[i];
        if (valores[i] > max) max = valores[i];
    }
    
    // Imprimir resultados con 3 decimales
    printf("Promedio: %.3f | Min: %.3f | Max: %.3f\n", suma / N, min, max);

    free(valores);
    return 0; // Ejecución correcta

}
