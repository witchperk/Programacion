#include <stdio.h>

int main () {
    /*Declaración de variables*/
    int num1, num2, suma;

    /*Ingreso de datos de datos*/
    printf("Ingrese un número :\n");
    scanf("%i", &num1);
    printf("Ingrese un número :\n");
    scanf("%i", &num2);

    /*Operaciones*/
    suma = num1 + num2;

    /*Muestra de resultados*/
    printf("La suma de los número es %i\n", suma);

    return 0;
}
