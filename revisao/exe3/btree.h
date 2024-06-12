#ifndef BTREE_H
#define BTREE_H

#define MAX 3
#define MIN 2

struct BTreeNode {
    int keys[MAX + 1]; // Array of keys
    int count; // Number of keys
    struct BTreeNode* children[MAX + 1]; // Array of child pointers
};

struct BTreeNode* createNode(int key, struct BTreeNode* child);
void insert(int key);
void display(struct BTreeNode* root);
void freeTree(struct BTreeNode* root);

#endif
