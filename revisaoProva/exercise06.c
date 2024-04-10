#include <stdio.h>
#include <stdlib.h>

float somaS(float n){
    if(n == 1.){
        return 2.;    
    }else{
        return (n*n+1) + somaS(n-1);
    }
}

int main(){

    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);
    printf("O resultado da soma é %.2f\n", somaS(n));
    
    return 0;

}