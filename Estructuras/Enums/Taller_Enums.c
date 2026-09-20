#include <stdio.h>

// Ejercicio 1: Dias de la semana
enum Dia {
    LUNES,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
};

// Ejercicio 2: Meses del año
enum Mes {
    ENERO,
    FEBRERO,
    MARZO,
    ABRIL,
    MAYO,
    JUNIO,
    JULIO,
    AGOSTO,
    SEPTIEMBRE,
    OCTUBRE,
    NOVIEMBRE,
    DICIEMBRE
};

// Ejercicio 3: Estado del semaforo
enum Semaforo {
    ROJO,
    AMARILLO,
    VERDE
};

// Ejercicio 4: Dificultad del juego
enum Dificultad {
    FACIL,
    MEDIO,
    DIFICIL
};

// Ejercicio 5 y programa principal
int main() {

    char *dias[] = {
        "Lunes",
        "Martes",
        "Miercoles",
        "Jueves",
        "Viernes",
        "Sabado",
        "Domingo"
    };

    char *meses[] = {
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Diciembre"
    };

    printf("Ejercicio 1:\n");
    printf("Dia: %s\n", dias[MIERCOLES]);

    printf("\nEjercicio 2:\n");
    printf("Mes: %s\n", meses[AGOSTO]);

    printf("\nEjercicio 3:\n");
    printf("Semaforo: VERDE\n");

    printf("\nEjercicio 4:\n");
    printf("Dificultad: DIFICIL\n");

    printf("\nEjercicio 5:\n");
    for (int i = LUNES; i <= DOMINGO; i++) {
        printf("Valor: %d\n", i);
    }

    return 0;
}