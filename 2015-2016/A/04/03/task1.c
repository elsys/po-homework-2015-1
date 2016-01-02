#include <stdio.h>
int main()
{
    int i,q,n,z=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(q=1;q<=n-i;++q)
        {
           printf("  ");
        }
        while(z!=2*i-1)
        {
           printf("* ");
           z++;
        }
        z=0;
        printf("\n");
    }
    return 0;
}