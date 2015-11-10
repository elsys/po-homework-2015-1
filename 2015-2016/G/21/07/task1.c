#include <stdio.h>

void rotr(int *,int *,int *);

int main()
{
	int a,b,c,counter;
	int times;

	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	scanf("%d",&times);

	for (counter = 0; counter < times; counter++)
	{
		rotr(&a,&b,&c);
	}

	printf("%d %d %d", a, b, c);

	return 0;
}

void rotr(int *a,int *b,int *c)
{
	int helper;
	helper = *a;
	*a = *c;
	*c = *b;
	*b = helper;
}