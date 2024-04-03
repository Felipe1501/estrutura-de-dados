#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "recur.h"

int getsimb(char *str, int tam, int *ppos){
    int c;
    if(*ppos < tam){
        c = str[*ppos];
    }
    else {
        c = ' ';
    }
    (*ppos)++;
    return c;
}

int expr(char *str, int tam, int *ppos){
    if(!termo(str, tam, ppos)){
        return FALSE;}
    if(getsimb(str, tam, ppos) != '+'){
        (*ppos)--;
        return TRUE;
    }
        return(termo(str, tam, ppos));
}

int termo(char *str, int tam, int *ppos){
    if(!fator(str, tam, ppos)){
        return FALSE;
    }
    if(getsimb(str, tam, ppos) != '*'){
    (*ppos)--;
        return TRUE;
    }
        return(fator(str, tam, ppos));
}

int fator(char *str, int tam, int *ppos){
    int c;
    if((c = getsimb(str, tam, ppos)) != '(') return (isalpha(c));
    return(expr(str, tam, ppos) && getsimb(str, tam, ppos) == ')');
}