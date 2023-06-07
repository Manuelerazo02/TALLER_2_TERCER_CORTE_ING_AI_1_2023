include <stdio.h>

int main() {

    float Base, Destino, Cargo, Bruto, impuestos, Neto;
    int horasExtra, hijos, mayores;

    printf("Ingrese su sueldo base: ");
    scanf("%f", &Base);

    printf("Ingrese su complemento de destino: ");
    scanf("%f", &Destino);

    printf("Ingrese su complemento de cargo académico: ");
    scanf("%f", &Cargo);

    printf("Ingrese sus horas extra realizadas: ");
    scanf("%d", &horasExtra);

    printf("¿Cuántos hijos tiene?: ");
    scanf("%d", &hijos);

    printf("¿Cuántos de sus hijos son mayores dependientes?: ");
    scanf("%d", &mayores);

    Bruto = Base + Destino + Cargo + (23 * horasExtra);

    float IRPF = 24.0 - (2.0 * hijos) - (1.0 * mayores);
    impuestos = (IRPF / 100.0) * Bruto;

    Neto = Bruto - impuestos;

    printf("\nCálculo de la nómina\n");
    printf("Sueldo base: %.2f $\n", Base);
    printf("Complemento de destino: %.2f $\n", Destino);
    printf("Complemento de cargo académico: %.2f $\n", Cargo);
    printf("Horas extra realizadas: %d\n", horasExtra);
    printf("Hijos: %d\n", hijos);
    printf("Mayores: %d\n", mayores);
    printf("Sueldo bruto: %.2f $\n", Bruto);
    printf("Porcentaje de IRPF: %.2f%%\n", IRPF);
    printf("Retención por IRPF: %.2f $\n", impuestos);
    printf("Sueldo neto: %.2f $\n", Neto);

    return 0;
}
