#include<stdio.h>

int rotr(int *a,int *b,int *c)

{
	int help;

	help = *a;
	*a = *c;
	*c = *b;
	*b = help;
}

int main()

{
	int n,i,a,b,c;

	i=0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&n);

	while(i<n)
	{
		rotr(&a,&b,&c);
		i++;
	}

	printf("\n%d", a);
	printf(" %d", b);
	printf(" %d\n", c);
	return 0;
}

