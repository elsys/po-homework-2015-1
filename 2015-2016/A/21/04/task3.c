#include <stdio.h>
#define Alpha 26

void create_letter_distribution_diagram();

int main()
{
	void create_letter_distribution_diagram();
	return 0;
}

void create_letter_distribution_diagram()
{
	int count = 0 ,times[200], i, maximum = 0;
	char alphabet[Alpha], letter;
	
	for(letter = 'a' , count = 0; letter <= 'z'; letter ++, count ++)
	{	
		times[count] = 0;
		alphabet[count] = letter;
	}
	
	while(1) 
	{
		letter = getchar();
		if(letter == EOF)
		{
			break;
		}
	
		for(i = 0; i < 26; i ++)
		{
			if(letter == alphabet[i - ('z' - 'Z')] || letter == alphabet[i])
			{
				times[i] ++;
				if(times[i] < maximum) 
				{
					times[i] = maximum;
				}
			}
		}
	}

	for(i = maximum ; i >= 0 ; i ++)
	{
		for(count = 0 ; count < 26 ; count ++)
		{
			if(times[count] == i)
			{
				printf("\n%c: %d", alphabet[i], count);
			}
		}
	} 
}
