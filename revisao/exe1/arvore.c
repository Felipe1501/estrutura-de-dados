// arvore.c
#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

// Função para obter a altura de um nó
int height(Node *N) {
    if (N == NULL)
        return 0;
    return N->height;
}

// Função para obter o máximo entre dois inteiros
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Função para criar um novo nó AVL
Node* newNode(int key) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1; // Novo nó inicialmente é uma folha
    return(node);
}

// Função para realizar uma rotação à direita
Node *rightRotate(Node *y) {
    Node *x = y->left;
    Node *T2 = x->right;

    // Realizar rotação
    x->right = y;
    y->left = T2;

    // Atualizar alturas
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    // Retornar nova raiz
    return x;
}

// Função para realizar uma rotação à esquerda
Node *leftRotate(Node *x) {
    Node *y = x->right;
    Node *T2 = y->left;

    // Realizar rotação
    y->left = x;
    x->right = T2;

    // Atualizar alturas
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    // Retornar nova raiz
    return y;
}

// Função para obter o fator de balanceamento de um nó
int getBalance(Node *N) {
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

// Função para inserir uma nova chave na árvore AVL
Node* insert(Node* node, int key) {
    // 1. Inserir normalmente na árvore binária de busca
    if (node == NULL)
        return(newNode(key));

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else // Chaves iguais não são permitidas na árvore AVL
        return node;

    // 2. Atualizar a altura do nó ancestral
    node->height = 1 + max(height(node->left), height(node->right));

    // 3. Obter o fator de balanceamento deste nó ancestral para verificar se este nó ficou desbalanceado
    int balance = getBalance(node);

    // Se o nó ficou desbalanceado, então existem 4 casos a considerar:

    // Caso Esquerda-Esquerda
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    // Caso Direita-Direita
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    // Caso Esquerda-Direita
    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Caso Direita-Esquerda
    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    // Retornar o nó (inalterado)
    return node;
}

// Função para calcular a soma das folhas da árvore AVL
int sumLeaves(Node* node) {
    if (node == NULL)
        return 0;

    // Se for uma folha, retornar o valor da chave
    if (node->left == NULL && node->right == NULL)
        return node->key;

    // Recursivamente somar as folhas das subárvores esquerda e direita
    return sumLeaves(node->left) + sumLeaves(node->right);
}
