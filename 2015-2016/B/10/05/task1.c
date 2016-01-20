#include <stdio.h>

void rotr(int *, int *, int *, int);

int main () {

	int a, b, c;

	int n; 

	scanf("%d %d %d %d", &a, &b, &c, &n);

	rotr(&a, &b, &c, n);

	printf("%d %d %d\n", a, b, c);

	return 0;
}

void rotr(int *a, int *b, int *c, int number) {

	int swap_var, counter;
	
	for (counter = 1; counter <= number; counter++) {

			swap_var = *c;
			*c = *b;
			*b = *a;
			*a = swap_var;
	}
}
