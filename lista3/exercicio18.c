#include <stdio.h>

int main() {
    int lista[10];
    int x, i, cont = 0;

    printf("Digite 10 numeros para o vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista[i]);
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Multiplos de %d encontrados: ", x);
    for (i = 0; i < 10; i++) {
        if (lista[i] % x == 0) {
            printf("%d ", lista[i]);
            cont++;
        }
    }
    printf("\nTotal de multiplos: %d\n", cont);

    return 0;
}
