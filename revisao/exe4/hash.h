#ifndef HASH_H
#define HASH_H

#define SIZE 4

void initializeHashTable(int hashTable[SIZE][SIZE]);
void insertToHashTable(int hashTable[SIZE][SIZE], int values[], int n);
int sumOfBucket(int hashTable[SIZE][SIZE], int bucketIndex);

#endif
