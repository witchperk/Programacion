#include <stdio.h>

int main() {
    /*Declaración de variables*/
    int cantidad_pc = 30;
    float precio_unitario = 11500;
    float sin_descuento, con_descuento, descuento, envio, seguro, total_bien, total_mal;

    /*Operaciones*/
    sin_descuento = cantidad_pc * precio_unitario;
    descuento = sin_descuento * 0.20;
    con_descuento = sin_descuento - descuento;
    envio = con_descuento * 0.05;
    seguro = con_descuento * 0.12;

    // Total si las PC llegan bien (se devuelve el seguro)
    total_bien = con_descuento + envio;

    // Total si las PC llegan mal (no se devuelve el seguro)
    total_mal = con_descuento + envio + seguro;

    // Mostrar resultados
    printf("Precio sin descuentos: %.2f\n", sin_descuento);
    printf("Precio con descuentos si las PC llegan bien: %.2f\n", total_bien);
    printf("Precio con descuentos si las PC llegan mal: %.2f\n", total_mal);
    printf("Solo el descuento aplicado: %.2f\n", descuento);
    printf("Solo el costo de envio: %.2f\n", envio);

    return 0;
}
