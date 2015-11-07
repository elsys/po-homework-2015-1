#include<stdio.h>
int main()
{
	int masiv[4][4];
	int masiv2[4][4];
	int i,k;
	printf("vavedi elementite na masiva");
	for (i=0;i<4;i++)
	{
		for (k=0;k<4;k++)
		{
			scanf("%d", &masiv[i][k]);
		}
	}
	for (k=0;k<4;k++)
	{
		for (i=0;i<4;i++)
		{
			masiv2[k][i]=masiv[i][k];
		}
	}
		for (k=0;k<4;k++)
	{
		for (i=0;i<4;i++)
		{
			printf("%d", masiv2[k][i]);
		}
	}
	return 0;
}
