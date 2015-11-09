#include <stdio.h>
#include <math.h>

int exact_square(int);

int main()
{
	int number = 0;

	scanf("%d", &number);

	exact_square(number);

	printf("%d\n", exact_square(number));

	return 0;
}

int exact_square(int number)
{
	int count = 0;
	int value = 0;

	for(count = 0; count <= number / 2; count++)
	{
	    if(count * count == number)
	    {
		    value = 1;
	    }

	}

	return value;

}
