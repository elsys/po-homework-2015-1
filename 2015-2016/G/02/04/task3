#include <stdio.h>
int main()
{
    int earr[200];
    int i,j,n,m, h,s= 1;
    scanf("%d",&n);
    if (n % 2 == 0 || n > 200)
    {return -1;}
    for(i = 0; i<= n - 1;i ++)
    {
    scanf("%d" ,&m);
    if(m < 1 || m > 100)
    {return -1;}
    else
    {
        earr[i] = m;
    }
    }
    for(i = 0; i < n; i ++)
    {
     h = earr[i];
    for(j = 0; j < n; j++)
    {
     if(h== earr[j] && i != j)
    {s = 0;break;}
       }
       if(s != 0)
       {
        printf("%d", h);
        break;
       }
       else
        {
        s = 1;
        }
    }
    return 0;
}
