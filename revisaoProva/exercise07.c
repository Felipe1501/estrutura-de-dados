#include <stdio.h>

float funcao_n(float n){
    if(n == 0) return 1;
    else if(n == 1) return (1+ 1/n) * funcao_n(n-1);
    else return (1 + 1/n) * funcao_n(n-1) - (1/n) * funcao_n(n-2);
}

int main(){
    float n;

    scanf("%f", &n);
    printf("%f", funcao_n(n));
}

//2.7182