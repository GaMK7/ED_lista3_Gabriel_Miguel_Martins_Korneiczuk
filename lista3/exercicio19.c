#include <stdio.h>

int main() {
    int lista[50];
    int i;

    for (i = 0; i < 50; i++) {
        lista[i] = (i + 5 * i) % (i + 1);
    }

    printf("Valores do vetor gerado:\n");
    for (i = 0; i < 50; i++) {
        printf("%d ", lista[i]);
    }

    return 0;
}
