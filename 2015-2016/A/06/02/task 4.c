#include <stdio.h>
#define l 10
int main()
{
    int n;
    int i=0;
    int d[l]={0};
    scanf("%d", &n);

    if (n==0)
        d[0]++;

    while (n>0)
    {
        d[n%10]++;
        n /= 10;
    }
    while(i<10)
    {
        i=i+1;
        if (d[i] !=0)
        {
            d[i]>1? printf("%d>%d times\n",i,d[i]):printf("%d>%d time\n", i, 1);
        }
    }
    return 0;
}
