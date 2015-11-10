	#include <stdio.h>

	int exact_square(num);

	int main() {
	int num;
	do {
	printf ("\n Enter Number: ");
	scanf ("%d",&num); 
	} while (num < 0);
	exact_square(num);
	return 0;
	}

	int exact_square(num) {
	int count = 0, check = 0;
	while (count < num) {
	if (count * count == num) check = 1;
	count++;
	}
	if (check == 1) printf("\n 1 ");
	else printf ("\n 0 ");
	}
