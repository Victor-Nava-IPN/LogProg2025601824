#include <stdio.h>

int main() {
    const float DESC = 0.25;
    const int COVER = 500;
    int numMuj = 0, numHom = 0, total = 0;

    printf("Ingrese numero de mujeres: ");
    scanf("%d", &numMuj);

    printf("Ingrese numero de hombres: ");
    scanf("%d", &numHom);

    total = (numMuj * COVER * (1 - DESC)) + (numHom * COVER);
    
    printf("El total es: %d\n", total);

    return 0;
}