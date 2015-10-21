#include <stdio.h>
void main(void)
{
    int array[10]={0};
    int n,i;
    scanf("%d",&n);
    if (n<0)
    {
        n*=-1;
    }
    while(n>0)
    {
        int d=n%10;
        array[d]++;
        n/=10;
    }
    for(i=0;i<10;i++)
    {
        if(array[i]!=0)
        {
            printf("%d -> %d puti\n",i,array[i]);
        }
    }
}
