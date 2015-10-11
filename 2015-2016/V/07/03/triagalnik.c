#include <stdio.h>

void main()
{
	int n,i,j=1;
	printf("\nKolko visok da e triagalnika?");
	scanf("%d",&n);
	while(n>0)
	{
		printf("\n");
		for(i=1;i<n;i++)
			printf(" ");
		for(i=0;i<j;i++)
			printf("#");
		for(i=1;i<n;i++)
			printf(" ");
		j+=2;
		n--;
	}
	printf("\n");
}