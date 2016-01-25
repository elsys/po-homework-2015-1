#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, c, i, t;
	scanf("%d", &n);

	c=0;
	while(c<=n)
	{
		c++;
		t=n-c;
		i=0;
		while(i<n*2)
		{
			i++;
			if(i>=t && n*2-1-i>t)
				{
			printf("*");
				}
				else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
