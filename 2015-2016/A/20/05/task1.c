#include <stdio.h>

void rotr();

int main()
{
	int x, y, z, rotation, n;
	int *a, *b, *c;

	a = &x;
	b = &y; 
	c = &z;


	scanf("%d", &x); 
	scanf("%d", &y); 
	scanf("%d", &z);

	scanf("%d", &rotation);

	for(n=0; n<rotation; n++)
	{
		rotr(&a, &b, &c);
	}

	printf("%d %d %d\n", *a, *b, *c);
	return 0;
}

void rotr(int *a, int *b, int *c)
{
	int temp;
	temp = *c;
	*c = *b;	
	*b = *a;	
	*a = temp;	
}
