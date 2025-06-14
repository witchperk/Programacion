#include <stdio.h>

int main () {
    /*Declaración de variables*/
    float cateto1, cateto2, hipotenusa;

    /*Ingreso de datos*/
    printf("Ingrese cateto 1 del triángulo :\n");
    scanf("%f", &cateto1);
    printf("Ingrese cateto 2 del triángulo : \n");
    scanf("%f", &cateto2);

    /*Operaciones*/
    hipotenusa = (cateto1 * 2 + cateto2 * 2) * 0.5;

    /*Muestra resultado por pantalla*/
    printf("La hipotenusa del triángulo es: %.2f\n", hipotenusa);

    return 0;
}
