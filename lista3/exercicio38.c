#include <stdio.h>

int main() {
    float lista[10], num, aux;
    int i, j;

    printf("Digite 10 valores numericos:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &num);
        lista[i] = num;

        for (j = i; j > 0; j--) {
            if (lista[j] < lista[j - 1]) {
                aux = lista[j];
                lista[j] = lista[j - 1];
                lista[j - 1] = aux;
            }
        }
    }

    printf("\nValores em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", lista[i]);
    }
    printf("\n");

    return 0;
}
