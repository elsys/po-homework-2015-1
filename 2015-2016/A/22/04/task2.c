#include <stdio.h>

int exact_square(int);

int main()
{
	int num; 
	scanf("%d",&num);
	printf("%d\n", exact_square(num));
	return 0;
}

int exact_square(int num)
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