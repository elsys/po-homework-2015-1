#include <stdio.h>

int main()
{
	int a,c,i,j,m[10][10],t[10][10];
	printf("Broi redove:");
	scanf("%d",&a);
	printf("\nBroi koloni:");
	scanf("%d",&c);
	printf("\nChisla ot matricata:\n");
	for(i=0;i<a;i++)
		for(j=0;j<c;j++)
			scanf("%d",&m[i][j]);
	for(i=0;i<a;i++)
		for(j=0;j<c;j++)
			t[j][i]=m[i][j];
	printf("\nTransportiranata matrica:\n");
	for(i=0;i<c;i++)
    {
		for(j=0;j<a;j++)
			printf("%d\t",t[i][j]);
		printf("\n");
	}
	return 0;
}
