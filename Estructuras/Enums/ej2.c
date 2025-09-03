#include <stdio.h>

int main() {
    // Declarar enum para los días
    enum Dia { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };
    
    // Variable tipo enum
    enum Dia hoy = MIERCOLES;

    // Imprimir el nombre del día según el valor
    switch (hoy) {
        case LUNES:     printf("Hoy es Lunes\n"); break;
        case MARTES:    printf("Hoy es Martes\n"); break;
        case MIERCOLES: printf("Hoy es Miércoles\n"); break;
        case JUEVES:    printf("Hoy es Jueves\n"); break;
        case VIERNES:   printf("Hoy es Viernes\n"); break;
        case SABADO:    printf("Hoy es Sábado\n"); break;
        case DOMINGO:   printf("Hoy es Domingo\n"); break;
        default:        printf("Día inválido\n"); break;
    }

    return 0;
}

