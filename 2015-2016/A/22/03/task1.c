#include <stdio.h>

int main()
{
	int n=0, i=0, p=0;
	printf("Insert n:\n");
	scanf("%d",&n);
	while (i!=n)
	{
		i++;
		p=n-i;
		while(p!=0)
		{
			printf(" ");
			p--;
		}
		p=2*i-1;
		while (p!=0)
		{
			printf("*");
			p--;
		}
		printf("\n");
	}
	return 0;
}