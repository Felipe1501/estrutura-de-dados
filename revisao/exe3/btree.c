#include <stdio.h>
#include <stdlib.h>
#include "btree.h"

struct BTreeNode* root = NULL;

struct BTreeNode* createNode(int key, struct BTreeNode* child) {
    struct BTreeNode* newNode;
    newNode = (struct BTreeNode*)malloc(sizeof(struct BTreeNode));
    newNode->keys[1] = key;
    newNode->count = 1;
    newNode->children[0] = root;
    newNode->children[1] = child;
    return newNode;
}

void insert(int key) {
    int i, flag;
    struct BTreeNode* child;

    flag = setval(key, &i, root, &child);
    if (flag) {
        root = createNode(i, child);
    }
}

int setval(int key, int* pval, struct BTreeNode* node, struct BTreeNode** child) {
    int pos;

    if (!node) {
        *pval = key;
        *child = NULL;
        return 1;
    }

    if (key < node->keys[1]) {
        pos = 0;
    } else {
        for (pos = node->count; (key < node->keys[pos] && pos > 1); pos--);
        if (key == node->keys[pos]) {
            return 0;
        }
    }

    if (setval(key, pval, node->children[pos], child)) {
        if (node->count < MAX) {
            insertByShift(*pval, pos, node, *child);
        } else {
            split(*pval, pval, pos, node, *child, child);
            return 1;
        }
    }
    return 0;
}

void insertByShift(int key, int pos, struct BTreeNode* node, struct BTreeNode* child) {
    int i;
    for (i = node->count; i > pos; i--) {
        node->keys[i + 1] = node->keys[i];
        node->children[i + 1] = node->children[i];
    }
    node->keys[pos + 1] = key;
    node->children[pos + 1] = child;
    node->count++;
}

void split(int key, int* pval, int pos, struct BTreeNode* node, struct BTreeNode* child, struct BTreeNode** newnode) {
    int median, i;

    if (pos > MIN)
        median = MIN + 1;
    else
        median = MIN;

    *newnode = (struct BTreeNode*)malloc(sizeof(struct BTreeNode));
    for (i = median + 1; i <= MAX; i++) {
        (*newnode)->keys[i - median] = node->keys[i];
        (*newnode)->children[i - median] = node->children[i];
    }

    (*newnode)->count = MAX - median;
    node->count = median;

    if (pos <= MIN) {
        insertByShift(key, pos, node, child);
    } else {
        insertByShift(key, pos - median, *newnode, child);
    }

    *pval = node->keys[node->count];
    (*newnode)->children[0] = node->children[node->count];
    node->count--;
}

void display(struct BTreeNode* node) {
    if (node) {
        for (int i = 1; i <= node->count; i++) {
            printf("%d ", node->keys[i]);
        }
        printf("\n");
        for (int i = 0; i <= node->count; i++) {
            display(node->children[i]);
        }
    }
}

void freeTree(struct BTreeNode* node) {
    if (node) {
        for (int i = 0; i <= node->count; i++) {
            freeTree(node->children[i]);
        }
        free(node);
    }
}
