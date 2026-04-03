#include <stdio.h>

int main() {
    int lista[10];
    int i, j, num, existe;

    printf("Digite 10 numeros diferentes:\n");
    for (i = 0; i < 10; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &num);
        
        existe = 0;
        for (j = 0; j < i; j++) {
            if (lista[j] == num) {
                existe = 1;
                break;
            }
        }

        if (existe == 1) {
            printf("Numero ja digitado! Tente outro.\n");
            i--;
        } else {
            lista[i] = num;
        }
    }

    printf("\nVetor final:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}
