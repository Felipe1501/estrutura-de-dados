// main.c
#include <stdio.h>
#include "arvore.h"

int main() {
    Node *root = NULL;
    
    // Lista de entradas fornecidas
    int elements[] = {37, 18, 43, 51, 62, 26, 12, 9, 17, 48};
    int n = sizeof(elements) / sizeof(elements[0]);

    // Inserir elementos na árvore AVL
    for (int i = 0; i < n; i++) {
        root = insert(root, elements[i]);
    }

    // Calcular a soma das folhas
    int sum = sumLeaves(root);
    printf("A soma das folhas da árvore AVL é: %d\n", sum);

    return 0;
}
