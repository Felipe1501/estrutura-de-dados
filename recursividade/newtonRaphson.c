#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define eps 1e-6

float f(float x){
    //f(x) = x3-8x2-28x+80
    return pow(x, 3) -8* pow(x, 2) -28 * x + 80;
}

float dfdx(float x){
    return 3 * pow(x, 2) - 16 * x - 28;
}

float newtonRaphson(float x){
    if(fabs(f(x)) < eps) 
        return x;
    else 
        return newtonRaphson(x - f(x)/dfdx(x));
}

int main(){
    float x;
    system("cls");

    printf("digite o valor inicial de x: ");
    scanf("%f", &x);


    printf("uma raiz da funcao: %f", newtonRaphson(x));

    return 0;
}