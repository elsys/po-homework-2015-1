#include <stdio.h>
int main()
{
    int i,n, space, k=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(space=1;space<=n-i;++space)
        {
           printf("  ");
        }
        while(k!=2*i-1)
        {
           printf("* ");
           ++k;
        }
        k=0;
        printf("\n");
    }
    return 0;
}
