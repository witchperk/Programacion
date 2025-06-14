#include <stdio.h>

int main() {
    /*Declaración de variables*/
    float importe, porcentaje_80, porcentaje_20, porcentaje_15;

    /*Ingreso de datos*/
    printf("Ingrese el importe: \n");
    scanf("%f", &importe);

    /*Operaciones*/
    porcentaje_80 = importe * 0.80;
    porcentaje_20 = importe * 0.20;
    porcentaje_15 = importe * 0.15;

    /*Muestra resultados por pantalla*/
    printf("El 80% de su importe es : %.2f\n", porcentaje_80);
    printf("El 20% de su importe es : %.2f\n", porcentaje_20);
    printf("El 15% de su importe es : %.2f\n", porcentaje_15);

    return 0;
}
