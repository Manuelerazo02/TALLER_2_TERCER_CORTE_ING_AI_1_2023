#include <stdio.h>
#include <math.h>

int main() {
    
    //PRIMER PUNTO
    printf("PRIMER PUNTO.\n");
    float pi = 3.141592;
    float r1 = 14.5;
    float altura = 26.79;

    float vol = (1.0 / 3.0) * pi * r1 * r1 * altura;

    printf("El volumen del cono es: %.2f\n\n", vol);
    
    
    //SEGUNDO PUNTO
    printf("SEGUNDO PUNTO.\n");

    float F, C;

    printf("Ingresa la temperatura en °F: ");
    scanf("%f", &F);

    C = (5.0 / 9.0) * (F - 32);

    printf("La temperatura en °C es: %.2f\n\n", C);
    
    
    //TERCER PUNTO
    printf("TERCER PUNTO.\n");

    int s, h, m, s_r;

    printf("Digite el tiempo transcurrido en segundos: ");
    scanf("%d", &s);

    h = s / 3600;
    s_r = s % 3600;
    m = s_r / 60;
    s_r = s_r % 60;

    printf("Tiempo completo equivalente: %dh %dm %ds\n\n", h, m, s_r);
    
    
    //CUERTO PUNTO
    printf("CUARTO PUNTO.\n");
    
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

    printf("\nSu nota final de Informática es: %.2f\n\n", final);
    
    
    //QUINTO PUNTO
    printf("QUINTO PUNTO.\n");
    
    int r, a, b, c, d;
    float reslt;

    printf("Asigne un valor para r: ");
    scanf("%d", &r);

    printf("Asigne un valor para a: ");
    scanf("%d", &a);

    printf("Asigne un valor para b: ");
    scanf("%d", &b);
    
    printf("Asigne un valor para c: ");
    scanf("%d", &c);

    printf("Asigne un valor para d: ");
    scanf("%d", &d);


    reslt = (4.0/3)*(r*34) - 9*(a*b*c) + (3+d)*(2+a)/(a+b*d);

    printf("El resultado es: %.2f\n\n", reslt);
    
    
    //SEXTO PUNTO
    printf("SEXTO PUNTO.\n");
    
    int x = 12;
    float sigma = 2.1836;
    int y = 3;
    float lambda = 1.11695;
    float alfa = 328.67;
    float f1;

    f1 = 3 * (x + sigma * y / (x * x - y * y)) - lambda * (alfa - 13.7);

    printf("El valor de f es: %f\n\n", f1);
    
    
    //SEPTIMO PUNTO
    printf("SEPTIMO PUNTO.\n");
    
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
    printf("Sueldo neto: %.2f $\n\n", Neto);
    
    
    //OCTAVO PUNTO
    printf("OCTAVO PUNTO.\n");
    
     int ax = 1;
    double dx = 1.0;

    ax = 46 % 9 + 4 * 4 - 2;
    printf("R/ 1: %d\n", ax);

    ax = 45 + 43 % 5 * (23 * 3 % 2);
    printf("R/ 2: %d\n", ax);

    ax = 45 + 45 * 50 % (ax--);
    printf("R/ 3: %d\n", ax);

    dx = 1.5 * 3 + (++dx);
    printf("R/ 4: %f\n", dx);

    dx = 1.5 * 3 + (dx++);
    printf("R/ 5: %f\n", dx);

    ax %= 3 / ax + 3;
    printf("R/ 6: %d\n", ax);
    
    
    //NOVENO PUNTO
    printf("NOVENO PUNTO.\n");
    
    int lado1, lado2, angulo;
    int area;

    printf("Digite el primer lado del triángulo: ");
    scanf("%d", &lado1);

    printf("Digite el segundo lado del triángulo: ");
    scanf("%d", &lado2);

    printf("Digite el ángulo entre los lados del triangulo: ");
    scanf("%d", &angulo);

    area = 0.5 * lado1 * lado2 * sin(angulo);

    printf("El área del triángulo es: %d\n\n", area);
    
    
    //DECIMO PUNTO
    printf("DECIMO PUNTO.\n");
    
    int lado1, lado2, angulo;
    float area;

    printf("Digite el primer lado del triángulo: ");
    scanf("%d", &lado1);

    printf("Digite el segundo lado del triángulo: ");
    scanf("%d", &lado2);

    printf("Digite el ángulo entre los lados del triangulo: ");
    scanf("%d", &angulo);

    float anguloRadianes = angulo * 3.14159 / 180;

    area = 0.5 * lado1 * lado2 * sin(anguloRadianes);

    printf("El área del triángulo despues de convertir el ángulo en radianes es: %.2f\n\n", area);
    
    
    //ONCEAVO PUNTO
    printf("ONCEAVO PUNTO.\n");
    
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
