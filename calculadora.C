#include <stdio.h>

int main() {
    char operacion;
    float num1, num2, resultado;

    printf("Ingrese la operacion (+, -, *, /): ");
    scanf("%c", &operacion);

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    switch(operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if(num2 == 0) {
                printf("No se puede dividir por cero");
                return 0;
            } else {
                resultado = num1 / num2;
            }
            break;
        default:
            printf("Operacion invalida");
            return 0;
    }

    printf("El resultado de la operacion es: %.2f", resultado);

    return 0;
}
