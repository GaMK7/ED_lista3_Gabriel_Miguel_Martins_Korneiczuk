#include <stdio.h>

int main() {
    float lista[11], aux;
    int i, j;

    printf("Digite os 11 elementos do vetor A:\n");
    for (i = 0; i < 11; i++) {
        scanf("%f", &lista[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 11; j++) {
            if (lista[i] > lista[j]) {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }

    printf("\nVetor totalmente ordenado em ordem crescente:\n");
    for (i = 0; i < 11; i++) {
        printf("%.2f ", lista[i]);
    }
    printf("\n");

    return 0;
}
