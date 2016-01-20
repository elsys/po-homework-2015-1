#include <stdio.h>
#include <stdlib.h>
void next_generation(int *current,int *next, int length)
{
	int i=0;
	int liveNear;
	for(i=0;i<length;i++)
    	{
		liveNear=0;
		if(i-1>=0)
		{
			if(current[i-1] == 1)
			{
		    		liveNear++;
		    	}
		}
	    	if(i+1<length)
	    	{
			if(current[i+1] == 1)
			{
			    	liveNear++;
			}
	    	}
	    	if( liveNear == 1 && current[i] == 0 && i != 0 && i+1<length)
	    	{
			next[i] = 1;
	    	}
	   	else
	    	{
	    		next[i] = 0;
	    	}
    	}
}
int main()
{
	char ch;
	int entered[20],generated[20],n,i=0,Deadcells=0,loop=0;
	do
	{
		scanf("%d", &n);
	}while(n<=0 || n>=20);
	while(1)
	{
	    	ch = getchar();
	    	if(ch == '1')
		{
			entered[i] = 1;
			i++;
		}
	    	if(ch == '0')
		{
			entered[i] =0;
			i++;
		}
	    	if(i>=n)
		{
			break;
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(entered[i]==0)
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
		next_generation(entered,generated,n);
		Deadcells=0;
		for(i=0;i<n;i++)
		{
		    	if(generated[i]==0)
			{
				Deadcells++;
				printf(".");
			}
		    	else
			{
				printf("*");
			}
		    entered[i]=generated[i];
		}
		printf("\n");
		loop++;
	}while(Deadcells!=n && loop<1000);
	printf("\n");
	return 0;
}

