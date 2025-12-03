#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b;
    char op;

    
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) { // Intentar leer la entrada
        printf("Entrada invalida.\n");
        return 1;  // Código de salida 1
    }

    switch (op) {
        case '+':
            printf("= %.5f\n", a + b);
            break;
        case '-':
            printf("= %.5f\n", a - b);
            break;
        case '*':
            printf("= %.5f\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Error: division por cero.\n");
            } else {
                printf("= %.5f\n", a / b);
            }
            break;
        default:
            printf("Entrada invalida.\n");
            return 1;  // Operador no válido
    }

    return 0; // Ejecución correcta
}