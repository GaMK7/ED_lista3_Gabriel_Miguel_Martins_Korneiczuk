#include <stdio.h>

int main() {
    int matriz1[4][4], matriz2[4][4], matriz3[4][4];
    int i, j;

    printf("Digite os valores da Matriz 1:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os valores da Matriz 2:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\nMatriz com os maiores valores:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matriz3[i][j] = matriz1[i][j];
            } else {
                matriz3[i][j] = matriz2[i][j];
            }
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
