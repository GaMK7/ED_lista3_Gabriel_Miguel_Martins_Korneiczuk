#include <stdio.h>

int main(){
    int lista[10], lista2[10];
    int k = 0;
    
    for(int i = 0; i < 10; ++i){
        printf("Digite um numero: ");
        scanf("%d", &lista[i]);    
    }
    
    for(int i = 0; i < 10; ++i){
        int repetido = 0;
        
        for(int j = 0; j < k; ++j){
            if(lista[i] == lista2[j]){
                repetido = 1;
                break;
            }
        }
        
        if(!repetido){
            lista2[k] = lista[i];
            k++;
        }
    }
    
    printf("\nLista sem repetidos:\n");
    
    for(int i = 0; i < k; ++i){
        printf("[%d] ", lista2[i]);
    }
    
    return 0;
}
