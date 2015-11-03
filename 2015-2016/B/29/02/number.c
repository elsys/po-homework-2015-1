#include <stdio.h>

int main()
	{
		int a[10];
		int b,d;
		int c=0;
		for(c;c<10;c++)
			a[c]=0;
		printf("chisllo :");scanf("%d",&b);
		do
			{
				d=b%10;
				a[d]=a[d]+1;
				b=b/10;
	
			}while(b>0);
		c=0;
		do
			{
				printf("\n%d q ima %d puti",c,a[c]);
				c++;
			}while(c<10);
		return 0;
	}

