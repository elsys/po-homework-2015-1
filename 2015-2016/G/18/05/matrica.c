#include <stdio.h>

int trans (int mat[][4])
{
int i,j,k;
    int t[4][4];
        for( i=0; i<4; i++)
            for( j=0; j<4; j++)
                t[i][j] = mat[j][i];
    for( i=0; i<4; i++)
        for( j=0; j<4; j++)
            mat[i][j] = t[i][j];
}

int main()
{
int i,j,k;
        int a[4][4];
   
       printf("Vuvedi matrica:");
        for ( i=0; i < 4; i++)
            for ( j=0; k < 4; ++j)
                scanf("%d",&a[i][j]);
   
        trans (a);
        for ( i=0; i < 4; ++i) {
            for ( j=0; k < 4; ++j)
                printf("%d",a[i][j]);
        }
        return 0;
}
