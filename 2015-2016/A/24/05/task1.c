#include <stdio.h>
 

void rotr( int*,  int*, int*);


int main()
{
	int i, n;
	int a, b, c;


	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &n);
	


	for (i = 0; i < n; i++)
	{
		rotr(&a, &b, &c);
	}

	
	printf("%d %d %d", a, b, c);
}


void rotr(int *pa, int *pb, int *pc)
{
	int temp1 = 0;
	temp1 = *pa;
	*pa = *pc;
	*pc = *pb;
	*pb = temp1;
	

}