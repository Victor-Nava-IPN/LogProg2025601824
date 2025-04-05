#include <stdio.h>

int main() {
    int opc1, opc2;

    printf("Pizzeria Bella Napoli\nEscoja su tipo de pizza:\n1-Vegetariana 2-No vegetariana\n");
    scanf("%d", &opc1);

    switch (opc1) {
        case 1:
            printf("Escoga un ingrediente:\n1-Pimientos 2-Tofu\n");
            scanf("%d", &opc2);
            switch (opc2) {
                case 1:
                    printf("Pizza: Vegetariana\nIngredientes: Tomate, Mozzarella y Pimientos\n");
                    break;
                case 2:
                    printf("Pizza: Vegetariana\nIngredientes: Tomate, Mozzarella y Tofu\n");
                    break;
                default:
                    printf("Opcion no valida\n");
                    break;
            }
            break;
        case 2:
            printf("Escoga un ingrediente:\n1-Peperoni 2-Jamon 3-Salmon\n");
            scanf("%d", &opc2);
            switch (opc2) {
                case 1:
                    printf("Pizza: No vegetariana\nIngredientes: Tomate, Mozzarella y Peperoni\n");
                    break;
                case 2:
                    printf("Pizza: No vegetariana\nIngredientes: Tomate, Mozzarella y Jamon\n");
                    break;
                case 3:
                    printf("Pizza: No vegetariana\nIngredientes: Tomate, Mozzarella y Salmon\n");
                    break;
                default:
                    printf("Opcion no valida\n");
                    break;
            }
            break;
        default:
            printf("Opcion no valida\n");
            break;
    }

    return 0;
}

