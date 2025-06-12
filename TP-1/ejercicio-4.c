#include <stdio.h>

 int main () {
     /*Declaración de variables*/
     int num1, num2, resultado;

     /*Ingreso de datos por pantalla*/
     printf("Ingrese el valor de A: \n");
     scanf("%i", &num1);
     printf("Ingrese el valor de B: \n");
     scanf("%i", &num2);

     /*Operaciones*/
     resultado = (num1 + num2) * (num1 - num2);

     /*Muestra los resultados*/
     printf("El resultado de las operación (A + B) * (A - B) es : %i\n", resultado);

     return 0;
 }
