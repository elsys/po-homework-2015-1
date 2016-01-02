#include<stdio.h>
#include<stdlib.h>
int is_prime(int number)
{
	int i,digit;
	i=2;
	digit=1;
	if(number==0 || number==1 || number==2)
	{
		return 0;
	}
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
int main()
{
	int number,digit;
	if(scanf("%d",&number)==0)
	{
		printf("-1");
		return 0;
	}
	
	digit=is_prime(number);
	printf("%d",digit);
	return 0;
}
