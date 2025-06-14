#include <stdio.h>

int main(){
    /*Declaración de variables*/
    char nombre_producto[30];
    int unidades;
    float precio_unidad, precio_total;

    /*Ingreso de datos*/
    printf("Ingrese el nombre del producto : \t");
    scanf("%s", &nombre_producto);
    printf("Ingrese el precio por unidad : \t");
    scanf("%f", &precio_unidad);
    printf("Ingrese la cantidad de unidades : \t");
    scanf("%i", &unidades);

    /*Operaciones*/
    precio_total = precio_unidad * unidades;

    /*Muestra de resultados por pantalla*/
    printf("Nombre de producto : %s\n", nombre_producto);
    printf("Cantidad de unidades : %i\n", unidades);
    printf("Precio total : $%.2f\n", precio_total);

    return 0 ;
}
