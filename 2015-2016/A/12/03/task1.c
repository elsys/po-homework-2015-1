#include<stdio.h>
int main()
{
    int rows,s,n,i;
    i=0;
    printf("Enter rows: ");
    scanf("%d",&rows);
    if(rows<0)
        printf("Enter a bigger number for a triangle. ;)");
    for(n=1;n<=rows;n++)
    {
        for(s=1;s<=rows-n;s++)
        {
            printf("  ");
        }
        while(i!=2*n-1)
        {
            printf(". ");
            i++;

        }
        i=0;
        printf("\n");
        if(rows<2)
            printf("Enter a bigger number for a prettier triangle. ;)");
    }
    return 0;
}
