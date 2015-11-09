#include<stdio.h>

int number, counter, counter1 = 0;

void is_prime() {

	scanf("%d", &number);
	for (counter = 1; counter <= number; counter++) {

		if (number % counter == 0)
			counter1++;

	}
	if (counter1 == 2)
		printf("\n 1");
	if (counter1 > 2)
		printf("\n 0");
	if (counter1 < 2)
		printf("\n -1");

}
int main() {

	is_prime();
	return 0;
}

