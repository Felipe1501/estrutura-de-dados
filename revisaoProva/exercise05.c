#include <stdio.h>
#include <stdlib.h>

int somaSerie(int i, int j, int k){
    if(i <= j){
        return i + somaSerie(i+k, j, k);
    }
    return 0;
}

int main(){
    int i, j, k;
    printf("Digite o valor inicial, o valor final e o passo: ");
    scanf("%d %d %d", &i, &j, &k);
    printf("A soma da serie é %d\n", somaSerie(i, j, k));
    return 0;
}