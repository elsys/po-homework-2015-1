#include<stdio.h>

int Magicheski(int a[3][3]);
void main()
{
	int a[3][3] = { {2, 6, 8},
  			{9, 6, 1},
  			{5, 4, 7}
				};
	if(Magicheski(a) == 1)
		printf("Chislata obrazuvat magicheski kvadrat \n");	
	else
		printf("Chislata ne obrazuvat magicheski kvadrat \n");
}
int Magicheski(int a[3][3])
{
	int i;
	int j;
	for(i = 0; i<3;i++)
	{
		for(j = 0; j<3;j++)
		{
			printf("%d ", a[i][j]);
		}
 		printf("\n");
	}
	int sum = 0, tmpSum = 0;
	for(i = 0; i<3; i++)
	{
		for(j = 0; j<3;j++)
		{
			sum += a[i][j];
		}
		if(tmpSum == 0)
		{
			tmpSum = sum;
		}
		if(tmpSum != sum)
		{
			return 0;
		}
		sum = 0;		
	}
	for(i = 0; i<3; i++)
	{
		for(j = 0; j<3;j++)
		{
			sum += a[j][i];
		}
		if(tmpSum != sum)
		{
			return 0;
		}
		sum = 0;		
	}
	return 1;
}
