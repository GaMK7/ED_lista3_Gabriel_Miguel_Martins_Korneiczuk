#include <stdio.h>

int main() {
    int lista[15];
    int i, j, tamanho = 15;

    printf("Digite 15 elementos para o vetor:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &lista[i]);
    }

    for (i = 0; i < tamanho; i++) {
        if (lista[i] == 0) {
            for (j = i; j < tamanho - 1; j++) {
                lista[j] = lista[j + 1];
            }
            tamanho--;
            i--; 
        }
    }

    printf("\nVetor compactado (sem zeros):\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}
