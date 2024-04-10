#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){

    int num[TAM], i, cont, aux;

    printf("Digite 10 numeros: ");
    for(i = 0; i < TAM; i++){
        scanf("%d", &num[i]);
    }

    printf("ordem atual: ");
    for(i = 0; i < TAM; i++){
        printf("%d ", num[i]);
    }

    //algoritmo bubblesort
    for(cont = 1; cont < TAM; cont++){
        for(i = 0; i < TAM - 1; i++){
            if(num[i] > num[i+1]){
                aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;
            }
        }
    }

    printf("\nordem crescente: ");
    for(i = 0; i < TAM; i++){
        printf("%d ", num[i]);
    }

    return 0;
}