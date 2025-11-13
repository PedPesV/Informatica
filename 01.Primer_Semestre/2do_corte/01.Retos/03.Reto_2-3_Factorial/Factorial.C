#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    long factorial = 1;

    printf("Ingrese un numero entero: ");

    // Validamos la entrada: si scanf no logra leer un entero, devuelve 0
    if (scanf("%d", &numero) != 1) {
        printf("Error: entrada invalida. Debe ingresar un numero entero.\n");
        return 1; // salir con error
    }

    // Validamos que no sea negativo
    if (numero < 0) {
        printf("Error: no existe el factorial de un numero negativo.\n");
        return 1;
    }

    // Calculamos el factorial
    for (int i = 1; i < numero; i++) {
        //factorial *= i;
        factorial = factorial *i;
    }

    printf("El factorial de %d es: %ld\n", numero, factorial);

    return 0;
}