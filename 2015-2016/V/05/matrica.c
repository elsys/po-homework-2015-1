#include<stdio.h>
int main()
{
	float a[4][4];
        float b[4][4];
	int i,j;
	for (i=0;i<4;i++)
		for (j=0;j<4;j++)
		{
			printf("Vavedi a%d,%d=",i+1,j+1);
			scanf("%f",&a[i][j]);
			b[j][i]=a[i][j];
		}
		printf("Vavedenata matrica e: \n");
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
				printf("%f",a[i][j]);
			printf("\n");
		}
		printf("Transportiranata matrica e: \n");
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
				printf("%f",b[i][j]);
			printf("\n");
		}
return 0;
}
