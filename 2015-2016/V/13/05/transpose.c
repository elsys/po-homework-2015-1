#include <stdio.h>

int main()
{
	int swap, i=0, j=0, a[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	//for(;i<4 && j<4;i++,j++) scanf("%d",&a[i][j]); Vuvejdaneto ne raboti zatova otgore ima stoinosti na masiva

    for(i=0;i<4;i++)
    {
        for(j=0;j<4,i!=j;j++)
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
