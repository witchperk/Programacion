#include <stdio.h>

int main() {

    /*Declaración de variables*/
    int A, C, doble_A, doble_B, doble_C, triple_A, triple_B, triple_C;
    float B, mitad_A, mitad_B, mitad_C;

    /*Ingreso de datos*/
    printf("Ingrese un número, A \n");
    scanf("%i", &A);
    printf("Ingrese un número, B \n");
    scanf("%f", &B);
    printf("Ingrese un número, C\n");
    scanf("%i", &C);

    /*Operaciones*/
    doble_A = A * 2;
    doble_B = B * 2;
    doble_C = C * 2;
    triple_A = A * 3;
    triple_B = B * 3;
    triple_C = C * 3;
    mitad_A = A / 2;
    mitad_B = B / 2;
    mitad_C = C / 2;

    /*Muestra de resultados por pantalla*/
    printf("El doble de A es : %i\n", doble_A);
    printf("El doble de B es : %0.f\n", doble_B);
    printf("El doble de C es : %i\n", doble_C);
    printf("El triple de A es : %i\n", triple_A);
    printf("El triple de B es : %0.f\n", triple_B);
    printf("El triple de C es : %i\n", triple_C);
    printf("La mitad de A  %.2f\n", mitad_A);
    printf("La mitad de B %.2f\n", mitad_B);
    printf("La mitad de C %.2f", mitad_C);

    return 0;
}
