#include <stdio.h>

void rotr(int *a, int *b, int *c);

int main()
{
	int first, second, third;

	scanf("%d %d %d", &first, &second, &third);
	rotr(&first, &second, &third);

	return 0;
}

void rotr(int *a, int *b, int *c)
{
	int replacer, n;
	
	scanf("%d", &n);

	while(n > 0)
	{
		replacer = *b;
		n --;

		*b = *a;
		*a = *c;
		*c = replacer;
	}
	
	printf("%d %d %d", *a, *b, *c);

}
