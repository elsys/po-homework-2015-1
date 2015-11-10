#include <stdio.h>

void next_generation(int*, int*, int);

int main()
{
	int currentGen[20], nextGen[20], n, i, c, ok;

	scanf("%d", &n);
	if(n<0 || n>20)
	{
		printf("Input error. The length of the cell chain must be a number between 0 and 20.\n");
		return 0;	
	}

	for(i=0; i<n; i++)
		{
			scanf("%d", &currentGen[i]);
			if(currentGen[i]!=0 && currentGen[i]!=1)
				{
					printf("Input error. Numbers in the cell chain must be only 1 or 0.\n");
					return 0;
				}
		}

	if(currentGen[0]!=0 || currentGen[n-1]!=0)
		{
			printf("Input error. Cell chain must start and end with 0.\n");
			return 0;
		}

	for(i=0; i<n; i++)
	{
		if(currentGen[i] == 0) printf(".");
		else if(currentGen[i] == 1) printf("*");
	}

	nextGen[0]=0;
	nextGen[n-1]=0;
	for(i=0; i<999 && ok!=n; i++)
	{
		next_generation(currentGen, nextGen, n);
		for(c=0, ok=0; c<n; c++)
		{
			if(currentGen[c] == 0)
				ok++;
		}
	}
	printf("\n");

	return 0;
}

void next_generation(int *current, int *next, int length)
{
	int i;
	printf("\n");
	
	for(i=0; i<length; i++)
	{
		if(i==0) 
			{
				printf(".");
			}
		else if(i==length-1)
			{
				printf(".");
			}
		
		else if(current[i-1] != current[i+1]) 
			{
				next[i]=1;
				printf("*");
			}
		else
			{
				next[i]=0;
				printf(".");
			}
	}

	for(i=0; i<length; i++)
	{
		current[i] = next[i];
	}
}
