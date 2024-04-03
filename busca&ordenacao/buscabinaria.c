#include "buscabinaria.h"

int buscaseq(int a[], int x, int s, int d){
    if(p >= s){
        return -1;
    }
    if(a[p] == x){
        return p;
    }
}

int buscabin(int a[], int x, int e, int d){

    int m;
    
    if(e > d) return -1;      //não encontrou x em a[]
    m = (e + d)/2;
    
    if(a[m] == x) return m;

    if(x < a[m]) d = m - 1; //move d para a esquerda de m

    else e = m + 1; //move e para a direita de m
    
    return(buscabin(a, x, e, d));
}

// int main(){

//     int a[MAX];
//     int i;
//     for(i = 0; i < MAX; i++) a[i] = i*2;

//     int x;

//     scanf("%d", &x);

//     printf("%d", buscabin(a, x, 0, MAX));


//     return 0;
// }