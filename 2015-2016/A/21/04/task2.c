#include <stdio.h>

int exact_square(float number);

int main()
{
	float number1;
	
	scanf("%f", &number1);

	exact_square(number1);
	
	return 0;
}

int exact_square(float number)
{
	int count = 0, replacer;

	if(number - (int)number == 0)
	{
		replacer = (int)number;
	}
 	
	for(count = 0 ; count < number ; count ++)
	{
		if(count * count == replacer)
		{
			printf("1\n");
			return 0;
		}
	}
	printf("0\n");
	
	return 0;
}
