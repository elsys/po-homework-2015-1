#include <stdio.h> 
#include <string.h>
#define string 100

int is_prime(int number);

int main()
{
	int prime, sample = 0;	
	
	prime = is_prime(sample);	

	printf("%d", prime);
	
	return 0;
}

int is_prime(int number)
{
	int count;
	char imput[string];

	scanf("%s", imput);

	for(count = 0 ; count < strlen(imput) ; count ++)
	{
		if(imput[count] >= '0' && imput[count] <= '9')
		{
			number = number * 10 + imput[count] - '0';
		}
		else
		{
			return -1;
		}
	}	

	if(number <= 1)
	{
		return 0;
	}
	
	for(count = 2 ; count < number ; count ++)
	{	
		if(number % count == 0)
		{
			return 0;	
		}
	} 

	return 1;

	return 0;
 
}
