#include <stdio.h>

int main()
{
	int swap, i=0, j=0, a[4][4];
	for(;i<4;i++)
	{
		scanf("%d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
	}

    for(i=0;i<4;i++)
    {
        for(j=0;j<4 && i!=j;j++)
        {
            swap = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = swap;
        }
    }

	for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++) printf("%d", a[i][j]);
        printf("\n");
    }
	return 0;
}
