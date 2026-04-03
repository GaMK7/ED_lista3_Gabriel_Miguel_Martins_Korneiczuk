#include <stdio.h>

int main() {
    int lista1[10], lista2[10], lista3[20];
    int i, j, k, n = 0, repetido;

    printf("Digite os 10 valores da lista 1:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista1[i]);
    }

    printf("Digite os 10 valores da lista 2:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista2[i]);
    }

    for (i = 0; i < 10; i++) {
        repetido = 0;
        for (k = 0; k < n; k++) {
            if (lista3[k] == lista1[i]) {
                repetido = 1;
                break;
            }
        }
        if (repetido == 0) {
            lista3[n] = lista1[i];
            n++;
        }
    }

    for (i = 0; i < 10; i++) {
        repetido = 0;
        for (k = 0; k < n; k++) {
            if (lista3[k] == lista2[i]) {
                repetido = 1;
                break;
            }
        }
        if (repetido == 0) {
            lista3[n] = lista2[i];
            n++;
        }
    }

    printf("\nUniao dos vetores (sem repeticoes):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", lista3[i]);
    }
    printf("\n");

    return 0;
}
