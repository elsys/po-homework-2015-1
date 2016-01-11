#include <stdio.h>

void rotr(int*, int*, int*);
int main()

{
	int a, b, c, n, count;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &n);

	for(count = 0; count < n; count++)
	{
		rotr(&a, &b, &c);
	}

	printf("%d ", a);
	printf("%d ", b);
	printf("%d ", c);
	return 0;
}

void rotr(int *a, int *b, int *c)
{
	int help;
	help = *c;
	*c = *b;
	*b = *a;
	*a = help;
}
