#include <stdio.h>

int main() {
    float pi = 3.141592;
    float r = 14.5;
    float h = 26.79;

    float vol = (1.0 / 3.0) * pi * r * r * h;

    printf("El volumen del cono es: %.2f\n", vol);

    return 0;
}

