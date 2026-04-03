#include <stdio.h>

int main() {
    int lista1[10], lista2[10], lista3[10];
    int i, j1 = 0, j2 = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista1[i]);
        if (lista1[i] % 2 != 0) {
            lista2[j1] = lista1[i];
            j1++;
        } else {
            lista3[j2] = lista1[i];
            j2++;
        }
    }

    printf("\nElementos impares utilizados:\n");
    for (i = 0; i < j1; i++) {
        printf("%d ", lista2[i]);
    }

    printf("\nElementos pares utilizados:\n");
    for (i = 0; i < j2; i++) {
        printf("%d ", lista3[i]);
    }
    printf("\n");

    return 0;
}
