#include <stdio.h>

int main() {
    int a, b, i;
    int lista1[5] = {0,0,0,0,0}; 
    int lista2[5] = {0,0,0,0,0};
    int lista3[6] = {0,0,0,0,0,0};
    int vai_um = 0;

    printf("Digite o numero a (positivo < 10000): ");
    scanf("%d", &a);
    printf("Digite o numero b (positivo < 10000): ");
    scanf("%d", &b);

    i = 0;
    while (a > 0) {
        lista1[i] = a % 10;
        a = a / 10;
        i++;
    }

    i = 0;
    while (b > 0) {
        lista2[i] = b % 10;
        b = b / 10;
        i++;
    }

    for (i = 0; i < 5; i++) {
        lista3[i] = lista1[i] + lista2[i] + vai_um;
        if (lista3[i] >= 10) {
            lista3[i] = lista3[i] - 10;
            vai_um = 1;
        } else {
            vai_um = 0;
        }
    }
    lista3[5] = vai_um;

    printf("Resultado da soma pelos vetores: ");
    int inicio = 0;
    for (i = 5; i >= 0; i--) {
        if (lista3[i] != 0) {
            inicio = 1;
        }
        if (inicio == 1) {
            printf("%d", lista3[i]);
        }
    }
    printf("\n");

    return 0;
}
