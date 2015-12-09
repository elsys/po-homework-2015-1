#include <stdio.h>

void rotr(int*,int*,int*);

int main() {
    int a, b, c, n;
    scanf("%d%d%d%d",&a,&b,&c,&n);

    while(n-- != 0) {
        rotr(&a,&b,&c);
    }

    printf("%d %d %d",a,b,c);

    return 0;
}

void rotr(int* a, int* b, int* c) {
    *a += *b;
    *b = *a - *b;
    *a -= *b;
    *a += *c;
    *c = *a - *c;
    *a -= *c;
}
