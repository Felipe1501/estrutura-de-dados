#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

int main(){

    Lista Marvel, DC;
    IniciarLista(&Marvel);
    IniciarLista(&DC);

    InserirLista(&Marvel, 15, 0);
    InserirLista(&Marvel, 01, 1);
    InserirLista(&Marvel, 05, 2);

    InserirLista(&DC, 01, 0);
    InserirLista(&DC, 1939, 1);

    ConcatenarLista(&Marvel, DC);
    

    return 0;

    if(ConcatenarListas(&A, B)){
        printf("Listas concatenadas!\n");
    } else { 
        printf("Listas nao concatenadas!\n");
    }
    // int i;
    // for(i = 0; i < A.N; i++) {
    //     printf("%d\n", A.itens[i]);
    // }

    printf("Quantidade de elementos da lista: %d\n", ContarLista(A));
    int i;
    for(i = 1; i <= 5; i++) {
        int pos = LocalizarLista(A, i);
        printf("Localizacao do numero %d: %d\n", i, pos);
    }

//     ImprimirLista(A);

    InserirEmOrdemLista(&A, 9);
//     printf("\n\n");
    ImprimirLista(A);
    return 0;
}


