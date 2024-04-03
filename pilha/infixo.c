#include "pilha.h"
#include <stdio.h>

/* Protótipo das funções */
int prcd(char , char);
int IsOperand(char);

int main() {
    Pilha P; /* Pilha de operadores */
    char Simb; /* Símbolo da expressão infixa */
    char ExpIn[40]; /* Expressão infixa */
    char ExpPos[40]; /* Expressões posfixa */
    short int i=0,j=0; /* Índices para as expressões posfixa e infixa */
    Init(&P);
    printf("Este programa converte uma expressão Infixa para Posfixa");
    printf("\n\nEntre com a expressão infixa: ");
    scanf("%s",ExpIn);
    while(ExpIn[j]) { /* Varredura da expressão infixa */
        Simb=ExpIn[j++];
        if (IsOperand(Simb)){
        ExpPos[i++]=Simb; /* para a expressão posfixa */
    } else {
        while (!IsEmpty(P) && prcd(Top(&P),Simb)) {
    
    ExpPos[i++]=Pop(&P); 
    }  
    Push(&P,Simb); 
            } 
        }   
    while (! IsEmpty(P)) {
        ExpPos[i++]=Pop(&P);
        ExpPos[i]='\0';
        printf("Expressão Posfixa: %s\n",ExpPos);
    }
    return 0;
}
        


int prcd(char Op1, char Op2){
    return !((Op1 == '+' || Op1 == '-') && (Op2 == '*' || Op2 == '/'));
}

int IsOperand(char Op){
    return(Op != '+' && Op != '-' && Op != '*' && Op != '/');
}