#ifndef LIST_H
#define LIST_H

struct Nodo {
    int valor;
    struct Nodo* esq;
    struct Nodo* dir;
};

struct Nodo* cria_nodo(int valor);
void insere_nodo(struct Nodo** head, int valor);
void libera_lista(struct Nodo* head);

#endif
