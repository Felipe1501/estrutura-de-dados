#include <stdio.h>

float potencia(float x, int y){
    if(y > 0) return x * potencia(x, y-1);
    else if(y < 0) return (1/x) * potencia(x, y+1);
    return 1;
}

int main(){

    int x, y;

    scanf("%d %d", &x, &y);
    printf("%f", potencia(x, y));
    return 0;
}