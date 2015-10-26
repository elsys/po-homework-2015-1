#include<stdio.h>

int main()
	{
		int a=1,i,n,b=1,c,z;
		char s='#';
		printf("turi tuka N -->");scanf("%d",&n);
		z=n;
		for(i=0;i<n;i++)
		{
		printf("\n");
			for(c=0;c<z-1;c++)
			printf(" ");

			do
			{
				printf("%c",s);
				a--;
			}while(a>=1);
			z--;
		a=b+2;
		b=b+2;
		}
		printf("\n");
		return 0;
	}
