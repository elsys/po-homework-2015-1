#include <stdio.h>

void rotr(int *a,int *b, int *c, int *n)
{
	int counter, reverse;
	for( counter = 1; counter < *n + 1; counter++)
	{
		reverse = *a;
		*a = *c;
		*c = *b;
		*b = reverse;
	}	
	printf("\n%d %d %d\n", *a, *b, *c);
}

int main()
{
	int a, b, c, n;
	

	scanf("%d %d %d %d", &a, &b, &c, &n);
	rotr(&a, &b, &c, &n);	
	return 0;
}
