#include<stdio.h>

void rotr(int *a, int *b,int *c) {
    int te,t,n,v;
    scanf("%d", &v);
    n = v % 10;
    v = v / 10;
    *c = v % 10;
    v = v / 10;
    *b = v % 10;
    v = v / 10;
    *a = v;
    for( ; n > 0 ; n-- ){
        te = *b;
        *b = *a;
        t=*c;
        *c = te;
        *a=t;
    }
}

int main() {
    int a, b ,c ;
    rotr(&a, &b , &c);
    printf("%d%d%d",a,b,c);

    return (0);
}
