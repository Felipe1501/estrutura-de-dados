#include <stdio.h>
#include "btree.h"

int main() {
    int values[] = {12, 17, 48, 53, 19, 23, 38, 16, 9, 27, 42, 22, 31, 18};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++) {
        insert(values[i]);
    }

    // Inserir 25 e mostrar resultado
    insert(25);
    printf("Valores na raiz da árvore após a inserção de 25:\n");
    display(root);

    freeTree(root);
    return 0;
}
