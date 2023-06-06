#include <stdio.h>

int main() {
    int capital, interes, plazo, cuota, total, amortizacion, intereses, ratio;

    printf("Ingrese el capital del prestamo: ");
    scanf("%d", &capital);

    printf("Ingrese el interés anual: ");
    scanf("%d", &interes);

    printf("Ingrese los años que dura el préstamo: ");
    scanf("%d", &plazo);

    ratio = interes / 12;

    cuota = (capital * ratio) / (100 * (1 - (1 + ratio / 100) - plazo));

    total = cuota * plazo;

    amortizacion = capital;
    intereses = total - capital;

    printf("Cuota mensual: %d\n", cuota);
    printf("Total pagado: %d\n", total);
    printf("Cantidad de amortización: %d\n", amortizacion);
    printf("Cantidad de intereses: %d\n", intereses);

    return 0;
}
