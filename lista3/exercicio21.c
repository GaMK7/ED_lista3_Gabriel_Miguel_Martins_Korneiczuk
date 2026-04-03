#include <stdio.h>

int main() {
    int lista1[10], lista2[10], lista3[10];
    int i;

    printf("Digite os 10 valores da lista 1:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista1[i]);
    }

    printf("Digite os 10 valores da lista 2:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista2[i]);
    }

    printf("Resultado da subtracao (Lista3 = Lista1 - Lista2):\n");
    for (i = 0; i < 10; i++) {
        lista3[i] = lista1[i] - lista2[i];
        printf("%d ", lista3[i]);
    }

    return 0;
}
