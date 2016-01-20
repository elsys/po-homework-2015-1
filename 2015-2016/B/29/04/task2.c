#include<stdio.h>

int exact_square(int);

int main()
{
	int number,breaker;
	scanf("%d",&number);
	if(number==1||number==0)
		printf("1");
	else
	{
		breaker = exact_square(number);
		printf("%d",breaker);
	}
	return 0;
}
int exact_square(int num)
{
	int counter,avr,br=0;
	for(counter = 0 ; counter < num ; counter++)
	{
		avr = counter * counter;
		if(avr==num)
		{
			br=1;
			break;
		}
	}
	return br;
}
