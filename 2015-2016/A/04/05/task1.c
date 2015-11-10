#include <stdio.h>
#include <stdlib.h>

void rotr(int *a , int *b , int *c)
{
    int swap;
	swap = *a;
	*a = *c;
	*c = *b;
	*b = swap;
}

int main()
{
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    while(n!=0)
	{
		rotr(&a, &b, &c);
		n--;
	}
    printf("%d %d %d\n", a, b, c);
    return 0;
}

