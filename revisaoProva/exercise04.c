#include <stdio.h>
#include <stdlib.h>

void imprimeSerie(int i, int j , int k){
    if(i <= j){
        printf("%4d ", i);
        imprimeSerie(i+k, j, k);
    }
}

int main(){
    int i, j, k;
    printf("Digite o valor inicial, o valor final e o passo: ");
    scanf("%d %d %d", &i, &j, &k);
    imprimeSerie(i, j, k);
    return 0;
}