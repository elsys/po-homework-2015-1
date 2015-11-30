#include <stdio.h>

int exact_square(int number);

int main() {
	int number;
	scanf ("%d", &number);
	exact_square(number);
	return 0;
}

int exact_square(int number) {
	int counter, checker = 0;
	for (counter = 0; counter < number; counter++) {
	if (counter * counter == number) checker = 1;
	}
	printf ("%d", checker);
	return 0;
}
