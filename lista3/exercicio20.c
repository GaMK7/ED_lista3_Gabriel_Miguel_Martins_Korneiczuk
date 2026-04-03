#include <stdio.h>

int main() {
    int lista1[10], lista2[10];
    int i, j = 0, num;

    printf("Digite 10 numeros entre 0 e 50:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num >= 0 && num <= 50) {
            lista1[i] = num;
            if (num % 2 != 0) {
                lista2[j] = num;
                j++;
            }
        } else {
            printf("Numero invalido. Tente novamente: ");
            i--;
        }
    }

    printf("\nPrimeiro vetor (todos):\n");
    for (i = 0; i < 10; i += 2) {
        printf("%d %d\n", lista1[i], lista1[i+1]);
    }

    printf("\nSegundo vetor (impares):\n");
    for (i = 0; i < j; i++) {
        printf("%d ", lista2[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    return 0;
}
