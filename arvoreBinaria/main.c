#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "arvore.h"

int main(){

    setlocale(LC_ALL, "Portuguese");

    int op, valor;
    ArvB arv;

    No *raiz = NULL;

    arv.raiz = NULL;
    do{
        printf("\n\t0 - sair\n\t1 - inserir\n\t2 - imprimir\n");
        scanf("%d", &op);
    
        switch (op)
        {
        case 0:
            printf("\nSaindo.....\n");
            break;
        case 1:
            printf("digite um valor: ");
            scanf("%d", &valor);
            raiz = InserirArvore(raiz, valor);
            //Inserir(&arv, valor);
            break;
        case 2:
            printf("impressao arvore binaria:\n");
            printf("\n");
            Imprimir(raiz);
            printf("\n");
            printf("tamanho da arvore: %d\n", tamanho(raiz));
            printf("\n");
            break;
        default:
            printf("\nOpcao invalida!.....");
        }
    }while(op != 0);

    return 0;
}