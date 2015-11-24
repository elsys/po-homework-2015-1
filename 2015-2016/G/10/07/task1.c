#include <stdio.h>

void rotr(int *,int *,int *);

int main()
{
	int a,b,c,i,n;

	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	scanf("%d",&n);

	for (i = 0; i < n; i++)
	{
		rotr(&a,&b,&c);
	}

	printf("%d %d %d", a, b, c);

	return 0;
}

void rotr(int *a,int *b,int *c)
{
	int rotate;
	rotate = *a;
	*a = *c;
	*c = *b;
	*b = rotate;
}
