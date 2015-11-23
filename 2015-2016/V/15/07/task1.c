#include <stdio.h>

void rotr(int*, int*, int*);

int main() {
	int a, b, c, d;
	do
		scanf("%d %d %d %d", ({printf("a b c d:"); &a;}), &b, &c, &d);
	while(d <= 0);
	do
		rotr(&a,&b,&c);
	while(--d);
	printf("%d %d %d\n", a, b, c);
	return 420;
}

void rotr(int* a, int* b, int* c) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
	
	*c = *c + *a;
	*a = *c - *a;
	*c = *c - *a;

}