#include <stdio.h>

#define MAX_LENGHT 11

int is_prime(int numb);
int string_to_int(char string_number[], int *check_number);

int main()
{
	char input_number[MAX_LENGHT];
	int number_cheker;
	int number;

	scanf("%s",input_number);
        number = string_to_int(input_number,&number_cheker);
	if(!number_cheker)
	{
		printf("-1");
		return 0;
	}
	printf("%d", is_prime(number));
	return 0;
}

int is_prime(int numb)
{
	int counter = 2;
	for(; counter <= numb/2; counter++)
	{
		if(numb % counter == 0)
		{
			return 0;
		}
	}
	return 1;
}

int string_to_int(char string_number[], int *check_number)
{
	int number = 0;
	int counter = 0;
	int string_lenght = -1;
	while(string_number[++string_lenght] != '\0')
		;
	if(string_number[0] == '-')
	{
		counter = 1;
	}
	for (; counter < string_lenght; counter++)
	{
		if (string_number[counter] < '0' || string_number[counter] > '9')
		{
			*check_number = 0;
			return 0;
		}
		number = number * 10 + (string_number[counter] - '0');
	}
	*check_number = 1;
	if(string_number[0] == '-')
	{
		number *= -1;
	}
	return number;
}
