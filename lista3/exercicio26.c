#include <stdio.h>

int main() {
    float lista[10], media = 0, soma = 0, desvio = 0;
    int i;

    printf("Digite 10 numeros para calcular o desvio padrao:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &lista[i]);
        media += lista[i];
    }
    media /= 10;

    for (i = 0; i < 10; i++) {
        soma += (lista[i] - media) * (lista[i] - media);
    }

    float x = soma / 9;
    float r = x;
    if (x > 0) {
        for(i = 0; i < 10; i++) {
            r = 0.5 * (r + x / r);
        }
    }
    desvio = r;

    printf("Media: %.2f\n", media);
    printf("Desvio Padrao: %.4f\n", desvio);

    return 0;
}
