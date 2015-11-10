#include <stdio.h>

void rotr(int *a, int *b, int *c);

int main() {

	int number,a,b,c,counter;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &number);

	for(counter = 0; counter < number; counter++) {

		rotr(&a, &b, &c);
	}	
	
	printf("%d %d %d\n", a, b, c);

	return 0;
}

void rotr(int *a, int *b, int *c) {
	
	int swapp;

	swapp = *c;
	*c = *b;
	*b = *a;
	*a = swapp;
	
}
