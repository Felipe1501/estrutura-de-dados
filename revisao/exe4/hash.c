#include <stdio.h>
#include "hash.h"

// Initialize the hash table
void initializeHashTable(int hashTable[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            hashTable[i][j] = -1; // Using -1 to indicate an empty slot
        }
    }
}

// Insert values into the hash table using the hash function h(x) = x % SIZE
void insertToHashTable(int hashTable[SIZE][SIZE], int values[], int n) {
    for (int i = 0; i < n; i++) {
        int hashIndex = values[i] % SIZE;
        for (int j = 0; j < SIZE; j++) {
            if (hashTable[hashIndex][j] == -1) {
                hashTable[hashIndex][j] = values[i];
                break;
            }
        }
    }
}

// Sum the elements of a specific bucket in the hash table
int sumOfBucket(int hashTable[SIZE][SIZE], int bucketIndex) {
    int sum = 0;
    for (int j = 0; j < SIZE; j++) {
        if (hashTable[bucketIndex][j] != -1) {
            sum += hashTable[bucketIndex][j];
        }
    }
    return sum;
}
