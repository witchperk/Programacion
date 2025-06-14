#include <stdio.h>

int main() {
    /*Declaración de variables*/
    float radio, altura, area_total, volumen;

    /*Ingreso de datos por pantalla*/
    printf("Ingrese radio del cilindro: \n");
    scanf("%f", &radio);
    printf("Ingrese la altura del cilindro: \n");
    scanf("%f", &altura);

    /*Operaciones*/
    area_total = 2 * 3.14 * radio * altura;
    volumen = 2 * 3.14 * radio * (radio + altura);

    /*Muestra de datos por pantalla*/
    printf("El área total del cilindro es: %.2f\n", area_total);
    printf("El volumen del cilindro es: %.2f\n", volumen);

    return 0 ;
}
