#include <stdio.h>
#include <stdlib.h>

int x(int n){
    if (n >= 0 && n <= 2) return n;
    return(x(n-1)+x(n-2)+x(n-3));
}

int main(){

    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("O resultado é %d\n", x(n));
    
    return 0;

}