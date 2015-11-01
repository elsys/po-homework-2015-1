#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number,digit;
	scanf("%d",&number);
	digit=exact_square(number);
	printf("%d",digit);
}
int exact_square(int number)
{
	int digit,i;
	digit=0;
	for(i=1;i<=number;i++)
	{
		if(i*i==number)
		{
		digit=1;
		break;
		}
	}
	return digit;
}
