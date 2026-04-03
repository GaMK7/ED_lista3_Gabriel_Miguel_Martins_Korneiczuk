#include <stdio.h>

int main() {
    int lista[6];
    int i, soma_par = 0, qtd_impar = 0;

    printf("Digite 6 numeros inteiros:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &lista[i]);
    }

    printf("\nNumeros pares: ");
    for (i = 0; i < 6; i++) {
        if (lista[i] % 2 == 0) {
            printf("%d ", lista[i]);
            soma_par += lista[i];
        }
    }
    printf("\nSoma dos pares: %d\n", soma_par);

    printf("\nNumeros impares: ");
    for (i = 0; i < 6; i++) {
        if (lista[i] % 2 != 0) {
            printf("%d ", lista[i]);
            qtd_impar++;
        }
    }
    printf("\nQuantidade de impares: %d\n", qtd_impar);

    return 0;
}
