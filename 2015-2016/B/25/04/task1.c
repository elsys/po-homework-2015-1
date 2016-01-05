#include <stdio.h>

int exact_square(int number);

int main() {
	int number;
	scanf ("%d", &number);
	exact_square(number);
	return 0;
}

int exact_square(int number) {
	int counter, checker = 1;
	for (counter=2; counter<number;counter++) {
	if (number%counter==0) {checker=0; break;}
	}
	printf ("%d", checker);
	return 0;
}
