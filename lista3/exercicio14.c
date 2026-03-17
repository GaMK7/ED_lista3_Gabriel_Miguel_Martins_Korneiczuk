#include <stdio.h>

int main(){
	int lista[10];
	
	for(int i = 0; i < 10; ++i){
		printf("Digite um numero: ");
		scanf("%d", &lista[i]);
	}
	
	for(int i = 0; i < 10; ++i){
		for(int j = i + 1; j < 10; ++j){
			if(lista[i] == lista[j]){
				printf("\nNumero igual: %d", lista[j]);
				break;
			}
		}
	}
	
	return 0;
}
