#include <stdio.h>

int main()
{

	int matrix1[4][4];
	int matrix2[4][4];
	int m=4,i,a;
	for(i=0;i<m;i++)
	{
		for(a=0;a<m;a++)
		{
			scanf("%d",&matrix1 [i] [a]);	
		
		}


	}


	for(i=0;i<m;i++)
	{
		for(a=0;a<m;a++)
		{	
			matrix2 [i] [a]=matrix1 [a] [i];
		}


	}
	for(i=0;i<m;i++)
	{
		for(a=0;a<m;a++)
		{
			printf("%d ",matrix2 [i] [a]);	
		}
		printf("\n");
	}
return 0;
}
