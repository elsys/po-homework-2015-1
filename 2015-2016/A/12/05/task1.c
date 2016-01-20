#include <stdio.h>

void rotr(int *a, int *b, int *c)
{
	int swap;
	swap = *a;
	*a = *c;
	*c = *b;
	*b = swap;
}

int main()
{
	int a, b, c, rotate;
	scanf("%d %d %d %d", &a, &b, &c, &rotate);
	while(rotate!=0)
	{
		rotr(&a, &b, &c);
		rotate--;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
