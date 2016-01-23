#include <stdio.h>

void rotr(int* a, int* b, int* c) {
	int tmp = *a;
	*a = *b;
	*a = *c;
	*c = *b;
	*b = tmp;
}


int main() {
    int a, b, c, n;
    scanf("%d%d%d%d",&a,&b,&c,&n);

    while(n-- != 0) {
        rotr(&a,&b,&c);
    }

    printf("%d %d %d",a,b,c);

    return 0;
}

