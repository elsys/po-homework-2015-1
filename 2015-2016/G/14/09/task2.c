#include<stdio.h>

int main(){
    int n, v, p;
    do {
        scanf("%d %d %d", &n, &v, &p);
    } while((v < 0) || (v < 0) || (p < 0) || (p > 7));

    if(v == 1){
        n |= 1 << p;
    }else{
        n &= ~(1 << p);
    }

    printf("%d", n);
    return 0;
}
