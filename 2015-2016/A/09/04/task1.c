#include <stdio.h>
#include <string.h>

int is_prime(char*);

int main() {

	char input[11];
	fgets(input, 11, stdin);

	printf("%d", is_prime(input));

	return 0;
}

int is_prime(char* input) {

	int i, length, number = 0;

	length = strlen(input) - 1;

	for (i = 0; i < length; i++) {
		if (input[i] < '0' || input[i] > '9') {
			return -1;
		}
	}

	for (i = 0; i < length; i++) {
		number += input[i] - '0';
		if (i != length - 1) {
			number *= 10;
		}
	}

	if (number == 0 || number == 1) {
		return 0;
	}

	for (i = 2; i < number; i++) {
		if (number % i == 0 && i != number) {
			return 0;
		}
	}

	return 1;	
}
