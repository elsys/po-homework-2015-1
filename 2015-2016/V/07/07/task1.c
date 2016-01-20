#include <stdio.h>

void rotr(int *a, int *b, int *c);

int main()
{
	int a,b,c,n,i;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		rotr(&a, &b, &c);
	printf("%d %d %d",a,b,c);
	return 0;
}

void rotr(int *a, int *b, int *c)
{
	int x;
	x=*c;
	*c=*b;
	*b=*a;
	*a=x;
}