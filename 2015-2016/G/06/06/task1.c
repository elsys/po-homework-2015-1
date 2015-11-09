#include <stdio.h>

int is_prime(number) {
	int counter = 2;

	for(;counter < number;) {
		if(number % counter!=0) counter++;
		else break;
	}
	if(number == counter) { return 1; }
	else { return 0; }
}

int main() {

	int number;

	
	scanf("\n%d", &number);
	printf("%d\n", is_prime(number));

	
}
