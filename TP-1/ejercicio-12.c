#include <stdio.h>

int main() {
    /*Declaración de variables*/
    float pies, metros, pulgadas_pies, pulgadas_metros, suma_pulgadas, yardas, metros_totales, millas;

    /*Ingreso de datos*/
    printf("Ingrese valor en pies : \n");
    scanf("%f", &pies);
    printf("Ingrese valor en metros : \n");
    scanf("%f", &metros);

    /*Operaciones*/
    pulgadas_pies = pies * 12;
    pulgadas_metros = metros / 0.0254;
    suma_pulgadas = pulgadas_pies + pulgadas_metros;
    yardas = suma_pulgadas / 36;
    metros_totales = suma_pulgadas * 0.264;
    millas = metros_totales / 1609;

    /*Muestra de resultados por pantalla*/
    printf("El valor en yardas es : %.2f\n", yardas);
    printf("El valor en metros es : %.2f\n", metros_totales);
    printf("El valor en millas es : %.2f\n", millas);

    return 0;
}
