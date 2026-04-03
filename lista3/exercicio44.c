#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, x, encontrado = 0;

    printf("Digite os valores da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor X a ser buscado: ");
    scanf("%d", &x);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == x) {
                printf("Valor %d encontrado na Linha %d, Coluna %d\n", x, i, j);
                encontrado = 1;
            }
        }
    }

    if (encontrado == 0) {
        printf("nao encontrado\n");
    }

    return 0;
}
