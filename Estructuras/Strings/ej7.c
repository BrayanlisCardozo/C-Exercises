#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    int len = strlen(cadena);
    if (cadena[len - 1] == '\n') cadena[len - 1] = '\0'; // quitar salto de línea

    printf("Cadena al reves: ");
    for (int i = strlen(cadena) - 1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n");

    return 0;
}
