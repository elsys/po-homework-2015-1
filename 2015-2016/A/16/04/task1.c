#include <stdio.h>
#include <stdlib.h>
int is_prime(int x);

int main(void)
{
    int x, z;
    if(scanf("%d", &x) != 1)
    {
        printf("-1");
        return 0;
    }
    z = is_prime(x);
    if(z==1)
    {
        printf("1");
    }
    if(z==0)
    {
        printf("0");
    }
    return 0;
}
int is_prime(int x)
{
    int y, c;
    if(x==1||x==-1)
    {
        printf("\n1");
        return 0;
    }
    y = 2;
    if(x<0)
    {
        y = -2;
    }
    c = 0;
    if(x<0)
        {
            while(y>x)
            {
                c = x % y;
                if(c==0)
                {
                    return 0;
                }
                y--;
            }
        }
    if(x>0)
        {
            while(y<x)
            {
                c = x % y;
                if(c==0)
                {
                    return 0;
                }
                y++;
            }
        }
    return 1;
}
