#include <stdio.h>

int main(){
    /*Declaración de variables*/
    float temp_1, temp_2, temp_3, suma, promedio;

    /*Ingreso de datos*/
    printf("Ingrese la primera temperatura : \n");
    scanf("%f", &temp_1);
    printf("Ingrese la segunda temperatura: \n");
    scanf("%f", &temp_2);
    printf("Ingrese la tercera temperatura: \n");
    scanf("%f", &temp_3);

    /*Operaciones*/
    suma = temp_1 + temp_2 + temp_3;
    promedio = suma / 3;

    /*Muestra resultados por pantalla*/
    printf("La suma de las temperaturas es : %.2f\n", suma);
    printf("El promedio de las temperaturas es: %.2f\n", promedio);

    return 0;
}
