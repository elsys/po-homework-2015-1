#include<stdio.h>
int main()
{
    int n,s,row,b;
    scanf("%d",&row);
    for(n=1;n<=row;n++)
    {
        for(s=1;s<=row-n;s++)
        {
            printf("  ");
        }
        for(b=0;b!=2*n-1;b++)
        {
            printf("* ");
            
        }
        printf("\n");
    }
    return 0;
}
