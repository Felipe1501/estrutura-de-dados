#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void Init(Fila *F){
    F->comeco = F->final = 0;
}

int IsEmpty(Fila F){
    return (F.comeco == F.final);
}

int IsFull(Fila F){
    return (F.final >= MAX);
}

void Inserir(Fila *F, int x){
    if(IsFull(*F)){
        printf("A pilha esta cheia!\n");
        exit(1);
    }
    F->itens[F->final++] = x;
}

int Remover(Fila *F){
    if(IsEmpty(*F)){
        printf("\nFila vazia!\n");
        exit(1);
    }
    return F->itens[(F->comeco)++];
}