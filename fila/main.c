#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

int main(){
    Fila F;
    Init(&F);
    int i, num;
    while(!IsFull(F)){
        for(i=1; i <= 15; i++){
            Inserir(&F, i);
            printf("%d inserido.\n", i);
        }
        for(i = 1; i <= 15; i++){
            num = Remover(&F);
            printf("%d removido.\n", num);
        }
    }
    return 0;
}