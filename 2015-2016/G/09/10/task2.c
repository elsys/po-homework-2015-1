#include <stdio.h>
 
int main()
{
    int n,v,p,n2,b1;
    scanf("%d",&n);
    scanf("%d",&v);
    scanf("%d",&p);
   
    b1 = n & (1 << p);
    if(b1 > 0 || b1 < 0)
    {
        b1 = 1;
    }
 
    if(b1 == v)
    {
        n2 = n ^ (0<<p);
    }
    else
    {
        n2 = n ^ (1<<p);
    }  
    printf("%d",n2);
    return 0;
}
