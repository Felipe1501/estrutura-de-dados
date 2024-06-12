#include <stdio.h>
#include "list.h"

int main() {
    struct Nodo* lista = NULL;
    int valores[] = {48, 16, 37, 22, 14, 12, 11};
    int n = sizeof(valores) / sizeof(valores[0]);
    
    for (int i = 0; i < n; i++) {
        insere_nodo(&lista, valores[i]);
    }

    // Navegar para L -> esq -> esq -> esq -> dir partindo do nodo final
    struct Nodo* temp = lista;
    while (temp->dir != NULL) {
        temp = temp->dir;
    }
    // temp agora é o nodo com valor 11
    if (temp != NULL) temp = temp->esq; // Nodo com valor 12
    if (temp != NULL) temp = temp->esq; // Nodo com valor 14
    if (temp != NULL) temp = temp->esq; // Nodo com valor 22
    if (temp != NULL) temp = temp->dir; // Nodo com valor 14
    
    if (temp != NULL) {
        printf("O valor de L -> esq -> esq -> esq -> dir é: %d\n", temp->valor);
    } else {
        printf("Nó não encontrado.\n");
    }
    
    libera_lista(lista);
    
    return 0;
}
