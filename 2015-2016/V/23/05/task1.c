#include <stdio.h>
int main()
{
    int r, c, i, j;
    scanf("%d", &r);
    c = r;

    int a[r][c], trans[r][c];

    for(i=0; i<r; ++i)
	    for(j=0; j<c; ++j)
	        scanf("%d",&a[i][j]);

    for(i=0; i<r; ++i)
    	for(j=0; j<c; ++j)
       		trans[j][i]=a[i][j];

    for(i=0; i<c; ++i)
	    for(j=0; j<r; ++j)
	    {
	        printf("%d ",trans[i][j]);
	        if(j==r-1)
	            printf("\n");
	 	}
    return 0;
}