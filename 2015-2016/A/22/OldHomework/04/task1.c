#include <stdio.h>

int is_prime(int);

int main()
{
	int num;
	scanf("%d",&num);
	printf("%d\n", is_prime(num));
	return 0;
}

int is_prime(int num)
{
	int i, res;
	if(num<=1)
	{
		return -1;
	}
	i=num;
	i--;
	while(i!=1)
	{
		res=num%i;
		if (res==0)
		{
			return 0;
		}
		i--;
	}
	return 1;
}