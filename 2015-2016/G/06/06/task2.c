#include <stdio.h>

int exact_square(number) {
	int square = 0;
	 
	for(;square <= number;square++) {
		if(number == square * square) return 1;
	}
	return 0;
	
}

int main() {
	int number;

	scanf("\n%d", &number);
	printf("\n%d", exact_square(number));

	return 0;
	
}
