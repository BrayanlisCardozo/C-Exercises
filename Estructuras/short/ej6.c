#include <stdio.h>

int main() {
    short edades[5];
    for (int i = 0; i < 5; i++) {
        printf("Ingrese la edad de la persona %d: ", i + 1);
        scanf("%hd", &edades[i]);
    }

    printf("\nEdades almacenadas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Persona %d: %hd años\n", i + 1, edades[i]);
    }
    return 0;
}
