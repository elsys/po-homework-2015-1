#include <stdio.h>

void main()
{
	int x[4][4],a,b,y;
	for(a=0;a<4;a++)
	{
		printf("Vavedi red %d:\n",a+1);
		for(b=0;b<4;b++)
			scanf("%d",&x[a][b]);
	}
	for(a=1;a<4;a++)
		for(b=0;b<a;b++)
		{
			y=x[a][b];
			x[a][b]=x[b][a];
			x[b][a]=y;
		}
	for(a=0;a<4;a++)
	{
		printf("\n");
		for(b=0;b<4;b++)
			printf("%2d ",x[a][b]);
	}
	printf("\n");
}