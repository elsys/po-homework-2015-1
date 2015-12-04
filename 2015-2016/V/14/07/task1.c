#include <stdio.h>
#include <stdlib.h>

void rotr (int *a, int *b, int *c);

int main () {
	
	int a = 1, b = 2, c = 3;

	printf ("%d %d %d", a, b, c);

	return 0;
}

void (int *a, int *b, int *c) {

int random = *a;
*a = *c;
*c = *b;
*b = random;

}
