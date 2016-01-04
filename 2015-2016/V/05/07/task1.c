#include <stdio.h>

void rotr(int *a, int *b, int *c);
int main()
{
	int a, b, c, n, k = 0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&n);
	while(k < n)
	{
		k++;
		rotr(&a, &b, &c);	
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}

void rotr(int *a, int *b, int *c)
{
	int n = *c;
	*c = *b;
	*b = *a;
	*a = n;
}
