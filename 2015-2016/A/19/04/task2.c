#include <stdio.h>

int exact_square(int);

int main()
{
	int num;

	scanf("%d", &num);
	printf("%d", exact_square(num));
	
	return 0;
}

int exact_square(int num)
{
	int i;
	for(i=0; i<=num; i++)
    	{
		if (num==i*i)
		{
			return 1;
		}
	}
	
	return 0;
}
