#include <stdio.h>

int main(){
	float lista[5];
	int codigo = 9;
	
	for(int i = 0; i < 5; ++i){
		printf("Digite um numero: ");
		scanf("%f", &lista[i]);
	}
	
	while(codigo != 0){
		printf("\nEscolha\n0 - finalizar programa\n1 - mostrar vertor\n2 - mostrar vetor inverso\n");
		scanf("%d", &codigo);
		if(codigo == 1){
			for(int i = 0; i < 5; ++i){
				printf("[%f]", lista[i]);
			}
		} else if (codigo == 2){
			for(int i = 4; i > -1; --i){
				printf("[%f]", lista[i]);
			}
		} else if (codigo == 0) {
			return 0;
		} else {
			printf("Escolha uma opcao abaixo\n");
		}
	}
	
}
