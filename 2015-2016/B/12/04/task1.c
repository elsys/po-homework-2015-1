	#include <stdio.h>

	int is_prime(num);

	int main() {
	int num;
	printf ("\n Enter Number: ");
	scanf ("%d",&num);
	if (num > 1) is_prime(num);
	else printf ("\n -1 ");
	return 0;
	}

	int is_prime(num) {
	int count = 2, check = 0;
	while (count < num) {
	if (num % count != 0) count++;
	else break;
	}
	if (count == num) check = 1;
	if (check == 1 || num == 2) printf ("\n 1 ");
	else printf ("\n 0 ");
	}
	
