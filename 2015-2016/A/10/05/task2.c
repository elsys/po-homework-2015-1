#include<stdio.h>
#include<stdlib.h>
void next_generation(int *current, int *next, int length)
{
	int i;
	next[0]=0;
	next[length-1]=0;
	for(i=1;i<length-2;i++)
	{
		if(current[i-1]==current[i+1])
		{
			next[i]=0;
		}
		if(current[i-1]!=current[i+1])
		{
			next[i]=1;
		}
	}
	for(i=0;i<length-1;i++)
	{
		current[i]=next[i];
	}
}
int main()
{
	int current[20],next[20],n,i=0,death_count=0,loop=0;
	do
	{
		printf("n=");scanf("%d",&n);
	}while(n<=0 || n>=20);
	getchar();
	for(i=0;i<n;i++)
	{
		if(scanf("%d",&current[i])==0)
		{
			return 0;
		}
		if(current[i]!=0 && current[i]!=1)
		{
			return 0;
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
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
		next_generation(current,next,n);
		death_count=0;
		for(i=0;i<n;i++)
		{
			if(current[i]==0)
			{
				death_count++;
				printf(".");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
		loop++;
	}while(death_count!=n && loop<1000);
	printf("\n");
	return 0;
}
