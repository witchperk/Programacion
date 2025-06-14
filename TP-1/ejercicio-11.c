#include <stdio.h>

int main(){
    /*Declaración de variables*/
    float temperatura, kelvin, farenheit;

    /*Ingreso de datos por pantalla*/
    printf("Ingrese la temperatura en °C\n");
    scanf("%f", &temperatura);

    /*Operaciones*/
    kelvin = temperatura * 273.15;
    farenheit = (temperatura * 1.8) + 32 ;

    /*Muestra resultados por pantalla*/
    printf("La temperatura en Kelvin es : %.2f\n", kelvin);
    printf("La temperatura en Farenheit es : %.2f \n", farenheit);

    return 0;
}
