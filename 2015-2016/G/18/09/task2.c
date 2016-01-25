#include <stdio.h>

int main()
{
	int n, v, p, helper;

	scanf("%d", &n);
	
	while(v > 1 || v < 0)
	{
		scanf("%d", &v);
	}

	while(p > 7 || p < 1)
	{
		scanf("%d", &p);
	}

	if(v == 1)
	{
		helper = (n | (1 << p));
	}
	else
	{
		helper = (n & (~(1 << p)));	
	}		

	printf("%d", helper);


	return 0;
}
