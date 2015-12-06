#include <stdio.h>



int main()
{
	int count, i, a, b;

	scanf("%d", &b);

	for(count=0; count<=b; ++count)
	{
		for(i=0; i< b - count; ++i)
		{
			printf(" ");
		}
		for(a=0; a<2*count-1; ++a)
		{
			printf("*");
		}
		printf("\n");
	}




return 0;
}