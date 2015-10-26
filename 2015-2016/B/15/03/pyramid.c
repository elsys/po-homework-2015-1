#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i,j,k,f=1;
printf("vuvedi n= \n");scanf("%d",&n);

for(i=0;i<n;i++)
{

    for(k=n-2;k>=i;k--)
    {
        printf("  ");
    }
    for(j=1;j<=f;j++)
    {
        printf("* ");
    }
    f=f+2;
    printf("\n");
}
getch();
}
