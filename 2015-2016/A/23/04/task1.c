#include <stdio.h>
#include <stdlib.h>
int is_prime(int n)
{
	int i;
	i=2;
	while(i<n)
	{
		if (n%i==0)
		{
			return 0;
		}
		i++;
	}
	if (n<=0)
	{
	    	return -1;
	}
	if (n==1 || n==0)
	{
		return 0;
	}
	return 1;
}

int main()
{
	int n,c;
	if(scanf("%d",&n)==0)
	{
		printf("-1");
		return -1;
	}
	c=is_prime(n);
	printf("%d",c);
	return 0;
}
