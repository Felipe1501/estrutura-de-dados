#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void Init(Fila *F){
    F->comeco = F->final = 0;
}

int isEmpty(Fila F){
    return (F.comeco == F.final);
}

int isFull(Fila){
    return (F.final - F.comeco == MAX);
}

void Inserir(Fila *F, int x){
    if(isFull(*F)){
        printf("A pilha esta cheia!\n");
        exit(1);
    }
    F->itens[F->final % MAX] = x;
    (F->final)++;
}

int Remover(Fila *F){
    int x;
    if(isEmpty(*F)){
        print("\nA pilha esta vazia!\n");
        exit(1);
    }
    x = F->itens[F->comeco % MAX];
    (F->comeco)++;
    return x;
}