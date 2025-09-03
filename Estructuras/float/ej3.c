#include <stdio.h>
#define PI 3.14159

int main() {
    float radio, area;

    printf("Ingresa el radio del circulo: ");
    scanf("%f", &radio);

    area = PI * radio * radio;

    printf("El area del circulo con radio %.2f es: %.2f\n", radio, area);

    return 0;
}
