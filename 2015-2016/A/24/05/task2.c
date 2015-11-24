#include <stdio.h>
#include <string.h>

void next_generation(int * current, int *  next, int length);


int main()
{
	int length, current[20], next[20],  i = 0, j = 0, zero = 0;

	scanf("%d", &length);
	if (length > 20 || length < 0)
	{
		printf("Enter a number betweeen 20 and 0");
		return 1;
	}


	for (i = 0; i<length; i++)
	{
		scanf("%d", &current[i]);

		if (current[0] == 1 || current[length - 1] == 1)
		{
			printf("first and last cells must be dead");
			return 1;
		}
		if (current[i] != 1 && current[i] != 0)
		{
			printf("Correct inputs are only 0 and 1 ");
			return 1;
		}
	}

	for (i = 0; i < length; i++)
	{
		if (current[i] == 1)
			printf("*");
		else
			printf(".");
	}
	printf("\n");



	j = 0;
	for (i = 0; i < 1000; i++)
	{
		zero = 0;
		next_generation(current, next, length);



		for ( j = 0; j < length; j++)
		{

			if (current[j] == 0)
				zero++;


		}
		printf("\n");

		if (zero == length)
		{
			break;
		}



	}
	return 0;
}


void next_generation(int *current, int *next, int length)
{
	int i = 0, zero = 0;
	next[0] = 0;
	next[length - 1] = 0;

	for (i = 1; i < length - 1; i++)
	{
		if ((current[i] == 0) && ((current[i - 1] == 1 || current[i + 1] == 1) && !(current[i - 1] == 1 && current[i + 1] == 1)))
			next[i] = 1;

		else
			next[i] = 0;

	}


	for (i = 0; i <= length; i++)
	{
		current[i] = next[i];
		if (current[i] == 1)
			printf("*");
		if (current[i] == 0)
		{
			zero++;
			printf(".");
		}



	}
}