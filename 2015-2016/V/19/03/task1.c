#include <stdio.h>

int main()
{
    int i,m,n,k=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        for(m=1; m<=n-i; ++m)
            printf(" ");
        while(k!=2*i-1)
        {
            printf("*");
            ++k;
        }
        printf("\n");
        k=0;
    }
    return 0;
}
