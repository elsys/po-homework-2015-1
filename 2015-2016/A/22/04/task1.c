#include <stdio.h>

int is_prime(int);

int main()
{
	int num, res;
	scanf("%d",&num);
	res=is_prime(num);
	printf("%d\n",res);
	return 0;
}

int is_prime(num)
{
	int i, res;
	if(num==1)
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