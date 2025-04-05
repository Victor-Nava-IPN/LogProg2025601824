#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, iMC;

    printf("Ingresa tu Altura (m):\n");
    scanf("%f", &altura);
    printf("Ingresa tu peso (kg):\n");
    scanf("%f", &peso);

    if (peso > 0 && altura > 0) {

        iMC = peso / pow(altura, 2);

        if (iMC <= 18.4) {
            printf("Tu indice de masa corporal es grado: Bajo peso (%.2f)\n", iMC);
        } else if (iMC <= 24.9) {
            printf("Tu indice de masa corporal es grado: Normal (%.2f)\n", iMC);
        } else if (iMC <= 29.9) {
            printf("Tu indice de masa corporal es grado: Sobrepeso (%.2f)\n", iMC);
        } else if (iMC <= 34.9) {
            printf("Tu indice de masa corporal es grado: Obesidad clase 1 (%.2f)\n", iMC);
        } else if (iMC <= 39.9) {
            printf("Tu indice de masa corporal es grado: Obesidad clase 2 (%.2f)\n", iMC);
        } else {
            printf("Tu indice de masa corporal es grado: Obesidad clase 3 (%.2f)\n", iMC);
        }
    } else {
        printf("Valores no validos\n");
    }

    return 0;
}

