#include <stdio.h>
#include <stdlib.h>

void leitor(void){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    if (x >= 0){
        printf("o valor digitado é %d\n", x);
        leitor();
    }
    
}

int main(){

    leitor();
    
    return 0;

}