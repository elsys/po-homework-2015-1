#include<stdio.h>
#include<string.h>

void next_generation(int *current , int *next , int lenght);

int main()
{
	int current[21],next[21],lenght,counter,counter2;
		scanf("%d",&lenght);
	next[0]=0;
	next[lenght-1]=0;
	for (counter=0;counter<lenght;counter++)
		scanf("%d", &current[counter]);
	for (counter2=0; counter2 < lenght ; counter2++)
	{
		if(current[counter2]==1)printf("*");
		if(current[counter2]==0)printf(".");
	}
	printf("\n");
	next_generation(current, next, lenght);

	return 0;
}


void next_generation(int *current , int *next , int lenght)
{
	int limiter,counter,counter2,counter3,counter4,breaker;
	for (limiter=0;limiter<1000;limiter++)
	{
		for (counter = 0 ; counter < lenght-2;counter++)
			{
			if(current[counter] == current[counter+2])next[counter+1]=0;
			else next[counter+1]=1;
			}
				for (counter2=0; counter2 <lenght ;counter2++)
					{
						if(next[counter2]==1)printf("*");
						if(next[counter2]==0)printf(".");
					}
			for (counter3=0; counter3 <lenght ; counter3++)
			{
				current[counter3] = next[counter3];
			}
		for (counter4=0,breaker=0;counter4<lenght;counter4++)
				if(next[counter4]==0)breaker++;

		if(breaker==lenght)break;
		printf("\n");
	}
}
