#include <stdio.h>

int main()
{
	int n=0, i=0, m=0;
	printf(":\n");
	scanf("%d",&n);
	while (i!=n)
	{
		i++;
		m=n-i;
		while(m!=0)
		{
			printf(" ");
			m--;
		}
		m=2*i-1;
		while (m!=0)
		{
			printf(".");
			m--;
		}
		printf("\n");
	}
	return 0;
}
