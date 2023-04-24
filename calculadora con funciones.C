#include <stdio.h>

// Función para realizar la suma
float sumar(float num1, float num2) {
    return num1 + num2;
}

// Función para realizar la resta
float restar(float num1, float num2) {
    return num1 - num2;
}

// Función para realizar la multiplicación
float multiplicar(float num1, float num2) {
    return num1 * num2;
}

// Función para realizar la división
float dividir(float num1, float num2) {
    if(num2 == 0) {
        printf("No se puede dividir por cero");
        return 0;
    } else {
        return num1 / num2;
    }
}

// Función principal
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
            resultado = sumar(num1, num2);
            break;
        case '-':
            resultado = restar(num1, num2);
            break;
        case '*':
            resultado = multiplicar(num1, num2);
            break;
        case '/':
            resultado = dividir(num1, num2);
            break;
        default:
            printf("Operacion invalida");
            return 0;
    }

    printf("El resultado de la operacion es: %.2f", resultado);

    return 0;
}
