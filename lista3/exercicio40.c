#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, c = 0;

    printf("Digite os valores para a matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10) {
                c++;
            }
        }
    }

    printf("\nA matriz possui %d valores maiores que 10.\n", c);

    return 0;
}
