#include <stdio.h>

#define MAX_GENERATION_LENGHT 20
#define MAX_GENERATION 1000

void next_generation(int*,int*,int);

int main()
{
	int n;
	int counter;

	int curr_generation[MAX_GENERATION_LENGHT];
	int next[MAX_GENERATION_LENGHT];

	scanf("%d",&n);

	for(counter = 0; counter < n; counter++)
	{
		scanf("%d",(curr_generation+counter));
	}

	for(counter = 0; counter < MAX_GENERATION; counter++)
	{
		int i = 0;
		int isAlive = 0;
		next_generation(curr_generation,next,n);
		for (i = 0; i < n; i++)
		{
			if(curr_generation[i])
			{
				printf("*");
				isAlive = 1;
			}
			else
			{
				printf(".");
			}
			curr_generation[i] = next[i];
		}
		if(!isAlive)
		{
			break;
		}

		printf("\n");

	}

	return 0;
}

void next_generation(int *curr,int *next,int lenght)
{
	int counter;
	next[0] = 0;
	next[lenght-1] = 0;
	for(counter = 1; counter < lenght-1; counter++)
	{
		if(curr[counter - 1] == curr[counter + 1])
		{
			next[counter] = 0;
		}
		else
		{
			next[counter] = 1;
		}
	}
}