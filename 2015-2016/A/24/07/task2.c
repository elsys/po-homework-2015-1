#include <stdio.h>

int main()
{
	int n,v,p;

	scanf("%d",&n);

	do
	{
		scanf("%d",&v);
	}while(v < 0 || v > 7);

	do
	{
		scanf("%d",&p);
	}while(p < 0 || p > 7);


	printf("%d\n", n ^ (1 << p ));

	return 0;
}