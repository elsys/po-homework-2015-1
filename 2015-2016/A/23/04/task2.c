#include <stdio.h>
#include <stdlib.h>
int exact_square(int n)
{
	int c=0,i;
	for(i=1; i<=n ;i++)
	{
		if(i*i==n)
		{
			c=1;
			break;
		}
	}
	if (n<=0)
	{
		printf("You can't input a negative or neutral number.It will show you 0.\n");
	}
	return c;
}

int main()
{
	int n,c;
	scanf("%d",&n);
	c=exact_square(n);
	printf("%d\n",c);
	return 0;
}
