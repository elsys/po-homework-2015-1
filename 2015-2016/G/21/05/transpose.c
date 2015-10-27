#include <stdio.h>

int main()
{
    int matrix[4][4];
    int i;    
    int transposeMatrix[4][4];
    for(i=0;i<4;i++)
    {
        int j;
        for(j=0;j<4;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        int j;
        for(j=0;j<4;j++)
        {
           transposeMatrix[j][i]=matrix[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        int j;
        for(j=0;j<4;j++)
        {
            printf("%d ",transposeMatrix[i][j]);
        }
        printf("\n");
    }
}
