#include <stdio.h>

int main() {
    int lista1[5], lista2[5];
    int i, j, existe;

    printf("Digite 5 elementos para a lista 1 (x):\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &lista1[i]);
    }

    printf("Digite 5 elementos para a lista 2 (y):\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &lista2[i]);
    }

    printf("\nSoma entre x e y: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", lista1[i] + lista2[i]);
    }

    printf("\nProduto entre x e y: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", lista1[i] * lista2[i]);
    }

    printf("\nDiferenca (x - y): ");
    for (i = 0; i < 5; i++) {
        existe = 0;
        for (j = 0; j < 5; j++) {
            if (lista1[i] == lista2[j]) {
                existe = 1;
                break;
            }
        }
        if (existe == 0) {
            printf("%d ", lista1[i]);
        }
    }

    printf("\nInterseccao: ");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (lista1[i] == lista2[j]) {
                printf("%d ", lista1[i]);
                break;
            }
        }
    }

    printf("\nUniao: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", lista1[i]);
    }
    for (i = 0; i < 5; i++) {
        existe = 0;
        for (j = 0; j < 5; j++) {
            if (lista2[i] == lista1[j]) {
                existe = 1;
                break;
            }
        }
        if (existe == 0) {
            printf("%d ", lista2[i]);
        }
    }
    printf("\n");

    return 0;
}
