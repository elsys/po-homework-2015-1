#include<stdio.h>
int main()
{
    int rows,s,n,i;
    i=0;
    scanf("%d",&rows);
    for(n=1;n<=rows;n++)
    {
        for(s=1;s<=rows-n;s++)
        {
            printf("  ");
        }
        while(i!=2*n-1)
        {
            printf("* ");
            i++;

        }
        i=0;
        printf("\n");
    }
    return 0;
}
