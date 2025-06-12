#include <stdio.h>

int main() {
    //Declaración de variables
    char nombre[10], apellido[20];
    int telefono, edad;


    //Ingreso de datos
    printf("Ingrese su nombre:\t");
    scanf("%s", &nombre);

    printf("Ingrese su apellido:\t");
    scanf("%s", &apellido);

    printf("Ingrese su edad:\t");
    scanf("%d", &edad);

    printf("Ingrese su telefono:\t");
    scanf("%d", &telefono);

    //Imprime por pantalla
    printf("Los datos ingresados son: \n");
    printf("Nombre: %s\n", nombre);
    printf("Apellido: %s\n", apellido);
    printf("Edad: %d\n",edad);
    printf("Teléfono: %d\n", telefono);

    return 0;
}
