#include <stdio.h>

void rotr (int*, int*, int*);

int main()
{
	int a, b, c;
	int n;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&n);
	for ( ; n>0; n--)
	{
		rotr (&a, &b, &c);
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}

void rotr (int *a, int *b, int *c)
{
	int d, e, f;
	d=*a;
	e=*b;
	f=*c;
	*a=f;
	*b=d;
	*c=e;
}