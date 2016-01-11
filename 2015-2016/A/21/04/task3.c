#include <stdio.h>
#define Alpha 26

void create_letter_distribution_diagram();
void output(int i, int count, int letters, int maximum, char alphabet[Alpha], int times[200]);

int main()
{

	void create_letter_distribution_diagram();

	return 0;
}

void create_letter_distribution_diagram()
{

	int letters = 26, count = 0, times[200], i, maximum = 0;
	char alphabet[Alpha], letter;
	
	for(letter = 'a' , count = 0; letter <= 'z'; letter ++, count ++)
	{	
		times[count] = 0;
		alphabet[count] = letter;
	}
	
	while(1) 
	{
		scanf("%c", &letter);
		if(letter != 'b')
		{
			for(i = 0; i < letters; i ++)
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
		else
		{
			break;
		}
		
	}
	
	output(i, count, letters, maximum, alphabet, times);	
}

void output(int i, int count, int letters, int maximum, char alphabet[Alpha], int times[200])
{

	for(i = maximum ; i >= 0 ; i ++)
	{
		for(count = 0 ; count < letters ; count ++)
		{
			if(times[count] == i)
			{
				printf("%c: %d\n", alphabet[i], count);
			}
		}
	} 
}
