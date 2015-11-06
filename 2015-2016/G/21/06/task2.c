#include <stdio.h>

int exact_square(int);

int main()
{
	int input_number;
	int square_root;

	scanf("%d",&input_number);

	square_root = exact_square(input_number);

	if(square_root) 
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	
	return 0;
}

int exact_square(int number)
{
	int square_root = 0;
	int counter;

	for (counter = 0; counter < number/2; counter++)
	{
		if(counter * counter == number)
		{
			square_root = 1;
			break;
		}
	}

	return square_root;
}
