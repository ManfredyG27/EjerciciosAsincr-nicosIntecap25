#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b;
    char op;

    
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("Entrada invalida.\n");
        return 1; 
    }

    switch (op) {
        case '+':
            printf("= %.6f\n", a + b);
            break;
        case '-':
            printf("= %.6f\n", a - b);
            break;
        case '*':
            printf("= %.6f\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Error: division por cero.\n");
            } else {
                printf("= %.6f\n", a / b);
            }
            break;
        default:
            printf("Entrada invalida.\n");
            return 1; 
    }

    return 0; 
}