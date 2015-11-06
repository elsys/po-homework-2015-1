#include <stdio.h>

int main()
{
	int number;
    printf("Number:");scanf("%d", &number);
	printf("%d", exact_square(number));
	return 0;
}

int exact_square(int number)
{
	int counter;
	for(counter=0; counter<=number; counter++)
    {
		if (number == counter*counter)
		{
			return 1;
		}
	}
	return 0;
}
