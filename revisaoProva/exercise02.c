#include <stdio.h>

int mdc(int a, int b){
    if(a % b == 0) return b;
    return mdc(b, (a % b));

} 

int main(){

    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d", mdc(x, y));
    return 0;
}