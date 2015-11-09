#include <stdio.h>

int exact_square(int);

int main()
{
	int num, res; 
	scanf("%d",&num);
	res=exact_square(num);
	printf("%d\n",res);
	return 0;
}

int exact_square(num)
{
	int i, sqr;
	i=num;
	while(i!=0)
	{
		sqr=i*i;
		if (sqr==num)
		{
			return 1;
		}
		i--;
	}
	return 0; 
}