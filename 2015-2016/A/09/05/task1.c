#include <stdio.h>

void rotr(int*, int*, int*);

int main() {

	int a, b, c, rotations;

	scanf("%d %d %d %d", &a, &b, &c, &rotations);
	
	while (rotations > 0) {
		rotr(&a, &b, &c);
		rotations--;
	}

	printf("%d %d %d", a , b, c);

	return 0;
}

void rotr(int *a, int *b, int *c) {
	int temp = *a + *b;
	*a = *c;
	*b = temp - *b;
	*c = temp - *b;
}