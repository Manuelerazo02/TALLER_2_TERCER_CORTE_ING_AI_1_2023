#include <stdio.h>

int main() {
    float exam[3];
    float prac[3];
    float acti;
    float final;
    int M;

    printf("Digite las notas de los 3 examenes:\n");
    for (M = 0; M < 3; M++) {
        printf("Examen %d: ", M + 1);
        scanf("%f", &exam[M]);
    }

    printf("\nDigite las notas de las 3 prácticas:\n");
    for (M = 0; M < 3; M++) {
        printf("Práctica %d: ", M + 1);
        scanf("%f", &prac[M]);
    }

    printf("\nDigite la nota de la actividad adicional: ");
    scanf("%f", &acti);

    final = (exam[0] + exam[1] + exam[2]) / 3 * 0.6 +
                 (prac[0] + prac[1] + prac[2]) / 3 * 0.3 +
                 acti * 0.1;

    printf("\nSu nota final de Informática es: %.2f\n", final);

    return 0;
}
