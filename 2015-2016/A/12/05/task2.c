#include <stdio.h>
#include <string.h>

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
		else if(current[i-1]!=current[i+1])
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
		current[i]=next[i];
	}
}

int main()
{
	int length, i, current[20], next[20], dead;
	scanf("%d", &length);
	/* checks */
	if(length<0 || length>20)
	{
		printf("Error! Length has to be between 0 and 20.\n");
		return 0;
	}
	for(i=0; i<length; i++)
    {
        scanf("%d", &current[i]);
        if(current[i]!=0 && current[i]!=1)
        {
            printf("Error! Numbers have to be only 1 or 0.\n");
            return 0;
        }
    }
	if(current[0]!=0 || current[length-1]!=0)
    {
        printf("Error! It has to start and end with 0.\n");
        return 0;
    }
    /* zhu li do the thing */
	for(i=0; i<length; i++)
	{
		if(current[i]==0)
        {
            printf(".");
        }
		else if(current[i]==1)
        {
            printf("*");
        }
	}
	next[0]=0;
	next[length-1]=0;
	for(i=0; i<1000; i++)
	{
		dead=1;
        next_generation(current, next, length);
        for(i=0; i<length; i++)
        {
            if(current[i]!=0)
            {
                dead=0;
            }
        }
        if(dead==1)
        {
            break;
        }
	}
	printf("\n");
	return 0;
}
