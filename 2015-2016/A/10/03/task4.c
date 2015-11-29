#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,i,n,y;
	printf("n=");scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(y=0, x=n-i;y<=2*n;y++)
		{
			if(y>=x && y<=n+i)
			{
			printf("0");
			}
			else
			{
			printf("");
			}
		}
	printf("\n");
	}
}
