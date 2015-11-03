#include <stdio.h>

int main()
{
	int n,c,s,k,p;



	scanf("%d", &n);
	s = 2*n - 1;
	
	for(c=n;c>-1;c--)
	{
		for(k=0;k<c+1;k++)
			printf(" ");
		for(p = s - (2*c);p>0;p--)	
			printf("*");
		printf("\n");	
	}
}
