#include <stdio.h>

int main (){
    /*Declaración de variables*/
    float pesos, dolares;

    /*Ingreso de datos*/
    printf("Ingrese valor en pesos : \n");
    scanf("%f", &pesos);

    /*Operaciones*/
    dolares = pesos / 1540;

    /*Muestra de datos por pantalla*/
    printf("$ %.2f\n", pesos);
    printf("Equivale a usd $%.2f\n", dolares);

    return 0;
}
