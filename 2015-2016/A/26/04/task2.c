#include <stdio.h>

int exact_square(int num)
{
	int c, temp=0;
	
	for(c=1; c<=num; c++)
	{
		if(num==c*c)
		{
			temp=1;
			break;
		}
	}
	
	if(temp==1)
	{	
	printf("1");
	return 1;
	}
	else
	{	
	printf("0");
	return num;
	}
}

int main()
{
	int n;
	scanf("%d", &n);	

	exact_square(n);
	
	return 0;
}
