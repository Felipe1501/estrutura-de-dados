#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "recur.h"

int main(){
    char str[MAX];
    int tam, pos=0;

    printf("Digite a expressão: ");

    fgets(str, MAX, stdin);

    tam = strlen(str) - 1;

    if(expr(str, tam, &pos) && pos >= tam){
        printf("%s valida", str);
    }
    else{
        printf("%s invalida", str);
    }
    return 0;
}