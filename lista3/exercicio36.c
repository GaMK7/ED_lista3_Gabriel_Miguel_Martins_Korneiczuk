#include <stdio.h>

int main() {
    float lista[10], aux;
    int i, j;

    printf("Digite 10 numeros reais:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &lista[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (lista[i] > lista[j]) {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", lista[i]);
    }
    printf("\n");

    return 0;
}
