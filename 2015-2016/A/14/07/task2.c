#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,v,p;
    scanf("%d",&n);
    scanf("%d",&v);
    scanf("%d",&p);


    if(v==0)
    {
        n&=~(1<<p);
    }

    if(v==1)
    {
        n|=1<<p;
    }

    printf("%d",n);

    return 0;
}
