#include <stdio.h>

int main() {
    /*Declaración de variables*/
    int suma, resta, multiplicacion;
    float num1, num2, division, aux_A, aux_B;

    /*Ingreso de datos por pantalla*/
    printf("Ingrese primer valor, A: \n");
    scanf("%f", &num1);
    printf("Ingrese segundo valor, B : \n");
    scanf("%f", &num2);

    /*Operaciones*/
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1/num2;

    /*Muestra de resultados por pantalla*/
    printf("El resultado de A + B = %i\n", suma);
    printf("El resultado de A -B = %i\n", resta);
    printf("El resultado de A x B = %i\n", multiplicacion);
    printf("El resultado de A / B = %.1f\n", division);

    /*Intercambio de variables*/
    aux_A = num2;
    aux_B = num1;
    num1 = aux_A;
    num2 = aux_B;

    /*Muestra por pantalla los nuevos valores*/
    printf("El nuevo valor de A es : %.1f\n", num1);
    printf("El nuevo valor de B es : %.1f\n", num2);
    return 0;
}
