#include <stdio.h>

void rotr(int *a, int *b, int *c, int number)
{

	int swap, counter;
	for (counter = 1; counter <= number; counter++)
        {
			swap = *c;
			*c = *b;
			*b = *a;
			*a = swap;
        }
}

int main ()
{
    int a, b, c, n;
    scanf("%d  %d  %d  %d", &a, &b, &c, &n);
    rotr(&a, &b, &c, n);
    printf(" %d  %d  %d ", a, b, c);
    return 0;
}
