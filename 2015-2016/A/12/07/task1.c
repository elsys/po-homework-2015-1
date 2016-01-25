#include<stdio.h>

int main()
{
    int b, a;
    scanf("%d %d",&a,&b);
    if(a>=0 && a<=7)
    {
        if(b>=0 && b<=200)
        {
            b=(b>>a)&1;
            printf("%d",b);
        }
    }
    return 0;
}
