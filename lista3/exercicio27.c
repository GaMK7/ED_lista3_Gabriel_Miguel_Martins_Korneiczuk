#include <stdio.h>

int main() {
    int lista[10];
    int i, j, primo;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista[i]);
    }

    printf("\nNumeros primos encontrados:\n");
    for (i = 0; i < 10; i++) {
        if (lista[i] < 2) {
            continue;
        }
        primo = 1;
        for (j = 2; j <= lista[i] / 2; j++) {
            if (lista[i] % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo == 1) {
            printf("Valor: %d na Posicao: %d\n", lista[i], i);
        }
    }

    return 0;
}
