#include<stdio.h>

int exact_square(int num);

int main()
{
	int num;
	scanf("%d", &num);

	printf("%d\n", exact_square(num));
	return 0;
}

int exact_square(int num)
{
	int div=1;
	while(num>div)
	{
		if(num%div==0)
		{
			if(div*div==num)
				return 1;
		}
		div++;
	}
	return 0;
}
