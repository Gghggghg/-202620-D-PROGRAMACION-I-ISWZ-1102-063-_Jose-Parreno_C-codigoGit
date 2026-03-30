#include <stdio.h>

int main() {
    int inicio, fin, incremento;

    // Solicitar datos al usuario
    printf("Ingrese el número inicial: ");
    scanf("%d", &inicio);

    printf("Ingrese el número final: ");
    scanf("%d", &fin);

    printf("Ingrese el valor de incremento: ");
    scanf("%d", &incremento);

    // Validar que el incremento no sea cero
    if (incremento == 0) {
        printf("El incremento no puede ser cero.\n");
        return 1;
    }

    // Mostrar la secuencia usando for
    if (inicio <= fin && incremento > 0) {
        for (int i = inicio; i <= fin; i += incremento) {
            printf("%d\n", i);
        }
    } else if (inicio >= fin && incremento < 0) {
        for (int i = inicio; i >= fin; i += incremento) {
            printf("%d\n", i);
        }
    } else {
        printf("Con los valores ingresados no se puede generar la secuencia.\n");
    }

    return 0;
}


