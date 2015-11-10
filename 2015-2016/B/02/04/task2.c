#include <stdio.h>

int exact_square(int square_number)
{
	int counter;

	for(counter = 2; counter < square_number; counter++)
	{
		if(square_number / counter == counter && square_number % counter == 0)
		{
			return 1;
			break;
		}
	}
	return 0;
}



int main()
{
	int  sqrt_numb;



	scanf("%d", &sqrt_numb);
	printf("%d", exact_square(sqrt_numb));



	return 0;
}
