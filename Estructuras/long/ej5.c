#include <stdio.h>

int main() {
    long n, i;
    long factorial = 1;

    printf("Ingresa un número: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("El factorial de %ld es: %ld\n", n, factorial);

    return 0;
}
