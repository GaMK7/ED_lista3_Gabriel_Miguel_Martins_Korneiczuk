#include <stdio.h>

int main(){
	int lista[10];
	
	for(int i = 0; i < 10; ++i){
		printf("Digite um numero: ");
		scanf("%d", &lista[i]);
		if (lista[i] < 0){
			lista[i] = 0;
		}
	}
	
	for(int i = 0; i < 10; ++i){
		printf("\n[%d]", lista[i]);
	}
	
	return 0;
}
