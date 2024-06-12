// arvore.h
#ifndef ARVORE_H
#define ARVORE_H

typedef struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height;
} Node;

// Funções para manipulação da árvore AVL
Node* newNode(int key);
Node* insert(Node* node, int key);
int sumLeaves(Node* node);
int height(Node *N);
int getBalance(Node *N);
Node *rightRotate(Node *y);
Node *leftRotate(Node *x);
int max(int a, int b);

#endif
