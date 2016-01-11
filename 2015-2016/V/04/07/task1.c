#include<stdio.h>

void rotr(int *a, int *b, int *c);

int main()
{
	
	int a, b, c, n;
	int count = 0;

	scanf("%d %d %d %d",&a,&b,&c,&n);
	
	while(n>count)
	{
		rotr(&a, &b, &c);
		count++;
	}

	printf("%d %d %d\n", a, b, c);
	return 0;
}


void rotr(int *a, int *b, int *c)
{
	int temp;

	temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
}
