#include <stdio.h>

int main() {
    int lista[100];
    int n = 0, i = 1;

    while (n < 100) {
        if (i % 7 != 0 && i % 10 != 7) {
            lista[n] = i;
            n++;
        }
        i++;
    }

    printf("Os 100 primeiros naturais que nao sao multiplos de 7 ou terminam com 7:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", lista[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
