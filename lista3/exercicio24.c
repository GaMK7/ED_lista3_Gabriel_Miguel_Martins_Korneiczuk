#include <stdio.h>

int main() {
    int lista1[10];
    float lista2[10];
    int i, id_alto, id_baixo;
    float alto, baixo;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero do aluno %d e sua altura: ", i + 1);
        scanf("%d %f", &lista1[i], &lista2[i]);
    }

    alto = baixo = lista2[0];
    id_alto = id_baixo = lista1[0];

    for (i = 1; i < 10; i++) {
        if (lista2[i] > alto) {
            alto = lista2[i];
            id_alto = lista1[i];
        }
        if (lista2[i] < baixo) {
            baixo = lista2[i];
            id_baixo = lista1[i];
        }
    }

    printf("\nAluno mais alto: Numero %d, Altura %.2f\n", id_alto, alto);
    printf("Aluno mais baixo: Numero %d, Altura %.2f\n", id_baixo, baixo);

    return 0;
}
