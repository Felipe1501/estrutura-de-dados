#include <stdio.h>
#include "hash.h"

int main() {
    int hashTable[SIZE][SIZE];
    int values[] = {17, 45, 38, 27, 21, 41, 31, 11, 6, 26, 35, 48, 29, 12, 7, 33};
    int n = sizeof(values) / sizeof(values[0]);

    // Initialize the hash table
    initializeHashTable(hashTable);

    // Insert values into the hash table
    insertToHashTable(hashTable, values, n);

    // Calculate and print the sum of elements in bucket 2
    int bucketIndex = 2;
    int sum = sumOfBucket(hashTable, bucketIndex);
    printf("A soma dos elementos do encaixe %d é: %d\n", bucketIndex, sum);

    return 0;
}
