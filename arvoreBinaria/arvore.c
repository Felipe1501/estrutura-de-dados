#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

// void InserirEsquerda(No *no, int valor){
//     if(no->esquerda == NULL){
//         No *novo = (No*)malloc(sizeof(No));
//         novo->conteudo = valor;
//         novo->esquerda = NULL;
//         novo->direita = NULL;
//         no->esquerda = novo;
//     }else{
//         if(valor < no->esquerda->conteudo)
//             InserirEsquerda(no->esquerda, valor);
//         else
//             InserirDireita(no->esquerda, valor);
//     }
// }

// void InserirDireita(No *no, int valor){
//     if(no->direita == NULL){
//         No *novo = (No*)malloc(sizeof(No));
//         novo->conteudo = valor;
//         novo->esquerda = NULL;
//         novo->direita = NULL;
//         no->direita = novo;
//     }else{
//         if(valor > no->direita->conteudo)
//             InserirDireita(no->direita, valor);
//         else
//             InserirEsquerda(no->direita, valor);
//     }
// }

// void Inserir(ArvB *arv, int valor){
//     if(arv->raiz == NULL){
//         No *novo = (No*)malloc(sizeof(No));
//         novo->conteudo = valor;
//         novo->esquerda = NULL;
//         novo->direita = NULL;
//         arv->raiz = novo;
//     }else{
//         if(valor < arv->raiz->conteudo)
//             InserirEsquerda(arv->raiz, valor);
//         else
//             InserirDireita(arv->raiz, valor);
//     }
// }

No * InserirArvore(No *raiz, int valor){
    if(raiz == NULL){
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        return novo;
    }else{
        if(valor < raiz->conteudo)
             raiz->esquerda = InserirArvore(raiz->esquerda, valor);
        else
             raiz->direita = InserirArvore(raiz->direita, valor);
        return raiz;
    }
}

void Imprimir(No *raiz){
    if(raiz != NULL){
        Imprimir(raiz->esquerda);
        printf("%d ", raiz->conteudo);
        Imprimir(raiz->direita);
    }
}