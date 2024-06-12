#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct Nodo* cria_nodo(int valor) {
    struct Nodo* novo_nodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    novo_nodo->valor = valor;
    novo_nodo->esq = NULL;
    novo_nodo->dir = NULL;
    return novo_nodo;
}

void insere_nodo(struct Nodo** head, int valor) {
    struct Nodo* novo_nodo = cria_nodo(valor);
    if (*head == NULL) {
        *head = novo_nodo;
    } else {
        struct Nodo* temp = *head;
        while (temp->dir != NULL) {
            temp = temp->dir;
        }
        temp->dir = novo_nodo;
        novo_nodo->esq = temp;
    }
}

void libera_lista(struct Nodo* head) {
    struct Nodo* temp;
    while (head != NULL) {
        temp = head;
        head = head->dir;
        free(temp);
    }
}
