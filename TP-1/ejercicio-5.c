#include <stdio.h>

int main() {
    /*Declaración de variables*/
    int base, exponente;
    int resultado = 1;
    int i = 0;

    /*Ingreso de datos*/
    printf("Ingrese la base : \n");
    scanf("%i", &base);
    printf("Ingrese el exponente : \n");
    scanf("%i", &exponente);

    /*Operaciones*/
    for (int i=0 ; i < exponente; i++){
        resultado = resultado * base;
    }

    /*Muestra resultados por pantalla*/
    printf("El resultado de la potencia es : %i\n", resultado);

    return 0;
}
