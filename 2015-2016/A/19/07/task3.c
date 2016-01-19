#include <stdio.h>
#include <string.h>

void find_next_hex_number(int);
int palindrome(int);

int main()
{
	int number;
	
	scanf("%d", &number);
	
	while(palindrome(number) != 0)
	{
		palindrome(number);
		number++;			
	}
	
	
	return 0;
}

int palindrome(int number)
{
	char result[200];
	int i, l;
	for(i = 0; number != 0; i++)
	{
		if(number % 16 > 9)
		{
			result[i] = number % 16 + 'A' - 10;
		}
		else
			result[i] = number % 16 + '0';
			
		number /= 16;
	}
	result[i] = '\0';
	
	
	char reverse[200];
	for(l = strlen(result) - 1, i = 0; l != -1; l--, i++)
	{
		reverse[i] = result[l];
	}
	reverse[i] = '\0';	
	
	
	if (strcmp(result, reverse) == 0)
	{
		printf("%s", reverse);
		return 0;
	}
    else
    	return 1;

}
