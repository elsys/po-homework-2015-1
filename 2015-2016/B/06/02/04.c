#include <stdio.h>

int main()
{
    int i,b,a,m[99];
    for(a=0;a<99;a++)
    m[a]=0;
    scanf("%d", &a);
    while(a>0)
    {
    b=a%10;
    for(i=0;i<10;i++)
    {
    if(b==i) m[i]++;
    }
    a=a/10;
    }
    for(b=0;b<10;b++)
    printf("\n\n %d - %d", b, m[b]);
    return 0;
}
