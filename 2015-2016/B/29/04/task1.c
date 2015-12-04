#include<stdio.h>

int is_prime(int num);

int main()
{
	int number,breaker;
	scanf("%d",&number);
	breaker = is_prime(number);
	if(breaker == 2)printf("1");
	if(breaker > 2)printf("0");
	if(breaker < 2)printf("-1");
	return 0;
}

int is_prime(int num)
{
	int i,avr=0,br=0;
	for (i=1 ; i<=num ; i++)
	{	
		avr=num % i;
		if (avr == 0)br++;
	}
	return br;
}
