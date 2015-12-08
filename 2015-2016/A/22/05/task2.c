#include <stdio.h>

void next_generation (int *, int *, int);

int main ()
{
	int current[20], next[20], n;
	int i=0;
	int s=1, t=0;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&current[i]);
	}
	i=0;
	for(i=0; i<n; i++)
	{
		if(current[i]==0)
		{
			printf(".");
		}
		else 
		{
			printf("*");
		}
	}
	printf("\n");
	do
	{
		s=0;
		next_generation(&current[0], &next[0], n);
		for(i=0; i<n; i++)
		{
			current[i]=next[i];
		}
		for(i=0; i<n; i++)
		{
			if (current[i]==1)
			{
				s=1;
			} 
		}
		for(i=0; i<n; i++)
		{
			if(current[i]==0)
			{
				printf(".");
			}
			else 
			{
				printf("*");
			}
		}
		printf("\n");
		t++;
	}while (t<999 && s==1);
	return 0;
}

void next_generation (int *current, int *next, int lenght)
{
	int i=0;
	while(lenght>i)
	{
		if(current[i]==1)
		{
			if (current[i-1]==0 && current[i+1]==0)
			{
				next[i]=0;
			}
			else
			{
				next[i]=1;
			}
		}
		else
		{
			next[i]=0;
		}
		i++;
	}
}