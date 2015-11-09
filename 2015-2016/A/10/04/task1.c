#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number,digit;
	scanf("%d",&number);
	digit=is_prime(number);
	printf("%d",digit);
	return 0;
}
int is_prime(int number)
{
	int i,digit;
	i=2;
	digit=1;
	while(i<number)
	{
		if(number%i==0)
		{
		digit=0;
		break;
		}
		i++;
	}
	return digit;
}
