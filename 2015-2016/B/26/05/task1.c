#include<stdio.h>

void rotr(int *a, int *b,int *c,int linuxcantcompilesimple30liner ) {
    int t;
    for( ; linuxcantcompilesimple30liner > 0 ; linuxcantcompilesimple30liner-- ){
        t = *a;
        *a = *c;
        *c = *b;
        *b = t;
    }
    
}

int main() {
    int a , b , c , linuxcantcompilesimple30liner ;
        scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &linuxcantcompilesimple30liner);
	
    rotr(&a, &b , &c , linuxcantcompilesimple30liner);
    printf("%d %d %d", a , b , c);

    return 0;
}
