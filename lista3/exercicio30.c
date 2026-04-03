#include <stdio.h>

int main() {
    int lista1[10], lista2[10], lista3[10];
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
        for (j = 0; j < 10; j++) {
            if (lista1[i] == lista2[j]) {
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
        }
    }

    printf("\nInterseccao dos vetores (sem repeticoes):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", lista3[i]);
    }
    printf("\n");

    return 0;
}
