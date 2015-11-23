#include <stdio.h>

void rotr(int *, int *, int *);

int main() {
	int a, b, c, n, limit;

	scanf("%d %d %d %d", &a, &b, &c, &n);

	for(limit = 1; limit <= n; limit++)
		rotr(&a, &b, &c);

	printf("%d %d %d \n", a, b, c);


	return 0;
}

void rotr(int *a, int *b, int *c) {
	int temp;

	temp = *b;
	*b = *c;
	*c = temp;

	temp = *a;
	*a = *b;
	*b = temp;
}