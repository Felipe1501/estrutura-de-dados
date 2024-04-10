#include <stdio.h>
#include <stdlib.h>

int x(int n, int m){
    if(n==m || n==0){
        return 1;
    }else{
        return x(n-1, m) + x(n-1, m+1);
    }
}

int main(){

    int n, m;
    printf("Digite um numero: ");
    scanf("%d", &n);
    m = 0;
    printf("O resultado é %d\n", x(n, m));
    
    return 0;

}