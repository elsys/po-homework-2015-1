#include <stdio.h>

int exact_square(int);

int main() {

	int number;
	scanf("%d", &number);

	printf("%d", exact_square(number));

	return 0;
}

int exact_square(int number) {

	int i;

	if (number == 0 || number == 1) {
		return 1;
	}

	for (i = 1; i < number; i++) {

		if (i * i == number) {
			return 1;
		} else if (i * i > number) {
			break;
		}
	}

	return 0;
}
