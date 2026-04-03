#include <stdio.h>

int main() {
    float lista1[5], lista2[5], produto = 0;
    int i;

    printf("Digite 5 valores reais para a lista 1:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &lista1[i]);
    }

    printf("Digite 5 valores reais para a lista 2:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &lista2[i]);
    }

    for (i = 0; i < 5; i++) {
        produto += lista1[i] * lista2[i];
    }

    printf("\nLista 1: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", lista1[i]);
    }

    printf("\nLista 2: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", lista2[i]);
    }

    printf("\nProduto escalar: %.2f\n", produto);

    return 0;
}
