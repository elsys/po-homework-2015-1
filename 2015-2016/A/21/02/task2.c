#include <stdio.h>
#include <string.h>

void output(char string[150]);

int main()
{
	
	char string[150];
	
	while(1)
	{
		scanf("%s", string); 

		if(string[0] == 'S' && string[1] == 'T' && string[2] == 'O' && string[3] == 'P')
		{
			return 0;
		}

		output(string);	
	}
}

void output(char string[150])
{
	int count ;

	for(count = 0 ; count < strlen(string) ; count ++)
	{
		if(string[count] >= 'a' && string[count] <= 'z')
			{
				string[count] -= 32;
			}
			printf("%c", string[count]);
	}
}
