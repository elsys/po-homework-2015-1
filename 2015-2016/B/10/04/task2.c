#include <stdio.h>

int exact_square (int);

int main () {

	int number;

	scanf("%d",&number);

	printf("%d\n",exact_square (number));

	return 0;	
}

int exact_square (int num) {

	int counter,check = 0;

	for (counter = 1; counter <= num; counter++) {

		if (counter*counter == num) {
			check = 1; 
			break;
		}	
	}
	if (check) return 1;
	else return 0;
}
