#include <stdio.h>

int main()
{
    int n,v,p,i,k[100],multiplier=1;
    scanf("%d",&n);
    scanf("%d",&v);
    scanf("%d",&p);

    for(i = 6; n != 0; i--)
        {
                k[i-1] = n % 2;
                n = n / 2;
        }
    i=6;
    k[i-p-1] = v;
    n=0;
    for(i = 6; i != 0; i--)
    {
        n = n + k[i-1]*multiplier;
        multiplier = 2*multiplier;
    }
    printf("%d",n);
        return 0;
}
