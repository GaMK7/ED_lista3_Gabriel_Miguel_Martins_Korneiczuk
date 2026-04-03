#include <stdio.h>

int main() {
    int n, i, j;
    long lista1[50][50];

    printf("Digite a quantidade de linhas para o Triangulo de Pascal: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                lista1[i][j] = 1;
            } else {
                lista1[i][j] = lista1[i - 1][j - 1] + lista1[i - 1][j];
            }
            printf("%ld ", lista1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
