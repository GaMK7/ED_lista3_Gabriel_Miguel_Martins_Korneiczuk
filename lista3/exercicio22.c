#include <stdio.h>

int main() {
    int lista1[10], lista2[10], lista3[20];
    int i;

    printf("Digite 10 valores para a lista 1:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista1[i]);
    }

    printf("Digite 10 valores para a lista 2:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista2[i]);
    }

    for (i = 0; i < 10; i++) {
        lista3[2 * i] = lista1[i];
        lista3[2 * i + 1] = lista2[i];
    }

    printf("Vetor intercalado:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", lista3[i]);
    }

    return 0;
}
