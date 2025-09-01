#include <stdio.h>

int main() {
    int i, n = 1000;
    double pi = 0.0;

    for (i = 0; i < n; i++) {
        // Alterna los signos y suma los términos de la serie
        if (i % 2 == 0) {
            pi += 1.0 / (2 * i + 1);
        } else {
            pi -= 1.0 / (2 * i + 1);
        }
    }

    pi *= 4;  // Multiplicamos por 4 según la fórmula de Leibniz

    printf("Valor aproximado de pi usando %d terminos: %.15f\n", n, pi);

    return 0;
}
