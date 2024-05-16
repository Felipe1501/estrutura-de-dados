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
        printf("\n\t0 - sair\n\t1 - inserir\n\t2 - imprimir\n\t3 - tamanho da arvore\n\t4 - buscar\n");
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
            break;
        case 3:
            printf("tamanho da arvore: %d\n", tamanho(raiz));
            break;
        case 4:
            printf("digite um valor para buscar: ");
            scanf("%d", &valor);
            busca(raiz, valor);
            break;
        default:
            printf("\nOpcao invalida!.....");
        }
    }while(op != 0);

    return 0;
}