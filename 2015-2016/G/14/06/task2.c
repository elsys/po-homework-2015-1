#include <stdio.h>

int exact_square(int number)
{
	int i = 0;
	for(i = 0; i < number; i ++) {
		if((i*i) == number) {
			return 1;
		}
	}
	return 0;
}

int main ()
{
	int number;
	scanf("%d",&number);
	int has_square = 0;
	has_square = exact_square(number);
	printf("%d\n", has_square);

	return 0;
}
