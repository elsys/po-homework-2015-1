#include <stdio.h>

int mag(int (*m)[100][100],int a);

void main()
{
	int a,i,j,b,x[100][100];
	printf("\nVavedi dalzina na stranata na kvadrata:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("\nRed %d:\n",i);
		for(j=1;j<=a;j++)
		{
			printf("    Chislo %d: ",j);
			scanf("%d",&x[i-1][j-1]);
		}
	}
	b=mag(&x,a);
	if(b==1)
		printf("\nTozi kvadrat e magicheski!\n");
	else
		printf("\nNikakva magia, opitai pak.\n");
}

int mag(int (*m)[100][100],int a)
{
	int sum=0,z,k=1,i;
	for(i=0;i<a;i++)
		sum+=(*m)[0][i];
	while(k<a)
	{
		for(i=0,z=0;i<a;i++)
			z+=(*m)[k][i];
		k++;
		if(z!=sum)
			return 0;
	}
	k=0;
	while(k<a)
	{
		for(i=0,z=0;i<a;i++)
			z+=(*m)[i][k];
		k++;
		if(z!=sum)
			return 0;
	}
	for(k=0,i=0,z=0;i<a;i++,k++)
		z+=(*m)[i][k];
	if(z!=sum)
		return 0;
	for(k=a-1,i=0,z=0;i<a;i++,k--)
		z+=(*m)[i][k];
	if(z!=sum)
		return 0;
	return 1;
}