#include <stdio.h>

int main()
{
	int n,i,b,a,c;
	printf("Enter number:"); scanf("%d",&n);
	b=2*n-1;

	printf("\nEMPTY TRIANGLE\n\n");
	for(i=1;i<=b;i+=2)
	{
		for(c=0; c<(b-i)/2; c++) printf(" ");
		printf("*"); 
		if(i==1) printf("\n");

		for(a=2; a<=i; a++)
			{
				if(i==b) printf("*");
				else if(a==i) printf("*\n");
				else printf(" ");
			}
	}


	printf("\n\nFILLED TRIANGLE\n\n");
	for(i=1;i<=b;i+=2)
	{
		for(c=0; c<(b-i)/2; c++) printf(" ");
		for(a=0; a<i; a++) printf("*");
		printf("\n");
	}

return 0;
}
