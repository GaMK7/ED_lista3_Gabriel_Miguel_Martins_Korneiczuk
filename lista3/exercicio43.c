#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, maior, linha_m = 0, col_m = 0;

    printf("Digite os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_m = i;
                col_m = j;
            }
        }
    }

    printf("\nMatriz digitada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior valor: %d na Linha: %d, Coluna: %d\n", maior, linha_m, col_m);

    return 0;
}
