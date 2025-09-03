#include <stdio.h>

int main() {
    char c;

    printf("Ingresa un caracter: ");
    scanf("%c", &c);

    printf("El caracter ingresado es '%c' y su codigo ASCII es %d\n", c, c);

    return 0;
}
