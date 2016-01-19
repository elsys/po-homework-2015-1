#include <stdio.h>

int main()
{
    int n,v,p,b,d;
    scanf("%d %d %d",&n, &v, &p);

    if(p>=0 && p<=7)
    {
        d=0x01;
        d=d<<p;
        b=d^0xff;
        if(v==0)
        {
            n=n&b;
            printf("%d",n);
        }
        if(v==1)
        {
            n=n|d;
            printf("%d",n);
        }
    }
    return 0;
}
