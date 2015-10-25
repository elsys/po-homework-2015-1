#include <stdio.h>

int main()
{
    int n,b=1,i=1;
    printf("\nn=");scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        for(b=1;b<=i;b++)
            printf("%2d",b);
        printf("\n");
    }
}
