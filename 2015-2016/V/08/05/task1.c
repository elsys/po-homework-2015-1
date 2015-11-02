#include <stdio.h>

 int main()
{
	
	int i;
	int tabel[4][4];
	int k;
	for (i = 0; i < 4; ++i)
	{
	
		for (k = 0; k < 4; ++k)
		{
			scanf("%d",&tabel[i][k]);
		}
	}
	for (i = 0; i < 4; ++i)
	{
		puts("");
		for (k = 0; k < 4; ++k)
		{
			printf("%d\t",tabel[i][k]);
		}
	}


	int l;

	for(l=0;l<4;l=2+l)
	for(i=1,k=1;i<4;i++,k++)
	{
		int temp=tabel[l][i];
		tabel[l][i]=tabel[k][l];
		tabel[k][l]=temp;
	}

	int temp=tabel[1][3];
	tabel[1][3]=tabel[3][1];
	tabel[3][1]=temp;
	

	puts("");



	for (i = 0; i < 4; ++i)
	{
		puts("");
		for (k = 0; k < 4; ++k)
		{
			printf("%d\t",tabel[i][k]);
		}
	}






	return 0;
}