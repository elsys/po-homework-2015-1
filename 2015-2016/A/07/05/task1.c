#include <stdio.h>

void rotr(int * a, int * b, int * c);

int main()
{
	int a, b, c, n, i = 0;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	while(i < n)
    {
		rotr(&a, &b, &c);
		i++;
	}
	printf("%d %d %d", a, b, c);

	return 0;
}

void rotr(int * a, int * b, int * c)
{
	int change = *a;
	*a = *c;
	*c = *b;
	*b = change;
}
