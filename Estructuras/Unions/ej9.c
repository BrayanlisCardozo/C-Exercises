#include <stdio.h>

union Numero {
    int entero;
    float decimal;
};

int main() {
    union Numero n;

    n.entero = 10;
    printf("Entero: %d\n", n.entero);

    n.decimal = 3.14; // sobrescribe el entero
    printf("Decimal: %.2f\n", n.decimal);
    printf("Entero despues de asignar float: %d\n", n.entero);

    return 0;
}
