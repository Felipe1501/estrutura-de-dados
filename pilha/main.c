#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    Pilha A; ///pilha para teste
    int num; ///variável de controle
    Init(&A); ///inicializa a pilha de teste
    scanf("%d", &num);

    while(num >= 2) {
        Push(&A, num % 2);
        num = num/2;
    }
    Push(&A, num);

    while(!IsEmpty(A)) {
        printf("%d", Pop(&A));
    }
}